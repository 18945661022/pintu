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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t2327;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m15322_gshared (DefaultComparer_t2327 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m15322(__this, method) (( void (*) (DefaultComparer_t2327 *, const MethodInfo*))DefaultComparer__ctor_m15322_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m15323_gshared (DefaultComparer_t2327 * __this, UIVertex_t276  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m15323(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2327 *, UIVertex_t276 , const MethodInfo*))DefaultComparer_GetHashCode_m15323_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m15324_gshared (DefaultComparer_t2327 * __this, UIVertex_t276  ___x, UIVertex_t276  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m15324(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2327 *, UIVertex_t276 , UIVertex_t276 , const MethodInfo*))DefaultComparer_Equals_m15324_gshared)(__this, ___x, ___y, method)
