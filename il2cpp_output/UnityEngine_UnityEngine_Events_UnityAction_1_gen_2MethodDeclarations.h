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

// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t421;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t263;
// System.AsyncCallback
struct AsyncCallback_t264;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m1981_gshared (UnityAction_1_t421 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m1981(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t421 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m1981_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m15822_gshared (UnityAction_1_t421 * __this, float ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m15822(__this, ___arg0, method) (( void (*) (UnityAction_1_t421 *, float, const MethodInfo*))UnityAction_1_Invoke_m15822_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Single>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m15823_gshared (UnityAction_1_t421 * __this, float ___arg0, AsyncCallback_t264 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m15823(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t421 *, float, AsyncCallback_t264 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m15823_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m15824_gshared (UnityAction_1_t421 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m15824(__this, ___result, method) (( void (*) (UnityAction_1_t421 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m15824_gshared)(__this, ___result, method)
