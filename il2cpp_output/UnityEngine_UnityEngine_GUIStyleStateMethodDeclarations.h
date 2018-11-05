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

// UnityEngine.GUIStyleState
struct GUIStyleState_t970;
// UnityEngine.GUIStyle
struct GUIStyle_t142;
// UnityEngine.Texture2D
struct Texture2D_t78;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.GUIStyleState::.ctor()
extern "C" void GUIStyleState__ctor_m5380 (GUIStyleState_t970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::.ctor(UnityEngine.GUIStyle,System.IntPtr)
extern "C" void GUIStyleState__ctor_m5381 (GUIStyleState_t970 * __this, GUIStyle_t142 * ___sourceStyle, IntPtr_t ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::RefreshAssetReference()
extern "C" void GUIStyleState_RefreshAssetReference_m5382 (GUIStyleState_t970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::Finalize()
extern "C" void GUIStyleState_Finalize_m5383 (GUIStyleState_t970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::Init()
extern "C" void GUIStyleState_Init_m5384 (GUIStyleState_t970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::Cleanup()
extern "C" void GUIStyleState_Cleanup_m5385 (GUIStyleState_t970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::SetBackgroundInternal(UnityEngine.Texture2D)
extern "C" void GUIStyleState_SetBackgroundInternal_m5386 (GUIStyleState_t970 * __this, Texture2D_t78 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.GUIStyleState::GetBackgroundInternal()
extern "C" Texture2D_t78 * GUIStyleState_GetBackgroundInternal_m5387 (GUIStyleState_t970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::set_background(UnityEngine.Texture2D)
extern "C" void GUIStyleState_set_background_m5388 (GUIStyleState_t970 * __this, Texture2D_t78 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
extern "C" void GUIStyleState_set_textColor_m5389 (GUIStyleState_t970 * __this, Color_t67  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::INTERNAL_set_textColor(UnityEngine.Color&)
extern "C" void GUIStyleState_INTERNAL_set_textColor_m5390 (GUIStyleState_t970 * __this, Color_t67 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
