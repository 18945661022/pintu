#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t88;
// UnityEngine.AudioSource
struct AudioSource_t89;
// UnityEngine.GameObject
struct GameObject_t83;
// XBXOffScreenManage/OffScreenTransform
struct OffScreenTransform_t86;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_XBXTrackableEventHandler_SCENEMODE.h"

// XBXOffScreenManage
struct  XBXOffScreenManage_t87  : public MonoBehaviour_t10
{
	// XBXTrackableEventHandler/SCENEMODE XBXOffScreenManage::mode
	int32_t ___mode_1;
	// UnityEngine.AudioClip XBXOffScreenManage::myClip
	AudioClip_t88 * ___myClip_2;
	// UnityEngine.AudioSource XBXOffScreenManage::mySource
	AudioSource_t89 * ___mySource_3;
	// UnityEngine.GameObject XBXOffScreenManage::emptyParent
	GameObject_t83 * ___emptyParent_4;
	// UnityEngine.GameObject XBXOffScreenManage::targetParent
	GameObject_t83 * ___targetParent_5;
	// XBXOffScreenManage/OffScreenTransform XBXOffScreenManage::offScreenTranform
	OffScreenTransform_t86 * ___offScreenTranform_6;
};
