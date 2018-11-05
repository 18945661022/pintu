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

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t2166;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t95;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t110;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2392;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t2165;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m13211_gshared (Collection_1_t2166 * __this, const MethodInfo* method);
#define Collection_1__ctor_m13211(__this, method) (( void (*) (Collection_1_t2166 *, const MethodInfo*))Collection_1__ctor_m13211_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13212_gshared (Collection_1_t2166 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13212(__this, method) (( bool (*) (Collection_1_t2166 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13212_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m13213_gshared (Collection_1_t2166 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m13213(__this, ___array, ___index, method) (( void (*) (Collection_1_t2166 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m13213_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m13214_gshared (Collection_1_t2166 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m13214(__this, method) (( Object_t * (*) (Collection_1_t2166 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m13214_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m13215_gshared (Collection_1_t2166 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m13215(__this, ___value, method) (( int32_t (*) (Collection_1_t2166 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m13215_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m13216_gshared (Collection_1_t2166 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m13216(__this, ___value, method) (( bool (*) (Collection_1_t2166 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m13216_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m13217_gshared (Collection_1_t2166 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m13217(__this, ___value, method) (( int32_t (*) (Collection_1_t2166 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m13217_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m13218_gshared (Collection_1_t2166 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m13218(__this, ___index, ___value, method) (( void (*) (Collection_1_t2166 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m13218_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m13219_gshared (Collection_1_t2166 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m13219(__this, ___value, method) (( void (*) (Collection_1_t2166 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m13219_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m13220_gshared (Collection_1_t2166 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m13220(__this, method) (( bool (*) (Collection_1_t2166 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m13220_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m13221_gshared (Collection_1_t2166 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m13221(__this, method) (( Object_t * (*) (Collection_1_t2166 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m13221_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m13222_gshared (Collection_1_t2166 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m13222(__this, method) (( bool (*) (Collection_1_t2166 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m13222_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m13223_gshared (Collection_1_t2166 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m13223(__this, method) (( bool (*) (Collection_1_t2166 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m13223_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m13224_gshared (Collection_1_t2166 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m13224(__this, ___index, method) (( Object_t * (*) (Collection_1_t2166 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m13224_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m13225_gshared (Collection_1_t2166 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m13225(__this, ___index, ___value, method) (( void (*) (Collection_1_t2166 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m13225_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m13226_gshared (Collection_1_t2166 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m13226(__this, ___item, method) (( void (*) (Collection_1_t2166 *, Object_t *, const MethodInfo*))Collection_1_Add_m13226_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m13227_gshared (Collection_1_t2166 * __this, const MethodInfo* method);
#define Collection_1_Clear_m13227(__this, method) (( void (*) (Collection_1_t2166 *, const MethodInfo*))Collection_1_Clear_m13227_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m13228_gshared (Collection_1_t2166 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m13228(__this, method) (( void (*) (Collection_1_t2166 *, const MethodInfo*))Collection_1_ClearItems_m13228_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m13229_gshared (Collection_1_t2166 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m13229(__this, ___item, method) (( bool (*) (Collection_1_t2166 *, Object_t *, const MethodInfo*))Collection_1_Contains_m13229_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m13230_gshared (Collection_1_t2166 * __this, ObjectU5BU5D_t110* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m13230(__this, ___array, ___index, method) (( void (*) (Collection_1_t2166 *, ObjectU5BU5D_t110*, int32_t, const MethodInfo*))Collection_1_CopyTo_m13230_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m13231_gshared (Collection_1_t2166 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m13231(__this, method) (( Object_t* (*) (Collection_1_t2166 *, const MethodInfo*))Collection_1_GetEnumerator_m13231_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m13232_gshared (Collection_1_t2166 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m13232(__this, ___item, method) (( int32_t (*) (Collection_1_t2166 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m13232_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m13233_gshared (Collection_1_t2166 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m13233(__this, ___index, ___item, method) (( void (*) (Collection_1_t2166 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m13233_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m13234_gshared (Collection_1_t2166 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m13234(__this, ___index, ___item, method) (( void (*) (Collection_1_t2166 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m13234_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m13235_gshared (Collection_1_t2166 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m13235(__this, ___item, method) (( bool (*) (Collection_1_t2166 *, Object_t *, const MethodInfo*))Collection_1_Remove_m13235_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m13236_gshared (Collection_1_t2166 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m13236(__this, ___index, method) (( void (*) (Collection_1_t2166 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m13236_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m13237_gshared (Collection_1_t2166 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m13237(__this, ___index, method) (( void (*) (Collection_1_t2166 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m13237_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m13238_gshared (Collection_1_t2166 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m13238(__this, method) (( int32_t (*) (Collection_1_t2166 *, const MethodInfo*))Collection_1_get_Count_m13238_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m13239_gshared (Collection_1_t2166 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m13239(__this, ___index, method) (( Object_t * (*) (Collection_1_t2166 *, int32_t, const MethodInfo*))Collection_1_get_Item_m13239_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m13240_gshared (Collection_1_t2166 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m13240(__this, ___index, ___value, method) (( void (*) (Collection_1_t2166 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m13240_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m13241_gshared (Collection_1_t2166 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m13241(__this, ___index, ___item, method) (( void (*) (Collection_1_t2166 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m13241_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m13242_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m13242(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m13242_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m13243_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m13243(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m13243_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m13244_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m13244(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m13244_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m13245_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m13245(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m13245_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m13246_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m13246(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m13246_gshared)(__this /* static, unused */, ___list, method)
