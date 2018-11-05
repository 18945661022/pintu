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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>
struct Transform_1_t2284;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t263;
// System.AsyncCallback
struct AsyncCallback_t264;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m14707_gshared (Transform_1_t2284 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m14707(__this, ___object, ___method, method) (( void (*) (Transform_1_t2284 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m14707_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m14708_gshared (Transform_1_t2284 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m14708(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t2284 *, Object_t *, int32_t, const MethodInfo*))Transform_1_Invoke_m14708_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m14709_gshared (Transform_1_t2284 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t264 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m14709(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2284 *, Object_t *, int32_t, AsyncCallback_t264 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m14709_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m14710_gshared (Transform_1_t2284 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m14710(__this, ___result, method) (( Object_t * (*) (Transform_1_t2284 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m14710_gshared)(__this, ___result, method)
