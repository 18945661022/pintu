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

// Vuforia.ReconstructionAbstractBehaviour
struct ReconstructionAbstractBehaviour_t37;
// Vuforia.Reconstruction
struct Reconstruction_t603;
// Vuforia.ISmartTerrainEventHandler
struct ISmartTerrainEventHandler_t672;
// System.Action`1<Vuforia.SmartTerrainInitializationInfo>
struct Action_1_t598;
// System.Action`1<Vuforia.Prop>
struct Action_1_t100;
// System.Action`1<Vuforia.Surface>
struct Action_1_t101;
// Vuforia.PropAbstractBehaviour
struct PropAbstractBehaviour_t36;
// Vuforia.Prop
struct Prop_t93;
// Vuforia.SurfaceAbstractBehaviour
struct SurfaceAbstractBehaviour_t42;
// Vuforia.Surface
struct Surface_t94;
// System.Collections.Generic.IEnumerable`1<Vuforia.Prop>
struct IEnumerable_1_t673;
// System.Collections.Generic.IEnumerable`1<Vuforia.Surface>
struct IEnumerable_1_t674;
// Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[]
struct SmartTerrainRevisionDataU5BU5D_t660;
// Vuforia.VuforiaManagerImpl/SurfaceData[]
struct SurfaceDataU5BU5D_t661;
// Vuforia.VuforiaManagerImpl/PropData[]
struct PropDataU5BU5D_t662;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t482;
// UnityEngine.Mesh
struct Mesh_t126;
// System.Int32[]
struct Int32U5BU5D_t128;
// System.Collections.Generic.List`1<Vuforia.Prop>
struct List_1_t670;
// System.Collections.Generic.List`1<Vuforia.Surface>
struct List_1_t671;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__7.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Rect.h"

// Vuforia.Reconstruction Vuforia.ReconstructionAbstractBehaviour::get_Reconstruction()
extern "C" Object_t * ReconstructionAbstractBehaviour_get_Reconstruction_m3688 (ReconstructionAbstractBehaviour_t37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Start()
extern "C" void ReconstructionAbstractBehaviour_Start_m3689 (ReconstructionAbstractBehaviour_t37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::OnDrawGizmos()
extern "C" void ReconstructionAbstractBehaviour_OnDrawGizmos_m3690 (ReconstructionAbstractBehaviour_t37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterSmartTerrainEventHandler(Vuforia.ISmartTerrainEventHandler)
extern "C" void ReconstructionAbstractBehaviour_RegisterSmartTerrainEventHandler_m3691 (ReconstructionAbstractBehaviour_t37 * __this, Object_t * ___trackableEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::UnregisterSmartTerrainEventHandler(Vuforia.ISmartTerrainEventHandler)
extern "C" bool ReconstructionAbstractBehaviour_UnregisterSmartTerrainEventHandler_m3692 (ReconstructionAbstractBehaviour_t37 * __this, Object_t * ___trackableEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterInitializedCallback(System.Action`1<Vuforia.SmartTerrainInitializationInfo>)
extern "C" void ReconstructionAbstractBehaviour_RegisterInitializedCallback_m3693 (ReconstructionAbstractBehaviour_t37 * __this, Action_1_t598 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterInitializedCallback(System.Action`1<Vuforia.SmartTerrainInitializationInfo>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterInitializedCallback_m3694 (ReconstructionAbstractBehaviour_t37 * __this, Action_1_t598 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterPropCreatedCallback(System.Action`1<Vuforia.Prop>)
extern "C" void ReconstructionAbstractBehaviour_RegisterPropCreatedCallback_m212 (ReconstructionAbstractBehaviour_t37 * __this, Action_1_t100 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterPropCreatedCallback(System.Action`1<Vuforia.Prop>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterPropCreatedCallback_m215 (ReconstructionAbstractBehaviour_t37 * __this, Action_1_t100 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterPropUpdatedCallback(System.Action`1<Vuforia.Prop>)
extern "C" void ReconstructionAbstractBehaviour_RegisterPropUpdatedCallback_m3695 (ReconstructionAbstractBehaviour_t37 * __this, Action_1_t100 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterPropUpdatedCallback(System.Action`1<Vuforia.Prop>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterPropUpdatedCallback_m3696 (ReconstructionAbstractBehaviour_t37 * __this, Action_1_t100 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterPropDeletedCallback(System.Action`1<Vuforia.Prop>)
extern "C" void ReconstructionAbstractBehaviour_RegisterPropDeletedCallback_m3697 (ReconstructionAbstractBehaviour_t37 * __this, Action_1_t100 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterPropDeletedCallback(System.Action`1<Vuforia.Prop>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterPropDeletedCallback_m3698 (ReconstructionAbstractBehaviour_t37 * __this, Action_1_t100 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterSurfaceCreatedCallback(System.Action`1<Vuforia.Surface>)
extern "C" void ReconstructionAbstractBehaviour_RegisterSurfaceCreatedCallback_m214 (ReconstructionAbstractBehaviour_t37 * __this, Action_1_t101 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterSurfaceCreatedCallback(System.Action`1<Vuforia.Surface>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterSurfaceCreatedCallback_m216 (ReconstructionAbstractBehaviour_t37 * __this, Action_1_t101 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterSurfaceUpdatedCallback(System.Action`1<Vuforia.Surface>)
extern "C" void ReconstructionAbstractBehaviour_RegisterSurfaceUpdatedCallback_m3699 (ReconstructionAbstractBehaviour_t37 * __this, Action_1_t101 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterSurfaceUpdatedCallback(System.Action`1<Vuforia.Surface>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterSurfaceUpdatedCallback_m3700 (ReconstructionAbstractBehaviour_t37 * __this, Action_1_t101 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterSurfaceDeletedCallback(System.Action`1<Vuforia.Surface>)
extern "C" void ReconstructionAbstractBehaviour_RegisterSurfaceDeletedCallback_m3701 (ReconstructionAbstractBehaviour_t37 * __this, Action_1_t101 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterSurfaceDeletedCallback(System.Action`1<Vuforia.Surface>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterSurfaceDeletedCallback_m3702 (ReconstructionAbstractBehaviour_t37 * __this, Action_1_t101 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.PropAbstractBehaviour Vuforia.ReconstructionAbstractBehaviour::AssociateProp(Vuforia.PropAbstractBehaviour,Vuforia.Prop)
extern "C" PropAbstractBehaviour_t36 * ReconstructionAbstractBehaviour_AssociateProp_m217 (ReconstructionAbstractBehaviour_t37 * __this, PropAbstractBehaviour_t36 * ___templateBehaviour, Object_t * ___newProp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.SurfaceAbstractBehaviour Vuforia.ReconstructionAbstractBehaviour::AssociateSurface(Vuforia.SurfaceAbstractBehaviour,Vuforia.Surface)
extern "C" SurfaceAbstractBehaviour_t42 * ReconstructionAbstractBehaviour_AssociateSurface_m218 (ReconstructionAbstractBehaviour_t37 * __this, SurfaceAbstractBehaviour_t42 * ___templateBehaviour, Object_t * ___newSurface, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Prop> Vuforia.ReconstructionAbstractBehaviour::GetActiveProps()
extern "C" Object_t* ReconstructionAbstractBehaviour_GetActiveProps_m3703 (ReconstructionAbstractBehaviour_t37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::TryGetPropBehaviour(Vuforia.Prop,Vuforia.PropAbstractBehaviour&)
extern "C" bool ReconstructionAbstractBehaviour_TryGetPropBehaviour_m3704 (ReconstructionAbstractBehaviour_t37 * __this, Object_t * ___prop, PropAbstractBehaviour_t36 ** ___behaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Surface> Vuforia.ReconstructionAbstractBehaviour::GetActiveSurfaces()
extern "C" Object_t* ReconstructionAbstractBehaviour_GetActiveSurfaces_m3705 (ReconstructionAbstractBehaviour_t37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::TryGetSurfaceBehaviour(Vuforia.Surface,Vuforia.SurfaceAbstractBehaviour&)
extern "C" bool ReconstructionAbstractBehaviour_TryGetSurfaceBehaviour_m3706 (ReconstructionAbstractBehaviour_t37 * __this, Object_t * ___surface, SurfaceAbstractBehaviour_t42 ** ___behaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Initialize(Vuforia.Reconstruction)
extern "C" void ReconstructionAbstractBehaviour_Initialize_m3707 (ReconstructionAbstractBehaviour_t37 * __this, Object_t * ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Deinitialize()
extern "C" void ReconstructionAbstractBehaviour_Deinitialize_m3708 (ReconstructionAbstractBehaviour_t37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UpdateSmartTerrainData(Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[],Vuforia.VuforiaManagerImpl/SurfaceData[],Vuforia.VuforiaManagerImpl/PropData[])
extern "C" void ReconstructionAbstractBehaviour_UpdateSmartTerrainData_m3709 (ReconstructionAbstractBehaviour_t37 * __this, SmartTerrainRevisionDataU5BU5D_t660* ___smartTerrainRevisions, SurfaceDataU5BU5D_t661* ___updatedSurfaces, PropDataU5BU5D_t662* ___updatedProps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::SetBehavioursToNotFound()
extern "C" void ReconstructionAbstractBehaviour_SetBehavioursToNotFound_m3710 (ReconstructionAbstractBehaviour_t37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::ClearOnReset()
extern "C" void ReconstructionAbstractBehaviour_ClearOnReset_m3711 (ReconstructionAbstractBehaviour_t37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::OnReconstructionRemoved()
extern "C" void ReconstructionAbstractBehaviour_OnReconstructionRemoved_m3712 (ReconstructionAbstractBehaviour_t37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.PropAbstractBehaviour Vuforia.ReconstructionAbstractBehaviour::InstantiatePropBehaviour(Vuforia.PropAbstractBehaviour)
extern "C" PropAbstractBehaviour_t36 * ReconstructionAbstractBehaviour_InstantiatePropBehaviour_m3713 (Object_t * __this /* static, unused */, PropAbstractBehaviour_t36 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::AssociatePropBehaviour(Vuforia.Prop,Vuforia.PropAbstractBehaviour)
extern "C" void ReconstructionAbstractBehaviour_AssociatePropBehaviour_m3714 (ReconstructionAbstractBehaviour_t37 * __this, Object_t * ___trackable, PropAbstractBehaviour_t36 * ___behaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.SurfaceAbstractBehaviour Vuforia.ReconstructionAbstractBehaviour::InstantiateSurfaceBehaviour(Vuforia.SurfaceAbstractBehaviour)
extern "C" SurfaceAbstractBehaviour_t42 * ReconstructionAbstractBehaviour_InstantiateSurfaceBehaviour_m3715 (Object_t * __this /* static, unused */, SurfaceAbstractBehaviour_t42 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::AssociateSurfaceBehaviour(Vuforia.Surface,Vuforia.SurfaceAbstractBehaviour)
extern "C" void ReconstructionAbstractBehaviour_AssociateSurfaceBehaviour_m3716 (ReconstructionAbstractBehaviour_t37 * __this, Object_t * ___trackable, SurfaceAbstractBehaviour_t42 * ___behaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.SmartTerrainTrackable Vuforia.ReconstructionAbstractBehaviour::FindSmartTerrainTrackable(System.Int32)
extern "C" Object_t * ReconstructionAbstractBehaviour_FindSmartTerrainTrackable_m3717 (ReconstructionAbstractBehaviour_t37 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::NotifySurfaceEventHandlers(System.Collections.Generic.IEnumerable`1<Vuforia.Surface>,System.Collections.Generic.IEnumerable`1<Vuforia.Surface>,System.Collections.Generic.IEnumerable`1<Vuforia.Surface>)
extern "C" void ReconstructionAbstractBehaviour_NotifySurfaceEventHandlers_m3718 (ReconstructionAbstractBehaviour_t37 * __this, Object_t* ___newSurfaces, Object_t* ___updatedSurfaces, Object_t* ___deletedSurfaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::NotifyPropEventHandlers(System.Collections.Generic.IEnumerable`1<Vuforia.Prop>,System.Collections.Generic.IEnumerable`1<Vuforia.Prop>,System.Collections.Generic.IEnumerable`1<Vuforia.Prop>)
extern "C" void ReconstructionAbstractBehaviour_NotifyPropEventHandlers_m3719 (ReconstructionAbstractBehaviour_t37 * __this, Object_t* ___newProps, Object_t* ___updatedProps, Object_t* ___deletedProps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Vuforia.ReconstructionAbstractBehaviour::UpdateMesh(Vuforia.VuforiaManagerImpl/MeshData,UnityEngine.Mesh,System.Boolean)
extern "C" Mesh_t126 * ReconstructionAbstractBehaviour_UpdateMesh_m3720 (Object_t * __this /* static, unused */, MeshData_t540  ___meshData, Mesh_t126 * ___oldMesh, bool ___setNormalsUpwards, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Vuforia.ReconstructionAbstractBehaviour::ReadMeshBoundaries(System.Int32,System.IntPtr)
extern "C" Int32U5BU5D_t128* ReconstructionAbstractBehaviour_ReadMeshBoundaries_m3721 (Object_t * __this /* static, unused */, int32_t ___numBoundaries, IntPtr_t ___boundaryArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterDeletedProps(System.Collections.Generic.List`1<Vuforia.Prop>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterDeletedProps_m3722 (ReconstructionAbstractBehaviour_t37 * __this, List_1_t670 * ___deletedProps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterDeletedSurfaces(System.Collections.Generic.List`1<Vuforia.Surface>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterDeletedSurfaces_m3723 (ReconstructionAbstractBehaviour_t37 * __this, List_1_t671 * ___deletedSurfaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UpdateSurfaces(Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[],Vuforia.VuforiaManagerImpl/SurfaceData[])
extern "C" void ReconstructionAbstractBehaviour_UpdateSurfaces_m3724 (ReconstructionAbstractBehaviour_t37 * __this, SmartTerrainRevisionDataU5BU5D_t660* ___smartTerrainRevisions, SurfaceDataU5BU5D_t661* ___updatedSurfaceData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UpdateProps(Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[],Vuforia.VuforiaManagerImpl/PropData[])
extern "C" void ReconstructionAbstractBehaviour_UpdateProps_m3725 (ReconstructionAbstractBehaviour_t37 * __this, SmartTerrainRevisionDataU5BU5D_t660* ___smartTerrainRevisions, PropDataU5BU5D_t662* ___updatedPropData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_InitializedInEditor()
extern "C" bool ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_InitializedInEditor_m3726 (ReconstructionAbstractBehaviour_t37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetInitializedInEditor(System.Boolean)
extern "C" void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetInitializedInEditor_m3727 (ReconstructionAbstractBehaviour_t37 * __this, bool ___initializedInEditor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetMaximumExtentEnabled(System.Boolean)
extern "C" void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetMaximumExtentEnabled_m3728 (ReconstructionAbstractBehaviour_t37 * __this, bool ___maxExtendEnabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_MaximumExtentEnabled()
extern "C" bool ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_MaximumExtentEnabled_m3729 (ReconstructionAbstractBehaviour_t37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetMaximumExtent(UnityEngine.Rect)
extern "C" void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetMaximumExtent_m3730 (ReconstructionAbstractBehaviour_t37 * __this, Rect_t54  ___rectangle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_MaximumExtent()
extern "C" Rect_t54  ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_MaximumExtent_m3731 (ReconstructionAbstractBehaviour_t37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetAutomaticStart(System.Boolean)
extern "C" void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetAutomaticStart_m3732 (ReconstructionAbstractBehaviour_t37 * __this, bool ___autoStart, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_AutomaticStart()
extern "C" bool ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_AutomaticStart_m3733 (ReconstructionAbstractBehaviour_t37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetNavMeshUpdates(System.Boolean)
extern "C" void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetNavMeshUpdates_m3734 (ReconstructionAbstractBehaviour_t37 * __this, bool ___navMeshUpdates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_NavMeshUpdates()
extern "C" bool ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_NavMeshUpdates_m3735 (ReconstructionAbstractBehaviour_t37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetNavMeshPadding(System.Single)
extern "C" void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetNavMeshPadding_m3736 (ReconstructionAbstractBehaviour_t37 * __this, float ___navMeshPadding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_NavMeshPadding()
extern "C" float ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_NavMeshPadding_m3737 (ReconstructionAbstractBehaviour_t37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.ScaleEditorMeshesByFactor(System.Single)
extern "C" void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_ScaleEditorMeshesByFactor_m3738 (ReconstructionAbstractBehaviour_t37 * __this, float ___scaleFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.ScaleEditorPropPositionsByFactor(System.Single)
extern "C" void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_ScaleEditorPropPositionsByFactor_m3739 (ReconstructionAbstractBehaviour_t37 * __this, float ___scaleFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::.ctor()
extern "C" void ReconstructionAbstractBehaviour__ctor_m267 (ReconstructionAbstractBehaviour_t37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
