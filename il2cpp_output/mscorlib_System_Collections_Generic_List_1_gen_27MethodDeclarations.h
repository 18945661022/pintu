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

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t608;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t807;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2998;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t95;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3039;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t2513;
// System.Int32[]
struct Int32U5BU5D_t128;
// System.Predicate`1<System.Int32>
struct Predicate_1_t2516;
// System.Comparison`1<System.Int32>
struct Comparison_1_t2520;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_7.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m4357_gshared (List_1_t608 * __this, const MethodInfo* method);
#define List_1__ctor_m4357(__this, method) (( void (*) (List_1_t608 *, const MethodInfo*))List_1__ctor_m4357_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m4287_gshared (List_1_t608 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m4287(__this, ___collection, method) (( void (*) (List_1_t608 *, Object_t*, const MethodInfo*))List_1__ctor_m4287_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m18140_gshared (List_1_t608 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m18140(__this, ___capacity, method) (( void (*) (List_1_t608 *, int32_t, const MethodInfo*))List_1__ctor_m18140_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m18141_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m18141(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m18141_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18142_gshared (List_1_t608 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18142(__this, method) (( Object_t* (*) (List_1_t608 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18142_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m18143_gshared (List_1_t608 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m18143(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t608 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18143_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m18144_gshared (List_1_t608 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m18144(__this, method) (( Object_t * (*) (List_1_t608 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18144_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m18145_gshared (List_1_t608 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m18145(__this, ___item, method) (( int32_t (*) (List_1_t608 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18145_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m18146_gshared (List_1_t608 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m18146(__this, ___item, method) (( bool (*) (List_1_t608 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18146_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m18147_gshared (List_1_t608 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m18147(__this, ___item, method) (( int32_t (*) (List_1_t608 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18147_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m18148_gshared (List_1_t608 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m18148(__this, ___index, ___item, method) (( void (*) (List_1_t608 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18148_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m18149_gshared (List_1_t608 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m18149(__this, ___item, method) (( void (*) (List_1_t608 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18149_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18150_gshared (List_1_t608 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18150(__this, method) (( bool (*) (List_1_t608 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18150_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m18151_gshared (List_1_t608 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m18151(__this, method) (( bool (*) (List_1_t608 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18151_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m18152_gshared (List_1_t608 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m18152(__this, method) (( Object_t * (*) (List_1_t608 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18152_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m18153_gshared (List_1_t608 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m18153(__this, method) (( bool (*) (List_1_t608 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18153_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m18154_gshared (List_1_t608 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m18154(__this, method) (( bool (*) (List_1_t608 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18154_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m18155_gshared (List_1_t608 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m18155(__this, ___index, method) (( Object_t * (*) (List_1_t608 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18155_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m18156_gshared (List_1_t608 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m18156(__this, ___index, ___value, method) (( void (*) (List_1_t608 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18156_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m18157_gshared (List_1_t608 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m18157(__this, ___item, method) (( void (*) (List_1_t608 *, int32_t, const MethodInfo*))List_1_Add_m18157_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m18158_gshared (List_1_t608 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m18158(__this, ___newCount, method) (( void (*) (List_1_t608 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m18158_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m18159_gshared (List_1_t608 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m18159(__this, ___collection, method) (( void (*) (List_1_t608 *, Object_t*, const MethodInfo*))List_1_AddCollection_m18159_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m18160_gshared (List_1_t608 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m18160(__this, ___enumerable, method) (( void (*) (List_1_t608 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m18160_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m18161_gshared (List_1_t608 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m18161(__this, ___collection, method) (( void (*) (List_1_t608 *, Object_t*, const MethodInfo*))List_1_AddRange_m18161_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2513 * List_1_AsReadOnly_m18162_gshared (List_1_t608 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m18162(__this, method) (( ReadOnlyCollection_1_t2513 * (*) (List_1_t608 *, const MethodInfo*))List_1_AsReadOnly_m18162_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m18163_gshared (List_1_t608 * __this, const MethodInfo* method);
#define List_1_Clear_m18163(__this, method) (( void (*) (List_1_t608 *, const MethodInfo*))List_1_Clear_m18163_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m18164_gshared (List_1_t608 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m18164(__this, ___item, method) (( bool (*) (List_1_t608 *, int32_t, const MethodInfo*))List_1_Contains_m18164_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m18165_gshared (List_1_t608 * __this, Int32U5BU5D_t128* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m18165(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t608 *, Int32U5BU5D_t128*, int32_t, const MethodInfo*))List_1_CopyTo_m18165_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m18166_gshared (List_1_t608 * __this, Predicate_1_t2516 * ___match, const MethodInfo* method);
#define List_1_Find_m18166(__this, ___match, method) (( int32_t (*) (List_1_t608 *, Predicate_1_t2516 *, const MethodInfo*))List_1_Find_m18166_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m18167_gshared (Object_t * __this /* static, unused */, Predicate_1_t2516 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m18167(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2516 *, const MethodInfo*))List_1_CheckMatch_m18167_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m18168_gshared (List_1_t608 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2516 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m18168(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t608 *, int32_t, int32_t, Predicate_1_t2516 *, const MethodInfo*))List_1_GetIndex_m18168_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t717  List_1_GetEnumerator_m4288_gshared (List_1_t608 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m4288(__this, method) (( Enumerator_t717  (*) (List_1_t608 *, const MethodInfo*))List_1_GetEnumerator_m4288_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m18169_gshared (List_1_t608 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m18169(__this, ___item, method) (( int32_t (*) (List_1_t608 *, int32_t, const MethodInfo*))List_1_IndexOf_m18169_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m18170_gshared (List_1_t608 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m18170(__this, ___start, ___delta, method) (( void (*) (List_1_t608 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m18170_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m18171_gshared (List_1_t608 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m18171(__this, ___index, method) (( void (*) (List_1_t608 *, int32_t, const MethodInfo*))List_1_CheckIndex_m18171_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m18172_gshared (List_1_t608 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m18172(__this, ___index, ___item, method) (( void (*) (List_1_t608 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m18172_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m18173_gshared (List_1_t608 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m18173(__this, ___collection, method) (( void (*) (List_1_t608 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m18173_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m18174_gshared (List_1_t608 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m18174(__this, ___item, method) (( bool (*) (List_1_t608 *, int32_t, const MethodInfo*))List_1_Remove_m18174_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m18175_gshared (List_1_t608 * __this, Predicate_1_t2516 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m18175(__this, ___match, method) (( int32_t (*) (List_1_t608 *, Predicate_1_t2516 *, const MethodInfo*))List_1_RemoveAll_m18175_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m18176_gshared (List_1_t608 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m18176(__this, ___index, method) (( void (*) (List_1_t608 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18176_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m18177_gshared (List_1_t608 * __this, const MethodInfo* method);
#define List_1_Reverse_m18177(__this, method) (( void (*) (List_1_t608 *, const MethodInfo*))List_1_Reverse_m18177_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m18178_gshared (List_1_t608 * __this, const MethodInfo* method);
#define List_1_Sort_m18178(__this, method) (( void (*) (List_1_t608 *, const MethodInfo*))List_1_Sort_m18178_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m18179_gshared (List_1_t608 * __this, Comparison_1_t2520 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m18179(__this, ___comparison, method) (( void (*) (List_1_t608 *, Comparison_1_t2520 *, const MethodInfo*))List_1_Sort_m18179_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t128* List_1_ToArray_m18180_gshared (List_1_t608 * __this, const MethodInfo* method);
#define List_1_ToArray_m18180(__this, method) (( Int32U5BU5D_t128* (*) (List_1_t608 *, const MethodInfo*))List_1_ToArray_m18180_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m18181_gshared (List_1_t608 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m18181(__this, method) (( void (*) (List_1_t608 *, const MethodInfo*))List_1_TrimExcess_m18181_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m18182_gshared (List_1_t608 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m18182(__this, method) (( int32_t (*) (List_1_t608 *, const MethodInfo*))List_1_get_Capacity_m18182_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m18183_gshared (List_1_t608 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m18183(__this, ___value, method) (( void (*) (List_1_t608 *, int32_t, const MethodInfo*))List_1_set_Capacity_m18183_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m18184_gshared (List_1_t608 * __this, const MethodInfo* method);
#define List_1_get_Count_m18184(__this, method) (( int32_t (*) (List_1_t608 *, const MethodInfo*))List_1_get_Count_m18184_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m18185_gshared (List_1_t608 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m18185(__this, ___index, method) (( int32_t (*) (List_1_t608 *, int32_t, const MethodInfo*))List_1_get_Item_m18185_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m18186_gshared (List_1_t608 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m18186(__this, ___index, ___value, method) (( void (*) (List_1_t608 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m18186_gshared)(__this, ___index, ___value, method)
