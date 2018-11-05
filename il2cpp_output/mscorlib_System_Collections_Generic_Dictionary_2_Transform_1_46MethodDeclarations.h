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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Object>
struct Transform_1_t2689;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t263;
// System.AsyncCallback
struct AsyncCallback_t264;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WebCamProfile_Profi.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m21019_gshared (Transform_1_t2689 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m21019(__this, ___object, ___method, method) (( void (*) (Transform_1_t2689 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m21019_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m21020_gshared (Transform_1_t2689 * __this, Object_t * ___key, ProfileData_t626  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m21020(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t2689 *, Object_t *, ProfileData_t626 , const MethodInfo*))Transform_1_Invoke_m21020_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m21021_gshared (Transform_1_t2689 * __this, Object_t * ___key, ProfileData_t626  ___value, AsyncCallback_t264 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m21021(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2689 *, Object_t *, ProfileData_t626 , AsyncCallback_t264 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m21021_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m21022_gshared (Transform_1_t2689 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m21022(__this, ___result, method) (( Object_t * (*) (Transform_1_t2689 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m21022_gshared)(__this, ___result, method)
