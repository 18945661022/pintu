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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.DictionaryEntry>
struct Transform_1_t2539;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t263;
// System.AsyncCallback
struct AsyncCallback_t264;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m18661_gshared (Transform_1_t2539 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m18661(__this, ___object, ___method, method) (( void (*) (Transform_1_t2539 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m18661_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1395  Transform_1_Invoke_m18662_gshared (Transform_1_t2539 * __this, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m18662(__this, ___key, ___value, method) (( DictionaryEntry_t1395  (*) (Transform_1_t2539 *, Object_t *, uint16_t, const MethodInfo*))Transform_1_Invoke_m18662_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m18663_gshared (Transform_1_t2539 * __this, Object_t * ___key, uint16_t ___value, AsyncCallback_t264 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m18663(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2539 *, Object_t *, uint16_t, AsyncCallback_t264 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m18663_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1395  Transform_1_EndInvoke_m18664_gshared (Transform_1_t2539 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m18664(__this, ___result, method) (( DictionaryEntry_t1395  (*) (Transform_1_t2539 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m18664_gshared)(__this, ___result, method)
