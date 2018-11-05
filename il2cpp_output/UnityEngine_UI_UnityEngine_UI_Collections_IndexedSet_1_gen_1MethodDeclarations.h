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

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t2275;
// System.Collections.IEnumerator
struct IEnumerator_t95;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2392;
// System.Object[]
struct ObjectU5BU5D_t110;
// System.Predicate`1<System.Object>
struct Predicate_1_t2170;
// System.Comparison`1<System.Object>
struct Comparison_1_t2176;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m14585_gshared (IndexedSet_1_t2275 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m14585(__this, method) (( void (*) (IndexedSet_1_t2275 *, const MethodInfo*))IndexedSet_1__ctor_m14585_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14587_gshared (IndexedSet_1_t2275 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14587(__this, method) (( Object_t * (*) (IndexedSet_1_t2275 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14587_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m14589_gshared (IndexedSet_1_t2275 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m14589(__this, ___item, method) (( void (*) (IndexedSet_1_t2275 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m14589_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m14591_gshared (IndexedSet_1_t2275 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m14591(__this, ___item, method) (( bool (*) (IndexedSet_1_t2275 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m14591_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m14593_gshared (IndexedSet_1_t2275 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m14593(__this, method) (( Object_t* (*) (IndexedSet_1_t2275 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m14593_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m14595_gshared (IndexedSet_1_t2275 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m14595(__this, method) (( void (*) (IndexedSet_1_t2275 *, const MethodInfo*))IndexedSet_1_Clear_m14595_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m14597_gshared (IndexedSet_1_t2275 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m14597(__this, ___item, method) (( bool (*) (IndexedSet_1_t2275 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m14597_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m14599_gshared (IndexedSet_1_t2275 * __this, ObjectU5BU5D_t110* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m14599(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t2275 *, ObjectU5BU5D_t110*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m14599_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m14601_gshared (IndexedSet_1_t2275 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m14601(__this, method) (( int32_t (*) (IndexedSet_1_t2275 *, const MethodInfo*))IndexedSet_1_get_Count_m14601_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m14603_gshared (IndexedSet_1_t2275 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m14603(__this, method) (( bool (*) (IndexedSet_1_t2275 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m14603_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m14605_gshared (IndexedSet_1_t2275 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m14605(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t2275 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m14605_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m14607_gshared (IndexedSet_1_t2275 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m14607(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t2275 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m14607_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m14609_gshared (IndexedSet_1_t2275 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m14609(__this, ___index, method) (( void (*) (IndexedSet_1_t2275 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m14609_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m14611_gshared (IndexedSet_1_t2275 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m14611(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t2275 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m14611_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m14613_gshared (IndexedSet_1_t2275 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m14613(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t2275 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m14613_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m14614_gshared (IndexedSet_1_t2275 * __this, Predicate_1_t2170 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m14614(__this, ___match, method) (( void (*) (IndexedSet_1_t2275 *, Predicate_1_t2170 *, const MethodInfo*))IndexedSet_1_RemoveAll_m14614_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m14615_gshared (IndexedSet_1_t2275 * __this, Comparison_1_t2176 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m14615(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t2275 *, Comparison_1_t2176 *, const MethodInfo*))IndexedSet_1_Sort_m14615_gshared)(__this, ___sortLayoutFunction, method)
