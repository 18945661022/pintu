﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t53;
// Vuforia.VuforiaAbstractBehaviour
struct VuforiaAbstractBehaviour_t62;
// UnityEngine.Mesh
struct Mesh_t126;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vid.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Vuforia.BackgroundPlaneAbstractBehaviour
struct  BackgroundPlaneAbstractBehaviour_t2  : public MonoBehaviour_t10
{
	// Vuforia.VuforiaRenderer/VideoTextureInfo Vuforia.BackgroundPlaneAbstractBehaviour::mTextureInfo
	VideoTextureInfo_t439  ___mTextureInfo_1;
	// System.Int32 Vuforia.BackgroundPlaneAbstractBehaviour::mViewWidth
	int32_t ___mViewWidth_2;
	// System.Int32 Vuforia.BackgroundPlaneAbstractBehaviour::mViewHeight
	int32_t ___mViewHeight_3;
	// System.Boolean Vuforia.BackgroundPlaneAbstractBehaviour::mVideoBgConfigChanged
	bool ___mVideoBgConfigChanged_4;
	// UnityEngine.Camera Vuforia.BackgroundPlaneAbstractBehaviour::mCamera
	Camera_t53 * ___mCamera_5;
	// Vuforia.VuforiaAbstractBehaviour Vuforia.BackgroundPlaneAbstractBehaviour::mQBehaviour
	VuforiaAbstractBehaviour_t62 * ___mQBehaviour_6;
	// System.Int32 Vuforia.BackgroundPlaneAbstractBehaviour::defaultNumDivisions
	int32_t ___defaultNumDivisions_8;
	// UnityEngine.Mesh Vuforia.BackgroundPlaneAbstractBehaviour::mMesh
	Mesh_t126 * ___mMesh_9;
	// System.Single Vuforia.BackgroundPlaneAbstractBehaviour::mStereoDepth
	float ___mStereoDepth_10;
	// UnityEngine.Vector3 Vuforia.BackgroundPlaneAbstractBehaviour::mBackgroundOffset
	Vector3_t81  ___mBackgroundOffset_11;
	// Vuforia.VuforiaAbstractBehaviour Vuforia.BackgroundPlaneAbstractBehaviour::mVuforiaBehaviour
	VuforiaAbstractBehaviour_t62 * ___mVuforiaBehaviour_12;
	// System.Int32 Vuforia.BackgroundPlaneAbstractBehaviour::mNumDivisions
	int32_t ___mNumDivisions_13;
};
struct BackgroundPlaneAbstractBehaviour_t2_StaticFields{
	// System.Single Vuforia.BackgroundPlaneAbstractBehaviour::maxDisplacement
	float ___maxDisplacement_7;
};
