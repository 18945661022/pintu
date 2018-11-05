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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>
struct DefaultComparer_t2885;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>::.ctor()
extern "C" void DefaultComparer__ctor_m23547_gshared (DefaultComparer_t2885 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m23547(__this, method) (( void (*) (DefaultComparer_t2885 *, const MethodInfo*))DefaultComparer__ctor_m23547_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m23548_gshared (DefaultComparer_t2885 * __this, bool ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m23548(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2885 *, bool, const MethodInfo*))DefaultComparer_GetHashCode_m23548_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m23549_gshared (DefaultComparer_t2885 * __this, bool ___x, bool ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m23549(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2885 *, bool, bool, const MethodInfo*))DefaultComparer_Equals_m23549_gshared)(__this, ___x, ___y, method)
