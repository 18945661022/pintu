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

// UnityEngine.Animation
struct Animation_t144;
// System.Collections.IEnumerator
struct IEnumerator_t95;
// UnityEngine.AnimationState
struct AnimationState_t897;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_WrapMode.h"
#include "UnityEngine_UnityEngine_PlayMode.h"

// System.Void UnityEngine.Animation::set_wrapMode(UnityEngine.WrapMode)
extern "C" void Animation_set_wrapMode_m405 (Animation_t144 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::Stop()
extern "C" void Animation_Stop_m407 (Animation_t144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::INTERNAL_CALL_Stop(UnityEngine.Animation)
extern "C" void Animation_INTERNAL_CALL_Stop_m4899 (Object_t * __this /* static, unused */, Animation_t144 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play()
extern "C" bool Animation_Play_m414 (Animation_t144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(UnityEngine.PlayMode)
extern "C" bool Animation_Play_m406 (Animation_t144 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
extern "C" bool Animation_PlayDefaultAnimation_m4900 (Animation_t144 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
extern "C" Object_t * Animation_GetEnumerator_m4901 (Animation_t144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
extern "C" AnimationState_t897 * Animation_GetStateAtIndex_m4902 (Animation_t144 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animation::GetStateCount()
extern "C" int32_t Animation_GetStateCount_m4903 (Animation_t144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
