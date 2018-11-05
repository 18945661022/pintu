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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2303;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2278;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1005;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t3006;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t95;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3007;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1213;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t2307;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t2311;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m14851_gshared (Dictionary_2_t2303 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m14851(__this, method) (( void (*) (Dictionary_2_t2303 *, const MethodInfo*))Dictionary_2__ctor_m14851_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14853_gshared (Dictionary_2_t2303 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m14853(__this, ___comparer, method) (( void (*) (Dictionary_2_t2303 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14853_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m14855_gshared (Dictionary_2_t2303 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m14855(__this, ___capacity, method) (( void (*) (Dictionary_2_t2303 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m14855_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m14857_gshared (Dictionary_2_t2303 * __this, SerializationInfo_t1005 * ___info, StreamingContext_t1006  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m14857(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2303 *, SerializationInfo_t1005 *, StreamingContext_t1006 , const MethodInfo*))Dictionary_2__ctor_m14857_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14859_gshared (Dictionary_2_t2303 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14859(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2303 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14859_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14861_gshared (Dictionary_2_t2303 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14861(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2303 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14861_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14863_gshared (Dictionary_2_t2303 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m14863(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2303 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14863_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14865_gshared (Dictionary_2_t2303 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m14865(__this, ___key, method) (( void (*) (Dictionary_2_t2303 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14865_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14867_gshared (Dictionary_2_t2303 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14867(__this, method) (( bool (*) (Dictionary_2_t2303 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14867_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14869_gshared (Dictionary_2_t2303 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14869(__this, method) (( Object_t * (*) (Dictionary_2_t2303 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14869_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14871_gshared (Dictionary_2_t2303 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14871(__this, method) (( bool (*) (Dictionary_2_t2303 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14871_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14873_gshared (Dictionary_2_t2303 * __this, KeyValuePair_2_t2305  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14873(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2303 *, KeyValuePair_2_t2305 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14873_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14875_gshared (Dictionary_2_t2303 * __this, KeyValuePair_2_t2305  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14875(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2303 *, KeyValuePair_2_t2305 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14875_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14877_gshared (Dictionary_2_t2303 * __this, KeyValuePair_2U5BU5D_t3006* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14877(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2303 *, KeyValuePair_2U5BU5D_t3006*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14877_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14879_gshared (Dictionary_2_t2303 * __this, KeyValuePair_2_t2305  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14879(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2303 *, KeyValuePair_2_t2305 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14879_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14881_gshared (Dictionary_2_t2303 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14881(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2303 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14881_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14883_gshared (Dictionary_2_t2303 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14883(__this, method) (( Object_t * (*) (Dictionary_2_t2303 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14883_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14885_gshared (Dictionary_2_t2303 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14885(__this, method) (( Object_t* (*) (Dictionary_2_t2303 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14885_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14887_gshared (Dictionary_2_t2303 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14887(__this, method) (( Object_t * (*) (Dictionary_2_t2303 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14887_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14889_gshared (Dictionary_2_t2303 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m14889(__this, method) (( int32_t (*) (Dictionary_2_t2303 *, const MethodInfo*))Dictionary_2_get_Count_m14889_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m14891_gshared (Dictionary_2_t2303 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m14891(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2303 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m14891_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m14893_gshared (Dictionary_2_t2303 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m14893(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2303 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m14893_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m14895_gshared (Dictionary_2_t2303 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m14895(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2303 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m14895_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m14897_gshared (Dictionary_2_t2303 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m14897(__this, ___size, method) (( void (*) (Dictionary_2_t2303 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m14897_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m14899_gshared (Dictionary_2_t2303 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m14899(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2303 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m14899_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2305  Dictionary_2_make_pair_m14901_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m14901(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2305  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m14901_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m14903_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m14903(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m14903_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m14905_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m14905(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m14905_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m14907_gshared (Dictionary_2_t2303 * __this, KeyValuePair_2U5BU5D_t3006* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m14907(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2303 *, KeyValuePair_2U5BU5D_t3006*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m14907_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m14909_gshared (Dictionary_2_t2303 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m14909(__this, method) (( void (*) (Dictionary_2_t2303 *, const MethodInfo*))Dictionary_2_Resize_m14909_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m14911_gshared (Dictionary_2_t2303 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m14911(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2303 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m14911_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m14913_gshared (Dictionary_2_t2303 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m14913(__this, method) (( void (*) (Dictionary_2_t2303 *, const MethodInfo*))Dictionary_2_Clear_m14913_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m14915_gshared (Dictionary_2_t2303 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m14915(__this, ___key, method) (( bool (*) (Dictionary_2_t2303 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m14915_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m14917_gshared (Dictionary_2_t2303 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m14917(__this, ___value, method) (( bool (*) (Dictionary_2_t2303 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m14917_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m14919_gshared (Dictionary_2_t2303 * __this, SerializationInfo_t1005 * ___info, StreamingContext_t1006  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m14919(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2303 *, SerializationInfo_t1005 *, StreamingContext_t1006 , const MethodInfo*))Dictionary_2_GetObjectData_m14919_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m14921_gshared (Dictionary_2_t2303 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m14921(__this, ___sender, method) (( void (*) (Dictionary_2_t2303 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m14921_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m14923_gshared (Dictionary_2_t2303 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m14923(__this, ___key, method) (( bool (*) (Dictionary_2_t2303 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m14923_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m14925_gshared (Dictionary_2_t2303 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m14925(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2303 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m14925_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t2307 * Dictionary_2_get_Keys_m14927_gshared (Dictionary_2_t2303 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m14927(__this, method) (( KeyCollection_t2307 * (*) (Dictionary_2_t2303 *, const MethodInfo*))Dictionary_2_get_Keys_m14927_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t2311 * Dictionary_2_get_Values_m14929_gshared (Dictionary_2_t2303 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m14929(__this, method) (( ValueCollection_t2311 * (*) (Dictionary_2_t2303 *, const MethodInfo*))Dictionary_2_get_Values_m14929_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m14931_gshared (Dictionary_2_t2303 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m14931(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2303 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m14931_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m14933_gshared (Dictionary_2_t2303 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m14933(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2303 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m14933_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m14935_gshared (Dictionary_2_t2303 * __this, KeyValuePair_2_t2305  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m14935(__this, ___pair, method) (( bool (*) (Dictionary_2_t2303 *, KeyValuePair_2_t2305 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14935_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2309  Dictionary_2_GetEnumerator_m14937_gshared (Dictionary_2_t2303 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m14937(__this, method) (( Enumerator_t2309  (*) (Dictionary_2_t2303 *, const MethodInfo*))Dictionary_2_GetEnumerator_m14937_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1395  Dictionary_2_U3CCopyToU3Em__0_m14939_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m14939(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1395  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14939_gshared)(__this /* static, unused */, ___key, ___value, method)
