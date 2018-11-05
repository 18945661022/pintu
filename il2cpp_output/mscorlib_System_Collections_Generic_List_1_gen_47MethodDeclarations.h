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

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t859;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t3087;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t3088;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t95;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t3089;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t2783;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t1007;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t2787;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2790;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_51.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m22165_gshared (List_1_t859 * __this, const MethodInfo* method);
#define List_1__ctor_m22165(__this, method) (( void (*) (List_1_t859 *, const MethodInfo*))List_1__ctor_m22165_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m22166_gshared (List_1_t859 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m22166(__this, ___collection, method) (( void (*) (List_1_t859 *, Object_t*, const MethodInfo*))List_1__ctor_m22166_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m5793_gshared (List_1_t859 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m5793(__this, ___capacity, method) (( void (*) (List_1_t859 *, int32_t, const MethodInfo*))List_1__ctor_m5793_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m22167_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m22167(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22167_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22168_gshared (List_1_t859 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22168(__this, method) (( Object_t* (*) (List_1_t859 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22168_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m22169_gshared (List_1_t859 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m22169(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t859 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m22169_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m22170_gshared (List_1_t859 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m22170(__this, method) (( Object_t * (*) (List_1_t859 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m22170_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m22171_gshared (List_1_t859 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m22171(__this, ___item, method) (( int32_t (*) (List_1_t859 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m22171_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m22172_gshared (List_1_t859 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m22172(__this, ___item, method) (( bool (*) (List_1_t859 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m22172_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m22173_gshared (List_1_t859 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m22173(__this, ___item, method) (( int32_t (*) (List_1_t859 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m22173_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m22174_gshared (List_1_t859 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m22174(__this, ___index, ___item, method) (( void (*) (List_1_t859 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m22174_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m22175_gshared (List_1_t859 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m22175(__this, ___item, method) (( void (*) (List_1_t859 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m22175_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22176_gshared (List_1_t859 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22176(__this, method) (( bool (*) (List_1_t859 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22176_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m22177_gshared (List_1_t859 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m22177(__this, method) (( bool (*) (List_1_t859 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m22177_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m22178_gshared (List_1_t859 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m22178(__this, method) (( Object_t * (*) (List_1_t859 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m22178_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m22179_gshared (List_1_t859 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m22179(__this, method) (( bool (*) (List_1_t859 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m22179_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m22180_gshared (List_1_t859 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m22180(__this, method) (( bool (*) (List_1_t859 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m22180_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m22181_gshared (List_1_t859 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m22181(__this, ___index, method) (( Object_t * (*) (List_1_t859 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m22181_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m22182_gshared (List_1_t859 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m22182(__this, ___index, ___value, method) (( void (*) (List_1_t859 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m22182_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m22183_gshared (List_1_t859 * __this, UICharInfo_t417  ___item, const MethodInfo* method);
#define List_1_Add_m22183(__this, ___item, method) (( void (*) (List_1_t859 *, UICharInfo_t417 , const MethodInfo*))List_1_Add_m22183_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m22184_gshared (List_1_t859 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m22184(__this, ___newCount, method) (( void (*) (List_1_t859 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22184_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m22185_gshared (List_1_t859 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m22185(__this, ___collection, method) (( void (*) (List_1_t859 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22185_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m22186_gshared (List_1_t859 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m22186(__this, ___enumerable, method) (( void (*) (List_1_t859 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22186_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m22187_gshared (List_1_t859 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m22187(__this, ___collection, method) (( void (*) (List_1_t859 *, Object_t*, const MethodInfo*))List_1_AddRange_m22187_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2783 * List_1_AsReadOnly_m22188_gshared (List_1_t859 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m22188(__this, method) (( ReadOnlyCollection_1_t2783 * (*) (List_1_t859 *, const MethodInfo*))List_1_AsReadOnly_m22188_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m22189_gshared (List_1_t859 * __this, const MethodInfo* method);
#define List_1_Clear_m22189(__this, method) (( void (*) (List_1_t859 *, const MethodInfo*))List_1_Clear_m22189_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m22190_gshared (List_1_t859 * __this, UICharInfo_t417  ___item, const MethodInfo* method);
#define List_1_Contains_m22190(__this, ___item, method) (( bool (*) (List_1_t859 *, UICharInfo_t417 , const MethodInfo*))List_1_Contains_m22190_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m22191_gshared (List_1_t859 * __this, UICharInfoU5BU5D_t1007* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m22191(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t859 *, UICharInfoU5BU5D_t1007*, int32_t, const MethodInfo*))List_1_CopyTo_m22191_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t417  List_1_Find_m22192_gshared (List_1_t859 * __this, Predicate_1_t2787 * ___match, const MethodInfo* method);
#define List_1_Find_m22192(__this, ___match, method) (( UICharInfo_t417  (*) (List_1_t859 *, Predicate_1_t2787 *, const MethodInfo*))List_1_Find_m22192_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m22193_gshared (Object_t * __this /* static, unused */, Predicate_1_t2787 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m22193(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2787 *, const MethodInfo*))List_1_CheckMatch_m22193_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m22194_gshared (List_1_t859 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2787 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m22194(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t859 *, int32_t, int32_t, Predicate_1_t2787 *, const MethodInfo*))List_1_GetIndex_m22194_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t2782  List_1_GetEnumerator_m22195_gshared (List_1_t859 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m22195(__this, method) (( Enumerator_t2782  (*) (List_1_t859 *, const MethodInfo*))List_1_GetEnumerator_m22195_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m22196_gshared (List_1_t859 * __this, UICharInfo_t417  ___item, const MethodInfo* method);
#define List_1_IndexOf_m22196(__this, ___item, method) (( int32_t (*) (List_1_t859 *, UICharInfo_t417 , const MethodInfo*))List_1_IndexOf_m22196_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m22197_gshared (List_1_t859 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m22197(__this, ___start, ___delta, method) (( void (*) (List_1_t859 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22197_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m22198_gshared (List_1_t859 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m22198(__this, ___index, method) (( void (*) (List_1_t859 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22198_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m22199_gshared (List_1_t859 * __this, int32_t ___index, UICharInfo_t417  ___item, const MethodInfo* method);
#define List_1_Insert_m22199(__this, ___index, ___item, method) (( void (*) (List_1_t859 *, int32_t, UICharInfo_t417 , const MethodInfo*))List_1_Insert_m22199_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m22200_gshared (List_1_t859 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m22200(__this, ___collection, method) (( void (*) (List_1_t859 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22200_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m22201_gshared (List_1_t859 * __this, UICharInfo_t417  ___item, const MethodInfo* method);
#define List_1_Remove_m22201(__this, ___item, method) (( bool (*) (List_1_t859 *, UICharInfo_t417 , const MethodInfo*))List_1_Remove_m22201_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m22202_gshared (List_1_t859 * __this, Predicate_1_t2787 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m22202(__this, ___match, method) (( int32_t (*) (List_1_t859 *, Predicate_1_t2787 *, const MethodInfo*))List_1_RemoveAll_m22202_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m22203_gshared (List_1_t859 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m22203(__this, ___index, method) (( void (*) (List_1_t859 *, int32_t, const MethodInfo*))List_1_RemoveAt_m22203_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m22204_gshared (List_1_t859 * __this, const MethodInfo* method);
#define List_1_Reverse_m22204(__this, method) (( void (*) (List_1_t859 *, const MethodInfo*))List_1_Reverse_m22204_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m22205_gshared (List_1_t859 * __this, const MethodInfo* method);
#define List_1_Sort_m22205(__this, method) (( void (*) (List_1_t859 *, const MethodInfo*))List_1_Sort_m22205_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m22206_gshared (List_1_t859 * __this, Comparison_1_t2790 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m22206(__this, ___comparison, method) (( void (*) (List_1_t859 *, Comparison_1_t2790 *, const MethodInfo*))List_1_Sort_m22206_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t1007* List_1_ToArray_m22207_gshared (List_1_t859 * __this, const MethodInfo* method);
#define List_1_ToArray_m22207(__this, method) (( UICharInfoU5BU5D_t1007* (*) (List_1_t859 *, const MethodInfo*))List_1_ToArray_m22207_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m22208_gshared (List_1_t859 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m22208(__this, method) (( void (*) (List_1_t859 *, const MethodInfo*))List_1_TrimExcess_m22208_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m22209_gshared (List_1_t859 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m22209(__this, method) (( int32_t (*) (List_1_t859 *, const MethodInfo*))List_1_get_Capacity_m22209_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m22210_gshared (List_1_t859 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m22210(__this, ___value, method) (( void (*) (List_1_t859 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22210_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m22211_gshared (List_1_t859 * __this, const MethodInfo* method);
#define List_1_get_Count_m22211(__this, method) (( int32_t (*) (List_1_t859 *, const MethodInfo*))List_1_get_Count_m22211_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t417  List_1_get_Item_m22212_gshared (List_1_t859 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m22212(__this, ___index, method) (( UICharInfo_t417  (*) (List_1_t859 *, int32_t, const MethodInfo*))List_1_get_Item_m22212_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m22213_gshared (List_1_t859 * __this, int32_t ___index, UICharInfo_t417  ___value, const MethodInfo* method);
#define List_1_set_Item_m22213(__this, ___index, ___value, method) (( void (*) (List_1_t859 *, int32_t, UICharInfo_t417 , const MethodInfo*))List_1_set_Item_m22213_gshared)(__this, ___index, ___value, method)
