#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Texture
struct Texture_t77;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t1012;
// System.String
struct String_t;
// UnityEngine.GUIContent
struct GUIContent_t413;
// UnityEngine.GUIStyle
struct GUIStyle_t142;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t962;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.GUILayout::Label(UnityEngine.Texture,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_Label_m5223 (Object_t * __this /* static, unused */, Texture_t77 * ___image, GUILayoutOptionU5BU5D_t1012* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_Label_m5224 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t1012* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::DoLabel(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_DoLabel_m5225 (Object_t * __this /* static, unused */, GUIContent_t413 * ___content, GUIStyle_t142 * ___style, GUILayoutOptionU5BU5D_t1012* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
extern "C" bool GUILayout_Button_m5226 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t1012* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoButton(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" bool GUILayout_DoButton_m5227 (Object_t * __this /* static, unused */, GUIContent_t413 * ___content, GUIStyle_t142 * ___style, GUILayoutOptionU5BU5D_t1012* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Space(System.Single)
extern "C" void GUILayout_Space_m5228 (Object_t * __this /* static, unused */, float ___pixels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::FlexibleSpace()
extern "C" void GUILayout_FlexibleSpace_m5229 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginHorizontal_m5230 (Object_t * __this /* static, unused */, GUILayoutOptionU5BU5D_t1012* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginHorizontal_m5231 (Object_t * __this /* static, unused */, GUIStyle_t142 * ___style, GUILayoutOptionU5BU5D_t1012* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginHorizontal_m5232 (Object_t * __this /* static, unused */, GUIContent_t413 * ___content, GUIStyle_t142 * ___style, GUILayoutOptionU5BU5D_t1012* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndHorizontal()
extern "C" void GUILayout_EndHorizontal_m5233 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginVertical_m5234 (Object_t * __this /* static, unused */, GUILayoutOptionU5BU5D_t1012* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginVertical_m5235 (Object_t * __this /* static, unused */, GUIContent_t413 * ___content, GUIStyle_t142 * ___style, GUILayoutOptionU5BU5D_t1012* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndVertical()
extern "C" void GUILayout_EndVertical_m5236 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern "C" GUILayoutOption_t962 * GUILayout_Width_m5237 (Object_t * __this /* static, unused */, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern "C" GUILayoutOption_t962 * GUILayout_Height_m5238 (Object_t * __this /* static, unused */, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandWidth(System.Boolean)
extern "C" GUILayoutOption_t962 * GUILayout_ExpandWidth_m5239 (Object_t * __this /* static, unused */, bool ___expand, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandHeight(System.Boolean)
extern "C" GUILayoutOption_t962 * GUILayout_ExpandHeight_m5240 (Object_t * __this /* static, unused */, bool ___expand, const MethodInfo* method) IL2CPP_METHOD_ATTR;
