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

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t860;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t3090;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t3091;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t95;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t419;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t2792;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t1008;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2796;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2799;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_52.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m22309_gshared (List_1_t860 * __this, const MethodInfo* method);
#define List_1__ctor_m22309(__this, method) (( void (*) (List_1_t860 *, const MethodInfo*))List_1__ctor_m22309_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m22310_gshared (List_1_t860 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m22310(__this, ___collection, method) (( void (*) (List_1_t860 *, Object_t*, const MethodInfo*))List_1__ctor_m22310_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m5794_gshared (List_1_t860 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m5794(__this, ___capacity, method) (( void (*) (List_1_t860 *, int32_t, const MethodInfo*))List_1__ctor_m5794_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m22311_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m22311(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22311_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22312_gshared (List_1_t860 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22312(__this, method) (( Object_t* (*) (List_1_t860 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22312_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m22313_gshared (List_1_t860 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m22313(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t860 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m22313_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m22314_gshared (List_1_t860 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m22314(__this, method) (( Object_t * (*) (List_1_t860 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m22314_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m22315_gshared (List_1_t860 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m22315(__this, ___item, method) (( int32_t (*) (List_1_t860 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m22315_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m22316_gshared (List_1_t860 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m22316(__this, ___item, method) (( bool (*) (List_1_t860 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m22316_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m22317_gshared (List_1_t860 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m22317(__this, ___item, method) (( int32_t (*) (List_1_t860 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m22317_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m22318_gshared (List_1_t860 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m22318(__this, ___index, ___item, method) (( void (*) (List_1_t860 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m22318_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m22319_gshared (List_1_t860 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m22319(__this, ___item, method) (( void (*) (List_1_t860 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m22319_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22320_gshared (List_1_t860 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22320(__this, method) (( bool (*) (List_1_t860 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22320_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m22321_gshared (List_1_t860 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m22321(__this, method) (( bool (*) (List_1_t860 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m22321_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m22322_gshared (List_1_t860 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m22322(__this, method) (( Object_t * (*) (List_1_t860 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m22322_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m22323_gshared (List_1_t860 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m22323(__this, method) (( bool (*) (List_1_t860 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m22323_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m22324_gshared (List_1_t860 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m22324(__this, method) (( bool (*) (List_1_t860 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m22324_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m22325_gshared (List_1_t860 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m22325(__this, ___index, method) (( Object_t * (*) (List_1_t860 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m22325_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m22326_gshared (List_1_t860 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m22326(__this, ___index, ___value, method) (( void (*) (List_1_t860 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m22326_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m22327_gshared (List_1_t860 * __this, UILineInfo_t415  ___item, const MethodInfo* method);
#define List_1_Add_m22327(__this, ___item, method) (( void (*) (List_1_t860 *, UILineInfo_t415 , const MethodInfo*))List_1_Add_m22327_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m22328_gshared (List_1_t860 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m22328(__this, ___newCount, method) (( void (*) (List_1_t860 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22328_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m22329_gshared (List_1_t860 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m22329(__this, ___collection, method) (( void (*) (List_1_t860 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22329_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m22330_gshared (List_1_t860 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m22330(__this, ___enumerable, method) (( void (*) (List_1_t860 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22330_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m22331_gshared (List_1_t860 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m22331(__this, ___collection, method) (( void (*) (List_1_t860 *, Object_t*, const MethodInfo*))List_1_AddRange_m22331_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2792 * List_1_AsReadOnly_m22332_gshared (List_1_t860 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m22332(__this, method) (( ReadOnlyCollection_1_t2792 * (*) (List_1_t860 *, const MethodInfo*))List_1_AsReadOnly_m22332_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m22333_gshared (List_1_t860 * __this, const MethodInfo* method);
#define List_1_Clear_m22333(__this, method) (( void (*) (List_1_t860 *, const MethodInfo*))List_1_Clear_m22333_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m22334_gshared (List_1_t860 * __this, UILineInfo_t415  ___item, const MethodInfo* method);
#define List_1_Contains_m22334(__this, ___item, method) (( bool (*) (List_1_t860 *, UILineInfo_t415 , const MethodInfo*))List_1_Contains_m22334_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m22335_gshared (List_1_t860 * __this, UILineInfoU5BU5D_t1008* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m22335(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t860 *, UILineInfoU5BU5D_t1008*, int32_t, const MethodInfo*))List_1_CopyTo_m22335_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t415  List_1_Find_m22336_gshared (List_1_t860 * __this, Predicate_1_t2796 * ___match, const MethodInfo* method);
#define List_1_Find_m22336(__this, ___match, method) (( UILineInfo_t415  (*) (List_1_t860 *, Predicate_1_t2796 *, const MethodInfo*))List_1_Find_m22336_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m22337_gshared (Object_t * __this /* static, unused */, Predicate_1_t2796 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m22337(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2796 *, const MethodInfo*))List_1_CheckMatch_m22337_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m22338_gshared (List_1_t860 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2796 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m22338(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t860 *, int32_t, int32_t, Predicate_1_t2796 *, const MethodInfo*))List_1_GetIndex_m22338_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t2791  List_1_GetEnumerator_m22339_gshared (List_1_t860 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m22339(__this, method) (( Enumerator_t2791  (*) (List_1_t860 *, const MethodInfo*))List_1_GetEnumerator_m22339_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m22340_gshared (List_1_t860 * __this, UILineInfo_t415  ___item, const MethodInfo* method);
#define List_1_IndexOf_m22340(__this, ___item, method) (( int32_t (*) (List_1_t860 *, UILineInfo_t415 , const MethodInfo*))List_1_IndexOf_m22340_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m22341_gshared (List_1_t860 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m22341(__this, ___start, ___delta, method) (( void (*) (List_1_t860 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22341_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m22342_gshared (List_1_t860 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m22342(__this, ___index, method) (( void (*) (List_1_t860 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22342_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m22343_gshared (List_1_t860 * __this, int32_t ___index, UILineInfo_t415  ___item, const MethodInfo* method);
#define List_1_Insert_m22343(__this, ___index, ___item, method) (( void (*) (List_1_t860 *, int32_t, UILineInfo_t415 , const MethodInfo*))List_1_Insert_m22343_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m22344_gshared (List_1_t860 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m22344(__this, ___collection, method) (( void (*) (List_1_t860 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22344_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m22345_gshared (List_1_t860 * __this, UILineInfo_t415  ___item, const MethodInfo* method);
#define List_1_Remove_m22345(__this, ___item, method) (( bool (*) (List_1_t860 *, UILineInfo_t415 , const MethodInfo*))List_1_Remove_m22345_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m22346_gshared (List_1_t860 * __this, Predicate_1_t2796 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m22346(__this, ___match, method) (( int32_t (*) (List_1_t860 *, Predicate_1_t2796 *, const MethodInfo*))List_1_RemoveAll_m22346_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m22347_gshared (List_1_t860 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m22347(__this, ___index, method) (( void (*) (List_1_t860 *, int32_t, const MethodInfo*))List_1_RemoveAt_m22347_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m22348_gshared (List_1_t860 * __this, const MethodInfo* method);
#define List_1_Reverse_m22348(__this, method) (( void (*) (List_1_t860 *, const MethodInfo*))List_1_Reverse_m22348_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m22349_gshared (List_1_t860 * __this, const MethodInfo* method);
#define List_1_Sort_m22349(__this, method) (( void (*) (List_1_t860 *, const MethodInfo*))List_1_Sort_m22349_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m22350_gshared (List_1_t860 * __this, Comparison_1_t2799 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m22350(__this, ___comparison, method) (( void (*) (List_1_t860 *, Comparison_1_t2799 *, const MethodInfo*))List_1_Sort_m22350_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t1008* List_1_ToArray_m22351_gshared (List_1_t860 * __this, const MethodInfo* method);
#define List_1_ToArray_m22351(__this, method) (( UILineInfoU5BU5D_t1008* (*) (List_1_t860 *, const MethodInfo*))List_1_ToArray_m22351_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m22352_gshared (List_1_t860 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m22352(__this, method) (( void (*) (List_1_t860 *, const MethodInfo*))List_1_TrimExcess_m22352_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m22353_gshared (List_1_t860 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m22353(__this, method) (( int32_t (*) (List_1_t860 *, const MethodInfo*))List_1_get_Capacity_m22353_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m22354_gshared (List_1_t860 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m22354(__this, ___value, method) (( void (*) (List_1_t860 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22354_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m22355_gshared (List_1_t860 * __this, const MethodInfo* method);
#define List_1_get_Count_m22355(__this, method) (( int32_t (*) (List_1_t860 *, const MethodInfo*))List_1_get_Count_m22355_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t415  List_1_get_Item_m22356_gshared (List_1_t860 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m22356(__this, ___index, method) (( UILineInfo_t415  (*) (List_1_t860 *, int32_t, const MethodInfo*))List_1_get_Item_m22356_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m22357_gshared (List_1_t860 * __this, int32_t ___index, UILineInfo_t415  ___value, const MethodInfo* method);
#define List_1_set_Item_m22357(__this, ___index, ___value, method) (( void (*) (List_1_t860 *, int32_t, UILineInfo_t415 , const MethodInfo*))List_1_set_Item_m22357_gshared)(__this, ___index, ___value, method)
