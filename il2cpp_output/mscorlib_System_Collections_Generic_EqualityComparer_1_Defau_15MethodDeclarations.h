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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t2976;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m24363_gshared (DefaultComparer_t2976 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m24363(__this, method) (( void (*) (DefaultComparer_t2976 *, const MethodInfo*))DefaultComparer__ctor_m24363_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m24364_gshared (DefaultComparer_t2976 * __this, DateTime_t525  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m24364(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2976 *, DateTime_t525 , const MethodInfo*))DefaultComparer_GetHashCode_m24364_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m24365_gshared (DefaultComparer_t2976 * __this, DateTime_t525  ___x, DateTime_t525  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m24365(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2976 *, DateTime_t525 , DateTime_t525 , const MethodInfo*))DefaultComparer_Equals_m24365_gshared)(__this, ___x, ___y, method)
