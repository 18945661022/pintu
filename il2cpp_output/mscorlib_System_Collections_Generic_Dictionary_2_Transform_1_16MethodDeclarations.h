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

// System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,Vuforia.Image/PIXEL_FORMAT>
struct Transform_1_t2454;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t263;
// System.AsyncCallback
struct AsyncCallback_t264;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,Vuforia.Image/PIXEL_FORMAT>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m17185_gshared (Transform_1_t2454 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m17185(__this, ___object, ___method, method) (( void (*) (Transform_1_t2454 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m17185_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,Vuforia.Image/PIXEL_FORMAT>::Invoke(TKey,TValue)
extern "C" int32_t Transform_1_Invoke_m17186_gshared (Transform_1_t2454 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m17186(__this, ___key, ___value, method) (( int32_t (*) (Transform_1_t2454 *, int32_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m17186_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,Vuforia.Image/PIXEL_FORMAT>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m17187_gshared (Transform_1_t2454 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t264 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m17187(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2454 *, int32_t, Object_t *, AsyncCallback_t264 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m17187_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,Vuforia.Image/PIXEL_FORMAT>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m17188_gshared (Transform_1_t2454 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m17188(__this, ___result, method) (( int32_t (*) (Transform_1_t2454 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m17188_gshared)(__this, ___result, method)
