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

// UnityEngine.Events.InvokableCall`1<System.Int32>
struct InvokableCall_1_t2807;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t2808;
// System.Object[]
struct ObjectU5BU5D_t110;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m22478_gshared (InvokableCall_1_t2807 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m22478(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2807 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m22478_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m22479_gshared (InvokableCall_1_t2807 * __this, UnityAction_1_t2808 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m22479(__this, ___callback, method) (( void (*) (InvokableCall_1_t2807 *, UnityAction_1_t2808 *, const MethodInfo*))InvokableCall_1__ctor_m22479_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m22480_gshared (InvokableCall_1_t2807 * __this, ObjectU5BU5D_t110* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m22480(__this, ___args, method) (( void (*) (InvokableCall_1_t2807 *, ObjectU5BU5D_t110*, const MethodInfo*))InvokableCall_1_Invoke_m22480_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m22481_gshared (InvokableCall_1_t2807 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m22481(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2807 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m22481_gshared)(__this, ___targetObj, ___method, method)
