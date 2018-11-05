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

// Vuforia.ReconstructionImpl
struct ReconstructionImpl_t463;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void Vuforia.ReconstructionImpl::.ctor(System.IntPtr)
extern "C" void ReconstructionImpl__ctor_m2343 (ReconstructionImpl_t463 * __this, IntPtr_t ___nativeReconstructionPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.ReconstructionImpl::get_NativePtr()
extern "C" IntPtr_t ReconstructionImpl_get_NativePtr_m2344 (ReconstructionImpl_t463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::SetMaximumArea(UnityEngine.Rect)
extern "C" bool ReconstructionImpl_SetMaximumArea_m2345 (ReconstructionImpl_t463 * __this, Rect_t54  ___maximumArea, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::GetMaximumArea(UnityEngine.Rect&)
extern "C" bool ReconstructionImpl_GetMaximumArea_m2346 (ReconstructionImpl_t463 * __this, Rect_t54 * ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::Stop()
extern "C" bool ReconstructionImpl_Stop_m2347 (ReconstructionImpl_t463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::Start()
extern "C" bool ReconstructionImpl_Start_m2348 (ReconstructionImpl_t463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::IsReconstructing()
extern "C" bool ReconstructionImpl_IsReconstructing_m2349 (ReconstructionImpl_t463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionImpl::SetNavMeshPadding(System.Single)
extern "C" void ReconstructionImpl_SetNavMeshPadding_m2350 (ReconstructionImpl_t463 * __this, float ___padding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ReconstructionImpl::get_NavMeshPadding()
extern "C" float ReconstructionImpl_get_NavMeshPadding_m2351 (ReconstructionImpl_t463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionImpl::StartNavMeshUpdates()
extern "C" void ReconstructionImpl_StartNavMeshUpdates_m2352 (ReconstructionImpl_t463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionImpl::StopNavMeshUpdates()
extern "C" void ReconstructionImpl_StopNavMeshUpdates_m2353 (ReconstructionImpl_t463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::IsNavMeshUpdating()
extern "C" bool ReconstructionImpl_IsNavMeshUpdating_m2354 (ReconstructionImpl_t463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::Reset()
extern "C" bool ReconstructionImpl_Reset_m2355 (ReconstructionImpl_t463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
