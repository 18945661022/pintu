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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
struct ShimEnumerator_t2882;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2869;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m23532_gshared (ShimEnumerator_t2882 * __this, Dictionary_2_t2869 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m23532(__this, ___host, method) (( void (*) (ShimEnumerator_t2882 *, Dictionary_2_t2869 *, const MethodInfo*))ShimEnumerator__ctor_m23532_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m23533_gshared (ShimEnumerator_t2882 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m23533(__this, method) (( bool (*) (ShimEnumerator_t2882 *, const MethodInfo*))ShimEnumerator_MoveNext_m23533_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t1395  ShimEnumerator_get_Entry_m23534_gshared (ShimEnumerator_t2882 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m23534(__this, method) (( DictionaryEntry_t1395  (*) (ShimEnumerator_t2882 *, const MethodInfo*))ShimEnumerator_get_Entry_m23534_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m23535_gshared (ShimEnumerator_t2882 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m23535(__this, method) (( Object_t * (*) (ShimEnumerator_t2882 *, const MethodInfo*))ShimEnumerator_get_Key_m23535_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m23536_gshared (ShimEnumerator_t2882 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m23536(__this, method) (( Object_t * (*) (ShimEnumerator_t2882 *, const MethodInfo*))ShimEnumerator_get_Value_m23536_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m23537_gshared (ShimEnumerator_t2882 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m23537(__this, method) (( Object_t * (*) (ShimEnumerator_t2882 *, const MethodInfo*))ShimEnumerator_get_Current_m23537_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::Reset()
extern "C" void ShimEnumerator_Reset_m23538_gshared (ShimEnumerator_t2882 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m23538(__this, method) (( void (*) (ShimEnumerator_t2882 *, const MethodInfo*))ShimEnumerator_Reset_m23538_gshared)(__this, method)
