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

// System.Collections.Generic.LinkedList`1<System.Int32>
struct LinkedList_1_t551;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1005;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2998;
// System.Collections.IEnumerator
struct IEnumerator_t95;
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedListNode`1<System.Int32>
struct LinkedListNode_1_t718;
// System.Int32[]
struct Int32U5BU5D_t128;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "System_System_Collections_Generic_LinkedList_1_Enumerator_ge.h"

// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::.ctor()
extern "C" void LinkedList_1__ctor_m4281_gshared (LinkedList_1_t551 * __this, const MethodInfo* method);
#define LinkedList_1__ctor_m4281(__this, method) (( void (*) (LinkedList_1_t551 *, const MethodInfo*))LinkedList_1__ctor_m4281_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1__ctor_m18112_gshared (LinkedList_1_t551 * __this, SerializationInfo_t1005 * ___info, StreamingContext_t1006  ___context, const MethodInfo* method);
#define LinkedList_1__ctor_m18112(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t551 *, SerializationInfo_t1005 *, StreamingContext_t1006 , const MethodInfo*))LinkedList_1__ctor_m18112_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m18113_gshared (LinkedList_1_t551 * __this, int32_t ___value, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m18113(__this, ___value, method) (( void (*) (LinkedList_1_t551 *, int32_t, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m18113_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void LinkedList_1_System_Collections_ICollection_CopyTo_m18114_gshared (LinkedList_1_t551 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_CopyTo_m18114(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t551 *, Array_t *, int32_t, const MethodInfo*))LinkedList_1_System_Collections_ICollection_CopyTo_m18114_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.LinkedList`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18115_gshared (LinkedList_1_t551 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18115(__this, method) (( Object_t* (*) (LinkedList_1_t551 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18115_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.LinkedList`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m18116_gshared (LinkedList_1_t551 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m18116(__this, method) (( Object_t * (*) (LinkedList_1_t551 *, const MethodInfo*))LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m18116_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18117_gshared (LinkedList_1_t551 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18117(__this, method) (( bool (*) (LinkedList_1_t551 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18117_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m18118_gshared (LinkedList_1_t551 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m18118(__this, method) (( bool (*) (LinkedList_1_t551 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m18118_gshared)(__this, method)
// System.Object System.Collections.Generic.LinkedList`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * LinkedList_1_System_Collections_ICollection_get_SyncRoot_m18119_gshared (LinkedList_1_t551 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_SyncRoot_m18119(__this, method) (( Object_t * (*) (LinkedList_1_t551 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_SyncRoot_m18119_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::VerifyReferencedNode(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_VerifyReferencedNode_m18120_gshared (LinkedList_1_t551 * __this, LinkedListNode_1_t718 * ___node, const MethodInfo* method);
#define LinkedList_1_VerifyReferencedNode_m18120(__this, ___node, method) (( void (*) (LinkedList_1_t551 *, LinkedListNode_1_t718 *, const MethodInfo*))LinkedList_1_VerifyReferencedNode_m18120_gshared)(__this, ___node, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Int32>::AddLast(T)
extern "C" LinkedListNode_1_t718 * LinkedList_1_AddLast_m4286_gshared (LinkedList_1_t551 * __this, int32_t ___value, const MethodInfo* method);
#define LinkedList_1_AddLast_m4286(__this, ___value, method) (( LinkedListNode_1_t718 * (*) (LinkedList_1_t551 *, int32_t, const MethodInfo*))LinkedList_1_AddLast_m4286_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::Clear()
extern "C" void LinkedList_1_Clear_m18121_gshared (LinkedList_1_t551 * __this, const MethodInfo* method);
#define LinkedList_1_Clear_m18121(__this, method) (( void (*) (LinkedList_1_t551 *, const MethodInfo*))LinkedList_1_Clear_m18121_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Int32>::Contains(T)
extern "C" bool LinkedList_1_Contains_m18122_gshared (LinkedList_1_t551 * __this, int32_t ___value, const MethodInfo* method);
#define LinkedList_1_Contains_m18122(__this, ___value, method) (( bool (*) (LinkedList_1_t551 *, int32_t, const MethodInfo*))LinkedList_1_Contains_m18122_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void LinkedList_1_CopyTo_m18123_gshared (LinkedList_1_t551 * __this, Int32U5BU5D_t128* ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_CopyTo_m18123(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t551 *, Int32U5BU5D_t128*, int32_t, const MethodInfo*))LinkedList_1_CopyTo_m18123_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Int32>::Find(T)
extern "C" LinkedListNode_1_t718 * LinkedList_1_Find_m18124_gshared (LinkedList_1_t551 * __this, int32_t ___value, const MethodInfo* method);
#define LinkedList_1_Find_m18124(__this, ___value, method) (( LinkedListNode_1_t718 * (*) (LinkedList_1_t551 *, int32_t, const MethodInfo*))LinkedList_1_Find_m18124_gshared)(__this, ___value, method)
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t2512  LinkedList_1_GetEnumerator_m18125_gshared (LinkedList_1_t551 * __this, const MethodInfo* method);
#define LinkedList_1_GetEnumerator_m18125(__this, method) (( Enumerator_t2512  (*) (LinkedList_1_t551 *, const MethodInfo*))LinkedList_1_GetEnumerator_m18125_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1_GetObjectData_m18126_gshared (LinkedList_1_t551 * __this, SerializationInfo_t1005 * ___info, StreamingContext_t1006  ___context, const MethodInfo* method);
#define LinkedList_1_GetObjectData_m18126(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t551 *, SerializationInfo_t1005 *, StreamingContext_t1006 , const MethodInfo*))LinkedList_1_GetObjectData_m18126_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::OnDeserialization(System.Object)
extern "C" void LinkedList_1_OnDeserialization_m18127_gshared (LinkedList_1_t551 * __this, Object_t * ___sender, const MethodInfo* method);
#define LinkedList_1_OnDeserialization_m18127(__this, ___sender, method) (( void (*) (LinkedList_1_t551 *, Object_t *, const MethodInfo*))LinkedList_1_OnDeserialization_m18127_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Int32>::Remove(T)
extern "C" bool LinkedList_1_Remove_m18128_gshared (LinkedList_1_t551 * __this, int32_t ___value, const MethodInfo* method);
#define LinkedList_1_Remove_m18128(__this, ___value, method) (( bool (*) (LinkedList_1_t551 *, int32_t, const MethodInfo*))LinkedList_1_Remove_m18128_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::Remove(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_Remove_m4457_gshared (LinkedList_1_t551 * __this, LinkedListNode_1_t718 * ___node, const MethodInfo* method);
#define LinkedList_1_Remove_m4457(__this, ___node, method) (( void (*) (LinkedList_1_t551 *, LinkedListNode_1_t718 *, const MethodInfo*))LinkedList_1_Remove_m4457_gshared)(__this, ___node, method)
// System.Int32 System.Collections.Generic.LinkedList`1<System.Int32>::get_Count()
extern "C" int32_t LinkedList_1_get_Count_m18129_gshared (LinkedList_1_t551 * __this, const MethodInfo* method);
#define LinkedList_1_get_Count_m18129(__this, method) (( int32_t (*) (LinkedList_1_t551 *, const MethodInfo*))LinkedList_1_get_Count_m18129_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Int32>::get_First()
extern "C" LinkedListNode_1_t718 * LinkedList_1_get_First_m4294_gshared (LinkedList_1_t551 * __this, const MethodInfo* method);
#define LinkedList_1_get_First_m4294(__this, method) (( LinkedListNode_1_t718 * (*) (LinkedList_1_t551 *, const MethodInfo*))LinkedList_1_get_First_m4294_gshared)(__this, method)
