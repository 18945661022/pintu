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

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t2307;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2303;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2392;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t95;
// System.Object[]
struct ObjectU5BU5D_t110;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_10.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m14997_gshared (KeyCollection_t2307 * __this, Dictionary_2_t2303 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m14997(__this, ___dictionary, method) (( void (*) (KeyCollection_t2307 *, Dictionary_2_t2303 *, const MethodInfo*))KeyCollection__ctor_m14997_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m14998_gshared (KeyCollection_t2307 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m14998(__this, ___item, method) (( void (*) (KeyCollection_t2307 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m14998_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m14999_gshared (KeyCollection_t2307 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m14999(__this, method) (( void (*) (KeyCollection_t2307 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m14999_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m15000_gshared (KeyCollection_t2307 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m15000(__this, ___item, method) (( bool (*) (KeyCollection_t2307 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m15000_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m15001_gshared (KeyCollection_t2307 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m15001(__this, ___item, method) (( bool (*) (KeyCollection_t2307 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m15001_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m15002_gshared (KeyCollection_t2307 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m15002(__this, method) (( Object_t* (*) (KeyCollection_t2307 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m15002_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m15003_gshared (KeyCollection_t2307 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m15003(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2307 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m15003_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m15004_gshared (KeyCollection_t2307 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m15004(__this, method) (( Object_t * (*) (KeyCollection_t2307 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m15004_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m15005_gshared (KeyCollection_t2307 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m15005(__this, method) (( bool (*) (KeyCollection_t2307 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m15005_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m15006_gshared (KeyCollection_t2307 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m15006(__this, method) (( bool (*) (KeyCollection_t2307 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m15006_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m15007_gshared (KeyCollection_t2307 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m15007(__this, method) (( Object_t * (*) (KeyCollection_t2307 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m15007_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m15008_gshared (KeyCollection_t2307 * __this, ObjectU5BU5D_t110* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m15008(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2307 *, ObjectU5BU5D_t110*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m15008_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2308  KeyCollection_GetEnumerator_m15009_gshared (KeyCollection_t2307 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m15009(__this, method) (( Enumerator_t2308  (*) (KeyCollection_t2307 *, const MethodInfo*))KeyCollection_GetEnumerator_m15009_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m15010_gshared (KeyCollection_t2307 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m15010(__this, method) (( int32_t (*) (KeyCollection_t2307 *, const MethodInfo*))KeyCollection_get_Count_m15010_gshared)(__this, method)
