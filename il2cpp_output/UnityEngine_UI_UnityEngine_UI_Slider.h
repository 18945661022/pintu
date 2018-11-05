#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t229;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t300;
// UnityEngine.UI.Image
struct Image_t249;
// UnityEngine.Transform
struct Transform_t51;

#include "UnityEngine_UI_UnityEngine_UI_Selectable.h"
#include "UnityEngine_UI_UnityEngine_UI_Slider_Direction.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_DrivenRectTransformTracker.h"

// UnityEngine.UI.Slider
struct  Slider_t302  : public Selectable_t217
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t229 * ___m_FillRect_15;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t229 * ___m_HandleRect_16;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_17;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_18;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_19;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_20;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_21;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t300 * ___m_OnValueChanged_22;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t249 * ___m_FillImage_23;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_t51 * ___m_FillTransform_24;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t229 * ___m_FillContainerRect_25;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_t51 * ___m_HandleTransform_26;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t229 * ___m_HandleContainerRect_27;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t141  ___m_Offset_28;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t287  ___m_Tracker_29;
};
