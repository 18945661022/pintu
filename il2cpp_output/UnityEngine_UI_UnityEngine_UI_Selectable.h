﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t297;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t212;
// UnityEngine.UI.Graphic
struct Graphic_t228;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t296;

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
#include "UnityEngine_UI_UnityEngine_UI_Navigation.h"
#include "UnityEngine_UI_UnityEngine_UI_Selectable_Transition.h"
#include "UnityEngine_UI_UnityEngine_UI_ColorBlock.h"
#include "UnityEngine_UI_UnityEngine_UI_SpriteState.h"
#include "UnityEngine_UI_UnityEngine_UI_Selectable_SelectionState.h"

// UnityEngine.UI.Selectable
struct  Selectable_t217  : public UIBehaviour_t153
{
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t279  ___m_Navigation_2;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_3;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t223  ___m_Colors_4;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t295  ___m_SpriteState_5;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t212 * ___m_AnimationTriggers_6;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_7;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t228 * ___m_TargetGraphic_8;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_9;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_10;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t296 * ___m_CanvasGroupCache_11;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_12;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_13;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_14;
};
struct Selectable_t217_StaticFields{
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t297 * ___s_List_1;
};
