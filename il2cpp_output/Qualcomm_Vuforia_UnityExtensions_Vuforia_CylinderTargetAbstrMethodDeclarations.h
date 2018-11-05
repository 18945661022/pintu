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

// Vuforia.CylinderTargetAbstractBehaviour
struct CylinderTargetAbstractBehaviour_t6;
// Vuforia.CylinderTarget
struct CylinderTarget_t483;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t472;
// UnityEngine.Transform
struct Transform_t51;
// UnityEngine.GameObject
struct GameObject_t83;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Vuforia.CylinderTarget Vuforia.CylinderTargetAbstractBehaviour::get_CylinderTarget()
extern "C" Object_t * CylinderTargetAbstractBehaviour_get_CylinderTarget_m2471 (CylinderTargetAbstractBehaviour_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::get_SideLength()
extern "C" float CylinderTargetAbstractBehaviour_get_SideLength_m2472 (CylinderTargetAbstractBehaviour_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::get_TopDiameter()
extern "C" float CylinderTargetAbstractBehaviour_get_TopDiameter_m2473 (CylinderTargetAbstractBehaviour_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::get_BottomDiameter()
extern "C" float CylinderTargetAbstractBehaviour_get_BottomDiameter_m2474 (CylinderTargetAbstractBehaviour_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetSideLength(System.Single)
extern "C" bool CylinderTargetAbstractBehaviour_SetSideLength_m2475 (CylinderTargetAbstractBehaviour_t6 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetTopDiameter(System.Single)
extern "C" bool CylinderTargetAbstractBehaviour_SetTopDiameter_m2476 (CylinderTargetAbstractBehaviour_t6 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetBottomDiameter(System.Single)
extern "C" bool CylinderTargetAbstractBehaviour_SetBottomDiameter_m2477 (CylinderTargetAbstractBehaviour_t6 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::OnFrameIndexUpdate(System.Int32)
extern "C" void CylinderTargetAbstractBehaviour_OnFrameIndexUpdate_m2478 (CylinderTargetAbstractBehaviour_t6 * __this, int32_t ___newFrameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::CorrectScaleImpl()
extern "C" bool CylinderTargetAbstractBehaviour_CorrectScaleImpl_m2479 (CylinderTargetAbstractBehaviour_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::InternalUnregisterTrackable()
extern "C" void CylinderTargetAbstractBehaviour_InternalUnregisterTrackable_m2480 (CylinderTargetAbstractBehaviour_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void CylinderTargetAbstractBehaviour_CalculateDefaultOccluderBounds_m2481 (CylinderTargetAbstractBehaviour_t6 * __this, Vector3_t81 * ___boundsMin, Vector3_t81 * ___boundsMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
extern "C" void CylinderTargetAbstractBehaviour_ProtectedSetAsSmartTerrainInitializationTarget_m2482 (CylinderTargetAbstractBehaviour_t6 * __this, Object_t * ___reconstructionFromTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::GetScale()
extern "C" float CylinderTargetAbstractBehaviour_GetScale_m2483 (CylinderTargetAbstractBehaviour_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetScale(System.Single)
extern "C" bool CylinderTargetAbstractBehaviour_SetScale_m2484 (CylinderTargetAbstractBehaviour_t6 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::ApplyScale(System.Single)
extern "C" void CylinderTargetAbstractBehaviour_ApplyScale_m2485 (CylinderTargetAbstractBehaviour_t6 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorCylinderTargetBehaviour.InitializeCylinderTarget(Vuforia.CylinderTarget)
extern "C" void CylinderTargetAbstractBehaviour_Vuforia_IEditorCylinderTargetBehaviour_InitializeCylinderTarget_m2486 (CylinderTargetAbstractBehaviour_t6 * __this, Object_t * ___cylinderTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorCylinderTargetBehaviour.SetAspectRatio(System.Single,System.Single)
extern "C" void CylinderTargetAbstractBehaviour_Vuforia_IEditorCylinderTargetBehaviour_SetAspectRatio_m2487 (CylinderTargetAbstractBehaviour_t6 * __this, float ___topRatio, float ___bottomRatio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::.ctor()
extern "C" void CylinderTargetAbstractBehaviour__ctor_m191 (CylinderTargetAbstractBehaviour_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C" bool CylinderTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m2488 (CylinderTargetAbstractBehaviour_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C" void CylinderTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m2489 (CylinderTargetAbstractBehaviour_t6 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C" Transform_t51 * CylinderTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m2490 (CylinderTargetAbstractBehaviour_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C" GameObject_t83 * CylinderTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m2491 (CylinderTargetAbstractBehaviour_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
