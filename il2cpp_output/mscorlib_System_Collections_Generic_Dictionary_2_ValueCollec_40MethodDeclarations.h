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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>
struct ValueCollection_t2547;
// System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>
struct Dictionary_2_t2538;
// System.Collections.Generic.IEnumerator`1<System.UInt16>
struct IEnumerator_1_t3043;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t95;
// System.Object
struct Object_t;
// System.UInt16[]
struct UInt16U5BU5D_t1281;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_41.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m18637_gshared (ValueCollection_t2547 * __this, Dictionary_2_t2538 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m18637(__this, ___dictionary, method) (( void (*) (ValueCollection_t2547 *, Dictionary_2_t2538 *, const MethodInfo*))ValueCollection__ctor_m18637_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m18638_gshared (ValueCollection_t2547 * __this, uint16_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m18638(__this, ___item, method) (( void (*) (ValueCollection_t2547 *, uint16_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m18638_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m18639_gshared (ValueCollection_t2547 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m18639(__this, method) (( void (*) (ValueCollection_t2547 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m18639_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m18640_gshared (ValueCollection_t2547 * __this, uint16_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m18640(__this, ___item, method) (( bool (*) (ValueCollection_t2547 *, uint16_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m18640_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m18641_gshared (ValueCollection_t2547 * __this, uint16_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m18641(__this, ___item, method) (( bool (*) (ValueCollection_t2547 *, uint16_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m18641_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18642_gshared (ValueCollection_t2547 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18642(__this, method) (( Object_t* (*) (ValueCollection_t2547 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18642_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m18643_gshared (ValueCollection_t2547 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m18643(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2547 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m18643_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18644_gshared (ValueCollection_t2547 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18644(__this, method) (( Object_t * (*) (ValueCollection_t2547 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18644_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18645_gshared (ValueCollection_t2547 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18645(__this, method) (( bool (*) (ValueCollection_t2547 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18645_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18646_gshared (ValueCollection_t2547 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18646(__this, method) (( bool (*) (ValueCollection_t2547 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18646_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m18647_gshared (ValueCollection_t2547 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m18647(__this, method) (( Object_t * (*) (ValueCollection_t2547 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m18647_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m18648_gshared (ValueCollection_t2547 * __this, UInt16U5BU5D_t1281* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m18648(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2547 *, UInt16U5BU5D_t1281*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m18648_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::GetEnumerator()
extern "C" Enumerator_t2548  ValueCollection_GetEnumerator_m18649_gshared (ValueCollection_t2547 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m18649(__this, method) (( Enumerator_t2548  (*) (ValueCollection_t2547 *, const MethodInfo*))ValueCollection_GetEnumerator_m18649_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m18650_gshared (ValueCollection_t2547 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m18650(__this, method) (( int32_t (*) (ValueCollection_t2547 *, const MethodInfo*))ValueCollection_get_Count_m18650_gshared)(__this, method)
