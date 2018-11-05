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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t2289;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2276;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m14743_gshared (ShimEnumerator_t2289 * __this, Dictionary_2_t2276 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m14743(__this, ___host, method) (( void (*) (ShimEnumerator_t2289 *, Dictionary_2_t2276 *, const MethodInfo*))ShimEnumerator__ctor_m14743_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m14744_gshared (ShimEnumerator_t2289 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m14744(__this, method) (( bool (*) (ShimEnumerator_t2289 *, const MethodInfo*))ShimEnumerator_MoveNext_m14744_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1395  ShimEnumerator_get_Entry_m14745_gshared (ShimEnumerator_t2289 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m14745(__this, method) (( DictionaryEntry_t1395  (*) (ShimEnumerator_t2289 *, const MethodInfo*))ShimEnumerator_get_Entry_m14745_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m14746_gshared (ShimEnumerator_t2289 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m14746(__this, method) (( Object_t * (*) (ShimEnumerator_t2289 *, const MethodInfo*))ShimEnumerator_get_Key_m14746_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m14747_gshared (ShimEnumerator_t2289 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m14747(__this, method) (( Object_t * (*) (ShimEnumerator_t2289 *, const MethodInfo*))ShimEnumerator_get_Value_m14747_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m14748_gshared (ShimEnumerator_t2289 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m14748(__this, method) (( Object_t * (*) (ShimEnumerator_t2289 *, const MethodInfo*))ShimEnumerator_get_Current_m14748_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m14749_gshared (ShimEnumerator_t2289 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m14749(__this, method) (( void (*) (ShimEnumerator_t2289 *, const MethodInfo*))ShimEnumerator_Reset_m14749_gshared)(__this, method)
