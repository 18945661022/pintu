﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Color32.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Vector4.h"
#include "UnityEngine_UnityEngine_UIVertex.h"

// UnityEngine.UIVertex
struct  UIVertex_t276 
{
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_t81  ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_t81  ___normal_1;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_t380  ___color_2;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv0
	Vector2_t141  ___uv0_3;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv1
	Vector2_t141  ___uv1_4;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_t372  ___tangent_5;
};
struct UIVertex_t276_StaticFields{
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_t380  ___s_DefaultColor_6;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_t372  ___s_DefaultTangent_7;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_t276  ___simpleVert_8;
};