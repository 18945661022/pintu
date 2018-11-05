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

// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct StaticGetter_1_t2956;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t263;
// System.AsyncCallback
struct AsyncCallback_t264;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/StaticGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void StaticGetter_1__ctor_m24185_gshared (StaticGetter_1_t2956 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define StaticGetter_1__ctor_m24185(__this, ___object, ___method, method) (( void (*) (StaticGetter_1_t2956 *, Object_t *, IntPtr_t, const MethodInfo*))StaticGetter_1__ctor_m24185_gshared)(__this, ___object, ___method, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
extern "C" Object_t * StaticGetter_1_Invoke_m24186_gshared (StaticGetter_1_t2956 * __this, const MethodInfo* method);
#define StaticGetter_1_Invoke_m24186(__this, method) (( Object_t * (*) (StaticGetter_1_t2956 *, const MethodInfo*))StaticGetter_1_Invoke_m24186_gshared)(__this, method)
// System.IAsyncResult System.Reflection.MonoProperty/StaticGetter`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * StaticGetter_1_BeginInvoke_m24187_gshared (StaticGetter_1_t2956 * __this, AsyncCallback_t264 * ___callback, Object_t * ___object, const MethodInfo* method);
#define StaticGetter_1_BeginInvoke_m24187(__this, ___callback, ___object, method) (( Object_t * (*) (StaticGetter_1_t2956 *, AsyncCallback_t264 *, Object_t *, const MethodInfo*))StaticGetter_1_BeginInvoke_m24187_gshared)(__this, ___callback, ___object, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * StaticGetter_1_EndInvoke_m24188_gshared (StaticGetter_1_t2956 * __this, Object_t * ___result, const MethodInfo* method);
#define StaticGetter_1_EndInvoke_m24188(__this, ___result, method) (( Object_t * (*) (StaticGetter_1_t2956 *, Object_t *, const MethodInfo*))StaticGetter_1_EndInvoke_m24188_gshared)(__this, ___result, method)
