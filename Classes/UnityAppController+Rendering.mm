#include "UnityAppController+Rendering.h"
#include "UnityAppController+ViewHandling.h"

#include "iPhone_Profiler.h"
#include "Unity/UnityMetalSupport.h"
#include "Unity/DisplayManager.h"
#include "Unity/EAGLContextHelper.h"

#include "UI/UnityView.h"

#include <dlfcn.h>

// On some devices presenting render buffer may sporadically take long time to complete even with very simple scenes.
// In these cases display link still fires at steady frame rate but input processing becomes stuttering.
// As a workaround this switch disables display link during rendering a frame.
// If you are running a GPU bound scene and experience frame drop you may want to disable this switch.

// NB: if you intend yo use xcode GPU report (FPS category in Debug Session) you want to set ENABLE_DISPATCH to 0
// otherwise xcode gets confused and think CPU time was 0

#define ENABLE_DISPLAY_LINK_PAUSING 1
#define ENABLE_DISPATCH 1

extern bool	_glesContextCreated;
extern bool	_unityAppReady;
extern bool	_skipPresent;
extern bool	_didResignActive;

static int _renderingAPI = 0;
static int SelectRenderingAPIImpl();


@implementation UnityAppController (Rendering)

- (void)createDisplayLink
{
	int animationFrameInterval = (int)(60.0f / (float)UnityGetTargetFPS());
	assert(animationFrameInterval >= 1);

	_displayLink = [CADisplayLink displayLinkWithTarget:self selector:@selector(repaintDisplayLink)];
	[_displayLink setFrameInterval:animationFrameInterval];
	[_displayLink addToRunLoop:[NSRunLoop currentRunLoop] forMode:NSRunLoopCommonModes];
}

- (void)repaintDisplayLink
{
#if ENABLE_DISPLAY_LINK_PAUSING || ENABLE_DISPATCH
    _displayLink.paused = YES;
#endif

#if ENABLE_DISPATCH
    dispatch_async(dispatch_get_main_queue(), ^{
#endif
        if(!_didResignActive)
            [self repaint];
#if ENABLE_DISPLAY_LINK_PAUSING || ENABLE_DISPATCH
        _displayLink.paused = NO;
#endif
#if ENABLE_DISPATCH
    });
#endif
}

- (void)repaint
{
	[self checkOrientationRequest];
	[_unityView recreateGLESSurfaceIfNeeded];

	if (!UnityIsPaused())
		UnityRepaint();
}

- (void)callbackGfxInited
{
	InitRendering();
	_glesContextCreated = true;

	[self shouldAttachRenderDelegate];
	[_renderDelegate mainDisplayInited:_mainDisplay.surface];
	[_unityView recreateGLESSurface];

	_mainDisplay.surface->allowScreenshot = 1;
}

- (void)callbackPresent:(const UnityFrameStats*)frameStats
{
	if(_skipPresent || _didResignActive)
		return;

	Profiler_FrameEnd();
	[[DisplayManager Instance] present];
	Profiler_FrameUpdate(frameStats);
}

- (void)callbackFramerateChange:(int)targetFPS
{
	if(targetFPS <= 0)
		targetFPS = 60;

	int animationFrameInterval = (60.0f / targetFPS);
	if (animationFrameInterval < 1)
		animationFrameInterval = 1;

	[_displayLink setFrameInterval:animationFrameInterval];
}

- (void)selectRenderingAPI
{
	NSAssert(_renderingAPI == 0, @"[UnityAppController selectRenderingApi] called twice");
	_renderingAPI = SelectRenderingAPIImpl();
}

- (UnityRenderingAPI)renderingAPI
{
	NSAssert(_renderingAPI != 0, @"[UnityAppController renderingAPI] called before [UnityAppController selectRenderingApi]");
	return (UnityRenderingAPI)_renderingAPI;
}

@end


extern "C" void GfxInited_UnityCallback()
{
	[GetAppController() callbackGfxInited];
}
extern "C" void PresentContext_UnityCallback(struct UnityFrameStats const* unityFrameStats)
{
	[GetAppController() callbackPresent:unityFrameStats];
}
extern "C" void FramerateChange_UnityCallback(int targetFPS)
{
	[GetAppController() callbackFramerateChange:targetFPS];
}

extern "C" void UnityInitMainScreenRenderingCallback(int* screenWidth, int* screenHeight)
{
	extern void QueryTargetResolution(int* targetW, int* targetH);

	int resW=0, resH=0;
	QueryTargetResolution(&resW, &resH);
	UnityRequestRenderingResolution(resW, resH);

	DisplayConnection* display = GetAppController().mainDisplay;
	[display initRendering];

	*screenWidth	= resW;
	*screenHeight	= resH;

	if(UnitySelectedRenderingAPI() != apiMetal)
		[EAGLContext setCurrentContext:UnityGetDataContextEAGL()];
}


static NSBundle*		_MetalBundle	= nil;
static id<MTLDevice>	_MetalDevice	= nil;
static EAGLContext*		_GlesContext	= nil;

static bool IsMetalSupported(int /*api*/)
{
	_MetalBundle = [NSBundle bundleWithPath:@"/System/Library/Frameworks/Metal.framework"];
	if(_MetalBundle)
	{
		[_MetalBundle load];
		_MetalDevice = ((MTLCreateSystemDefaultDeviceFunc)::dlsym(dlopen(0, RTLD_LOCAL|RTLD_LAZY), "MTLCreateSystemDefaultDevice"))();
		if(_MetalDevice)
			return true;
	}

	[_MetalBundle unload];
	return false;
}

static bool IsGlesSupported(int api)
{
	_GlesContext = [[EAGLContext alloc] initWithAPI:(EAGLRenderingAPI)api];
	return _GlesContext != nil;
}

typedef bool(*CheckSupportedFunc)(int);


static int SelectRenderingAPIImpl()
{
	int api = 0;

	// we want to do fallback Metal->Gles3->Gles2
	// metal support is available only if built with ios8 sdk and running on ios8
#if UNITY_CAN_USE_METAL
	const bool	canSupportMetal = _ios80orNewer;
#else
	const bool	canSupportMetal = false;
#endif

	const int			unityApiEnum[]		= {apiMetal, apiOpenGLES3, apiOpenGLES2};
	CheckSupportedFunc	checkSupport[]		= {&IsMetalSupported, &IsGlesSupported, &IsGlesSupported};
	const int			checkSupportArg[]	= {0, kEAGLRenderingAPIOpenGLES3, kEAGLRenderingAPIOpenGLES2};
	const bool			iosSupport[]		= {canSupportMetal, _ios70orNewer, true};

	for(int i = 0 ; i < 3 && !api ; ++i)
	{
		if(iosSupport[i] && UnityIsRenderingAPISupported(unityApiEnum[i]) && checkSupport[i](checkSupportArg[i]))
			api = unityApiEnum[i];
	}
	return api;
}

extern "C" NSBundle*			UnityGetMetalBundle()		{ return _MetalBundle; }
extern "C" MTLDeviceRef 		UnityGetMetalDevice()		{ return _MetalDevice; }
extern "C" MTLCommandQueueRef	UnityGetMetalCommandQueue()	{ return  ((UnityDisplaySurfaceMTL*)GetMainDisplaySurface())->commandQueue; }

extern "C" EAGLContext*			UnityGetDataContextEAGL()	{ return _GlesContext; }
extern "C" int					UnitySelectedRenderingAPI()	{ return _renderingAPI; }


static void UnityRepaintImpl(bool forced)
{
	@autoreleasepool
	{
		Profiler_FrameStart();
		UnityInputProcess();

		[[DisplayManager Instance] prepareFrameRendering];

		if(forced)	UnityForcedPlayerLoop();
		else		UnityPlayerLoop();

		[[DisplayManager Instance] teardownRendering];
	}
}

extern "C" void UnityForcedRepaint()
{
	UnityRepaintImpl(1);
}
extern "C" void UnityRepaint()
{
	UnityRepaintImpl(0);
}


