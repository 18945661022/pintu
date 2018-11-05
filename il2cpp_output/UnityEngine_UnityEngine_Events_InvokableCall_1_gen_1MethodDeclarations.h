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

// UnityEngine.Events.InvokableCall`1<System.Single>
struct InvokableCall_1_t2363;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t421;
// System.Object[]
struct ObjectU5BU5D_t110;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m15825_gshared (InvokableCall_1_t2363 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m15825(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2363 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m15825_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m15826_gshared (InvokableCall_1_t2363 * __this, UnityAction_1_t421 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m15826(__this, ___callback, method) (( void (*) (InvokableCall_1_t2363 *, UnityAction_1_t421 *, const MethodInfo*))InvokableCall_1__ctor_m15826_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m15827_gshared (InvokableCall_1_t2363 * __this, ObjectU5BU5D_t110* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m15827(__this, ___args, method) (( void (*) (InvokableCall_1_t2363 *, ObjectU5BU5D_t110*, const MethodInfo*))InvokableCall_1_Invoke_m15827_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Single>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m15828_gshared (InvokableCall_1_t2363 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m15828(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2363 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m15828_gshared)(__this, ___targetObj, ___method, method)
