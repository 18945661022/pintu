#ifndef _TRAMPOLINE_UNITYAPPCONTROLLER_H_
#define _TRAMPOLINE_UNITYAPPCONTROLLER_H_


#import <UIKit/UIKit.h>
#import <QuartzCore/CADisplayLink.h>

#include "PluginBase/RenderPluginDelegate.h"
#import "WXApi.h"
#import "MainViewController.h"
#import "WXShareViewController.h"
#import "LoadViewController.h"
#import "PhotoViewController.h"

@class UnityView;
@class DisplayConnection;

@interface UnityAppController : NSObject<UIApplicationDelegate,WXApiDelegate>
{
	UnityView*			_unityView;
	CADisplayLink*		_displayLink;
	UIWindow*			_window;
	UIView*				_rootView;
	UIViewController*	_rootController;         //unity专属的viewcontroller

	DisplayConnection*	_mainDisplay;


	id<RenderPluginDelegate>	_renderDelegate;
    
    //第一次启动
    bool   _firstStarted            ;
        //几个其他view
    MainViewController* _mvc;
    WXShareViewController* _wxsvc;
    PhotoViewController* _pvc;
}

//是否第一次启动
-(bool) isFirstStarted;

//
-(void) setWXSVCPath:(NSString*)path;
-(void) setWXSCVCImage:(UIImage*)image;

//
-(void) bringMVFirst;
-(void) bringWXSVFirst;
-(void) bringROOTVFirst;
-(void) bringPVFirst;

// override it to add your render plugin delegate
- (void)shouldAttachRenderDelegate;

// this one is called at the very end of didFinishLaunchingWithOptions:
// after views have been created but before initing engine itself
- (void)preStartUnity;
// this one is called at first applicationDidBecomeActive
// NB: it will be started with delay 0, so it will run on next run loop iteration
// this is done to make sure that activity indicator animation starts before blocking loading
- (void)startUnity:(LoadViewController*)lvc;
//(UIApplication*)application;

// in general this method just works, so override it only if you have very special reorientation logic
// do not forget to call [UnityView willRotate] and [UnityView didRotate] inside
- (void)onForcedOrientation:(ScreenOrientation)orient;

- (void)checkOrientationRequest;

// this is a part of UIApplicationDelegate protocol starting with ios5
// setter will be generated empty
@property (retain, nonatomic) UIWindow*	window;

@property (readonly, copy, nonatomic) UnityView*			unityView;
@property (readonly, copy, nonatomic) CADisplayLink*		unityDisplayLink;

@property (readonly, copy, nonatomic) UIView*				rootView;
@property (readonly, copy, nonatomic) UIViewController*		rootViewController;
@property (readonly, copy, nonatomic) DisplayConnection*	mainDisplay;

@property (nonatomic, retain) id renderDelegate;

@end

// Put this into mm file with your subclass implementation
// pass subclass name to define
//在子类的最前面使用下面的宏，子类的名字替换ClassName.

#define IMPL_APP_CONTROLLER_SUBCLASS(ClassName)	\
@interface ClassName(OverrideAppDelegate)		\
{												\
}												\
+(void)load;									\
@end											\
@implementation ClassName(OverrideAppDelegate)	\
+(void)load										\
{												\
	extern const char* AppControllerClassName;	\
	AppControllerClassName = #ClassName;		\
}												\
@end											\

inline UnityAppController*	GetAppController()
{
	return (UnityAppController*)[UIApplication sharedApplication].delegate;
}

void AppController_RenderPluginMethod(SEL method);
void AppController_RenderPluginMethodWithArg(SEL method, id arg);

// these are simple wrappers about ios api, added for convenience
void AppController_SendNotification(NSString* name);
void AppController_SendNotificationWithArg(NSString* name, id arg);

void AppController_SendMainViewControllerNotification(NSString* name);


#endif // _TRAMPOLINE_UNITYAPPCONTROLLER_H_
