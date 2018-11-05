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

// System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>
struct KeyCollection_t2451;
// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>
struct Dictionary_2_t2446;
// System.Collections.Generic.IEnumerator`1<Vuforia.Image/PIXEL_FORMAT>
struct IEnumerator_1_t3028;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t95;
// System.Object
struct Object_t;
// Vuforia.Image/PIXEL_FORMAT[]
struct PIXEL_FORMATU5BU5D_t2442;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_17.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m17151_gshared (KeyCollection_t2451 * __this, Dictionary_2_t2446 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m17151(__this, ___dictionary, method) (( void (*) (KeyCollection_t2451 *, Dictionary_2_t2446 *, const MethodInfo*))KeyCollection__ctor_m17151_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m17152_gshared (KeyCollection_t2451 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m17152(__this, ___item, method) (( void (*) (KeyCollection_t2451 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m17152_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m17153_gshared (KeyCollection_t2451 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m17153(__this, method) (( void (*) (KeyCollection_t2451 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m17153_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m17154_gshared (KeyCollection_t2451 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m17154(__this, ___item, method) (( bool (*) (KeyCollection_t2451 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m17154_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m17155_gshared (KeyCollection_t2451 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m17155(__this, ___item, method) (( bool (*) (KeyCollection_t2451 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m17155_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m17156_gshared (KeyCollection_t2451 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m17156(__this, method) (( Object_t* (*) (KeyCollection_t2451 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m17156_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m17157_gshared (KeyCollection_t2451 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m17157(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2451 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m17157_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m17158_gshared (KeyCollection_t2451 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m17158(__this, method) (( Object_t * (*) (KeyCollection_t2451 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m17158_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m17159_gshared (KeyCollection_t2451 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m17159(__this, method) (( bool (*) (KeyCollection_t2451 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m17159_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m17160_gshared (KeyCollection_t2451 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m17160(__this, method) (( bool (*) (KeyCollection_t2451 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m17160_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m17161_gshared (KeyCollection_t2451 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m17161(__this, method) (( Object_t * (*) (KeyCollection_t2451 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m17161_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m17162_gshared (KeyCollection_t2451 * __this, PIXEL_FORMATU5BU5D_t2442* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m17162(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2451 *, PIXEL_FORMATU5BU5D_t2442*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m17162_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::GetEnumerator()
extern "C" Enumerator_t2452  KeyCollection_GetEnumerator_m17163_gshared (KeyCollection_t2451 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m17163(__this, method) (( Enumerator_t2452  (*) (KeyCollection_t2451 *, const MethodInfo*))KeyCollection_GetEnumerator_m17163_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m17164_gshared (KeyCollection_t2451 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m17164(__this, method) (( int32_t (*) (KeyCollection_t2451 *, const MethodInfo*))KeyCollection_get_Count_m17164_gshared)(__this, method)
