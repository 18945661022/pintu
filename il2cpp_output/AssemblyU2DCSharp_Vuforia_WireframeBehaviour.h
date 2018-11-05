#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t66;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Color.h"

// Vuforia.WireframeBehaviour
struct  WireframeBehaviour_t65  : public MonoBehaviour_t10
{
	// UnityEngine.Material Vuforia.WireframeBehaviour::mLineMaterial
	Material_t66 * ___mLineMaterial_1;
	// System.Boolean Vuforia.WireframeBehaviour::ShowLines
	bool ___ShowLines_2;
	// UnityEngine.Color Vuforia.WireframeBehaviour::LineColor
	Color_t67  ___LineColor_3;
};
