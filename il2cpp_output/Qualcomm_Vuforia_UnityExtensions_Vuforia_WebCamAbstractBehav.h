﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Vuforia.WebCamImpl
struct WebCamImpl_t503;
// UnityEngine.Camera
struct Camera_t53;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Vuforia.WebCamAbstractBehaviour
struct  WebCamAbstractBehaviour_t64  : public MonoBehaviour_t10
{
	// System.Int32 Vuforia.WebCamAbstractBehaviour::RenderTextureLayer
	int32_t ___RenderTextureLayer_1;
	// System.Boolean Vuforia.WebCamAbstractBehaviour::mPlayModeRenderVideo
	bool ___mPlayModeRenderVideo_2;
	// System.String Vuforia.WebCamAbstractBehaviour::mDeviceNameSetInEditor
	String_t* ___mDeviceNameSetInEditor_3;
	// System.Boolean Vuforia.WebCamAbstractBehaviour::mFlipHorizontally
	bool ___mFlipHorizontally_4;
	// System.Boolean Vuforia.WebCamAbstractBehaviour::mTurnOffWebCam
	bool ___mTurnOffWebCam_5;
	// Vuforia.WebCamImpl Vuforia.WebCamAbstractBehaviour::mWebCamImpl
	WebCamImpl_t503 * ___mWebCamImpl_6;
	// UnityEngine.Camera Vuforia.WebCamAbstractBehaviour::mBackgroundCameraInstance
	Camera_t53 * ___mBackgroundCameraInstance_7;
};
