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

// UnityEngine.UI.Graphic
struct Graphic_t228;
// UnityEngine.Material
struct Material_t66;
// UnityEngine.RectTransform
struct RectTransform_t229;
// UnityEngine.Canvas
struct Canvas_t231;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t230;
// UnityEngine.Texture
struct Texture_t77;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t271;
// UnityEngine.Camera
struct Camera_t53;
// UnityEngine.Events.UnityAction
struct UnityAction_t232;
// UnityEngine.Transform
struct Transform_t51;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.UI.Graphic::.ctor()
extern "C" void Graphic__ctor_m800 (Graphic_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::.cctor()
extern "C" void Graphic__cctor_m801 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_defaultGraphicMaterial()
extern "C" Material_t66 * Graphic_get_defaultGraphicMaterial_m802 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.Graphic::get_color()
extern "C" Color_t67  Graphic_get_color_m803 (Graphic_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color)
extern "C" void Graphic_set_color_m804 (Graphic_t228 * __this, Color_t67  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetAllDirty()
extern "C" void Graphic_SetAllDirty_m805 (Graphic_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetLayoutDirty()
extern "C" void Graphic_SetLayoutDirty_m806 (Graphic_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetVerticesDirty()
extern "C" void Graphic_SetVerticesDirty_m807 (Graphic_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetMaterialDirty()
extern "C" void Graphic_SetMaterialDirty_m808 (Graphic_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnRectTransformDimensionsChange()
extern "C" void Graphic_OnRectTransformDimensionsChange_m809 (Graphic_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnBeforeTransformParentChanged()
extern "C" void Graphic_OnBeforeTransformParentChanged_m810 (Graphic_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnTransformParentChanged()
extern "C" void Graphic_OnTransformParentChanged_m811 (Graphic_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Graphic::get_depth()
extern "C" int32_t Graphic_get_depth_m812 (Graphic_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
extern "C" RectTransform_t229 * Graphic_get_rectTransform_m813 (Graphic_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Canvas UnityEngine.UI.Graphic::get_canvas()
extern "C" Canvas_t231 * Graphic_get_canvas_m814 (Graphic_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CacheCanvas()
extern "C" void Graphic_CacheCanvas_m815 (Graphic_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::get_canvasRenderer()
extern "C" CanvasRenderer_t230 * Graphic_get_canvasRenderer_m816 (Graphic_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_defaultMaterial()
extern "C" Material_t66 * Graphic_get_defaultMaterial_m817 (Graphic_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_material()
extern "C" Material_t66 * Graphic_get_material_m818 (Graphic_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material)
extern "C" void Graphic_set_material_m819 (Graphic_t228 * __this, Material_t66 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_materialForRendering()
extern "C" Material_t66 * Graphic_get_materialForRendering_m820 (Graphic_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.Graphic::get_mainTexture()
extern "C" Texture_t77 * Graphic_get_mainTexture_m821 (Graphic_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnEnable()
extern "C" void Graphic_OnEnable_m822 (Graphic_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnDisable()
extern "C" void Graphic_OnDisable_m823 (Graphic_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SendGraphicEnabledDisabled()
extern "C" void Graphic_SendGraphicEnabledDisabled_m824 (Graphic_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnCanvasHierarchyChanged()
extern "C" void Graphic_OnCanvasHierarchyChanged_m825 (Graphic_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void Graphic_Rebuild_m826 (Graphic_t228 * __this, int32_t ___update, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UpdateGeometry()
extern "C" void Graphic_UpdateGeometry_m827 (Graphic_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UpdateMaterial()
extern "C" void Graphic_UpdateMaterial_m828 (Graphic_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnFillVBO(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void Graphic_OnFillVBO_m829 (Graphic_t228 * __this, List_1_t271 * ___vbo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnDidApplyAnimationProperties()
extern "C" void Graphic_OnDidApplyAnimationProperties_m830 (Graphic_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetNativeSize()
extern "C" void Graphic_SetNativeSize_m831 (Graphic_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Graphic::Raycast(UnityEngine.Vector2,UnityEngine.Camera)
extern "C" bool Graphic_Raycast_m832 (Graphic_t228 * __this, Vector2_t141  ___sp, Camera_t53 * ___eventCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Graphic::PixelAdjustPoint(UnityEngine.Vector2)
extern "C" Vector2_t141  Graphic_PixelAdjustPoint_m833 (Graphic_t228 * __this, Vector2_t141  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.Graphic::GetPixelAdjustedRect()
extern "C" Rect_t54  Graphic_GetPixelAdjustedRect_m834 (Graphic_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeColor(UnityEngine.Color,System.Single,System.Boolean,System.Boolean)
extern "C" void Graphic_CrossFadeColor_m835 (Graphic_t228 * __this, Color_t67  ___targetColor, float ___duration, bool ___ignoreTimeScale, bool ___useAlpha, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeColor(UnityEngine.Color,System.Single,System.Boolean,System.Boolean,System.Boolean)
extern "C" void Graphic_CrossFadeColor_m836 (Graphic_t228 * __this, Color_t67  ___targetColor, float ___duration, bool ___ignoreTimeScale, bool ___useAlpha, bool ___useRGB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.Graphic::CreateColorFromAlpha(System.Single)
extern "C" Color_t67  Graphic_CreateColorFromAlpha_m837 (Object_t * __this /* static, unused */, float ___alpha, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean)
extern "C" void Graphic_CrossFadeAlpha_m838 (Graphic_t228 * __this, float ___alpha, float ___duration, bool ___ignoreTimeScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyLayoutCallback(UnityEngine.Events.UnityAction)
extern "C" void Graphic_RegisterDirtyLayoutCallback_m839 (Graphic_t228 * __this, UnityAction_t232 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyLayoutCallback(UnityEngine.Events.UnityAction)
extern "C" void Graphic_UnregisterDirtyLayoutCallback_m840 (Graphic_t228 * __this, UnityAction_t232 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyVerticesCallback(UnityEngine.Events.UnityAction)
extern "C" void Graphic_RegisterDirtyVerticesCallback_m841 (Graphic_t228 * __this, UnityAction_t232 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyVerticesCallback(UnityEngine.Events.UnityAction)
extern "C" void Graphic_UnregisterDirtyVerticesCallback_m842 (Graphic_t228 * __this, UnityAction_t232 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyMaterialCallback(UnityEngine.Events.UnityAction)
extern "C" void Graphic_RegisterDirtyMaterialCallback_m843 (Graphic_t228 * __this, UnityAction_t232 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyMaterialCallback(UnityEngine.Events.UnityAction)
extern "C" void Graphic_UnregisterDirtyMaterialCallback_m844 (Graphic_t228 * __this, UnityAction_t232 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::<s_VboPool>m__4(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void Graphic_U3Cs_VboPoolU3Em__4_m845 (Object_t * __this /* static, unused */, List_1_t271 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::<s_VboPool>m__5(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void Graphic_U3Cs_VboPoolU3Em__5_m846 (Object_t * __this /* static, unused */, List_1_t271 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Graphic::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C" bool Graphic_UnityEngine_UI_ICanvasElement_IsDestroyed_m847 (Graphic_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Graphic::UnityEngine.UI.ICanvasElement.get_transform()
extern "C" Transform_t51 * Graphic_UnityEngine_UI_ICanvasElement_get_transform_m848 (Graphic_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
