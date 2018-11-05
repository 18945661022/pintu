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

#include "mscorlib_System_Object.h"

// UnityEngine.UI.StencilMaterial/MatEntry
struct  MatEntry_t303  : public Object_t
{
	// UnityEngine.Material UnityEngine.UI.StencilMaterial/MatEntry::baseMat
	Material_t66 * ___baseMat_0;
	// UnityEngine.Material UnityEngine.UI.StencilMaterial/MatEntry::customMat
	Material_t66 * ___customMat_1;
	// System.Int32 UnityEngine.UI.StencilMaterial/MatEntry::count
	int32_t ___count_2;
	// System.Int32 UnityEngine.UI.StencilMaterial/MatEntry::stencilID
	int32_t ___stencilID_3;
};
