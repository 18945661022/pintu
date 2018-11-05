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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2276;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14693_gshared (Enumerator_t2283 * __this, Dictionary_2_t2276 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m14693(__this, ___dictionary, method) (( void (*) (Enumerator_t2283 *, Dictionary_2_t2276 *, const MethodInfo*))Enumerator__ctor_m14693_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14694_gshared (Enumerator_t2283 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m14694(__this, method) (( Object_t * (*) (Enumerator_t2283 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m14694_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m14695_gshared (Enumerator_t2283 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m14695(__this, method) (( void (*) (Enumerator_t2283 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m14695_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1395  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14696_gshared (Enumerator_t2283 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14696(__this, method) (( DictionaryEntry_t1395  (*) (Enumerator_t2283 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14696_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14697_gshared (Enumerator_t2283 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14697(__this, method) (( Object_t * (*) (Enumerator_t2283 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14697_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14698_gshared (Enumerator_t2283 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14698(__this, method) (( Object_t * (*) (Enumerator_t2283 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14698_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14699_gshared (Enumerator_t2283 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m14699(__this, method) (( bool (*) (Enumerator_t2283 *, const MethodInfo*))Enumerator_MoveNext_m14699_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t2279  Enumerator_get_Current_m14700_gshared (Enumerator_t2283 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m14700(__this, method) (( KeyValuePair_2_t2279  (*) (Enumerator_t2283 *, const MethodInfo*))Enumerator_get_Current_m14700_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m14701_gshared (Enumerator_t2283 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m14701(__this, method) (( Object_t * (*) (Enumerator_t2283 *, const MethodInfo*))Enumerator_get_CurrentKey_m14701_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m14702_gshared (Enumerator_t2283 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m14702(__this, method) (( int32_t (*) (Enumerator_t2283 *, const MethodInfo*))Enumerator_get_CurrentValue_m14702_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m14703_gshared (Enumerator_t2283 * __this, const MethodInfo* method);
#define Enumerator_Reset_m14703(__this, method) (( void (*) (Enumerator_t2283 *, const MethodInfo*))Enumerator_Reset_m14703_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m14704_gshared (Enumerator_t2283 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m14704(__this, method) (( void (*) (Enumerator_t2283 *, const MethodInfo*))Enumerator_VerifyState_m14704_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m14705_gshared (Enumerator_t2283 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m14705(__this, method) (( void (*) (Enumerator_t2283 *, const MethodInfo*))Enumerator_VerifyCurrent_m14705_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m14706_gshared (Enumerator_t2283 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m14706(__this, method) (( void (*) (Enumerator_t2283 *, const MethodInfo*))Enumerator_Dispose_m14706_gshared)(__this, method)
