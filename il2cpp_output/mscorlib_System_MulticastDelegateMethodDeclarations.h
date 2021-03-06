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

// System.MulticastDelegate
struct MulticastDelegate_t262;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1005;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t2091;
// System.Delegate
struct Delegate_t115;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m8451 (MulticastDelegate_t262 * __this, SerializationInfo_t1005 * ___info, StreamingContext_t1006  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m8452 (MulticastDelegate_t262 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m8453 (MulticastDelegate_t262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t2091* MulticastDelegate_GetInvocationList_m8454 (MulticastDelegate_t262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t115 * MulticastDelegate_CombineImpl_m8455 (MulticastDelegate_t262 * __this, Delegate_t115 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m8456 (MulticastDelegate_t262 * __this, MulticastDelegate_t262 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t262 * MulticastDelegate_KPM_m8457 (Object_t * __this /* static, unused */, MulticastDelegate_t262 * ___needle, MulticastDelegate_t262 * ___haystack, MulticastDelegate_t262 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t115 * MulticastDelegate_RemoveImpl_m8458 (MulticastDelegate_t262 * __this, Delegate_t115 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
