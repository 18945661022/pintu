#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t53;
// Vuforia.HideExcessAreaAbstractBehaviour
struct HideExcessAreaAbstractBehaviour_t19;
// UnityEngine.Transform
struct Transform_t51;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Rect.h"

// VRIntegrationHelper
struct  VRIntegrationHelper_t50  : public MonoBehaviour_t10
{
	// System.Boolean VRIntegrationHelper::IsLeft
	bool ___IsLeft_11;
	// UnityEngine.Transform VRIntegrationHelper::TrackableParent
	Transform_t51 * ___TrackableParent_12;
};
struct VRIntegrationHelper_t50_StaticFields{
	// UnityEngine.Matrix4x4 VRIntegrationHelper::mLeftCameraMatrixOriginal
	Matrix4x4_t52  ___mLeftCameraMatrixOriginal_1;
	// UnityEngine.Matrix4x4 VRIntegrationHelper::mRightCameraMatrixOriginal
	Matrix4x4_t52  ___mRightCameraMatrixOriginal_2;
	// UnityEngine.Camera VRIntegrationHelper::mLeftCamera
	Camera_t53 * ___mLeftCamera_3;
	// UnityEngine.Camera VRIntegrationHelper::mRightCamera
	Camera_t53 * ___mRightCamera_4;
	// Vuforia.HideExcessAreaAbstractBehaviour VRIntegrationHelper::mLeftExcessAreaBehaviour
	HideExcessAreaAbstractBehaviour_t19 * ___mLeftExcessAreaBehaviour_5;
	// Vuforia.HideExcessAreaAbstractBehaviour VRIntegrationHelper::mRightExcessAreaBehaviour
	HideExcessAreaAbstractBehaviour_t19 * ___mRightExcessAreaBehaviour_6;
	// UnityEngine.Rect VRIntegrationHelper::mLeftCameraPixelRect
	Rect_t54  ___mLeftCameraPixelRect_7;
	// UnityEngine.Rect VRIntegrationHelper::mRightCameraPixelRect
	Rect_t54  ___mRightCameraPixelRect_8;
	// System.Boolean VRIntegrationHelper::mLeftCameraDataAcquired
	bool ___mLeftCameraDataAcquired_9;
	// System.Boolean VRIntegrationHelper::mRightCameraDataAcquired
	bool ___mRightCameraDataAcquired_10;
};
