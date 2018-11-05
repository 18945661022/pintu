#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t83;
// UnityEngine.Shader
struct Shader_t124;
// UnityEngine.Camera
struct Camera_t53;
// Vuforia.VuforiaAbstractBehaviour
struct VuforiaAbstractBehaviour_t62;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Vuforia.StencilHideExcessAreaClipping
struct  StencilHideExcessAreaClipping_t444  : public Object_t
{
	// UnityEngine.GameObject Vuforia.StencilHideExcessAreaClipping::mGameObject
	GameObject_t83 * ___mGameObject_0;
	// UnityEngine.Shader Vuforia.StencilHideExcessAreaClipping::mMatteShader
	Shader_t124 * ___mMatteShader_1;
	// UnityEngine.GameObject Vuforia.StencilHideExcessAreaClipping::mClippingPlane
	GameObject_t83 * ___mClippingPlane_2;
	// UnityEngine.Camera Vuforia.StencilHideExcessAreaClipping::mCamera
	Camera_t53 * ___mCamera_3;
	// System.Boolean Vuforia.StencilHideExcessAreaClipping::mSceneIsScaledDown
	bool ___mSceneIsScaledDown_4;
	// System.Single Vuforia.StencilHideExcessAreaClipping::mCameraNearPlane
	float ___mCameraNearPlane_5;
	// UnityEngine.Rect Vuforia.StencilHideExcessAreaClipping::mCameraPixelRect
	Rect_t54  ___mCameraPixelRect_6;
	// System.Single Vuforia.StencilHideExcessAreaClipping::mCameraFieldOfView
	float ___mCameraFieldOfView_7;
	// Vuforia.VuforiaAbstractBehaviour Vuforia.StencilHideExcessAreaClipping::mVuforiaBehaviour
	VuforiaAbstractBehaviour_t62 * ___mVuforiaBehaviour_8;
	// System.Boolean Vuforia.StencilHideExcessAreaClipping::mPlanesActivated
	bool ___mPlanesActivated_9;
	// UnityEngine.GameObject Vuforia.StencilHideExcessAreaClipping::mBgPlane
	GameObject_t83 * ___mBgPlane_10;
	// UnityEngine.Vector3 Vuforia.StencilHideExcessAreaClipping::mBgPlaneLocalPos
	Vector3_t81  ___mBgPlaneLocalPos_11;
	// UnityEngine.Vector3 Vuforia.StencilHideExcessAreaClipping::mBgPlaneLocalScale
	Vector3_t81  ___mBgPlaneLocalScale_12;
};
