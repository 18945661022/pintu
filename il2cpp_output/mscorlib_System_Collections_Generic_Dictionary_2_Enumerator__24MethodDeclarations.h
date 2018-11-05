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

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>
struct Dictionary_2_t781;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__24.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__1.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m20473_gshared (Enumerator_t2650 * __this, Dictionary_2_t781 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m20473(__this, ___dictionary, method) (( void (*) (Enumerator_t2650 *, Dictionary_2_t781 *, const MethodInfo*))Enumerator__ctor_m20473_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m20474_gshared (Enumerator_t2650 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m20474(__this, method) (( Object_t * (*) (Enumerator_t2650 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m20474_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m20475_gshared (Enumerator_t2650 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m20475(__this, method) (( void (*) (Enumerator_t2650 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m20475_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1395  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20476_gshared (Enumerator_t2650 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20476(__this, method) (( DictionaryEntry_t1395  (*) (Enumerator_t2650 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20476_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20477_gshared (Enumerator_t2650 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20477(__this, method) (( Object_t * (*) (Enumerator_t2650 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20477_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20478_gshared (Enumerator_t2650 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20478(__this, method) (( Object_t * (*) (Enumerator_t2650 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20478_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::MoveNext()
extern "C" bool Enumerator_MoveNext_m20479_gshared (Enumerator_t2650 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m20479(__this, method) (( bool (*) (Enumerator_t2650 *, const MethodInfo*))Enumerator_MoveNext_m20479_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Current()
extern "C" KeyValuePair_2_t2645  Enumerator_get_Current_m20480_gshared (Enumerator_t2650 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m20480(__this, method) (( KeyValuePair_2_t2645  (*) (Enumerator_t2650 *, const MethodInfo*))Enumerator_get_Current_m20480_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m20481_gshared (Enumerator_t2650 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m20481(__this, method) (( int32_t (*) (Enumerator_t2650 *, const MethodInfo*))Enumerator_get_CurrentKey_m20481_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_CurrentValue()
extern "C" VirtualButtonData_t534  Enumerator_get_CurrentValue_m20482_gshared (Enumerator_t2650 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m20482(__this, method) (( VirtualButtonData_t534  (*) (Enumerator_t2650 *, const MethodInfo*))Enumerator_get_CurrentValue_m20482_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::Reset()
extern "C" void Enumerator_Reset_m20483_gshared (Enumerator_t2650 * __this, const MethodInfo* method);
#define Enumerator_Reset_m20483(__this, method) (( void (*) (Enumerator_t2650 *, const MethodInfo*))Enumerator_Reset_m20483_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::VerifyState()
extern "C" void Enumerator_VerifyState_m20484_gshared (Enumerator_t2650 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m20484(__this, method) (( void (*) (Enumerator_t2650 *, const MethodInfo*))Enumerator_VerifyState_m20484_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m20485_gshared (Enumerator_t2650 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m20485(__this, method) (( void (*) (Enumerator_t2650 *, const MethodInfo*))Enumerator_VerifyCurrent_m20485_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::Dispose()
extern "C" void Enumerator_Dispose_m20486_gshared (Enumerator_t2650 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m20486(__this, method) (( void (*) (Enumerator_t2650 *, const MethodInfo*))Enumerator_Dispose_m20486_gshared)(__this, method)
