#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.TextGenerator
struct TextGenerator_t270;
// UnityEngine.Material
struct Material_t66;

#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic.h"
#include "UnityEngine_UI_UnityEngine_UI_FontData.h"

// UnityEngine.UI.Text
struct  Text_t268  : public MaskableGraphic_t250
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t224  ___m_FontData_22;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_23;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t270 * ___m_TextCache_24;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t270 * ___m_TextCacheForLayout_25;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_27;
};
struct Text_t268_StaticFields{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t66 * ___s_DefaultText_26;
};
