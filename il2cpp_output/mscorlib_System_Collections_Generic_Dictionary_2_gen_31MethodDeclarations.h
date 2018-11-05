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

// System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>
struct Dictionary_2_t2538;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2278;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1005;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t3041;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t95;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct IEnumerator_1_t3042;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1213;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>
struct KeyCollection_t2543;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>
struct ValueCollection_t2547;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__16.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor()
extern "C" void Dictionary_2__ctor_m18492_gshared (Dictionary_2_t2538 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m18492(__this, method) (( void (*) (Dictionary_2_t2538 *, const MethodInfo*))Dictionary_2__ctor_m18492_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18494_gshared (Dictionary_2_t2538 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m18494(__this, ___comparer, method) (( void (*) (Dictionary_2_t2538 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18494_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m18496_gshared (Dictionary_2_t2538 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m18496(__this, ___capacity, method) (( void (*) (Dictionary_2_t2538 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18496_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m18498_gshared (Dictionary_2_t2538 * __this, SerializationInfo_t1005 * ___info, StreamingContext_t1006  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m18498(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2538 *, SerializationInfo_t1005 *, StreamingContext_t1006 , const MethodInfo*))Dictionary_2__ctor_m18498_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18500_gshared (Dictionary_2_t2538 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18500(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2538 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18500_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18502_gshared (Dictionary_2_t2538 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18502(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2538 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18502_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18504_gshared (Dictionary_2_t2538 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m18504(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2538 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18504_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18506_gshared (Dictionary_2_t2538 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m18506(__this, ___key, method) (( void (*) (Dictionary_2_t2538 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18506_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18508_gshared (Dictionary_2_t2538 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18508(__this, method) (( bool (*) (Dictionary_2_t2538 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18508_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18510_gshared (Dictionary_2_t2538 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18510(__this, method) (( Object_t * (*) (Dictionary_2_t2538 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18510_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18512_gshared (Dictionary_2_t2538 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18512(__this, method) (( bool (*) (Dictionary_2_t2538 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18512_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18514_gshared (Dictionary_2_t2538 * __this, KeyValuePair_2_t2540  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18514(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2538 *, KeyValuePair_2_t2540 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18514_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18516_gshared (Dictionary_2_t2538 * __this, KeyValuePair_2_t2540  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18516(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2538 *, KeyValuePair_2_t2540 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18516_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18518_gshared (Dictionary_2_t2538 * __this, KeyValuePair_2U5BU5D_t3041* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18518(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2538 *, KeyValuePair_2U5BU5D_t3041*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18518_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18520_gshared (Dictionary_2_t2538 * __this, KeyValuePair_2_t2540  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18520(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2538 *, KeyValuePair_2_t2540 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18520_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18522_gshared (Dictionary_2_t2538 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18522(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2538 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18522_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18524_gshared (Dictionary_2_t2538 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18524(__this, method) (( Object_t * (*) (Dictionary_2_t2538 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18524_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18526_gshared (Dictionary_2_t2538 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18526(__this, method) (( Object_t* (*) (Dictionary_2_t2538 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18526_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18528_gshared (Dictionary_2_t2538 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18528(__this, method) (( Object_t * (*) (Dictionary_2_t2538 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18528_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18530_gshared (Dictionary_2_t2538 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m18530(__this, method) (( int32_t (*) (Dictionary_2_t2538 *, const MethodInfo*))Dictionary_2_get_Count_m18530_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Item(TKey)
extern "C" uint16_t Dictionary_2_get_Item_m18532_gshared (Dictionary_2_t2538 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m18532(__this, ___key, method) (( uint16_t (*) (Dictionary_2_t2538 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m18532_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m18534_gshared (Dictionary_2_t2538 * __this, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m18534(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2538 *, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_set_Item_m18534_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m18536_gshared (Dictionary_2_t2538 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m18536(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2538 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m18536_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m18538_gshared (Dictionary_2_t2538 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m18538(__this, ___size, method) (( void (*) (Dictionary_2_t2538 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m18538_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m18540_gshared (Dictionary_2_t2538 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m18540(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2538 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m18540_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2540  Dictionary_2_make_pair_m18542_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m18542(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2540  (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_make_pair_m18542_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m18544_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m18544(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_pick_key_m18544_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::pick_value(TKey,TValue)
extern "C" uint16_t Dictionary_2_pick_value_m18546_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m18546(__this /* static, unused */, ___key, ___value, method) (( uint16_t (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_pick_value_m18546_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m18548_gshared (Dictionary_2_t2538 * __this, KeyValuePair_2U5BU5D_t3041* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m18548(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2538 *, KeyValuePair_2U5BU5D_t3041*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m18548_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Resize()
extern "C" void Dictionary_2_Resize_m18550_gshared (Dictionary_2_t2538 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m18550(__this, method) (( void (*) (Dictionary_2_t2538 *, const MethodInfo*))Dictionary_2_Resize_m18550_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m18552_gshared (Dictionary_2_t2538 * __this, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m18552(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2538 *, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_Add_m18552_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Clear()
extern "C" void Dictionary_2_Clear_m18554_gshared (Dictionary_2_t2538 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m18554(__this, method) (( void (*) (Dictionary_2_t2538 *, const MethodInfo*))Dictionary_2_Clear_m18554_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m18556_gshared (Dictionary_2_t2538 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m18556(__this, ___key, method) (( bool (*) (Dictionary_2_t2538 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m18556_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m18558_gshared (Dictionary_2_t2538 * __this, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m18558(__this, ___value, method) (( bool (*) (Dictionary_2_t2538 *, uint16_t, const MethodInfo*))Dictionary_2_ContainsValue_m18558_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m18560_gshared (Dictionary_2_t2538 * __this, SerializationInfo_t1005 * ___info, StreamingContext_t1006  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m18560(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2538 *, SerializationInfo_t1005 *, StreamingContext_t1006 , const MethodInfo*))Dictionary_2_GetObjectData_m18560_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m18562_gshared (Dictionary_2_t2538 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m18562(__this, ___sender, method) (( void (*) (Dictionary_2_t2538 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18562_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m18564_gshared (Dictionary_2_t2538 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m18564(__this, ___key, method) (( bool (*) (Dictionary_2_t2538 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m18564_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m18566_gshared (Dictionary_2_t2538 * __this, Object_t * ___key, uint16_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m18566(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2538 *, Object_t *, uint16_t*, const MethodInfo*))Dictionary_2_TryGetValue_m18566_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Keys()
extern "C" KeyCollection_t2543 * Dictionary_2_get_Keys_m18568_gshared (Dictionary_2_t2538 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m18568(__this, method) (( KeyCollection_t2543 * (*) (Dictionary_2_t2538 *, const MethodInfo*))Dictionary_2_get_Keys_m18568_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Values()
extern "C" ValueCollection_t2547 * Dictionary_2_get_Values_m18570_gshared (Dictionary_2_t2538 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m18570(__this, method) (( ValueCollection_t2547 * (*) (Dictionary_2_t2538 *, const MethodInfo*))Dictionary_2_get_Values_m18570_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m18572_gshared (Dictionary_2_t2538 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m18572(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2538 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m18572_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ToTValue(System.Object)
extern "C" uint16_t Dictionary_2_ToTValue_m18574_gshared (Dictionary_2_t2538 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m18574(__this, ___value, method) (( uint16_t (*) (Dictionary_2_t2538 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m18574_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m18576_gshared (Dictionary_2_t2538 * __this, KeyValuePair_2_t2540  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m18576(__this, ___pair, method) (( bool (*) (Dictionary_2_t2538 *, KeyValuePair_2_t2540 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18576_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::GetEnumerator()
extern "C" Enumerator_t2545  Dictionary_2_GetEnumerator_m18578_gshared (Dictionary_2_t2538 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m18578(__this, method) (( Enumerator_t2545  (*) (Dictionary_2_t2538 *, const MethodInfo*))Dictionary_2_GetEnumerator_m18578_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1395  Dictionary_2_U3CCopyToU3Em__0_m18580_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m18580(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1395  (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18580_gshared)(__this /* static, unused */, ___key, ___value, method)
