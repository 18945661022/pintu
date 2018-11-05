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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>
struct ShimEnumerator_t2551;
// System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>
struct Dictionary_2_t2538;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18669_gshared (ShimEnumerator_t2551 * __this, Dictionary_2_t2538 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m18669(__this, ___host, method) (( void (*) (ShimEnumerator_t2551 *, Dictionary_2_t2538 *, const MethodInfo*))ShimEnumerator__ctor_m18669_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18670_gshared (ShimEnumerator_t2551 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m18670(__this, method) (( bool (*) (ShimEnumerator_t2551 *, const MethodInfo*))ShimEnumerator_MoveNext_m18670_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::get_Entry()
extern "C" DictionaryEntry_t1395  ShimEnumerator_get_Entry_m18671_gshared (ShimEnumerator_t2551 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m18671(__this, method) (( DictionaryEntry_t1395  (*) (ShimEnumerator_t2551 *, const MethodInfo*))ShimEnumerator_get_Entry_m18671_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18672_gshared (ShimEnumerator_t2551 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m18672(__this, method) (( Object_t * (*) (ShimEnumerator_t2551 *, const MethodInfo*))ShimEnumerator_get_Key_m18672_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18673_gshared (ShimEnumerator_t2551 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m18673(__this, method) (( Object_t * (*) (ShimEnumerator_t2551 *, const MethodInfo*))ShimEnumerator_get_Value_m18673_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m18674_gshared (ShimEnumerator_t2551 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m18674(__this, method) (( Object_t * (*) (ShimEnumerator_t2551 *, const MethodInfo*))ShimEnumerator_get_Current_m18674_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::Reset()
extern "C" void ShimEnumerator_Reset_m18675_gshared (ShimEnumerator_t2551 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m18675(__this, method) (( void (*) (ShimEnumerator_t2551 *, const MethodInfo*))ShimEnumerator_Reset_m18675_gshared)(__this, method)
