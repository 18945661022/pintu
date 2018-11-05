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

// System.Predicate`1<Vuforia.VuforiaManagerImpl/TrackableResultData>
struct Predicate_1_t716;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t263;
// System.AsyncCallback
struct AsyncCallback_t264;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__0.h"

// System.Void System.Predicate`1<Vuforia.VuforiaManagerImpl/TrackableResultData>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m4290_gshared (Predicate_1_t716 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m4290(__this, ___object, ___method, method) (( void (*) (Predicate_1_t716 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m4290_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Vuforia.VuforiaManagerImpl/TrackableResultData>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m18273_gshared (Predicate_1_t716 * __this, TrackableResultData_t533  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m18273(__this, ___obj, method) (( bool (*) (Predicate_1_t716 *, TrackableResultData_t533 , const MethodInfo*))Predicate_1_Invoke_m18273_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Vuforia.VuforiaManagerImpl/TrackableResultData>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m18274_gshared (Predicate_1_t716 * __this, TrackableResultData_t533  ___obj, AsyncCallback_t264 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m18274(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t716 *, TrackableResultData_t533 , AsyncCallback_t264 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m18274_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Vuforia.VuforiaManagerImpl/TrackableResultData>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m18275_gshared (Predicate_1_t716 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m18275(__this, ___result, method) (( bool (*) (Predicate_1_t716 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m18275_gshared)(__this, ___result, method)
