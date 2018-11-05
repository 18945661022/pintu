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

// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t2233;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2203;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t864;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern "C" void UnityEvent_1__ctor_m14051_gshared (UnityEvent_1_t2233 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m14051(__this, method) (( void (*) (UnityEvent_1_t2233 *, const MethodInfo*))UnityEvent_1__ctor_m14051_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m14053_gshared (UnityEvent_1_t2233 * __this, UnityAction_1_t2203 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m14053(__this, ___call, method) (( void (*) (UnityEvent_1_t2233 *, UnityAction_1_t2203 *, const MethodInfo*))UnityEvent_1_AddListener_m14053_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m14055_gshared (UnityEvent_1_t2233 * __this, UnityAction_1_t2203 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m14055(__this, ___call, method) (( void (*) (UnityEvent_1_t2233 *, UnityAction_1_t2203 *, const MethodInfo*))UnityEvent_1_RemoveListener_m14055_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m14057_gshared (UnityEvent_1_t2233 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m14057(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t2233 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m14057_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t864 * UnityEvent_1_GetDelegate_m14059_gshared (UnityEvent_1_t2233 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m14059(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t864 * (*) (UnityEvent_1_t2233 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m14059_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t864 * UnityEvent_1_GetDelegate_m14061_gshared (Object_t * __this /* static, unused */, UnityAction_1_t2203 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m14061(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t864 * (*) (Object_t * /* static, unused */, UnityAction_1_t2203 *, const MethodInfo*))UnityEvent_1_GetDelegate_m14061_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m14062_gshared (UnityEvent_1_t2233 * __this, Object_t * ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m14062(__this, ___arg0, method) (( void (*) (UnityEvent_1_t2233 *, Object_t *, const MethodInfo*))UnityEvent_1_Invoke_m14062_gshared)(__this, ___arg0, method)
