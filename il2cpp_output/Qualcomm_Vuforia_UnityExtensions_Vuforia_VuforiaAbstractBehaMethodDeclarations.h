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

// Vuforia.VuforiaAbstractBehaviour
struct VuforiaAbstractBehaviour_t62;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t16;
// UnityEngine.Transform
struct Transform_t51;
// UnityEngine.Camera
struct Camera_t53;
// System.String
struct String_t;
// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct Action_1_t97;
// System.Action
struct Action_t111;
// System.Action`1<System.Boolean>
struct Action_1_t135;
// Vuforia.ITrackerEventHandler
struct ITrackerEventHandler_t681;
// Vuforia.IVideoBackgroundEventHandler
struct IVideoBackgroundEventHandler_t682;
// Vuforia.IUnityPlayer
struct IUnityPlayer_t470;
// UnityEngine.GameObject
struct GameObject_t83;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaAbstractBeha_0.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vid_0.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera_0.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera.h"

// System.Boolean Vuforia.VuforiaAbstractBehaviour::get_SkewFrustum()
extern "C" bool VuforiaAbstractBehaviour_get_SkewFrustum_m3904 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaAbstractBehaviour::get_CameraOffset()
extern "C" float VuforiaAbstractBehaviour_get_CameraOffset_m3905 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::set_CameraOffset(System.Single)
extern "C" void VuforiaAbstractBehaviour_set_CameraOffset_m3906 (VuforiaAbstractBehaviour_t62 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaAbstractBehaviour/WorldCenterMode Vuforia.VuforiaAbstractBehaviour::get_WorldCenterModeSetting()
extern "C" int32_t VuforiaAbstractBehaviour_get_WorldCenterModeSetting_m3907 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TrackableBehaviour Vuforia.VuforiaAbstractBehaviour::get_WorldCenter()
extern "C" TrackableBehaviour_t16 * VuforiaAbstractBehaviour_get_WorldCenter_m3908 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaAbstractBehaviour::get_CentralAnchorPoint()
extern "C" Transform_t51 * VuforiaAbstractBehaviour_get_CentralAnchorPoint_m288 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaAbstractBehaviour::get_ParentAnchorPoint()
extern "C" Transform_t51 * VuforiaAbstractBehaviour_get_ParentAnchorPoint_m3909 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaAbstractBehaviour::get_VideoBackGroundMirrored()
extern "C" int32_t VuforiaAbstractBehaviour_get_VideoBackGroundMirrored_m3910 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaAbstractBehaviour::get_CameraDeviceMode()
extern "C" int32_t VuforiaAbstractBehaviour_get_CameraDeviceMode_m3911 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::get_HasStarted()
extern "C" bool VuforiaAbstractBehaviour_get_HasStarted_m3912 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::get_IsStereoRendering()
extern "C" bool VuforiaAbstractBehaviour_get_IsStereoRendering_m3913 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera Vuforia.VuforiaAbstractBehaviour::get_PrimaryCamera()
extern "C" Camera_t53 * VuforiaAbstractBehaviour_get_PrimaryCamera_m285 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::set_PrimaryCamera(UnityEngine.Camera)
extern "C" void VuforiaAbstractBehaviour_set_PrimaryCamera_m3914 (VuforiaAbstractBehaviour_t62 * __this, Camera_t53 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera Vuforia.VuforiaAbstractBehaviour::get_SecondaryCamera()
extern "C" Camera_t53 * VuforiaAbstractBehaviour_get_SecondaryCamera_m286 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::set_SecondaryCamera(UnityEngine.Camera)
extern "C" void VuforiaAbstractBehaviour_set_SecondaryCamera_m3915 (VuforiaAbstractBehaviour_t62 * __this, Camera_t53 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaAbstractBehaviour::get_AppLicenseKey()
extern "C" String_t* VuforiaAbstractBehaviour_get_AppLicenseKey_m3916 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaAbstractBehaviour::get_EyewearUserCalibrationProfileId()
extern "C" int32_t VuforiaAbstractBehaviour_get_EyewearUserCalibrationProfileId_m3917 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::set_EyewearUserCalibrationProfileId(System.Int32)
extern "C" void VuforiaAbstractBehaviour_set_EyewearUserCalibrationProfileId_m3918 (VuforiaAbstractBehaviour_t62 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::get_SynchronizePoseUpdates()
extern "C" bool VuforiaAbstractBehaviour_get_SynchronizePoseUpdates_m3919 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::set_SynchronizePoseUpdates(System.Boolean)
extern "C" void VuforiaAbstractBehaviour_set_SynchronizePoseUpdates_m3920 (VuforiaAbstractBehaviour_t62 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetSkewFrustum(System.Boolean)
extern "C" void VuforiaAbstractBehaviour_SetSkewFrustum_m3921 (VuforiaAbstractBehaviour_t62 * __this, bool ___setSkewing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C" void VuforiaAbstractBehaviour_RegisterVuforiaInitErrorCallback_m198 (VuforiaAbstractBehaviour_t62 * __this, Action_1_t97 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C" void VuforiaAbstractBehaviour_UnregisterVuforiaInitErrorCallback_m204 (VuforiaAbstractBehaviour_t62 * __this, Action_1_t97 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterVuforiaInitializedCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_RegisterVuforiaInitializedCallback_m374 (VuforiaAbstractBehaviour_t62 * __this, Action_t111 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterVuforiaInitializedCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_UnregisterVuforiaInitializedCallback_m377 (VuforiaAbstractBehaviour_t62 * __this, Action_t111 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterVuforiaStartedCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_RegisterVuforiaStartedCallback_m284 (VuforiaAbstractBehaviour_t62 * __this, Action_t111 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterVuforiaStartedCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_UnregisterVuforiaStartedCallback_m378 (VuforiaAbstractBehaviour_t62 * __this, Action_t111 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterTrackablesUpdatedCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_RegisterTrackablesUpdatedCallback_m3922 (VuforiaAbstractBehaviour_t62 * __this, Action_t111 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterTrackablesUpdatedCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_UnregisterTrackablesUpdatedCallback_m3923 (VuforiaAbstractBehaviour_t62 * __this, Action_t111 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterOnPauseCallback(System.Action`1<System.Boolean>)
extern "C" void VuforiaAbstractBehaviour_RegisterOnPauseCallback_m376 (VuforiaAbstractBehaviour_t62 * __this, Action_1_t135 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterOnPauseCallback(System.Action`1<System.Boolean>)
extern "C" void VuforiaAbstractBehaviour_UnregisterOnPauseCallback_m379 (VuforiaAbstractBehaviour_t62 * __this, Action_1_t135 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterBackgroundTextureChangedCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_RegisterBackgroundTextureChangedCallback_m3924 (VuforiaAbstractBehaviour_t62 * __this, Action_t111 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterBackgroundTextureChangedCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_UnregisterBackgroundTextureChangedCallback_m3925 (VuforiaAbstractBehaviour_t62 * __this, Action_t111 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterTrackerEventHandler(Vuforia.ITrackerEventHandler)
extern "C" void VuforiaAbstractBehaviour_RegisterTrackerEventHandler_m3926 (VuforiaAbstractBehaviour_t62 * __this, Object_t * ___trackerEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::UnregisterTrackerEventHandler(Vuforia.ITrackerEventHandler)
extern "C" bool VuforiaAbstractBehaviour_UnregisterTrackerEventHandler_m3927 (VuforiaAbstractBehaviour_t62 * __this, Object_t * ___trackerEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterVideoBgEventHandler(Vuforia.IVideoBackgroundEventHandler)
extern "C" void VuforiaAbstractBehaviour_RegisterVideoBgEventHandler_m3928 (VuforiaAbstractBehaviour_t62 * __this, Object_t * ___videoBgEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::UnregisterVideoBgEventHandler(Vuforia.IVideoBackgroundEventHandler)
extern "C" bool VuforiaAbstractBehaviour_UnregisterVideoBgEventHandler_m3929 (VuforiaAbstractBehaviour_t62 * __this, Object_t * ___videoBgEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetWorldCenterMode(Vuforia.VuforiaAbstractBehaviour/WorldCenterMode)
extern "C" void VuforiaAbstractBehaviour_SetWorldCenterMode_m3930 (VuforiaAbstractBehaviour_t62 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetWorldCenter(Vuforia.TrackableBehaviour)
extern "C" void VuforiaAbstractBehaviour_SetWorldCenter_m3931 (VuforiaAbstractBehaviour_t62 * __this, TrackableBehaviour_t16 * ___trackable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetCentralAnchorPoint(UnityEngine.Transform)
extern "C" void VuforiaAbstractBehaviour_SetCentralAnchorPoint_m3932 (VuforiaAbstractBehaviour_t62 * __this, Transform_t51 * ___anchorPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetParentAnchorPoint(UnityEngine.Transform)
extern "C" void VuforiaAbstractBehaviour_SetParentAnchorPoint_m3933 (VuforiaAbstractBehaviour_t62 * __this, Transform_t51 * ___parentAnchorPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetCameraOffset(System.Single)
extern "C" void VuforiaAbstractBehaviour_SetCameraOffset_m3934 (VuforiaAbstractBehaviour_t62 * __this, float ___Offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetAppLicenseKey(System.String)
extern "C" void VuforiaAbstractBehaviour_SetAppLicenseKey_m3935 (VuforiaAbstractBehaviour_t62 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::SetHeadsetPresent(System.String)
extern "C" bool VuforiaAbstractBehaviour_SetHeadsetPresent_m3936 (VuforiaAbstractBehaviour_t62 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::SetHeadsetNotPresent()
extern "C" bool VuforiaAbstractBehaviour_SetHeadsetNotPresent_m3937 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.VuforiaAbstractBehaviour::GetViewportRectangle()
extern "C" Rect_t54  VuforiaAbstractBehaviour_GetViewportRectangle_m3938 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Vuforia.VuforiaAbstractBehaviour::GetSurfaceOrientation()
extern "C" int32_t VuforiaAbstractBehaviour_GetSurfaceOrientation_m3939 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UpdateState()
extern "C" void VuforiaAbstractBehaviour_UpdateState_m3940 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UpdateState(System.Boolean,System.Boolean)
extern "C" void VuforiaAbstractBehaviour_UpdateState_m307 (VuforiaAbstractBehaviour_t62 * __this, bool ___forceUpdate, bool ___reapplyOldState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C" void VuforiaAbstractBehaviour_ApplyCorrectedProjectionMatrix_m309 (VuforiaAbstractBehaviour_t62 * __this, Matrix4x4_t52  ___projectionMatrix, bool ___primaryCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::ConfigureVideoBackground()
extern "C" void VuforiaAbstractBehaviour_ConfigureVideoBackground_m3941 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::ResetBackgroundPlane(System.Boolean)
extern "C" void VuforiaAbstractBehaviour_ResetBackgroundPlane_m3942 (VuforiaAbstractBehaviour_t62 * __this, bool ___disable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterRenderOnUpdateCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_RegisterRenderOnUpdateCallback_m3943 (VuforiaAbstractBehaviour_t62 * __this, Action_t111 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterRenderOnUpdateCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_UnregisterRenderOnUpdateCallback_m3944 (VuforiaAbstractBehaviour_t62 * __this, Action_t111 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::IsValidPrimaryCamera(UnityEngine.Camera)
extern "C" bool VuforiaAbstractBehaviour_IsValidPrimaryCamera_m3945 (Object_t * __this /* static, unused */, Camera_t53 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::IsValidSecondaryCamera(UnityEngine.Camera)
extern "C" bool VuforiaAbstractBehaviour_IsValidSecondaryCamera_m3946 (Object_t * __this /* static, unused */, Camera_t53 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Start()
extern "C" void VuforiaAbstractBehaviour_Start_m3947 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnEnable()
extern "C" void VuforiaAbstractBehaviour_OnEnable_m3948 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Update()
extern "C" void VuforiaAbstractBehaviour_Update_m3949 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnApplicationPause(System.Boolean)
extern "C" void VuforiaAbstractBehaviour_OnApplicationPause_m3950 (VuforiaAbstractBehaviour_t62 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnDisable()
extern "C" void VuforiaAbstractBehaviour_OnDisable_m3951 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnDestroy()
extern "C" void VuforiaAbstractBehaviour_OnDestroy_m3952 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetUnityPlayerImplementation(Vuforia.IUnityPlayer)
extern "C" void VuforiaAbstractBehaviour_SetUnityPlayerImplementation_m319 (VuforiaAbstractBehaviour_t62 * __this, Object_t * ___implementation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UpdateStatePrivate(System.Boolean,System.Boolean)
extern "C" void VuforiaAbstractBehaviour_UpdateStatePrivate_m3953 (VuforiaAbstractBehaviour_t62 * __this, bool ___forceUpdate, bool ___reapplyOldState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::StartVuforia(System.Boolean,System.Boolean)
extern "C" bool VuforiaAbstractBehaviour_StartVuforia_m3954 (VuforiaAbstractBehaviour_t62 * __this, bool ___startObjectTracker, bool ___startMarkerTracker, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::StopVuforia()
extern "C" bool VuforiaAbstractBehaviour_StopVuforia_m3955 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::DeinitRequestedTrackers()
extern "C" void VuforiaAbstractBehaviour_DeinitRequestedTrackers_m3956 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnVideoBackgroundConfigChanged()
extern "C" void VuforiaAbstractBehaviour_OnVideoBackgroundConfigChanged_m3957 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::ConfigureView()
extern "C" void VuforiaAbstractBehaviour_ConfigureView_m3958 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::EnableObjectRenderer(UnityEngine.GameObject,System.Boolean)
extern "C" void VuforiaAbstractBehaviour_EnableObjectRenderer_m3959 (VuforiaAbstractBehaviour_t62 * __this, GameObject_t83 * ___go, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetCameraDeviceMode(Vuforia.CameraDevice/CameraDeviceMode)
extern "C" void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetCameraDeviceMode_m3960 (VuforiaAbstractBehaviour_t62 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetMaximumSimultaneousImageTargets()
extern "C" int32_t VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetMaximumSimultaneousImageTargets_m3961 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetMaximumSimultaneousImageTargets(System.Int32)
extern "C" void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetMaximumSimultaneousImageTargets_m3962 (VuforiaAbstractBehaviour_t62 * __this, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetMaximumSimultaneousObjectTargets()
extern "C" int32_t VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetMaximumSimultaneousObjectTargets_m3963 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetMaximumSimultaneousObjectTargets(System.Int32)
extern "C" void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetMaximumSimultaneousObjectTargets_m3964 (VuforiaAbstractBehaviour_t62 * __this, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetDelayedLoadingObjectTargets()
extern "C" bool VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetDelayedLoadingObjectTargets_m3965 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetUseDelayedLoadingObjectTargets(System.Boolean)
extern "C" void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetUseDelayedLoadingObjectTargets_m3966 (VuforiaAbstractBehaviour_t62 * __this, bool ___useDelayedLoading, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetCameraDirection()
extern "C" int32_t VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetCameraDirection_m3967 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetCameraDirection(Vuforia.CameraDevice/CameraDirection)
extern "C" void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetCameraDirection_m3968 (VuforiaAbstractBehaviour_t62 * __this, int32_t ___cameraDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetMirrorVideoBackground()
extern "C" int32_t VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetMirrorVideoBackground_m3969 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetMirrorVideoBackground(Vuforia.VuforiaRenderer/VideoBackgroundReflection)
extern "C" void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetMirrorVideoBackground_m3970 (VuforiaAbstractBehaviour_t62 * __this, int32_t ___reflection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetUsingHeadset()
extern "C" bool VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetUsingHeadset_m3971 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetUsingHeadset(System.Boolean)
extern "C" void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetUsingHeadset_m3972 (VuforiaAbstractBehaviour_t62 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetHeadsetID()
extern "C" String_t* VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetHeadsetID_m3973 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetHeadsetID(System.String)
extern "C" void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetHeadsetID_m3974 (VuforiaAbstractBehaviour_t62 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::.ctor()
extern "C" void VuforiaAbstractBehaviour__ctor_m314 (VuforiaAbstractBehaviour_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
