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

// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2799;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t263;
// System.AsyncCallback
struct AsyncCallback_t264;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Comparison`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m22449_gshared (Comparison_1_t2799 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m22449(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2799 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m22449_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m22450_gshared (Comparison_1_t2799 * __this, UILineInfo_t415  ___x, UILineInfo_t415  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m22450(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2799 *, UILineInfo_t415 , UILineInfo_t415 , const MethodInfo*))Comparison_1_Invoke_m22450_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UILineInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m22451_gshared (Comparison_1_t2799 * __this, UILineInfo_t415  ___x, UILineInfo_t415  ___y, AsyncCallback_t264 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m22451(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2799 *, UILineInfo_t415 , UILineInfo_t415 , AsyncCallback_t264 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m22451_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m22452_gshared (Comparison_1_t2799 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m22452(__this, ___result, method) (( int32_t (*) (Comparison_1_t2799 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m22452_gshared)(__this, ___result, method)
