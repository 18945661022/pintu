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

// Vuforia.SurfaceAbstractBehaviour
struct SurfaceAbstractBehaviour_t42;
// Vuforia.Surface
struct Surface_t94;
// UnityEngine.MeshFilter
struct MeshFilter_t120;
// UnityEngine.MeshCollider
struct MeshCollider_t481;
// UnityEngine.Transform
struct Transform_t51;
// UnityEngine.GameObject
struct GameObject_t83;

#include "codegen/il2cpp-codegen.h"

// Vuforia.Surface Vuforia.SurfaceAbstractBehaviour::get_Surface()
extern "C" Object_t * SurfaceAbstractBehaviour_get_Surface_m2460 (SurfaceAbstractBehaviour_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceAbstractBehaviour::InternalUnregisterTrackable()
extern "C" void SurfaceAbstractBehaviour_InternalUnregisterTrackable_m2461 (SurfaceAbstractBehaviour_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorSurfaceBehaviour.InitializeSurface(Vuforia.Surface)
extern "C" void SurfaceAbstractBehaviour_Vuforia_IEditorSurfaceBehaviour_InitializeSurface_m2462 (SurfaceAbstractBehaviour_t42 * __this, Object_t * ___surface, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorSurfaceBehaviour.SetMeshFilterToUpdate(UnityEngine.MeshFilter)
extern "C" void SurfaceAbstractBehaviour_Vuforia_IEditorSurfaceBehaviour_SetMeshFilterToUpdate_m2463 (SurfaceAbstractBehaviour_t42 * __this, MeshFilter_t120 * ___meshFilterToUpdate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MeshFilter Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorSurfaceBehaviour.get_MeshFilterToUpdate()
extern "C" MeshFilter_t120 * SurfaceAbstractBehaviour_Vuforia_IEditorSurfaceBehaviour_get_MeshFilterToUpdate_m2464 (SurfaceAbstractBehaviour_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorSurfaceBehaviour.SetMeshColliderToUpdate(UnityEngine.MeshCollider)
extern "C" void SurfaceAbstractBehaviour_Vuforia_IEditorSurfaceBehaviour_SetMeshColliderToUpdate_m2465 (SurfaceAbstractBehaviour_t42 * __this, MeshCollider_t481 * ___meshColliderToUpdate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MeshCollider Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorSurfaceBehaviour.get_MeshColliderToUpdate()
extern "C" MeshCollider_t481 * SurfaceAbstractBehaviour_Vuforia_IEditorSurfaceBehaviour_get_MeshColliderToUpdate_m2466 (SurfaceAbstractBehaviour_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceAbstractBehaviour::.ctor()
extern "C" void SurfaceAbstractBehaviour__ctor_m270 (SurfaceAbstractBehaviour_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C" bool SurfaceAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m2467 (SurfaceAbstractBehaviour_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C" void SurfaceAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m2468 (SurfaceAbstractBehaviour_t42 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C" Transform_t51 * SurfaceAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m2469 (SurfaceAbstractBehaviour_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C" GameObject_t83 * SurfaceAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m2470 (SurfaceAbstractBehaviour_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
