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

// Vuforia.SmartTerrainTrackableImpl
struct SmartTerrainTrackableImpl_t561;
// System.String
struct String_t;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t482;
// System.Collections.Generic.IEnumerable`1<Vuforia.SmartTerrainTrackable>
struct IEnumerable_1_t659;
// UnityEngine.Mesh
struct Mesh_t126;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl_.h"

// System.Void Vuforia.SmartTerrainTrackableImpl::.ctor(System.String,System.Int32,Vuforia.SmartTerrainTrackable)
extern "C" void SmartTerrainTrackableImpl__ctor_m2749 (SmartTerrainTrackableImpl_t561 * __this, String_t* ___name, int32_t ___id, Object_t * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.SmartTerrainTrackable> Vuforia.SmartTerrainTrackableImpl::get_Children()
extern "C" Object_t* SmartTerrainTrackableImpl_get_Children_m2750 (SmartTerrainTrackableImpl_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.SmartTerrainTrackableImpl::get_MeshRevision()
extern "C" int32_t SmartTerrainTrackableImpl_get_MeshRevision_m2751 (SmartTerrainTrackableImpl_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.SmartTerrainTrackable Vuforia.SmartTerrainTrackableImpl::get_Parent()
extern "C" Object_t * SmartTerrainTrackableImpl_get_Parent_m2752 (SmartTerrainTrackableImpl_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackableImpl::set_Parent(Vuforia.SmartTerrainTrackable)
extern "C" void SmartTerrainTrackableImpl_set_Parent_m2753 (SmartTerrainTrackableImpl_t561 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Vuforia.SmartTerrainTrackableImpl::GetMesh()
extern "C" Mesh_t126 * SmartTerrainTrackableImpl_GetMesh_m2754 (SmartTerrainTrackableImpl_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.SmartTerrainTrackableImpl::get_LocalPosition()
extern "C" Vector3_t81  SmartTerrainTrackableImpl_get_LocalPosition_m2755 (SmartTerrainTrackableImpl_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackableImpl::SetLocalPose(Vuforia.VuforiaManagerImpl/PoseData)
extern "C" void SmartTerrainTrackableImpl_SetLocalPose_m2756 (SmartTerrainTrackableImpl_t561 * __this, PoseData_t532  ___localPose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackableImpl::DestroyMesh()
extern "C" void SmartTerrainTrackableImpl_DestroyMesh_m2757 (SmartTerrainTrackableImpl_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackableImpl::AddChild(Vuforia.SmartTerrainTrackable)
extern "C" void SmartTerrainTrackableImpl_AddChild_m2758 (SmartTerrainTrackableImpl_t561 * __this, Object_t * ___newChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackableImpl::RemoveChild(Vuforia.SmartTerrainTrackable)
extern "C" void SmartTerrainTrackableImpl_RemoveChild_m2759 (SmartTerrainTrackableImpl_t561 * __this, Object_t * ___removedChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
