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

// Vuforia.CameraDeviceImpl
struct CameraDeviceImpl_t500;
// Vuforia.WebCamImpl
struct WebCamImpl_t503;
// Vuforia.Image
struct Image_t507;
// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>
struct Dictionary_2_t501;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_VideoM.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera_0.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_FocusM.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// Vuforia.WebCamImpl Vuforia.CameraDeviceImpl::get_WebCam()
extern "C" WebCamImpl_t503 * CameraDeviceImpl_get_WebCam_m2546 (CameraDeviceImpl_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::get_CameraReady()
extern "C" bool CameraDeviceImpl_get_CameraReady_m2547 (CameraDeviceImpl_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::Init(Vuforia.CameraDevice/CameraDirection)
extern "C" bool CameraDeviceImpl_Init_m2548 (CameraDeviceImpl_t500 * __this, int32_t ___cameraDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::Deinit()
extern "C" bool CameraDeviceImpl_Deinit_m2549 (CameraDeviceImpl_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::Start()
extern "C" bool CameraDeviceImpl_Start_m2550 (CameraDeviceImpl_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::Stop()
extern "C" bool CameraDeviceImpl_Stop_m2551 (CameraDeviceImpl_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/VideoModeData Vuforia.CameraDeviceImpl::GetVideoMode()
extern "C" VideoModeData_t461  CameraDeviceImpl_GetVideoMode_m2552 (CameraDeviceImpl_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/VideoModeData Vuforia.CameraDeviceImpl::GetVideoMode(Vuforia.CameraDevice/CameraDeviceMode)
extern "C" VideoModeData_t461  CameraDeviceImpl_GetVideoMode_m2553 (CameraDeviceImpl_t500 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::SelectVideoMode(Vuforia.CameraDevice/CameraDeviceMode)
extern "C" bool CameraDeviceImpl_SelectVideoMode_m2554 (CameraDeviceImpl_t500 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::GetSelectedVideoMode(Vuforia.CameraDevice/CameraDeviceMode&)
extern "C" bool CameraDeviceImpl_GetSelectedVideoMode_m2555 (CameraDeviceImpl_t500 * __this, int32_t* ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::SetFlashTorchMode(System.Boolean)
extern "C" bool CameraDeviceImpl_SetFlashTorchMode_m2556 (CameraDeviceImpl_t500 * __this, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::SetFocusMode(Vuforia.CameraDevice/FocusMode)
extern "C" bool CameraDeviceImpl_SetFocusMode_m2557 (CameraDeviceImpl_t500 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::SetFrameFormat(Vuforia.Image/PIXEL_FORMAT,System.Boolean)
extern "C" bool CameraDeviceImpl_SetFrameFormat_m2558 (CameraDeviceImpl_t500 * __this, int32_t ___format, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Image Vuforia.CameraDeviceImpl::GetCameraImage(Vuforia.Image/PIXEL_FORMAT)
extern "C" Image_t507 * CameraDeviceImpl_GetCameraImage_m2559 (CameraDeviceImpl_t500 * __this, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/CameraDirection Vuforia.CameraDeviceImpl::GetCameraDirection()
extern "C" int32_t CameraDeviceImpl_GetCameraDirection_m2560 (CameraDeviceImpl_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.CameraDeviceImpl::GetCameraFieldOfViewRads()
extern "C" Vector2_t141  CameraDeviceImpl_GetCameraFieldOfViewRads_m2561 (CameraDeviceImpl_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image> Vuforia.CameraDeviceImpl::GetAllImages()
extern "C" Dictionary_2_t501 * CameraDeviceImpl_GetAllImages_m2562 (CameraDeviceImpl_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::IsDirty()
extern "C" bool CameraDeviceImpl_IsDirty_m2563 (CameraDeviceImpl_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraDeviceImpl::ResetDirtyFlag()
extern "C" void CameraDeviceImpl_ResetDirtyFlag_m2564 (CameraDeviceImpl_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraDeviceImpl::.ctor()
extern "C" void CameraDeviceImpl__ctor_m2565 (CameraDeviceImpl_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraDeviceImpl::ForceFrameFormat(Vuforia.Image/PIXEL_FORMAT,System.Boolean)
extern "C" void CameraDeviceImpl_ForceFrameFormat_m2566 (CameraDeviceImpl_t500 * __this, int32_t ___format, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.CameraDeviceImpl::InitCameraDevice(System.Int32)
extern "C" int32_t CameraDeviceImpl_InitCameraDevice_m2567 (CameraDeviceImpl_t500 * __this, int32_t ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.CameraDeviceImpl::DeinitCameraDevice()
extern "C" int32_t CameraDeviceImpl_DeinitCameraDevice_m2568 (CameraDeviceImpl_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.CameraDeviceImpl::StartCameraDevice()
extern "C" int32_t CameraDeviceImpl_StartCameraDevice_m2569 (CameraDeviceImpl_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.CameraDeviceImpl::StopCameraDevice()
extern "C" int32_t CameraDeviceImpl_StopCameraDevice_m2570 (CameraDeviceImpl_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraDeviceImpl::.cctor()
extern "C" void CameraDeviceImpl__cctor_m2571 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
