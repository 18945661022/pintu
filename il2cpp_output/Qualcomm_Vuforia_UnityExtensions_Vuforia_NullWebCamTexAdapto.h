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
// UnityEngine.Texture2D
struct Texture2D_t78;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WebCamTexAdaptor.h"
#include "mscorlib_System_DateTime.h"

// Vuforia.NullWebCamTexAdaptor
struct  NullWebCamTexAdaptor_t524  : public WebCamTexAdaptor_t523
{
	// UnityEngine.Texture2D Vuforia.NullWebCamTexAdaptor::mTexture
	Texture2D_t78 * ___mTexture_1;
	// System.Boolean Vuforia.NullWebCamTexAdaptor::mPseudoPlaying
	bool ___mPseudoPlaying_2;
	// System.Double Vuforia.NullWebCamTexAdaptor::mMsBetweenFrames
	double ___mMsBetweenFrames_3;
	// System.DateTime Vuforia.NullWebCamTexAdaptor::mLastFrame
	DateTime_t525  ___mLastFrame_4;
};
