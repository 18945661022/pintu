#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t16;
// UnityEngine.GameObject
struct GameObject_t83;
// UnityEngine.Transform
struct Transform_t51;
// XBXOffScreenManage
struct XBXOffScreenManage_t87;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// XBXTrackableEventHandler
struct  XBXTrackableEventHandler_t91  : public MonoBehaviour_t10
{
	// Vuforia.TrackableBehaviour XBXTrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t16 * ___mTrackableBehaviour_1;
	// UnityEngine.GameObject XBXTrackableEventHandler::arCamera
	GameObject_t83 * ___arCamera_2;
	// System.Boolean XBXTrackableEventHandler::startFlag
	bool ___startFlag_3;
	// System.Boolean XBXTrackableEventHandler::foundFlag
	bool ___foundFlag_4;
	// UnityEngine.Transform XBXTrackableEventHandler::target
	Transform_t51 * ___target_5;
	// UnityEngine.Vector3 XBXTrackableEventHandler::position
	Vector3_t81  ___position_6;
	// UnityEngine.Vector3 XBXTrackableEventHandler::scale
	Vector3_t81  ___scale_7;
	// UnityEngine.Quaternion XBXTrackableEventHandler::origrotation
	Quaternion_t92  ___origrotation_8;
	// UnityEngine.GameObject XBXTrackableEventHandler::cartoonObj
	GameObject_t83 * ___cartoonObj_9;
	// XBXOffScreenManage XBXTrackableEventHandler::offScreenManage
	XBXOffScreenManage_t87 * ___offScreenManage_10;
	// System.Boolean XBXTrackableEventHandler::offScreen
	bool ___offScreen_11;
};
