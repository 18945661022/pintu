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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2276;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2278;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1005;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t3000;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t95;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t3001;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1213;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t2281;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t2285;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m14616_gshared (Dictionary_2_t2276 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m14616(__this, method) (( void (*) (Dictionary_2_t2276 *, const MethodInfo*))Dictionary_2__ctor_m14616_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14617_gshared (Dictionary_2_t2276 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m14617(__this, ___comparer, method) (( void (*) (Dictionary_2_t2276 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14617_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m14618_gshared (Dictionary_2_t2276 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m14618(__this, ___capacity, method) (( void (*) (Dictionary_2_t2276 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m14618_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m14619_gshared (Dictionary_2_t2276 * __this, SerializationInfo_t1005 * ___info, StreamingContext_t1006  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m14619(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2276 *, SerializationInfo_t1005 *, StreamingContext_t1006 , const MethodInfo*))Dictionary_2__ctor_m14619_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14620_gshared (Dictionary_2_t2276 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14620(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2276 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14620_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14621_gshared (Dictionary_2_t2276 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14621(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2276 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14621_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14622_gshared (Dictionary_2_t2276 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m14622(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2276 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14622_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14623_gshared (Dictionary_2_t2276 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m14623(__this, ___key, method) (( void (*) (Dictionary_2_t2276 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14623_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14624_gshared (Dictionary_2_t2276 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14624(__this, method) (( bool (*) (Dictionary_2_t2276 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14624_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14625_gshared (Dictionary_2_t2276 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14625(__this, method) (( Object_t * (*) (Dictionary_2_t2276 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14625_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14626_gshared (Dictionary_2_t2276 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14626(__this, method) (( bool (*) (Dictionary_2_t2276 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14626_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14627_gshared (Dictionary_2_t2276 * __this, KeyValuePair_2_t2279  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14627(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2276 *, KeyValuePair_2_t2279 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14627_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14628_gshared (Dictionary_2_t2276 * __this, KeyValuePair_2_t2279  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14628(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2276 *, KeyValuePair_2_t2279 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14628_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14629_gshared (Dictionary_2_t2276 * __this, KeyValuePair_2U5BU5D_t3000* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14629(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2276 *, KeyValuePair_2U5BU5D_t3000*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14629_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14630_gshared (Dictionary_2_t2276 * __this, KeyValuePair_2_t2279  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14630(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2276 *, KeyValuePair_2_t2279 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14630_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14631_gshared (Dictionary_2_t2276 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14631(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2276 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14631_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14632_gshared (Dictionary_2_t2276 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14632(__this, method) (( Object_t * (*) (Dictionary_2_t2276 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14632_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14633_gshared (Dictionary_2_t2276 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14633(__this, method) (( Object_t* (*) (Dictionary_2_t2276 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14633_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14634_gshared (Dictionary_2_t2276 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14634(__this, method) (( Object_t * (*) (Dictionary_2_t2276 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14634_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14635_gshared (Dictionary_2_t2276 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m14635(__this, method) (( int32_t (*) (Dictionary_2_t2276 *, const MethodInfo*))Dictionary_2_get_Count_m14635_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m14636_gshared (Dictionary_2_t2276 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m14636(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2276 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m14636_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m14637_gshared (Dictionary_2_t2276 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m14637(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2276 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m14637_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m14638_gshared (Dictionary_2_t2276 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m14638(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2276 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m14638_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m14639_gshared (Dictionary_2_t2276 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m14639(__this, ___size, method) (( void (*) (Dictionary_2_t2276 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m14639_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m14640_gshared (Dictionary_2_t2276 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m14640(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2276 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m14640_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2279  Dictionary_2_make_pair_m14641_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m14641(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2279  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m14641_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m14642_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m14642(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m14642_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m14643_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m14643(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m14643_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m14644_gshared (Dictionary_2_t2276 * __this, KeyValuePair_2U5BU5D_t3000* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m14644(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2276 *, KeyValuePair_2U5BU5D_t3000*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m14644_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m14645_gshared (Dictionary_2_t2276 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m14645(__this, method) (( void (*) (Dictionary_2_t2276 *, const MethodInfo*))Dictionary_2_Resize_m14645_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m14646_gshared (Dictionary_2_t2276 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m14646(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2276 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m14646_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m14647_gshared (Dictionary_2_t2276 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m14647(__this, method) (( void (*) (Dictionary_2_t2276 *, const MethodInfo*))Dictionary_2_Clear_m14647_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m14648_gshared (Dictionary_2_t2276 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m14648(__this, ___key, method) (( bool (*) (Dictionary_2_t2276 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m14648_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m14649_gshared (Dictionary_2_t2276 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m14649(__this, ___value, method) (( bool (*) (Dictionary_2_t2276 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m14649_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m14650_gshared (Dictionary_2_t2276 * __this, SerializationInfo_t1005 * ___info, StreamingContext_t1006  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m14650(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2276 *, SerializationInfo_t1005 *, StreamingContext_t1006 , const MethodInfo*))Dictionary_2_GetObjectData_m14650_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m14651_gshared (Dictionary_2_t2276 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m14651(__this, ___sender, method) (( void (*) (Dictionary_2_t2276 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m14651_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m14652_gshared (Dictionary_2_t2276 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m14652(__this, ___key, method) (( bool (*) (Dictionary_2_t2276 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m14652_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m14653_gshared (Dictionary_2_t2276 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m14653(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2276 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m14653_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t2281 * Dictionary_2_get_Keys_m14654_gshared (Dictionary_2_t2276 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m14654(__this, method) (( KeyCollection_t2281 * (*) (Dictionary_2_t2276 *, const MethodInfo*))Dictionary_2_get_Keys_m14654_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t2285 * Dictionary_2_get_Values_m14655_gshared (Dictionary_2_t2276 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m14655(__this, method) (( ValueCollection_t2285 * (*) (Dictionary_2_t2276 *, const MethodInfo*))Dictionary_2_get_Values_m14655_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m14656_gshared (Dictionary_2_t2276 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m14656(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2276 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m14656_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m14657_gshared (Dictionary_2_t2276 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m14657(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2276 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m14657_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m14658_gshared (Dictionary_2_t2276 * __this, KeyValuePair_2_t2279  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m14658(__this, ___pair, method) (( bool (*) (Dictionary_2_t2276 *, KeyValuePair_2_t2279 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14658_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2283  Dictionary_2_GetEnumerator_m14659_gshared (Dictionary_2_t2276 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m14659(__this, method) (( Enumerator_t2283  (*) (Dictionary_2_t2276 *, const MethodInfo*))Dictionary_2_GetEnumerator_m14659_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1395  Dictionary_2_U3CCopyToU3Em__0_m14660_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m14660(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1395  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14660_gshared)(__this /* static, unused */, ___key, ___value, method)
