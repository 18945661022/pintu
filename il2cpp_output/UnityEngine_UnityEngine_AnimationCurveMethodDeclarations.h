﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.AnimationCurve
struct AnimationCurve_t894;
struct AnimationCurve_t894_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t1009;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m4890 (AnimationCurve_t894 * __this, KeyframeU5BU5D_t1009* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m4891 (AnimationCurve_t894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m4892 (AnimationCurve_t894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m4893 (AnimationCurve_t894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m4894 (AnimationCurve_t894 * __this, KeyframeU5BU5D_t1009* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t894_marshal(const AnimationCurve_t894& unmarshaled, AnimationCurve_t894_marshaled& marshaled);
extern "C" void AnimationCurve_t894_marshal_back(const AnimationCurve_t894_marshaled& marshaled, AnimationCurve_t894& unmarshaled);
extern "C" void AnimationCurve_t894_marshal_cleanup(AnimationCurve_t894_marshaled& marshaled);
