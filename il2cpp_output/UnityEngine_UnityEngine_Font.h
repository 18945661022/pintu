#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<UnityEngine.Font>
struct Action_1_t398;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t946;

#include "UnityEngine_UnityEngine_Object.h"

// UnityEngine.Font
struct  Font_t225  : public Object_t96
{
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t946 * ___m_FontTextureRebuildCallback_2;
};
struct Font_t225_StaticFields{
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_t398 * ___textureRebuilt_1;
};
