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

// Vuforia.VuforiaNullWrapper
struct VuforiaNullWrapper_t592;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t381;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceInitCamera(System.Int32)
extern "C" int32_t VuforiaNullWrapper_CameraDeviceInitCamera_m3186 (VuforiaNullWrapper_t592 * __this, int32_t ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceDeinitCamera()
extern "C" int32_t VuforiaNullWrapper_CameraDeviceDeinitCamera_m3187 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceStartCamera()
extern "C" int32_t VuforiaNullWrapper_CameraDeviceStartCamera_m3188 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceStopCamera()
extern "C" int32_t VuforiaNullWrapper_CameraDeviceStopCamera_m3189 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceGetNumVideoModes()
extern "C" int32_t VuforiaNullWrapper_CameraDeviceGetNumVideoModes_m3190 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C" void VuforiaNullWrapper_CameraDeviceGetVideoMode_m3191 (VuforiaNullWrapper_t592 * __this, int32_t ___idx, IntPtr_t ___videoMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceSelectVideoMode(System.Int32)
extern "C" int32_t VuforiaNullWrapper_CameraDeviceSelectVideoMode_m3192 (VuforiaNullWrapper_t592 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceSetFlashTorchMode(System.Int32)
extern "C" int32_t VuforiaNullWrapper_CameraDeviceSetFlashTorchMode_m3193 (VuforiaNullWrapper_t592 * __this, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceSetFocusMode(System.Int32)
extern "C" int32_t VuforiaNullWrapper_CameraDeviceSetFocusMode_m3194 (VuforiaNullWrapper_t592 * __this, int32_t ___focusMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C" int32_t VuforiaNullWrapper_CameraDeviceSetCameraConfiguration_m3195 (VuforiaNullWrapper_t592 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::CameraDeviceGetCameraFieldOfViewRads(System.IntPtr)
extern "C" bool VuforiaNullWrapper_CameraDeviceGetCameraFieldOfViewRads_m3196 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___fovVectorPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarSetFrameFormat(System.Int32,System.Int32)
extern "C" int32_t VuforiaNullWrapper_QcarSetFrameFormat_m3197 (VuforiaNullWrapper_t592 * __this, int32_t ___format, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetExists(System.String,System.Int32)
extern "C" int32_t VuforiaNullWrapper_DataSetExists_m3198 (VuforiaNullWrapper_t592 * __this, String_t* ___relativePath, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_DataSetLoad_m3199 (VuforiaNullWrapper_t592 * __this, String_t* ___relativePath, int32_t ___storageType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_DataSetGetNumTrackableType_m3200 (VuforiaNullWrapper_t592 * __this, int32_t ___trackableType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_DataSetGetTrackablesOfType_m3201 (VuforiaNullWrapper_t592 * __this, int32_t ___trackableType, IntPtr_t ___trackableDataArray, int32_t ___trackableDataArrayLength, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t VuforiaNullWrapper_DataSetGetTrackableName_m3202 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, StringBuilder_t381 * ___trackableName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_DataSetCreateTrackable_m3203 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___dataSetPtr, IntPtr_t ___trackableSourcePtr, StringBuilder_t381 * ___trackableName, int32_t ___nameMaxLength, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNullWrapper_DataSetDestroyTrackable_m3204 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetHasReachedTrackableLimit(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_DataSetHasReachedTrackableLimit_m3205 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::GetCameraThreadID()
extern "C" int32_t VuforiaNullWrapper_GetCameraThreadID_m3206 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetBuilderBuild(System.String,System.Single)
extern "C" int32_t VuforiaNullWrapper_ImageTargetBuilderBuild_m3207 (VuforiaNullWrapper_t592 * __this, String_t* ___targetName, float ___sceenSizeWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::FrameCounterGetBenchmarkingData(System.IntPtr,System.Boolean)
extern "C" void VuforiaNullWrapper_FrameCounterGetBenchmarkingData_m3208 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___benchmarkingData, bool ___isStereoRendering, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ImageTargetBuilderStartScan()
extern "C" void VuforiaNullWrapper_ImageTargetBuilderStartScan_m3209 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ImageTargetBuilderStopScan()
extern "C" void VuforiaNullWrapper_ImageTargetBuilderStopScan_m3210 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetBuilderGetFrameQuality()
extern "C" int32_t VuforiaNullWrapper_ImageTargetBuilderGetFrameQuality_m3211 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::ImageTargetBuilderGetTrackableSource()
extern "C" IntPtr_t VuforiaNullWrapper_ImageTargetBuilderGetTrackableSource_m3212 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_ImageTargetCreateVirtualButton_m3213 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C" int32_t VuforiaNullWrapper_ImageTargetDestroyVirtualButton_m3214 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VirtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C" int32_t VuforiaNullWrapper_VirtualButtonGetId_m3215 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C" int32_t VuforiaNullWrapper_ImageTargetGetNumVirtualButtons_m3216 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C" int32_t VuforiaNullWrapper_ImageTargetGetVirtualButtons_m3217 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___virtualButtonDataArray, IntPtr_t ___rectangleDataArray, int32_t ___virtualButtonDataArrayLength, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t VuforiaNullWrapper_ImageTargetGetVirtualButtonName_m3218 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, int32_t ___idx, StringBuilder_t381 * ___vbName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_CylinderTargetGetDimensions_m3219 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___dimensions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNullWrapper_CylinderTargetSetSideLength_m3220 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___sideLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNullWrapper_CylinderTargetSetTopDiameter_m3221 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___topDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNullWrapper_CylinderTargetSetBottomDiameter_m3222 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___bottomDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_ObjectTargetSetSize_m3223 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_ObjectTargetGetSize_m3224 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerStart()
extern "C" int32_t VuforiaNullWrapper_ObjectTrackerStart_m3225 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ObjectTrackerStop()
extern "C" void VuforiaNullWrapper_ObjectTrackerStop_m3226 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::ObjectTrackerCreateDataSet()
extern "C" IntPtr_t VuforiaNullWrapper_ObjectTrackerCreateDataSet_m3227 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerDestroyDataSet(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_ObjectTrackerDestroyDataSet_m3228 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerActivateDataSet(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_ObjectTrackerActivateDataSet_m3229 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerDeactivateDataSet(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_ObjectTrackerDeactivateDataSet_m3230 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerPersistExtendedTracking(System.Int32)
extern "C" int32_t VuforiaNullWrapper_ObjectTrackerPersistExtendedTracking_m3231 (VuforiaNullWrapper_t592 * __this, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerResetExtendedTracking()
extern "C" int32_t VuforiaNullWrapper_ObjectTrackerResetExtendedTracking_m3232 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::MarkerTrackerStart()
extern "C" int32_t VuforiaNullWrapper_MarkerTrackerStart_m3233 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::MarkerTrackerStop()
extern "C" void VuforiaNullWrapper_MarkerTrackerStop_m3234 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::OnSurfaceChanged(System.Int32,System.Int32)
extern "C" void VuforiaNullWrapper_OnSurfaceChanged_m3235 (VuforiaNullWrapper_t592 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::OnPause()
extern "C" void VuforiaNullWrapper_OnPause_m3236 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::OnResume()
extern "C" void VuforiaNullWrapper_OnResume_m3237 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::HasSurfaceBeenRecreated()
extern "C" bool VuforiaNullWrapper_HasSurfaceBeenRecreated_m3238 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::MarkerSetSize(System.Int32,System.Single)
extern "C" int32_t VuforiaNullWrapper_MarkerSetSize_m3239 (VuforiaNullWrapper_t592 * __this, int32_t ___trackableIndex, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::MarkerTrackerCreateMarker(System.Int32,System.String,System.Single)
extern "C" int32_t VuforiaNullWrapper_MarkerTrackerCreateMarker_m3240 (VuforiaNullWrapper_t592 * __this, int32_t ___id, String_t* ___trackableName, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::MarkerTrackerDestroyMarker(System.Int32)
extern "C" int32_t VuforiaNullWrapper_MarkerTrackerDestroyMarker_m3241 (VuforiaNullWrapper_t592 * __this, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::InitPlatformNative()
extern "C" void VuforiaNullWrapper_InitPlatformNative_m3242 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::InitFrameState(System.IntPtr)
extern "C" void VuforiaNullWrapper_InitFrameState_m3243 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::DeinitFrameState(System.IntPtr)
extern "C" void VuforiaNullWrapper_DeinitFrameState_m3244 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::UpdateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNullWrapper_UpdateQCAR_m3245 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___imageHeaderDataArray, int32_t ___imageHeaderArrayLength, IntPtr_t ___frameIndex, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RendererEnd()
extern "C" void VuforiaNullWrapper_RendererEnd_m3246 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C" int32_t VuforiaNullWrapper_QcarGetBufferSize_m3247 (VuforiaNullWrapper_t592 * __this, int32_t ___width, int32_t ___height, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::QcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void VuforiaNullWrapper_QcarAddCameraFrame_m3248 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___pixels, int32_t ___width, int32_t ___height, int32_t ___format, int32_t ___stride, int32_t ___frameIdx, int32_t ___flipHorizontally, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RendererSetVideoBackgroundCfg(System.IntPtr)
extern "C" void VuforiaNullWrapper_RendererSetVideoBackgroundCfg_m3249 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RendererGetVideoBackgroundCfg(System.IntPtr)
extern "C" void VuforiaNullWrapper_RendererGetVideoBackgroundCfg_m3250 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C" void VuforiaNullWrapper_RendererGetVideoBackgroundTextureInfo_m3251 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___texInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RendererSetVideoBackgroundTextureID(System.Int32)
extern "C" int32_t VuforiaNullWrapper_RendererSetVideoBackgroundTextureID_m3252 (VuforiaNullWrapper_t592 * __this, int32_t ___textureID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RendererIsVideoBackgroundTextureInfoAvailable()
extern "C" int32_t VuforiaNullWrapper_RendererIsVideoBackgroundTextureInfoAvailable_m3253 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RendererGetRecommendedFps(System.Int32)
extern "C" int32_t VuforiaNullWrapper_RendererGetRecommendedFps_m3254 (VuforiaNullWrapper_t592 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarSetHint(System.UInt32,System.Int32)
extern "C" int32_t VuforiaNullWrapper_QcarSetHint_m3255 (VuforiaNullWrapper_t592 * __this, uint32_t ___hint, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::GetProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNullWrapper_GetProjectionGL_m3256 (VuforiaNullWrapper_t592 * __this, float ___nearClip, float ___farClip, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::SetApplicationEnvironment(System.Int32,System.Int32,System.Int32)
extern "C" void VuforiaNullWrapper_SetApplicationEnvironment_m3257 (VuforiaNullWrapper_t592 * __this, int32_t ___major, int32_t ___minor, int32_t ___change, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::SetStateBufferSize(System.Int32)
extern "C" void VuforiaNullWrapper_SetStateBufferSize_m3258 (VuforiaNullWrapper_t592 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::SmartTerrainTrackerStart()
extern "C" int32_t VuforiaNullWrapper_SmartTerrainTrackerStart_m3259 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::SmartTerrainTrackerStop()
extern "C" void VuforiaNullWrapper_SmartTerrainTrackerStop_m3260 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C" bool VuforiaNullWrapper_SmartTerrainTrackerSetScaleToMillimeter_m3261 (VuforiaNullWrapper_t592 * __this, float ___scaleFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainTrackerInitBuilder()
extern "C" bool VuforiaNullWrapper_SmartTerrainTrackerInitBuilder_m3262 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainTrackerDeinitBuilder()
extern "C" bool VuforiaNullWrapper_SmartTerrainTrackerDeinitBuilder_m3263 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::SmartTerrainBuilderCreateReconstructionFromTarget()
extern "C" IntPtr_t VuforiaNullWrapper_SmartTerrainBuilderCreateReconstructionFromTarget_m3264 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::SmartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C" IntPtr_t VuforiaNullWrapper_SmartTerrainBuilderCreateReconstructionFromEnvironment_m3265 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C" bool VuforiaNullWrapper_SmartTerrainBuilderAddReconstruction_m3266 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C" bool VuforiaNullWrapper_SmartTerrainBuilderRemoveReconstruction_m3267 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C" bool VuforiaNullWrapper_SmartTerrainBuilderDestroyReconstruction_m3268 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionStart(System.IntPtr)
extern "C" bool VuforiaNullWrapper_ReconstructionStart_m3269 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionStop(System.IntPtr)
extern "C" bool VuforiaNullWrapper_ReconstructionStop_m3270 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionIsReconstructing(System.IntPtr)
extern "C" bool VuforiaNullWrapper_ReconstructionIsReconstructing_m3271 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionReset(System.IntPtr)
extern "C" bool VuforiaNullWrapper_ReconstructionReset_m3272 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ReconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C" void VuforiaNullWrapper_ReconstructionSetNavMeshPadding_m3273 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___reconstruction, float ___padding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C" bool VuforiaNullWrapper_ReconstructionFromTargetSetInitializationTarget_m3274 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___reconstruction, IntPtr_t ___dataSetPtr, int32_t ___trackableId, IntPtr_t ___occluderMin, IntPtr_t ___occluderMax, IntPtr_t ___offsetToOccluder, IntPtr_t ___rotationAxisToOccluder, float ___rotationAngleToOccluder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C" bool VuforiaNullWrapper_ReconstructionSetMaximumArea_m3275 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___reconstruction, IntPtr_t ___maximumArea, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ReconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_ReconstructioFromEnvironmentGetReconstructionState_m3276 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderStartInit(System.String,System.String)
extern "C" int32_t VuforiaNullWrapper_TargetFinderStartInit_m3277 (VuforiaNullWrapper_t592 * __this, String_t* ___userKey, String_t* ___secretKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderGetInitState()
extern "C" int32_t VuforiaNullWrapper_TargetFinderGetInitState_m3278 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderDeinit()
extern "C" int32_t VuforiaNullWrapper_TargetFinderDeinit_m3279 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderStartRecognition()
extern "C" int32_t VuforiaNullWrapper_TargetFinderStartRecognition_m3280 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderStop()
extern "C" int32_t VuforiaNullWrapper_TargetFinderStop_m3281 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderSetUIScanlineColor(System.Single,System.Single,System.Single)
extern "C" void VuforiaNullWrapper_TargetFinderSetUIScanlineColor_m3282 (VuforiaNullWrapper_t592 * __this, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderSetUIPointColor(System.Single,System.Single,System.Single)
extern "C" void VuforiaNullWrapper_TargetFinderSetUIPointColor_m3283 (VuforiaNullWrapper_t592 * __this, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderUpdate(System.IntPtr,System.Int32)
extern "C" void VuforiaNullWrapper_TargetFinderUpdate_m3284 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___targetFinderState, int32_t ___filterMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderGetResults(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNullWrapper_TargetFinderGetResults_m3285 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___searchResultArray, int32_t ___searchResultArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_TargetFinderEnableTracking_m3286 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___searchResult, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C" void VuforiaNullWrapper_TargetFinderGetImageTargets_m3287 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___trackableIdArray, int32_t ___trackableIdArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderClearTrackables()
extern "C" void VuforiaNullWrapper_TargetFinderClearTrackables_m3288 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TextTrackerStart()
extern "C" int32_t VuforiaNullWrapper_TextTrackerStart_m3289 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TextTrackerStop()
extern "C" void VuforiaNullWrapper_TextTrackerStop_m3290 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TextTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t VuforiaNullWrapper_TextTrackerSetRegionOfInterest_m3291 (VuforiaNullWrapper_t592 * __this, int32_t ___detectionLeftTopX, int32_t ___detectionLeftTopY, int32_t ___detectionRightBottomX, int32_t ___detectionRightBottomY, int32_t ___trackingLeftTopX, int32_t ___trackingLeftTopY, int32_t ___trackingRightBottomX, int32_t ___trackingRightBottomY, int32_t ___upDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TextTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C" void VuforiaNullWrapper_TextTrackerGetRegionOfInterest_m3292 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___detectionROI, IntPtr_t ___trackingROI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListLoadWordList(System.String,System.Int32)
extern "C" int32_t VuforiaNullWrapper_WordListLoadWordList_m3293 (VuforiaNullWrapper_t592 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListAddWordsFromFile(System.String,System.Int32)
extern "C" int32_t VuforiaNullWrapper_WordListAddWordsFromFile_m3294 (VuforiaNullWrapper_t592 * __this, String_t* ___path, int32_t ___storagetType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListAddWordU(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_WordListAddWordU_m3295 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListRemoveWordU(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_WordListRemoveWordU_m3296 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListContainsWordU(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_WordListContainsWordU_m3297 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListUnloadAllLists()
extern "C" int32_t VuforiaNullWrapper_WordListUnloadAllLists_m3298 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListSetFilterMode(System.Int32)
extern "C" int32_t VuforiaNullWrapper_WordListSetFilterMode_m3299 (VuforiaNullWrapper_t592 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListGetFilterMode()
extern "C" int32_t VuforiaNullWrapper_WordListGetFilterMode_m3300 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListLoadFilterList(System.String,System.Int32)
extern "C" int32_t VuforiaNullWrapper_WordListLoadFilterList_m3301 (VuforiaNullWrapper_t592 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListAddWordToFilterListU(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_WordListAddWordToFilterListU_m3302 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListRemoveWordFromFilterListU(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_WordListRemoveWordFromFilterListU_m3303 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListClearFilterList()
extern "C" int32_t VuforiaNullWrapper_WordListClearFilterList_m3304 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListGetFilterListWordCount()
extern "C" int32_t VuforiaNullWrapper_WordListGetFilterListWordCount_m3305 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::WordListGetFilterListWordU(System.Int32)
extern "C" IntPtr_t VuforiaNullWrapper_WordListGetFilterListWordU_m3306 (VuforiaNullWrapper_t592 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordGetLetterMask(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_WordGetLetterMask_m3307 (VuforiaNullWrapper_t592 * __this, int32_t ___wordID, IntPtr_t ___letterMaskImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_WordGetLetterBoundingBoxes_m3308 (VuforiaNullWrapper_t592 * __this, int32_t ___wordID, IntPtr_t ___letterBoundingBoxes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TrackerManagerInitTracker(System.Int32)
extern "C" int32_t VuforiaNullWrapper_TrackerManagerInitTracker_m3309 (VuforiaNullWrapper_t592 * __this, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TrackerManagerDeinitTracker(System.Int32)
extern "C" int32_t VuforiaNullWrapper_TrackerManagerDeinitTracker_m3310 (VuforiaNullWrapper_t592 * __this, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VirtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t VuforiaNullWrapper_VirtualButtonSetEnabled_m3311 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VirtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t VuforiaNullWrapper_VirtualButtonSetSensitivity_m3312 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___sensitivity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VirtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_VirtualButtonSetAreaRectangle_m3313 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarInit(System.String)
extern "C" int32_t VuforiaNullWrapper_QcarInit_m3314 (VuforiaNullWrapper_t592 * __this, String_t* ___licenseKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarDeinit()
extern "C" int32_t VuforiaNullWrapper_QcarDeinit_m3315 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::StartExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNullWrapper_StartExtendedTracking_m3316 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::StopExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNullWrapper_StopExtendedTracking_m3317 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearIsDeviceDetected()
extern "C" bool VuforiaNullWrapper_EyewearIsDeviceDetected_m3318 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearSetHeadsetPresent(System.String)
extern "C" bool VuforiaNullWrapper_EyewearSetHeadsetPresent_m3319 (VuforiaNullWrapper_t592 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearSetHeadsetNotPresent()
extern "C" bool VuforiaNullWrapper_EyewearSetHeadsetNotPresent_m3320 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearIsSeeThru()
extern "C" bool VuforiaNullWrapper_EyewearIsSeeThru_m3321 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearGetScreenOrientation()
extern "C" int32_t VuforiaNullWrapper_EyewearGetScreenOrientation_m3322 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearIsStereoCapable()
extern "C" bool VuforiaNullWrapper_EyewearIsStereoCapable_m3323 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearIsStereoEnabled()
extern "C" bool VuforiaNullWrapper_EyewearIsStereoEnabled_m3324 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearIsStereoGLOnly()
extern "C" bool VuforiaNullWrapper_EyewearIsStereoGLOnly_m3325 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearSetStereo(System.Boolean)
extern "C" bool VuforiaNullWrapper_EyewearSetStereo_m3326 (VuforiaNullWrapper_t592 * __this, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearIsPredictiveTrackingEnabled()
extern "C" bool VuforiaNullWrapper_EyewearIsPredictiveTrackingEnabled_m3327 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearSetPredictiveTracking(System.Boolean)
extern "C" bool VuforiaNullWrapper_EyewearSetPredictiveTracking_m3328 (VuforiaNullWrapper_t592 * __this, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::EyewearSetProjectionClippingPlanes(System.Single,System.Single)
extern "C" void VuforiaNullWrapper_EyewearSetProjectionClippingPlanes_m3329 (VuforiaNullWrapper_t592 * __this, float ___nearPlane, float ___farPlane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::EyewearGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr,System.Int32)
extern "C" void VuforiaNullWrapper_EyewearGetProjectionMatrix_m3330 (VuforiaNullWrapper_t592 * __this, int32_t ___eyeID, int32_t ___profileID, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearCPMGetMaxCount()
extern "C" int32_t VuforiaNullWrapper_EyewearCPMGetMaxCount_m3331 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearCPMGetUsedCount()
extern "C" int32_t VuforiaNullWrapper_EyewearCPMGetUsedCount_m3332 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearCPMIsProfileUsed(System.Int32)
extern "C" bool VuforiaNullWrapper_EyewearCPMIsProfileUsed_m3333 (VuforiaNullWrapper_t592 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearCPMGetActiveProfile()
extern "C" int32_t VuforiaNullWrapper_EyewearCPMGetActiveProfile_m3334 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearCPMSetActiveProfile(System.Int32)
extern "C" bool VuforiaNullWrapper_EyewearCPMSetActiveProfile_m3335 (VuforiaNullWrapper_t592 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearCPMGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_EyewearCPMGetProjectionMatrix_m3336 (VuforiaNullWrapper_t592 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearCPMSetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" bool VuforiaNullWrapper_EyewearCPMSetProjectionMatrix_m3337 (VuforiaNullWrapper_t592 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::EyewearCPMGetProfileName(System.Int32)
extern "C" IntPtr_t VuforiaNullWrapper_EyewearCPMGetProfileName_m3338 (VuforiaNullWrapper_t592 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C" bool VuforiaNullWrapper_EyewearCPMSetProfileName_m3339 (VuforiaNullWrapper_t592 * __this, int32_t ___profileID, IntPtr_t ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearCPMClearProfile(System.Int32)
extern "C" bool VuforiaNullWrapper_EyewearCPMClearProfile_m3340 (VuforiaNullWrapper_t592 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" bool VuforiaNullWrapper_EyewearUserCalibratorInit_m3341 (VuforiaNullWrapper_t592 * __this, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNullWrapper::EyewearUserCalibratorGetMinScaleHint()
extern "C" float VuforiaNullWrapper_EyewearUserCalibratorGetMinScaleHint_m3342 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNullWrapper::EyewearUserCalibratorGetMaxScaleHint()
extern "C" float VuforiaNullWrapper_EyewearUserCalibratorGetMaxScaleHint_m3343 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearUserCalibratorIsStereoStretched()
extern "C" bool VuforiaNullWrapper_EyewearUserCalibratorIsStereoStretched_m3344 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr)
extern "C" bool VuforiaNullWrapper_EyewearUserCalibratorGetProjectionMatrix_m3345 (VuforiaNullWrapper_t592 * __this, IntPtr_t ___readingsArray, int32_t ___numReadings, IntPtr_t ___calibrationResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::.ctor()
extern "C" void VuforiaNullWrapper__ctor_m3346 (VuforiaNullWrapper_t592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
