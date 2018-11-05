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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2869;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2278;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1005;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t3101;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t95;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t3102;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1213;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>
struct KeyCollection_t2874;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2878;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_34.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__34.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m23356_gshared (Dictionary_2_t2869 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m23356(__this, method) (( void (*) (Dictionary_2_t2869 *, const MethodInfo*))Dictionary_2__ctor_m23356_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m23357_gshared (Dictionary_2_t2869 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m23357(__this, ___comparer, method) (( void (*) (Dictionary_2_t2869 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23357_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m23359_gshared (Dictionary_2_t2869 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m23359(__this, ___capacity, method) (( void (*) (Dictionary_2_t2869 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m23359_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m23361_gshared (Dictionary_2_t2869 * __this, SerializationInfo_t1005 * ___info, StreamingContext_t1006  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m23361(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2869 *, SerializationInfo_t1005 *, StreamingContext_t1006 , const MethodInfo*))Dictionary_2__ctor_m23361_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m23363_gshared (Dictionary_2_t2869 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m23363(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2869 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m23363_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m23365_gshared (Dictionary_2_t2869 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m23365(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2869 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m23365_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m23367_gshared (Dictionary_2_t2869 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m23367(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2869 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m23367_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m23369_gshared (Dictionary_2_t2869 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m23369(__this, ___key, method) (( void (*) (Dictionary_2_t2869 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m23369_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23371_gshared (Dictionary_2_t2869 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23371(__this, method) (( bool (*) (Dictionary_2_t2869 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23371_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23373_gshared (Dictionary_2_t2869 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23373(__this, method) (( Object_t * (*) (Dictionary_2_t2869 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23373_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23375_gshared (Dictionary_2_t2869 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23375(__this, method) (( bool (*) (Dictionary_2_t2869 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23375_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23377_gshared (Dictionary_2_t2869 * __this, KeyValuePair_2_t2871  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23377(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2869 *, KeyValuePair_2_t2871 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23377_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23379_gshared (Dictionary_2_t2869 * __this, KeyValuePair_2_t2871  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23379(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2869 *, KeyValuePair_2_t2871 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23379_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23381_gshared (Dictionary_2_t2869 * __this, KeyValuePair_2U5BU5D_t3101* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23381(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2869 *, KeyValuePair_2U5BU5D_t3101*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23381_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23383_gshared (Dictionary_2_t2869 * __this, KeyValuePair_2_t2871  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23383(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2869 *, KeyValuePair_2_t2871 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23383_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m23385_gshared (Dictionary_2_t2869 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m23385(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2869 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m23385_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23387_gshared (Dictionary_2_t2869 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23387(__this, method) (( Object_t * (*) (Dictionary_2_t2869 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23387_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23389_gshared (Dictionary_2_t2869 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23389(__this, method) (( Object_t* (*) (Dictionary_2_t2869 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23389_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23391_gshared (Dictionary_2_t2869 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23391(__this, method) (( Object_t * (*) (Dictionary_2_t2869 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23391_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m23393_gshared (Dictionary_2_t2869 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m23393(__this, method) (( int32_t (*) (Dictionary_2_t2869 *, const MethodInfo*))Dictionary_2_get_Count_m23393_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m23395_gshared (Dictionary_2_t2869 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m23395(__this, ___key, method) (( bool (*) (Dictionary_2_t2869 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m23395_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m23397_gshared (Dictionary_2_t2869 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m23397(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2869 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m23397_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m23399_gshared (Dictionary_2_t2869 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m23399(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2869 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m23399_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m23401_gshared (Dictionary_2_t2869 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m23401(__this, ___size, method) (( void (*) (Dictionary_2_t2869 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m23401_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m23403_gshared (Dictionary_2_t2869 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m23403(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2869 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m23403_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2871  Dictionary_2_make_pair_m23405_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m23405(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2871  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m23405_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m23407_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m23407(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_key_m23407_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m23409_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m23409(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m23409_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m23411_gshared (Dictionary_2_t2869 * __this, KeyValuePair_2U5BU5D_t3101* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m23411(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2869 *, KeyValuePair_2U5BU5D_t3101*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m23411_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m23413_gshared (Dictionary_2_t2869 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m23413(__this, method) (( void (*) (Dictionary_2_t2869 *, const MethodInfo*))Dictionary_2_Resize_m23413_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m23415_gshared (Dictionary_2_t2869 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m23415(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2869 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m23415_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m23417_gshared (Dictionary_2_t2869 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m23417(__this, method) (( void (*) (Dictionary_2_t2869 *, const MethodInfo*))Dictionary_2_Clear_m23417_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m23419_gshared (Dictionary_2_t2869 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m23419(__this, ___key, method) (( bool (*) (Dictionary_2_t2869 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m23419_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m23421_gshared (Dictionary_2_t2869 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m23421(__this, ___value, method) (( bool (*) (Dictionary_2_t2869 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m23421_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m23423_gshared (Dictionary_2_t2869 * __this, SerializationInfo_t1005 * ___info, StreamingContext_t1006  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m23423(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2869 *, SerializationInfo_t1005 *, StreamingContext_t1006 , const MethodInfo*))Dictionary_2_GetObjectData_m23423_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m23425_gshared (Dictionary_2_t2869 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m23425(__this, ___sender, method) (( void (*) (Dictionary_2_t2869 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m23425_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m23427_gshared (Dictionary_2_t2869 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m23427(__this, ___key, method) (( bool (*) (Dictionary_2_t2869 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m23427_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m23429_gshared (Dictionary_2_t2869 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m23429(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2869 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m23429_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Keys()
extern "C" KeyCollection_t2874 * Dictionary_2_get_Keys_m23431_gshared (Dictionary_2_t2869 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m23431(__this, method) (( KeyCollection_t2874 * (*) (Dictionary_2_t2869 *, const MethodInfo*))Dictionary_2_get_Keys_m23431_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2878 * Dictionary_2_get_Values_m23433_gshared (Dictionary_2_t2869 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m23433(__this, method) (( ValueCollection_t2878 * (*) (Dictionary_2_t2869 *, const MethodInfo*))Dictionary_2_get_Values_m23433_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m23435_gshared (Dictionary_2_t2869 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m23435(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2869 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m23435_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m23437_gshared (Dictionary_2_t2869 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m23437(__this, ___value, method) (( bool (*) (Dictionary_2_t2869 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m23437_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m23439_gshared (Dictionary_2_t2869 * __this, KeyValuePair_2_t2871  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m23439(__this, ___pair, method) (( bool (*) (Dictionary_2_t2869 *, KeyValuePair_2_t2871 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m23439_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2876  Dictionary_2_GetEnumerator_m23441_gshared (Dictionary_2_t2869 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m23441(__this, method) (( Enumerator_t2876  (*) (Dictionary_2_t2869 *, const MethodInfo*))Dictionary_2_GetEnumerator_m23441_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1395  Dictionary_2_U3CCopyToU3Em__0_m23443_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m23443(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1395  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m23443_gshared)(__this /* static, unused */, ___key, ___value, method)
