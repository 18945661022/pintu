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

// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t2321;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t263;
// System.AsyncCallback
struct AsyncCallback_t264;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Predicate`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m15207_gshared (Predicate_1_t2321 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m15207(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2321 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m15207_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m15208_gshared (Predicate_1_t2321 * __this, UIVertex_t276  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m15208(__this, ___obj, method) (( bool (*) (Predicate_1_t2321 *, UIVertex_t276 , const MethodInfo*))Predicate_1_Invoke_m15208_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UIVertex>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m15209_gshared (Predicate_1_t2321 * __this, UIVertex_t276  ___obj, AsyncCallback_t264 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m15209(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2321 *, UIVertex_t276 , AsyncCallback_t264 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m15209_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m15210_gshared (Predicate_1_t2321 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m15210(__this, ___result, method) (( bool (*) (Predicate_1_t2321 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m15210_gshared)(__this, ___result, method)
