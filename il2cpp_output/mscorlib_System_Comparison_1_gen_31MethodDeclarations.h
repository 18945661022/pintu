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

// System.Comparison`1<System.Int32>
struct Comparison_1_t2520;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t263;
// System.AsyncCallback
struct AsyncCallback_t264;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m18269_gshared (Comparison_1_t2520 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m18269(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2520 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m18269_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Int32>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m18270_gshared (Comparison_1_t2520 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m18270(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2520 *, int32_t, int32_t, const MethodInfo*))Comparison_1_Invoke_m18270_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Int32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m18271_gshared (Comparison_1_t2520 * __this, int32_t ___x, int32_t ___y, AsyncCallback_t264 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m18271(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2520 *, int32_t, int32_t, AsyncCallback_t264 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m18271_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m18272_gshared (Comparison_1_t2520 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m18272(__this, ___result, method) (( int32_t (*) (Comparison_1_t2520 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m18272_gshared)(__this, ___result, method)
