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

// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>
struct Dictionary_2_t2446;
// System.Collections.Generic.IEqualityComparer`1<Vuforia.Image/PIXEL_FORMAT>
struct IEqualityComparer_1_t2445;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1005;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>[]
struct KeyValuePair_2U5BU5D_t3026;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t95;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>>
struct IEnumerator_1_t3027;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1213;
// System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>
struct KeyCollection_t2451;
// System.Collections.Generic.Dictionary`2/ValueCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>
struct ValueCollection_t2455;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m17045_gshared (Dictionary_2_t2446 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m17045(__this, method) (( void (*) (Dictionary_2_t2446 *, const MethodInfo*))Dictionary_2__ctor_m17045_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17047_gshared (Dictionary_2_t2446 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17047(__this, ___comparer, method) (( void (*) (Dictionary_2_t2446 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17047_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m17049_gshared (Dictionary_2_t2446 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m17049(__this, ___capacity, method) (( void (*) (Dictionary_2_t2446 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17049_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m17051_gshared (Dictionary_2_t2446 * __this, SerializationInfo_t1005 * ___info, StreamingContext_t1006  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m17051(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2446 *, SerializationInfo_t1005 *, StreamingContext_t1006 , const MethodInfo*))Dictionary_2__ctor_m17051_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m17053_gshared (Dictionary_2_t2446 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17053(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2446 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17053_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m17055_gshared (Dictionary_2_t2446 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17055(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2446 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17055_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m17057_gshared (Dictionary_2_t2446 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m17057(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2446 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17057_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m17059_gshared (Dictionary_2_t2446 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m17059(__this, ___key, method) (( void (*) (Dictionary_2_t2446 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17059_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17061_gshared (Dictionary_2_t2446 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17061(__this, method) (( bool (*) (Dictionary_2_t2446 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17061_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17063_gshared (Dictionary_2_t2446 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17063(__this, method) (( Object_t * (*) (Dictionary_2_t2446 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17063_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17065_gshared (Dictionary_2_t2446 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17065(__this, method) (( bool (*) (Dictionary_2_t2446 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17065_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17067_gshared (Dictionary_2_t2446 * __this, KeyValuePair_2_t2448  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17067(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2446 *, KeyValuePair_2_t2448 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17067_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17069_gshared (Dictionary_2_t2446 * __this, KeyValuePair_2_t2448  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17069(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2446 *, KeyValuePair_2_t2448 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17069_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17071_gshared (Dictionary_2_t2446 * __this, KeyValuePair_2U5BU5D_t3026* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17071(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2446 *, KeyValuePair_2U5BU5D_t3026*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17071_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17073_gshared (Dictionary_2_t2446 * __this, KeyValuePair_2_t2448  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17073(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2446 *, KeyValuePair_2_t2448 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17073_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m17075_gshared (Dictionary_2_t2446 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17075(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2446 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17075_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17077_gshared (Dictionary_2_t2446 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17077(__this, method) (( Object_t * (*) (Dictionary_2_t2446 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17077_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17079_gshared (Dictionary_2_t2446 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17079(__this, method) (( Object_t* (*) (Dictionary_2_t2446 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17079_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17081_gshared (Dictionary_2_t2446 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17081(__this, method) (( Object_t * (*) (Dictionary_2_t2446 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17081_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m17083_gshared (Dictionary_2_t2446 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m17083(__this, method) (( int32_t (*) (Dictionary_2_t2446 *, const MethodInfo*))Dictionary_2_get_Count_m17083_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m17085_gshared (Dictionary_2_t2446 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m17085(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2446 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m17085_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m17087_gshared (Dictionary_2_t2446 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m17087(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2446 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m17087_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m17089_gshared (Dictionary_2_t2446 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m17089(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2446 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17089_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m17091_gshared (Dictionary_2_t2446 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m17091(__this, ___size, method) (( void (*) (Dictionary_2_t2446 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17091_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m17093_gshared (Dictionary_2_t2446 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m17093(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2446 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17093_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2448  Dictionary_2_make_pair_m17095_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m17095(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2448  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m17095_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m17097_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m17097(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m17097_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m17099_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m17099(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m17099_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m17101_gshared (Dictionary_2_t2446 * __this, KeyValuePair_2U5BU5D_t3026* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m17101(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2446 *, KeyValuePair_2U5BU5D_t3026*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17101_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m17103_gshared (Dictionary_2_t2446 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m17103(__this, method) (( void (*) (Dictionary_2_t2446 *, const MethodInfo*))Dictionary_2_Resize_m17103_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m17105_gshared (Dictionary_2_t2446 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m17105(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2446 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m17105_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m17107_gshared (Dictionary_2_t2446 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m17107(__this, method) (( void (*) (Dictionary_2_t2446 *, const MethodInfo*))Dictionary_2_Clear_m17107_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m17109_gshared (Dictionary_2_t2446 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m17109(__this, ___key, method) (( bool (*) (Dictionary_2_t2446 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m17109_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m17111_gshared (Dictionary_2_t2446 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m17111(__this, ___value, method) (( bool (*) (Dictionary_2_t2446 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m17111_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m17113_gshared (Dictionary_2_t2446 * __this, SerializationInfo_t1005 * ___info, StreamingContext_t1006  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m17113(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2446 *, SerializationInfo_t1005 *, StreamingContext_t1006 , const MethodInfo*))Dictionary_2_GetObjectData_m17113_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m17115_gshared (Dictionary_2_t2446 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m17115(__this, ___sender, method) (( void (*) (Dictionary_2_t2446 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17115_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m17117_gshared (Dictionary_2_t2446 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m17117(__this, ___key, method) (( bool (*) (Dictionary_2_t2446 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m17117_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m17119_gshared (Dictionary_2_t2446 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m17119(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2446 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m17119_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Keys()
extern "C" KeyCollection_t2451 * Dictionary_2_get_Keys_m17121_gshared (Dictionary_2_t2446 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m17121(__this, method) (( KeyCollection_t2451 * (*) (Dictionary_2_t2446 *, const MethodInfo*))Dictionary_2_get_Keys_m17121_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Values()
extern "C" ValueCollection_t2455 * Dictionary_2_get_Values_m17122_gshared (Dictionary_2_t2446 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m17122(__this, method) (( ValueCollection_t2455 * (*) (Dictionary_2_t2446 *, const MethodInfo*))Dictionary_2_get_Values_m17122_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m17124_gshared (Dictionary_2_t2446 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m17124(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2446 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17124_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m17126_gshared (Dictionary_2_t2446 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m17126(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2446 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17126_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m17128_gshared (Dictionary_2_t2446 * __this, KeyValuePair_2_t2448  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m17128(__this, ___pair, method) (( bool (*) (Dictionary_2_t2446 *, KeyValuePair_2_t2448 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17128_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::GetEnumerator()
extern "C" Enumerator_t2453  Dictionary_2_GetEnumerator_m17130_gshared (Dictionary_2_t2446 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m17130(__this, method) (( Enumerator_t2453  (*) (Dictionary_2_t2446 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17130_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1395  Dictionary_2_U3CCopyToU3Em__0_m17132_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m17132(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1395  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17132_gshared)(__this /* static, unused */, ___key, ___value, method)
