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

// UnityEngine.UI.Slider
struct Slider_t302;
// UnityEngine.RectTransform
struct RectTransform_t229;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t300;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t193;
// UnityEngine.Camera
struct Camera_t53;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t190;
// UnityEngine.UI.Selectable
struct Selectable_t217;
// UnityEngine.Transform
struct Transform_t51;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_Slider_Direction.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
#include "UnityEngine_UI_UnityEngine_UI_Slider_Axis.h"

// System.Void UnityEngine.UI.Slider::.ctor()
extern "C" void Slider__ctor_m1260 (Slider_t302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Slider::get_fillRect()
extern "C" RectTransform_t229 * Slider_get_fillRect_m1261 (Slider_t302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_fillRect(UnityEngine.RectTransform)
extern "C" void Slider_set_fillRect_m1262 (Slider_t302 * __this, RectTransform_t229 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Slider::get_handleRect()
extern "C" RectTransform_t229 * Slider_get_handleRect_m1263 (Slider_t302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_handleRect(UnityEngine.RectTransform)
extern "C" void Slider_set_handleRect_m1264 (Slider_t302 * __this, RectTransform_t229 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::get_direction()
extern "C" int32_t Slider_get_direction_m1265 (Slider_t302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_direction(UnityEngine.UI.Slider/Direction)
extern "C" void Slider_set_direction_m1266 (Slider_t302 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_minValue()
extern "C" float Slider_get_minValue_m1267 (Slider_t302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_minValue(System.Single)
extern "C" void Slider_set_minValue_m1268 (Slider_t302 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_maxValue()
extern "C" float Slider_get_maxValue_m1269 (Slider_t302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
extern "C" void Slider_set_maxValue_m1270 (Slider_t302 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::get_wholeNumbers()
extern "C" bool Slider_get_wholeNumbers_m1271 (Slider_t302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_wholeNumbers(System.Boolean)
extern "C" void Slider_set_wholeNumbers_m1272 (Slider_t302 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_value()
extern "C" float Slider_get_value_m1273 (Slider_t302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_value(System.Single)
extern "C" void Slider_set_value_m1274 (Slider_t302 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_normalizedValue()
extern "C" float Slider_get_normalizedValue_m1275 (Slider_t302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_normalizedValue(System.Single)
extern "C" void Slider_set_normalizedValue_m1276 (Slider_t302 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::get_onValueChanged()
extern "C" SliderEvent_t300 * Slider_get_onValueChanged_m1277 (Slider_t302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_onValueChanged(UnityEngine.UI.Slider/SliderEvent)
extern "C" void Slider_set_onValueChanged_m1278 (Slider_t302 * __this, SliderEvent_t300 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_stepSize()
extern "C" float Slider_get_stepSize_m1279 (Slider_t302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void Slider_Rebuild_m1280 (Slider_t302 * __this, int32_t ___executing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnEnable()
extern "C" void Slider_OnEnable_m1281 (Slider_t302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnDisable()
extern "C" void Slider_OnDisable_m1282 (Slider_t302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateCachedReferences()
extern "C" void Slider_UpdateCachedReferences_m1283 (Slider_t302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Set(System.Single)
extern "C" void Slider_Set_m1284 (Slider_t302 * __this, float ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Set(System.Single,System.Boolean)
extern "C" void Slider_Set_m1285 (Slider_t302 * __this, float ___input, bool ___sendCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnRectTransformDimensionsChange()
extern "C" void Slider_OnRectTransformDimensionsChange_m1286 (Slider_t302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/Axis UnityEngine.UI.Slider::get_axis()
extern "C" int32_t Slider_get_axis_m1287 (Slider_t302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::get_reverseValue()
extern "C" bool Slider_get_reverseValue_m1288 (Slider_t302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateVisuals()
extern "C" void Slider_UpdateVisuals_m1289 (Slider_t302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateDrag(UnityEngine.EventSystems.PointerEventData,UnityEngine.Camera)
extern "C" void Slider_UpdateDrag_m1290 (Slider_t302 * __this, PointerEventData_t193 * ___eventData, Camera_t53 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::MayDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" bool Slider_MayDrag_m1291 (Slider_t302 * __this, PointerEventData_t193 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" void Slider_OnPointerDown_m1292 (Slider_t302 * __this, PointerEventData_t193 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void Slider_OnDrag_m1293 (Slider_t302 * __this, PointerEventData_t193 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnMove(UnityEngine.EventSystems.AxisEventData)
extern "C" void Slider_OnMove_m1294 (Slider_t302 * __this, AxisEventData_t190 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnLeft()
extern "C" Selectable_t217 * Slider_FindSelectableOnLeft_m1295 (Slider_t302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnRight()
extern "C" Selectable_t217 * Slider_FindSelectableOnRight_m1296 (Slider_t302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnUp()
extern "C" Selectable_t217 * Slider_FindSelectableOnUp_m1297 (Slider_t302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnDown()
extern "C" Selectable_t217 * Slider_FindSelectableOnDown_m1298 (Slider_t302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void Slider_OnInitializePotentialDrag_m1299 (Slider_t302 * __this, PointerEventData_t193 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::SetDirection(UnityEngine.UI.Slider/Direction,System.Boolean)
extern "C" void Slider_SetDirection_m1300 (Slider_t302 * __this, int32_t ___direction, bool ___includeRectLayouts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C" bool Slider_UnityEngine_UI_ICanvasElement_IsDestroyed_m1301 (Slider_t302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Slider::UnityEngine.UI.ICanvasElement.get_transform()
extern "C" Transform_t51 * Slider_UnityEngine_UI_ICanvasElement_get_transform_m1302 (Slider_t302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
