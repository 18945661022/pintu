﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>
struct List_1_t597;
// System.Action`1<Vuforia.SmartTerrainInitializationInfo>
struct Action_1_t598;
// System.Action`1<Vuforia.Prop>
struct Action_1_t100;
// System.Action`1<Vuforia.Surface>
struct Action_1_t101;
// Vuforia.Reconstruction
struct Reconstruction_t603;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Surface>
struct Dictionary_2_t599;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.SurfaceAbstractBehaviour>
struct Dictionary_2_t600;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>
struct Dictionary_2_t601;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.PropAbstractBehaviour>
struct Dictionary_2_t602;
// Vuforia.SurfaceAbstractBehaviour
struct SurfaceAbstractBehaviour_t42;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Rect.h"

// Vuforia.ReconstructionAbstractBehaviour
struct  ReconstructionAbstractBehaviour_t37  : public MonoBehaviour_t10
{
	// System.Boolean Vuforia.ReconstructionAbstractBehaviour::mHasInitialized
	bool ___mHasInitialized_1;
	// System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler> Vuforia.ReconstructionAbstractBehaviour::mSmartTerrainEventHandlers
	List_1_t597 * ___mSmartTerrainEventHandlers_2;
	// System.Action`1<Vuforia.SmartTerrainInitializationInfo> Vuforia.ReconstructionAbstractBehaviour::mOnInitialized
	Action_1_t598 * ___mOnInitialized_3;
	// System.Action`1<Vuforia.Prop> Vuforia.ReconstructionAbstractBehaviour::mOnPropCreated
	Action_1_t100 * ___mOnPropCreated_4;
	// System.Action`1<Vuforia.Prop> Vuforia.ReconstructionAbstractBehaviour::mOnPropUpdated
	Action_1_t100 * ___mOnPropUpdated_5;
	// System.Action`1<Vuforia.Prop> Vuforia.ReconstructionAbstractBehaviour::mOnPropDeleted
	Action_1_t100 * ___mOnPropDeleted_6;
	// System.Action`1<Vuforia.Surface> Vuforia.ReconstructionAbstractBehaviour::mOnSurfaceCreated
	Action_1_t101 * ___mOnSurfaceCreated_7;
	// System.Action`1<Vuforia.Surface> Vuforia.ReconstructionAbstractBehaviour::mOnSurfaceUpdated
	Action_1_t101 * ___mOnSurfaceUpdated_8;
	// System.Action`1<Vuforia.Surface> Vuforia.ReconstructionAbstractBehaviour::mOnSurfaceDeleted
	Action_1_t101 * ___mOnSurfaceDeleted_9;
	// System.Boolean Vuforia.ReconstructionAbstractBehaviour::mInitializedInEditor
	bool ___mInitializedInEditor_10;
	// System.Boolean Vuforia.ReconstructionAbstractBehaviour::mMaximumExtentEnabled
	bool ___mMaximumExtentEnabled_11;
	// UnityEngine.Rect Vuforia.ReconstructionAbstractBehaviour::mMaximumExtent
	Rect_t54  ___mMaximumExtent_12;
	// System.Boolean Vuforia.ReconstructionAbstractBehaviour::mAutomaticStart
	bool ___mAutomaticStart_13;
	// System.Boolean Vuforia.ReconstructionAbstractBehaviour::mNavMeshUpdates
	bool ___mNavMeshUpdates_14;
	// System.Single Vuforia.ReconstructionAbstractBehaviour::mNavMeshPadding
	float ___mNavMeshPadding_15;
	// Vuforia.Reconstruction Vuforia.ReconstructionAbstractBehaviour::mReconstruction
	Object_t * ___mReconstruction_16;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Surface> Vuforia.ReconstructionAbstractBehaviour::mSurfaces
	Dictionary_2_t599 * ___mSurfaces_17;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.SurfaceAbstractBehaviour> Vuforia.ReconstructionAbstractBehaviour::mActiveSurfaceBehaviours
	Dictionary_2_t600 * ___mActiveSurfaceBehaviours_18;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop> Vuforia.ReconstructionAbstractBehaviour::mProps
	Dictionary_2_t601 * ___mProps_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.PropAbstractBehaviour> Vuforia.ReconstructionAbstractBehaviour::mActivePropBehaviours
	Dictionary_2_t602 * ___mActivePropBehaviours_20;
	// Vuforia.SurfaceAbstractBehaviour Vuforia.ReconstructionAbstractBehaviour::mPreviouslySetWorldCenterSurfaceTemplate
	SurfaceAbstractBehaviour_t42 * ___mPreviouslySetWorldCenterSurfaceTemplate_21;
	// System.Boolean Vuforia.ReconstructionAbstractBehaviour::mIgnoreNextUpdate
	bool ___mIgnoreNextUpdate_22;
};
