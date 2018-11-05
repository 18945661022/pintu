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

// Vuforia.VirtualButtonAbstractBehaviour
struct VirtualButtonAbstractBehaviour_t60;
// System.String
struct String_t;
// Vuforia.VirtualButton
struct VirtualButton_t623;
// Vuforia.IVirtualButtonEventHandler
struct IVirtualButtonEventHandler_t685;
// Vuforia.ImageTargetAbstractBehaviour
struct ImageTargetAbstractBehaviour_t21;
// UnityEngine.GameObject
struct GameObject_t83;
// UnityEngine.Renderer
struct Renderer_t104;
// UnityEngine.Transform
struct Transform_t51;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VirtualButton_Sensi.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.String Vuforia.VirtualButtonAbstractBehaviour::get_VirtualButtonName()
extern "C" String_t* VirtualButtonAbstractBehaviour_get_VirtualButtonName_m4056 (VirtualButtonAbstractBehaviour_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::get_Pressed()
extern "C" bool VirtualButtonAbstractBehaviour_get_Pressed_m4057 (VirtualButtonAbstractBehaviour_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::get_HasUpdatedPose()
extern "C" bool VirtualButtonAbstractBehaviour_get_HasUpdatedPose_m4058 (VirtualButtonAbstractBehaviour_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::get_UnregisterOnDestroy()
extern "C" bool VirtualButtonAbstractBehaviour_get_UnregisterOnDestroy_m4059 (VirtualButtonAbstractBehaviour_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::set_UnregisterOnDestroy(System.Boolean)
extern "C" void VirtualButtonAbstractBehaviour_set_UnregisterOnDestroy_m4060 (VirtualButtonAbstractBehaviour_t60 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.VirtualButtonAbstractBehaviour::get_VirtualButton()
extern "C" VirtualButton_t623 * VirtualButtonAbstractBehaviour_get_VirtualButton_m4061 (VirtualButtonAbstractBehaviour_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::.ctor()
extern "C" void VirtualButtonAbstractBehaviour__ctor_m313 (VirtualButtonAbstractBehaviour_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::RegisterEventHandler(Vuforia.IVirtualButtonEventHandler)
extern "C" void VirtualButtonAbstractBehaviour_RegisterEventHandler_m4062 (VirtualButtonAbstractBehaviour_t60 * __this, Object_t * ___eventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UnregisterEventHandler(Vuforia.IVirtualButtonEventHandler)
extern "C" bool VirtualButtonAbstractBehaviour_UnregisterEventHandler_m4063 (VirtualButtonAbstractBehaviour_t60 * __this, Object_t * ___eventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::CalculateButtonArea(UnityEngine.Vector2&,UnityEngine.Vector2&)
extern "C" bool VirtualButtonAbstractBehaviour_CalculateButtonArea_m4064 (VirtualButtonAbstractBehaviour_t60 * __this, Vector2_t141 * ___topLeft, Vector2_t141 * ___bottomRight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdateAreaRectangle()
extern "C" bool VirtualButtonAbstractBehaviour_UpdateAreaRectangle_m4065 (VirtualButtonAbstractBehaviour_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdateSensitivity()
extern "C" bool VirtualButtonAbstractBehaviour_UpdateSensitivity_m4066 (VirtualButtonAbstractBehaviour_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdateEnabled()
extern "C" bool VirtualButtonAbstractBehaviour_UpdateEnabled_m4067 (VirtualButtonAbstractBehaviour_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdatePose()
extern "C" bool VirtualButtonAbstractBehaviour_UpdatePose_m4068 (VirtualButtonAbstractBehaviour_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::OnTrackerUpdated(System.Boolean)
extern "C" void VirtualButtonAbstractBehaviour_OnTrackerUpdated_m4069 (VirtualButtonAbstractBehaviour_t60 * __this, bool ___pressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.VirtualButtonAbstractBehaviour::GetImageTargetBehaviour()
extern "C" ImageTargetAbstractBehaviour_t21 * VirtualButtonAbstractBehaviour_GetImageTargetBehaviour_m4070 (VirtualButtonAbstractBehaviour_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.SetVirtualButtonName(System.String)
extern "C" bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_SetVirtualButtonName_m4071 (VirtualButtonAbstractBehaviour_t60 * __this, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton/Sensitivity Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_SensitivitySetting()
extern "C" int32_t VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_SensitivitySetting_m4072 (VirtualButtonAbstractBehaviour_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.SetSensitivitySetting(Vuforia.VirtualButton/Sensitivity)
extern "C" bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_SetSensitivitySetting_m4073 (VirtualButtonAbstractBehaviour_t60 * __this, int32_t ___sensibility, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_PreviousTransform()
extern "C" Matrix4x4_t52  VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_PreviousTransform_m4074 (VirtualButtonAbstractBehaviour_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.SetPreviousTransform(UnityEngine.Matrix4x4)
extern "C" bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_SetPreviousTransform_m4075 (VirtualButtonAbstractBehaviour_t60 * __this, Matrix4x4_t52  ___transformMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_PreviousParent()
extern "C" GameObject_t83 * VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_PreviousParent_m4076 (VirtualButtonAbstractBehaviour_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.SetPreviousParent(UnityEngine.GameObject)
extern "C" bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_SetPreviousParent_m4077 (VirtualButtonAbstractBehaviour_t60 * __this, GameObject_t83 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.InitializeVirtualButton(Vuforia.VirtualButton)
extern "C" void VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_InitializeVirtualButton_m4078 (VirtualButtonAbstractBehaviour_t60 * __this, VirtualButton_t623 * ___virtualButton, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.SetPosAndScaleFromButtonArea(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_SetPosAndScaleFromButtonArea_m4079 (VirtualButtonAbstractBehaviour_t60 * __this, Vector2_t141  ___topLeft, Vector2_t141  ___bottomRight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Renderer Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.GetRenderer()
extern "C" Renderer_t104 * VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_GetRenderer_m4080 (VirtualButtonAbstractBehaviour_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::LateUpdate()
extern "C" void VirtualButtonAbstractBehaviour_LateUpdate_m4081 (VirtualButtonAbstractBehaviour_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::OnDisable()
extern "C" void VirtualButtonAbstractBehaviour_OnDisable_m4082 (VirtualButtonAbstractBehaviour_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::OnDestroy()
extern "C" void VirtualButtonAbstractBehaviour_OnDestroy_m4083 (VirtualButtonAbstractBehaviour_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Equals(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C" bool VirtualButtonAbstractBehaviour_Equals_m4084 (Object_t * __this /* static, unused */, Vector2_t141  ___vec1, Vector2_t141  ___vec2, float ___threshold, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_enabled()
extern "C" bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_enabled_m4085 (VirtualButtonAbstractBehaviour_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.set_enabled(System.Boolean)
extern "C" void VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_set_enabled_m4086 (VirtualButtonAbstractBehaviour_t60 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_transform()
extern "C" Transform_t51 * VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_transform_m4087 (VirtualButtonAbstractBehaviour_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_gameObject()
extern "C" GameObject_t83 * VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_gameObject_m4088 (VirtualButtonAbstractBehaviour_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
