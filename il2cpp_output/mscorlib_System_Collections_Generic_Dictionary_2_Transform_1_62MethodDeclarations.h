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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>
struct Transform_1_t2870;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t263;
// System.AsyncCallback
struct AsyncCallback_t264;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m23524_gshared (Transform_1_t2870 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m23524(__this, ___object, ___method, method) (( void (*) (Transform_1_t2870 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m23524_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1395  Transform_1_Invoke_m23525_gshared (Transform_1_t2870 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Transform_1_Invoke_m23525(__this, ___key, ___value, method) (( DictionaryEntry_t1395  (*) (Transform_1_t2870 *, Object_t *, bool, const MethodInfo*))Transform_1_Invoke_m23525_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m23526_gshared (Transform_1_t2870 * __this, Object_t * ___key, bool ___value, AsyncCallback_t264 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m23526(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2870 *, Object_t *, bool, AsyncCallback_t264 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m23526_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1395  Transform_1_EndInvoke_m23527_gshared (Transform_1_t2870 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m23527(__this, ___result, method) (( DictionaryEntry_t1395  (*) (Transform_1_t2870 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m23527_gshared)(__this, ___result, method)
