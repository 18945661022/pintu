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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeTypedArgument>
struct DefaultComparer_t2937;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_CustomAttributeTypedArgument.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeTypedArgument>::.ctor()
extern "C" void DefaultComparer__ctor_m23975_gshared (DefaultComparer_t2937 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m23975(__this, method) (( void (*) (DefaultComparer_t2937 *, const MethodInfo*))DefaultComparer__ctor_m23975_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeTypedArgument>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m23976_gshared (DefaultComparer_t2937 * __this, CustomAttributeTypedArgument_t1681  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m23976(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2937 *, CustomAttributeTypedArgument_t1681 , const MethodInfo*))DefaultComparer_GetHashCode_m23976_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeTypedArgument>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m23977_gshared (DefaultComparer_t2937 * __this, CustomAttributeTypedArgument_t1681  ___x, CustomAttributeTypedArgument_t1681  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m23977(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2937 *, CustomAttributeTypedArgument_t1681 , CustomAttributeTypedArgument_t1681 , const MethodInfo*))DefaultComparer_Equals_m23977_gshared)(__this, ___x, ___y, method)
