#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Shader
struct Shader_t124;
// Vuforia.IExcessAreaClipping
struct IExcessAreaClipping_t465;
// Vuforia.VuforiaAbstractBehaviour
struct VuforiaAbstractBehaviour_t62;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_HideExcessAreaAbstr_0.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Vuforia.HideExcessAreaAbstractBehaviour
struct  HideExcessAreaAbstractBehaviour_t19  : public MonoBehaviour_t10
{
	// UnityEngine.Shader Vuforia.HideExcessAreaAbstractBehaviour::matteShader
	Shader_t124 * ___matteShader_1;
	// Vuforia.HideExcessAreaAbstractBehaviour/CLIPPING_MODE Vuforia.HideExcessAreaAbstractBehaviour::clippingMode
	int32_t ___clippingMode_2;
	// Vuforia.IExcessAreaClipping Vuforia.HideExcessAreaAbstractBehaviour::mClippingImpl
	Object_t * ___mClippingImpl_3;
	// Vuforia.VuforiaAbstractBehaviour Vuforia.HideExcessAreaAbstractBehaviour::mVuforiaBehaviour
	VuforiaAbstractBehaviour_t62 * ___mVuforiaBehaviour_4;
	// UnityEngine.Vector3 Vuforia.HideExcessAreaAbstractBehaviour::mPlaneOffset
	Vector3_t81  ___mPlaneOffset_5;
};
