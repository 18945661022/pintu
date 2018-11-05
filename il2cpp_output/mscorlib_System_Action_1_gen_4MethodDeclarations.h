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

// System.Action`1<Vuforia.SmartTerrainInitializationInfo>
struct Action_1_t598;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t263;
// System.AsyncCallback
struct AsyncCallback_t264;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_SmartTerrainInitial.h"

// System.Void System.Action`1<Vuforia.SmartTerrainInitializationInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m19568_gshared (Action_1_t598 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m19568(__this, ___object, ___method, method) (( void (*) (Action_1_t598 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m19568_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<Vuforia.SmartTerrainInitializationInfo>::Invoke(T)
extern "C" void Action_1_Invoke_m4394_gshared (Action_1_t598 * __this, SmartTerrainInitializationInfo_t479  ___obj, const MethodInfo* method);
#define Action_1_Invoke_m4394(__this, ___obj, method) (( void (*) (Action_1_t598 *, SmartTerrainInitializationInfo_t479 , const MethodInfo*))Action_1_Invoke_m4394_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<Vuforia.SmartTerrainInitializationInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m19569_gshared (Action_1_t598 * __this, SmartTerrainInitializationInfo_t479  ___obj, AsyncCallback_t264 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m19569(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t598 *, SmartTerrainInitializationInfo_t479 , AsyncCallback_t264 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m19569_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<Vuforia.SmartTerrainInitializationInfo>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m19570_gshared (Action_1_t598 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m19570(__this, ___result, method) (( void (*) (Action_1_t598 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m19570_gshared)(__this, ___result, method)
