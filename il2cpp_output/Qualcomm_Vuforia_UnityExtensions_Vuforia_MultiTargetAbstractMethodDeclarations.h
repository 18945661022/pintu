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

// Vuforia.MultiTargetAbstractBehaviour
struct MultiTargetAbstractBehaviour_t33;
// Vuforia.MultiTarget
struct MultiTarget_t632;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t472;
// UnityEngine.Transform
struct Transform_t51;
// UnityEngine.GameObject
struct GameObject_t83;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Vuforia.MultiTarget Vuforia.MultiTargetAbstractBehaviour::get_MultiTarget()
extern "C" Object_t * MultiTargetAbstractBehaviour_get_MultiTarget_m3890 (MultiTargetAbstractBehaviour_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::InternalUnregisterTrackable()
extern "C" void MultiTargetAbstractBehaviour_InternalUnregisterTrackable_m3891 (MultiTargetAbstractBehaviour_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void MultiTargetAbstractBehaviour_CalculateDefaultOccluderBounds_m3892 (MultiTargetAbstractBehaviour_t33 * __this, Vector3_t81 * ___boundsMin, Vector3_t81 * ___boundsMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
extern "C" void MultiTargetAbstractBehaviour_ProtectedSetAsSmartTerrainInitializationTarget_m3893 (MultiTargetAbstractBehaviour_t33 * __this, Object_t * ___reconstructionFromTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::Vuforia.IEditorMultiTargetBehaviour.InitializeMultiTarget(Vuforia.MultiTarget)
extern "C" void MultiTargetAbstractBehaviour_Vuforia_IEditorMultiTargetBehaviour_InitializeMultiTarget_m3894 (MultiTargetAbstractBehaviour_t33 * __this, Object_t * ___multiTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::.ctor()
extern "C" void MultiTargetAbstractBehaviour__ctor_m264 (MultiTargetAbstractBehaviour_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MultiTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C" bool MultiTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m3895 (MultiTargetAbstractBehaviour_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C" void MultiTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m3896 (MultiTargetAbstractBehaviour_t33 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.MultiTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C" Transform_t51 * MultiTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m3897 (MultiTargetAbstractBehaviour_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.MultiTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C" GameObject_t83 * MultiTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m3898 (MultiTargetAbstractBehaviour_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
