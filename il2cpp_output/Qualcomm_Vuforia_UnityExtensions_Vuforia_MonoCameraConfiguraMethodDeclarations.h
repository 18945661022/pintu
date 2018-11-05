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

// Vuforia.MonoCameraConfiguration
struct MonoCameraConfiguration_t448;
// UnityEngine.Camera
struct Camera_t53;
// System.Action
struct Action_t111;
// Vuforia.WebCamAbstractBehaviour
struct WebCamAbstractBehaviour_t64;
// UnityEngine.Transform
struct Transform_t51;
// UnityEngine.GameObject
struct GameObject_t83;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera_0.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vid_0.h"
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void Vuforia.MonoCameraConfiguration::.ctor(UnityEngine.Camera,Vuforia.CameraDevice/CameraDeviceMode,Vuforia.VuforiaRenderer/VideoBackgroundReflection,System.Action)
extern "C" void MonoCameraConfiguration__ctor_m2189 (MonoCameraConfiguration_t448 * __this, Camera_t53 * ___leftCamera, int32_t ___cameraDeviceMode, int32_t ___mirrorVideoBackground, Action_t111 * ___onVideoBackgroundConfigChanged, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::Init()
extern "C" void MonoCameraConfiguration_Init_m2190 (MonoCameraConfiguration_t448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::ConfigureVideoBackground()
extern "C" void MonoCameraConfiguration_ConfigureVideoBackground_m2191 (MonoCameraConfiguration_t448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::UpdatePlayModeParameters(Vuforia.WebCamAbstractBehaviour,System.Single)
extern "C" void MonoCameraConfiguration_UpdatePlayModeParameters_m2192 (MonoCameraConfiguration_t448 * __this, WebCamAbstractBehaviour_t64 * ___webCamBehaviour, float ___cameraOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::UpdateProjection(UnityEngine.ScreenOrientation)
extern "C" void MonoCameraConfiguration_UpdateProjection_m2193 (MonoCameraConfiguration_t448 * __this, int32_t ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Vuforia.MonoCameraConfiguration::CheckForSurfaceChanges()
extern "C" int32_t MonoCameraConfiguration_CheckForSurfaceChanges_m2194 (MonoCameraConfiguration_t448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::UpdateStereoDepth(UnityEngine.Transform)
extern "C" void MonoCameraConfiguration_UpdateStereoDepth_m2195 (MonoCameraConfiguration_t448 * __this, Transform_t51 * ___trackingReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MonoCameraConfiguration::IsStereo()
extern "C" bool MonoCameraConfiguration_IsStereo_m2196 (MonoCameraConfiguration_t448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::ResetBackgroundPlane(System.Boolean)
extern "C" void MonoCameraConfiguration_ResetBackgroundPlane_m2197 (MonoCameraConfiguration_t448 * __this, bool ___disable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.MonoCameraConfiguration::get_VideoBackgroundMirrored()
extern "C" int32_t MonoCameraConfiguration_get_VideoBackgroundMirrored_m2198 (MonoCameraConfiguration_t448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C" void MonoCameraConfiguration_ApplyCorrectedProjectionMatrix_m2199 (MonoCameraConfiguration_t448 * __this, Matrix4x4_t52  ___projectionMatrix, bool ___primaryCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::SetSkewFrustum(System.Boolean)
extern "C" void MonoCameraConfiguration_SetSkewFrustum_m2200 (MonoCameraConfiguration_t448 * __this, bool ___setSkewing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.MonoCameraConfiguration::get_ViewportRect()
extern "C" Rect_t54  MonoCameraConfiguration_get_ViewportRect_m2201 (MonoCameraConfiguration_t448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::EnableObjectRenderer(UnityEngine.GameObject,System.Boolean)
extern "C" void MonoCameraConfiguration_EnableObjectRenderer_m2202 (MonoCameraConfiguration_t448 * __this, GameObject_t83 * ___go, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::ApplyMatrix(UnityEngine.Camera,UnityEngine.Matrix4x4)
extern "C" void MonoCameraConfiguration_ApplyMatrix_m2203 (MonoCameraConfiguration_t448 * __this, Camera_t53 * ___cam, Matrix4x4_t52  ___inputMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::ResolveVideoBackgroundBehaviours()
extern "C" void MonoCameraConfiguration_ResolveVideoBackgroundBehaviours_m2204 (MonoCameraConfiguration_t448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MonoCameraConfiguration::CameraParameterChanged()
extern "C" bool MonoCameraConfiguration_CameraParameterChanged_m2205 (MonoCameraConfiguration_t448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.MonoCameraConfiguration::get_EyewearUserCalibrationProfileId()
extern "C" int32_t MonoCameraConfiguration_get_EyewearUserCalibrationProfileId_m2206 (MonoCameraConfiguration_t448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::set_EyewearUserCalibrationProfileId(System.Int32)
extern "C" void MonoCameraConfiguration_set_EyewearUserCalibrationProfileId_m2207 (MonoCameraConfiguration_t448 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
