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

// System.Collections.Hashtable
struct Hashtable_t1134;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t1259;
// System.Collections.IComparer
struct IComparer_t1254;
// System.Collections.IDictionary
struct IDictionary_t1200;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1005;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1260;
// System.Collections.IEnumerator
struct IEnumerator_t95;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t1396;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1213;
// System.Collections.Hashtable/Slot[]
struct SlotU5BU5D_t1553;
// System.Int32[]
struct Int32U5BU5D_t128;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Hashtable_EnumeratorMode.h"

// System.Void System.Collections.Hashtable::.ctor()
extern "C" void Hashtable__ctor_m6832 (Hashtable_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C" void Hashtable__ctor_m9481 (Hashtable_t1134 * __this, int32_t ___capacity, float ___loadFactor, Object_t * ___hcp, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single)
extern "C" void Hashtable__ctor_m9482 (Hashtable_t1134 * __this, int32_t ___capacity, float ___loadFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32)
extern "C" void Hashtable__ctor_m7801 (Hashtable_t1134 * __this, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.Hashtable)
extern "C" void Hashtable__ctor_m9483 (Hashtable_t1134 * __this, Hashtable_t1134 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C" void Hashtable__ctor_m7739 (Hashtable_t1134 * __this, int32_t ___capacity, Object_t * ___hcp, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IDictionary,System.Single,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C" void Hashtable__ctor_m9484 (Hashtable_t1134 * __this, Object_t * ___d, float ___loadFactor, Object_t * ___hcp, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IDictionary,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C" void Hashtable__ctor_m7740 (Hashtable_t1134 * __this, Object_t * ___d, Object_t * ___hcp, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C" void Hashtable__ctor_m7770 (Hashtable_t1134 * __this, Object_t * ___hcp, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Hashtable__ctor_m9485 (Hashtable_t1134 * __this, SerializationInfo_t1005 * ___info, StreamingContext_t1006  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Collections.IEqualityComparer)
extern "C" void Hashtable__ctor_m7747 (Hashtable_t1134 * __this, int32_t ___capacity, Object_t * ___equalityComparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single,System.Collections.IEqualityComparer)
extern "C" void Hashtable__ctor_m9486 (Hashtable_t1134 * __this, int32_t ___capacity, float ___loadFactor, Object_t * ___equalityComparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.cctor()
extern "C" void Hashtable__cctor_m9487 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Hashtable::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Hashtable_System_Collections_IEnumerable_GetEnumerator_m9488 (Hashtable_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::set_comparer(System.Collections.IComparer)
extern "C" void Hashtable_set_comparer_m9489 (Hashtable_t1134 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::set_hcp(System.Collections.IHashCodeProvider)
extern "C" void Hashtable_set_hcp_m9490 (Hashtable_t1134 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::get_Count()
extern "C" int32_t Hashtable_get_Count_m9491 (Hashtable_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::get_IsSynchronized()
extern "C" bool Hashtable_get_IsSynchronized_m9492 (Hashtable_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable::get_SyncRoot()
extern "C" Object_t * Hashtable_get_SyncRoot_m9493 (Hashtable_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable::get_Keys()
extern "C" Object_t * Hashtable_get_Keys_m9494 (Hashtable_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable::get_Values()
extern "C" Object_t * Hashtable_get_Values_m9495 (Hashtable_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable::get_Item(System.Object)
extern "C" Object_t * Hashtable_get_Item_m9496 (Hashtable_t1134 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object)
extern "C" void Hashtable_set_Item_m9497 (Hashtable_t1134 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::CopyTo(System.Array,System.Int32)
extern "C" void Hashtable_CopyTo_m9498 (Hashtable_t1134 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Add(System.Object,System.Object)
extern "C" void Hashtable_Add_m9499 (Hashtable_t1134 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Clear()
extern "C" void Hashtable_Clear_m9500 (Hashtable_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::Contains(System.Object)
extern "C" bool Hashtable_Contains_m9501 (Hashtable_t1134 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator()
extern "C" Object_t * Hashtable_GetEnumerator_m9502 (Hashtable_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Remove(System.Object)
extern "C" void Hashtable_Remove_m9503 (Hashtable_t1134 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::ContainsKey(System.Object)
extern "C" bool Hashtable_ContainsKey_m9504 (Hashtable_t1134 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable::Clone()
extern "C" Object_t * Hashtable_Clone_m9505 (Hashtable_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Hashtable_GetObjectData_m9506 (Hashtable_t1134 * __this, SerializationInfo_t1005 * ___info, StreamingContext_t1006  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::OnDeserialization(System.Object)
extern "C" void Hashtable_OnDeserialization_m9507 (Hashtable_t1134 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Collections.Hashtable::Synchronized(System.Collections.Hashtable)
extern "C" Hashtable_t1134 * Hashtable_Synchronized_m9508 (Object_t * __this /* static, unused */, Hashtable_t1134 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::GetHash(System.Object)
extern "C" int32_t Hashtable_GetHash_m9509 (Hashtable_t1134 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::KeyEquals(System.Object,System.Object)
extern "C" bool Hashtable_KeyEquals_m9510 (Hashtable_t1134 * __this, Object_t * ___item, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::AdjustThreshold()
extern "C" void Hashtable_AdjustThreshold_m9511 (Hashtable_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::SetTable(System.Collections.Hashtable/Slot[],System.Int32[])
extern "C" void Hashtable_SetTable_m9512 (Hashtable_t1134 * __this, SlotU5BU5D_t1553* ___table, Int32U5BU5D_t128* ___hashes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::Find(System.Object)
extern "C" int32_t Hashtable_Find_m9513 (Hashtable_t1134 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Rehash()
extern "C" void Hashtable_Rehash_m9514 (Hashtable_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::PutImpl(System.Object,System.Object,System.Boolean)
extern "C" void Hashtable_PutImpl_m9515 (Hashtable_t1134 * __this, Object_t * ___key, Object_t * ___value, bool ___overwrite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::CopyToArray(System.Array,System.Int32,System.Collections.Hashtable/EnumeratorMode)
extern "C" void Hashtable_CopyToArray_m9516 (Hashtable_t1134 * __this, Array_t * ___arr, int32_t ___i, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::TestPrime(System.Int32)
extern "C" bool Hashtable_TestPrime_m9517 (Object_t * __this /* static, unused */, int32_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::CalcPrime(System.Int32)
extern "C" int32_t Hashtable_CalcPrime_m9518 (Object_t * __this /* static, unused */, int32_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::ToPrime(System.Int32)
extern "C" int32_t Hashtable_ToPrime_m9519 (Object_t * __this /* static, unused */, int32_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
