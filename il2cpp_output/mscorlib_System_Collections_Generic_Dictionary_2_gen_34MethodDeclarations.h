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

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2762;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2278;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1005;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>[]
struct KeyValuePair_2U5BU5D_t3082;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t95;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>
struct IEnumerator_1_t3083;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1213;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
struct KeyCollection_t2767;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ValueCollection_t2771;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_29.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__29.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor()
extern "C" void Dictionary_2__ctor_m21921_gshared (Dictionary_2_t2762 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m21921(__this, method) (( void (*) (Dictionary_2_t2762 *, const MethodInfo*))Dictionary_2__ctor_m21921_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m21923_gshared (Dictionary_2_t2762 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m21923(__this, ___comparer, method) (( void (*) (Dictionary_2_t2762 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21923_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m21925_gshared (Dictionary_2_t2762 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m21925(__this, ___capacity, method) (( void (*) (Dictionary_2_t2762 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21925_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m21927_gshared (Dictionary_2_t2762 * __this, SerializationInfo_t1005 * ___info, StreamingContext_t1006  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m21927(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2762 *, SerializationInfo_t1005 *, StreamingContext_t1006 , const MethodInfo*))Dictionary_2__ctor_m21927_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m21929_gshared (Dictionary_2_t2762 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m21929(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2762 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21929_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m21931_gshared (Dictionary_2_t2762 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m21931(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2762 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21931_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m21933_gshared (Dictionary_2_t2762 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m21933(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2762 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21933_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m21935_gshared (Dictionary_2_t2762 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m21935(__this, ___key, method) (( void (*) (Dictionary_2_t2762 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21935_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21937_gshared (Dictionary_2_t2762 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21937(__this, method) (( bool (*) (Dictionary_2_t2762 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21937_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21939_gshared (Dictionary_2_t2762 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21939(__this, method) (( Object_t * (*) (Dictionary_2_t2762 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21939_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21941_gshared (Dictionary_2_t2762 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21941(__this, method) (( bool (*) (Dictionary_2_t2762 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21941_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21943_gshared (Dictionary_2_t2762 * __this, KeyValuePair_2_t2764  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21943(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2762 *, KeyValuePair_2_t2764 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21943_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21945_gshared (Dictionary_2_t2762 * __this, KeyValuePair_2_t2764  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21945(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2762 *, KeyValuePair_2_t2764 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21945_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21947_gshared (Dictionary_2_t2762 * __this, KeyValuePair_2U5BU5D_t3082* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21947(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2762 *, KeyValuePair_2U5BU5D_t3082*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21947_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21949_gshared (Dictionary_2_t2762 * __this, KeyValuePair_2_t2764  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21949(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2762 *, KeyValuePair_2_t2764 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21949_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m21951_gshared (Dictionary_2_t2762 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m21951(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2762 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21951_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21953_gshared (Dictionary_2_t2762 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21953(__this, method) (( Object_t * (*) (Dictionary_2_t2762 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21953_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21955_gshared (Dictionary_2_t2762 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21955(__this, method) (( Object_t* (*) (Dictionary_2_t2762 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21955_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21957_gshared (Dictionary_2_t2762 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21957(__this, method) (( Object_t * (*) (Dictionary_2_t2762 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21957_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m21959_gshared (Dictionary_2_t2762 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m21959(__this, method) (( int32_t (*) (Dictionary_2_t2762 *, const MethodInfo*))Dictionary_2_get_Count_m21959_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m21961_gshared (Dictionary_2_t2762 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m21961(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2762 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m21961_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m21963_gshared (Dictionary_2_t2762 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m21963(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2762 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m21963_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m21965_gshared (Dictionary_2_t2762 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m21965(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2762 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21965_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m21967_gshared (Dictionary_2_t2762 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m21967(__this, ___size, method) (( void (*) (Dictionary_2_t2762 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21967_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m21969_gshared (Dictionary_2_t2762 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m21969(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2762 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21969_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2764  Dictionary_2_make_pair_m21971_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m21971(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2764  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m21971_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m21973_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m21973(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m21973_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m21975_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m21975(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m21975_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m21977_gshared (Dictionary_2_t2762 * __this, KeyValuePair_2U5BU5D_t3082* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m21977(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2762 *, KeyValuePair_2U5BU5D_t3082*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21977_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Resize()
extern "C" void Dictionary_2_Resize_m21979_gshared (Dictionary_2_t2762 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m21979(__this, method) (( void (*) (Dictionary_2_t2762 *, const MethodInfo*))Dictionary_2_Resize_m21979_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m21981_gshared (Dictionary_2_t2762 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m21981(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2762 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m21981_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Clear()
extern "C" void Dictionary_2_Clear_m21983_gshared (Dictionary_2_t2762 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m21983(__this, method) (( void (*) (Dictionary_2_t2762 *, const MethodInfo*))Dictionary_2_Clear_m21983_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m21985_gshared (Dictionary_2_t2762 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m21985(__this, ___key, method) (( bool (*) (Dictionary_2_t2762 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m21985_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m21987_gshared (Dictionary_2_t2762 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m21987(__this, ___value, method) (( bool (*) (Dictionary_2_t2762 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m21987_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m21989_gshared (Dictionary_2_t2762 * __this, SerializationInfo_t1005 * ___info, StreamingContext_t1006  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m21989(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2762 *, SerializationInfo_t1005 *, StreamingContext_t1006 , const MethodInfo*))Dictionary_2_GetObjectData_m21989_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m21991_gshared (Dictionary_2_t2762 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m21991(__this, ___sender, method) (( void (*) (Dictionary_2_t2762 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21991_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m21993_gshared (Dictionary_2_t2762 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m21993(__this, ___key, method) (( bool (*) (Dictionary_2_t2762 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m21993_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m21995_gshared (Dictionary_2_t2762 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m21995(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2762 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m21995_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Keys()
extern "C" KeyCollection_t2767 * Dictionary_2_get_Keys_m21997_gshared (Dictionary_2_t2762 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m21997(__this, method) (( KeyCollection_t2767 * (*) (Dictionary_2_t2762 *, const MethodInfo*))Dictionary_2_get_Keys_m21997_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Values()
extern "C" ValueCollection_t2771 * Dictionary_2_get_Values_m21999_gshared (Dictionary_2_t2762 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m21999(__this, method) (( ValueCollection_t2771 * (*) (Dictionary_2_t2762 *, const MethodInfo*))Dictionary_2_get_Values_m21999_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m22001_gshared (Dictionary_2_t2762 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m22001(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2762 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m22001_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m22003_gshared (Dictionary_2_t2762 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m22003(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2762 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m22003_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m22005_gshared (Dictionary_2_t2762 * __this, KeyValuePair_2_t2764  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m22005(__this, ___pair, method) (( bool (*) (Dictionary_2_t2762 *, KeyValuePair_2_t2764 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m22005_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetEnumerator()
extern "C" Enumerator_t2769  Dictionary_2_GetEnumerator_m22007_gshared (Dictionary_2_t2762 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m22007(__this, method) (( Enumerator_t2769  (*) (Dictionary_2_t2762 *, const MethodInfo*))Dictionary_2_GetEnumerator_m22007_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1395  Dictionary_2_U3CCopyToU3Em__0_m22009_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m22009(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1395  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m22009_gshared)(__this /* static, unused */, ___key, ___value, method)
