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

// System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>
struct Dictionary_2_t2538;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__16.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18619_gshared (Enumerator_t2545 * __this, Dictionary_2_t2538 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m18619(__this, ___dictionary, method) (( void (*) (Enumerator_t2545 *, Dictionary_2_t2538 *, const MethodInfo*))Enumerator__ctor_m18619_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18620_gshared (Enumerator_t2545 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m18620(__this, method) (( Object_t * (*) (Enumerator_t2545 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m18620_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m18621_gshared (Enumerator_t2545 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m18621(__this, method) (( void (*) (Enumerator_t2545 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m18621_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1395  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18622_gshared (Enumerator_t2545 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18622(__this, method) (( DictionaryEntry_t1395  (*) (Enumerator_t2545 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18622_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18623_gshared (Enumerator_t2545 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18623(__this, method) (( Object_t * (*) (Enumerator_t2545 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18623_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18624_gshared (Enumerator_t2545 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18624(__this, method) (( Object_t * (*) (Enumerator_t2545 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18624_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18625_gshared (Enumerator_t2545 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m18625(__this, method) (( bool (*) (Enumerator_t2545 *, const MethodInfo*))Enumerator_MoveNext_m18625_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::get_Current()
extern "C" KeyValuePair_2_t2540  Enumerator_get_Current_m18626_gshared (Enumerator_t2545 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m18626(__this, method) (( KeyValuePair_2_t2540  (*) (Enumerator_t2545 *, const MethodInfo*))Enumerator_get_Current_m18626_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m18627_gshared (Enumerator_t2545 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m18627(__this, method) (( Object_t * (*) (Enumerator_t2545 *, const MethodInfo*))Enumerator_get_CurrentKey_m18627_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::get_CurrentValue()
extern "C" uint16_t Enumerator_get_CurrentValue_m18628_gshared (Enumerator_t2545 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m18628(__this, method) (( uint16_t (*) (Enumerator_t2545 *, const MethodInfo*))Enumerator_get_CurrentValue_m18628_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::Reset()
extern "C" void Enumerator_Reset_m18629_gshared (Enumerator_t2545 * __this, const MethodInfo* method);
#define Enumerator_Reset_m18629(__this, method) (( void (*) (Enumerator_t2545 *, const MethodInfo*))Enumerator_Reset_m18629_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::VerifyState()
extern "C" void Enumerator_VerifyState_m18630_gshared (Enumerator_t2545 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m18630(__this, method) (( void (*) (Enumerator_t2545 *, const MethodInfo*))Enumerator_VerifyState_m18630_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m18631_gshared (Enumerator_t2545 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m18631(__this, method) (( void (*) (Enumerator_t2545 *, const MethodInfo*))Enumerator_VerifyCurrent_m18631_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::Dispose()
extern "C" void Enumerator_Dispose_m18632_gshared (Enumerator_t2545 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m18632(__this, method) (( void (*) (Enumerator_t2545 *, const MethodInfo*))Enumerator_Dispose_m18632_gshared)(__this, method)
