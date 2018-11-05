#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.ObjectTracker
struct ObjectTracker_t139;
// Vuforia.MarkerTracker
struct MarkerTracker_t137;
// Vuforia.TextTracker
struct TextTracker_t138;
// Vuforia.SmartTerrainTracker
struct SmartTerrainTracker_t567;
// Vuforia.StateManager
struct StateManager_t605;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackerManager.h"

// Vuforia.TrackerManagerImpl
struct  TrackerManagerImpl_t621  : public TrackerManager_t140
{
	// Vuforia.ObjectTracker Vuforia.TrackerManagerImpl::mObjectTracker
	ObjectTracker_t139 * ___mObjectTracker_1;
	// Vuforia.MarkerTracker Vuforia.TrackerManagerImpl::mMarkerTracker
	MarkerTracker_t137 * ___mMarkerTracker_2;
	// Vuforia.TextTracker Vuforia.TrackerManagerImpl::mTextTracker
	TextTracker_t138 * ___mTextTracker_3;
	// Vuforia.SmartTerrainTracker Vuforia.TrackerManagerImpl::mSmartTerrainTracker
	SmartTerrainTracker_t567 * ___mSmartTerrainTracker_4;
	// Vuforia.StateManager Vuforia.TrackerManagerImpl::mStateManager
	StateManager_t605 * ___mStateManager_5;
};
