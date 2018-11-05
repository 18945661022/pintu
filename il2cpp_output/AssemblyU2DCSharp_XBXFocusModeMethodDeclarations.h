#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// XBXFocusMode
struct XBXFocusMode_t74;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t95;

#include "codegen/il2cpp-codegen.h"

// System.Void XBXFocusMode::.ctor()
extern "C" void XBXFocusMode__ctor_m137 (XBXFocusMode_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String XBXFocusMode::getPath()
extern "C" String_t* XBXFocusMode_getPath_m138 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXFocusMode::notifyPhotos(System.String)
extern "C" void XBXFocusMode_notifyPhotos_m139 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXFocusMode::getUnityTargetShare(System.String)
extern "C" void XBXFocusMode_getUnityTargetShare_m140 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String XBXFocusMode::getMessageFromUnity3d(System.Int32,System.String)
extern "C" String_t* XBXFocusMode_getMessageFromUnity3d_m141 (Object_t * __this /* static, unused */, int32_t ___orderId, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXFocusMode::unityInitialize()
extern "C" void XBXFocusMode_unityInitialize_m142 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXFocusMode::backIOS()
extern "C" void XBXFocusMode_backIOS_m143 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXFocusMode::Awake()
extern "C" void XBXFocusMode_Awake_m144 (XBXFocusMode_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXFocusMode::Start()
extern "C" void XBXFocusMode_Start_m145 (XBXFocusMode_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXFocusMode::TrigerFocus()
extern "C" void XBXFocusMode_TrigerFocus_m146 (XBXFocusMode_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXFocusMode::Update()
extern "C" void XBXFocusMode_Update_m147 (XBXFocusMode_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXFocusMode::showShareButton()
extern "C" void XBXFocusMode_showShareButton_m148 (XBXFocusMode_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXFocusMode::OnGUI()
extern "C" void XBXFocusMode_OnGUI_m149 (XBXFocusMode_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator XBXFocusMode::ScreenShot()
extern "C" Object_t * XBXFocusMode_ScreenShot_m150 (XBXFocusMode_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator XBXFocusMode::ScreenShare()
extern "C" Object_t * XBXFocusMode_ScreenShare_m151 (XBXFocusMode_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator XBXFocusMode::sendOrderToAndroid(System.Int32,System.String)
extern "C" Object_t * XBXFocusMode_sendOrderToAndroid_m152 (XBXFocusMode_t74 * __this, int32_t ___orderId, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXFocusMode::Bind()
extern "C" void XBXFocusMode_Bind_m153 (XBXFocusMode_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXFocusMode::UnBind()
extern "C" void XBXFocusMode_UnBind_m154 (XBXFocusMode_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXFocusMode::CloseCameraDevice()
extern "C" void XBXFocusMode_CloseCameraDevice_m155 (XBXFocusMode_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXFocusMode::OpenCameraDevice(System.String)
extern "C" void XBXFocusMode_OpenCameraDevice_m156 (XBXFocusMode_t74 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXFocusMode::EnableContinuousAutoFocus()
extern "C" void XBXFocusMode_EnableContinuousAutoFocus_m157 (XBXFocusMode_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXFocusMode::OnPause(System.Boolean)
extern "C" void XBXFocusMode_OnPause_m158 (XBXFocusMode_t74 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXFocusMode::started()
extern "C" void XBXFocusMode_started_m159 (XBXFocusMode_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXFocusMode::stopTracker()
extern "C" void XBXFocusMode_stopTracker_m160 (XBXFocusMode_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXFocusMode::startTracker()
extern "C" void XBXFocusMode_startTracker_m161 (XBXFocusMode_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
