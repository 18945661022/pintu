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

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2729;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1005;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2392;
// System.Object[]
struct ObjectU5BU5D_t110;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t95;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2278;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__0.h"

// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" void HashSet_1__ctor_m21577_gshared (HashSet_1_t2729 * __this, const MethodInfo* method);
#define HashSet_1__ctor_m21577(__this, method) (( void (*) (HashSet_1_t2729 *, const MethodInfo*))HashSet_1__ctor_m21577_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m21579_gshared (HashSet_1_t2729 * __this, SerializationInfo_t1005 * ___info, StreamingContext_t1006  ___context, const MethodInfo* method);
#define HashSet_1__ctor_m21579(__this, ___info, ___context, method) (( void (*) (HashSet_1_t2729 *, SerializationInfo_t1005 *, StreamingContext_t1006 , const MethodInfo*))HashSet_1__ctor_m21579_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21581_gshared (HashSet_1_t2729 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21581(__this, method) (( Object_t* (*) (HashSet_1_t2729 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21581_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21583_gshared (HashSet_1_t2729 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21583(__this, method) (( bool (*) (HashSet_1_t2729 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21583_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m21585_gshared (HashSet_1_t2729 * __this, ObjectU5BU5D_t110* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m21585(__this, ___array, ___index, method) (( void (*) (HashSet_1_t2729 *, ObjectU5BU5D_t110*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m21585_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m21587_gshared (HashSet_1_t2729 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m21587(__this, ___item, method) (( void (*) (HashSet_1_t2729 *, Object_t *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m21587_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m21589_gshared (HashSet_1_t2729 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m21589(__this, method) (( Object_t * (*) (HashSet_1_t2729 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m21589_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m21591_gshared (HashSet_1_t2729 * __this, const MethodInfo* method);
#define HashSet_1_get_Count_m21591(__this, method) (( int32_t (*) (HashSet_1_t2729 *, const MethodInfo*))HashSet_1_get_Count_m21591_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m21593_gshared (HashSet_1_t2729 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1_Init_m21593(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t2729 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m21593_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m21595_gshared (HashSet_1_t2729 * __this, int32_t ___size, const MethodInfo* method);
#define HashSet_1_InitArrays_m21595(__this, ___size, method) (( void (*) (HashSet_1_t2729 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m21595_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m21597_gshared (HashSet_1_t2729 * __this, int32_t ___index, int32_t ___hash, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m21597(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t2729 *, int32_t, int32_t, Object_t *, const MethodInfo*))HashSet_1_SlotsContainsAt_m21597_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m21599_gshared (HashSet_1_t2729 * __this, ObjectU5BU5D_t110* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_CopyTo_m21599(__this, ___array, ___index, method) (( void (*) (HashSet_1_t2729 *, ObjectU5BU5D_t110*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m21599_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m21601_gshared (HashSet_1_t2729 * __this, ObjectU5BU5D_t110* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define HashSet_1_CopyTo_m21601(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t2729 *, ObjectU5BU5D_t110*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m21601_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern "C" void HashSet_1_Resize_m21603_gshared (HashSet_1_t2729 * __this, const MethodInfo* method);
#define HashSet_1_Resize_m21603(__this, method) (( void (*) (HashSet_1_t2729 *, const MethodInfo*))HashSet_1_Resize_m21603_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m21605_gshared (HashSet_1_t2729 * __this, int32_t ___index, const MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m21605(__this, ___index, method) (( int32_t (*) (HashSet_1_t2729 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m21605_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m21607_gshared (HashSet_1_t2729 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_GetItemHashCode_m21607(__this, ___item, method) (( int32_t (*) (HashSet_1_t2729 *, Object_t *, const MethodInfo*))HashSet_1_GetItemHashCode_m21607_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C" bool HashSet_1_Add_m21608_gshared (HashSet_1_t2729 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Add_m21608(__this, ___item, method) (( bool (*) (HashSet_1_t2729 *, Object_t *, const MethodInfo*))HashSet_1_Add_m21608_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" void HashSet_1_Clear_m21610_gshared (HashSet_1_t2729 * __this, const MethodInfo* method);
#define HashSet_1_Clear_m21610(__this, method) (( void (*) (HashSet_1_t2729 *, const MethodInfo*))HashSet_1_Clear_m21610_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C" bool HashSet_1_Contains_m21612_gshared (HashSet_1_t2729 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Contains_m21612(__this, ___item, method) (( bool (*) (HashSet_1_t2729 *, Object_t *, const MethodInfo*))HashSet_1_Contains_m21612_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern "C" bool HashSet_1_Remove_m21614_gshared (HashSet_1_t2729 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Remove_m21614(__this, ___item, method) (( bool (*) (HashSet_1_t2729 *, Object_t *, const MethodInfo*))HashSet_1_Remove_m21614_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m21616_gshared (HashSet_1_t2729 * __this, SerializationInfo_t1005 * ___info, StreamingContext_t1006  ___context, const MethodInfo* method);
#define HashSet_1_GetObjectData_m21616(__this, ___info, ___context, method) (( void (*) (HashSet_1_t2729 *, SerializationInfo_t1005 *, StreamingContext_t1006 , const MethodInfo*))HashSet_1_GetObjectData_m21616_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m21618_gshared (HashSet_1_t2729 * __this, Object_t * ___sender, const MethodInfo* method);
#define HashSet_1_OnDeserialization_m21618(__this, ___sender, method) (( void (*) (HashSet_1_t2729 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m21618_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2733  HashSet_1_GetEnumerator_m21619_gshared (HashSet_1_t2729 * __this, const MethodInfo* method);
#define HashSet_1_GetEnumerator_m21619(__this, method) (( Enumerator_t2733  (*) (HashSet_1_t2729 *, const MethodInfo*))HashSet_1_GetEnumerator_m21619_gshared)(__this, method)
