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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t2314;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2303;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m15063_gshared (ShimEnumerator_t2314 * __this, Dictionary_2_t2303 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m15063(__this, ___host, method) (( void (*) (ShimEnumerator_t2314 *, Dictionary_2_t2303 *, const MethodInfo*))ShimEnumerator__ctor_m15063_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m15064_gshared (ShimEnumerator_t2314 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m15064(__this, method) (( bool (*) (ShimEnumerator_t2314 *, const MethodInfo*))ShimEnumerator_MoveNext_m15064_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1395  ShimEnumerator_get_Entry_m15065_gshared (ShimEnumerator_t2314 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m15065(__this, method) (( DictionaryEntry_t1395  (*) (ShimEnumerator_t2314 *, const MethodInfo*))ShimEnumerator_get_Entry_m15065_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m15066_gshared (ShimEnumerator_t2314 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m15066(__this, method) (( Object_t * (*) (ShimEnumerator_t2314 *, const MethodInfo*))ShimEnumerator_get_Key_m15066_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m15067_gshared (ShimEnumerator_t2314 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m15067(__this, method) (( Object_t * (*) (ShimEnumerator_t2314 *, const MethodInfo*))ShimEnumerator_get_Value_m15067_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m15068_gshared (ShimEnumerator_t2314 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m15068(__this, method) (( Object_t * (*) (ShimEnumerator_t2314 *, const MethodInfo*))ShimEnumerator_get_Current_m15068_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m15069_gshared (ShimEnumerator_t2314 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m15069(__this, method) (( void (*) (ShimEnumerator_t2314 *, const MethodInfo*))ShimEnumerator_Reset_m15069_gshared)(__this, method)
