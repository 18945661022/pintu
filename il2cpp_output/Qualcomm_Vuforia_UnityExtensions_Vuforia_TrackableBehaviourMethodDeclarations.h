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

// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t16;
// Vuforia.Trackable
struct Trackable_t455;
// System.String
struct String_t;
// Vuforia.ITrackableEventHandler
struct ITrackableEventHandler_t653;
// UnityEngine.Renderer
struct Renderer_t104;
// UnityEngine.Transform
struct Transform_t51;
// UnityEngine.GameObject
struct GameObject_t83;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour_.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Vuforia.TrackableBehaviour/Status Vuforia.TrackableBehaviour::get_CurrentStatus()
extern "C" int32_t TrackableBehaviour_get_CurrentStatus_m2246 (TrackableBehaviour_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Trackable Vuforia.TrackableBehaviour::get_Trackable()
extern "C" Object_t * TrackableBehaviour_get_Trackable_m2247 (TrackableBehaviour_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TrackableBehaviour::get_TrackableName()
extern "C" String_t* TrackableBehaviour_get_TrackableName_m2248 (TrackableBehaviour_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::RegisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C" void TrackableBehaviour_RegisterTrackableEventHandler_m220 (TrackableBehaviour_t16 * __this, Object_t * ___trackableEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::UnregisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C" bool TrackableBehaviour_UnregisterTrackableEventHandler_m2249 (TrackableBehaviour_t16 * __this, Object_t * ___trackableEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::OnTrackerUpdate(Vuforia.TrackableBehaviour/Status)
extern "C" void TrackableBehaviour_OnTrackerUpdate_m2250 (TrackableBehaviour_t16 * __this, int32_t ___newStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::OnFrameIndexUpdate(System.Int32)
extern "C" void TrackableBehaviour_OnFrameIndexUpdate_m2251 (TrackableBehaviour_t16 * __this, int32_t ___newFrameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::Start()
extern "C" void TrackableBehaviour_Start_m2252 (TrackableBehaviour_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::OnDisable()
extern "C" void TrackableBehaviour_OnDisable_m2253 (TrackableBehaviour_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.CorrectScale()
extern "C" bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_CorrectScale_m2254 (TrackableBehaviour_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::CorrectScaleImpl()
extern "C" bool TrackableBehaviour_CorrectScaleImpl_m2255 (TrackableBehaviour_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.SetNameForTrackable(System.String)
extern "C" bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_SetNameForTrackable_m2256 (TrackableBehaviour_t16 * __this, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_PreviousScale()
extern "C" Vector3_t81  TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_PreviousScale_m2257 (TrackableBehaviour_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.SetPreviousScale(UnityEngine.Vector3)
extern "C" bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_SetPreviousScale_m2258 (TrackableBehaviour_t16 * __this, Vector3_t81  ___previousScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_PreserveChildSize()
extern "C" bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_PreserveChildSize_m2259 (TrackableBehaviour_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.SetPreserveChildSize(System.Boolean)
extern "C" bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_SetPreserveChildSize_m2260 (TrackableBehaviour_t16 * __this, bool ___preserveChildSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_InitializedInEditor()
extern "C" bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_InitializedInEditor_m2261 (TrackableBehaviour_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.SetInitializedInEditor(System.Boolean)
extern "C" bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_SetInitializedInEditor_m2262 (TrackableBehaviour_t16 * __this, bool ___initializedInEditor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.UnregisterTrackable()
extern "C" void TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_UnregisterTrackable_m2263 (TrackableBehaviour_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Renderer Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.GetRenderer()
extern "C" Renderer_t104 * TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_GetRenderer_m2264 (TrackableBehaviour_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::.ctor()
extern "C" void TrackableBehaviour__ctor_m2265 (TrackableBehaviour_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C" bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m2266 (TrackableBehaviour_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C" void TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m2267 (TrackableBehaviour_t16 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C" Transform_t51 * TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m2268 (TrackableBehaviour_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C" GameObject_t83 * TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m2269 (TrackableBehaviour_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
