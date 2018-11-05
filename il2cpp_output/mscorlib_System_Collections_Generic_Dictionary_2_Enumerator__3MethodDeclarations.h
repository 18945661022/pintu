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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2245;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14341_gshared (Enumerator_t2253 * __this, Dictionary_2_t2245 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m14341(__this, ___dictionary, method) (( void (*) (Enumerator_t2253 *, Dictionary_2_t2245 *, const MethodInfo*))Enumerator__ctor_m14341_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14342_gshared (Enumerator_t2253 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m14342(__this, method) (( Object_t * (*) (Enumerator_t2253 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m14342_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m14343_gshared (Enumerator_t2253 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m14343(__this, method) (( void (*) (Enumerator_t2253 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m14343_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1395  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14344_gshared (Enumerator_t2253 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14344(__this, method) (( DictionaryEntry_t1395  (*) (Enumerator_t2253 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14344_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14345_gshared (Enumerator_t2253 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14345(__this, method) (( Object_t * (*) (Enumerator_t2253 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14345_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14346_gshared (Enumerator_t2253 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14346(__this, method) (( Object_t * (*) (Enumerator_t2253 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14346_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14347_gshared (Enumerator_t2253 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m14347(__this, method) (( bool (*) (Enumerator_t2253 *, const MethodInfo*))Enumerator_MoveNext_m14347_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2247  Enumerator_get_Current_m14348_gshared (Enumerator_t2253 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m14348(__this, method) (( KeyValuePair_2_t2247  (*) (Enumerator_t2253 *, const MethodInfo*))Enumerator_get_Current_m14348_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m14349_gshared (Enumerator_t2253 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m14349(__this, method) (( int32_t (*) (Enumerator_t2253 *, const MethodInfo*))Enumerator_get_CurrentKey_m14349_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m14350_gshared (Enumerator_t2253 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m14350(__this, method) (( Object_t * (*) (Enumerator_t2253 *, const MethodInfo*))Enumerator_get_CurrentValue_m14350_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m14351_gshared (Enumerator_t2253 * __this, const MethodInfo* method);
#define Enumerator_Reset_m14351(__this, method) (( void (*) (Enumerator_t2253 *, const MethodInfo*))Enumerator_Reset_m14351_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m14352_gshared (Enumerator_t2253 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m14352(__this, method) (( void (*) (Enumerator_t2253 *, const MethodInfo*))Enumerator_VerifyState_m14352_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m14353_gshared (Enumerator_t2253 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m14353(__this, method) (( void (*) (Enumerator_t2253 *, const MethodInfo*))Enumerator_VerifyCurrent_m14353_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m14354_gshared (Enumerator_t2253 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m14354(__this, method) (( void (*) (Enumerator_t2253 *, const MethodInfo*))Enumerator_Dispose_m14354_gshared)(__this, method)
