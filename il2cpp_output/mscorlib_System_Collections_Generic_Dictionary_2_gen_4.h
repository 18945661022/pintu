﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t128;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t2241;
// UnityEngine.Camera[]
struct CameraU5BU5D_t125;
// Vuforia.VideoBackgroundAbstractBehaviour[]
struct VideoBackgroundAbstractBehaviourU5BU5D_t2411;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Camera>
struct IEqualityComparer_1_t2413;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1005;
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,Vuforia.VideoBackgroundAbstractBehaviour,System.Collections.DictionaryEntry>
struct Transform_1_t2412;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Vuforia.VideoBackgroundAbstractBehaviour>
struct  Dictionary_2_t449  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Vuforia.VideoBackgroundAbstractBehaviour>::table
	Int32U5BU5D_t128* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Vuforia.VideoBackgroundAbstractBehaviour>::linkSlots
	LinkU5BU5D_t2241* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Vuforia.VideoBackgroundAbstractBehaviour>::keySlots
	CameraU5BU5D_t125* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Vuforia.VideoBackgroundAbstractBehaviour>::valueSlots
	VideoBackgroundAbstractBehaviourU5BU5D_t2411* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Vuforia.VideoBackgroundAbstractBehaviour>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Vuforia.VideoBackgroundAbstractBehaviour>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Vuforia.VideoBackgroundAbstractBehaviour>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Vuforia.VideoBackgroundAbstractBehaviour>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Vuforia.VideoBackgroundAbstractBehaviour>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Vuforia.VideoBackgroundAbstractBehaviour>::serialization_info
	SerializationInfo_t1005 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Vuforia.VideoBackgroundAbstractBehaviour>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t449_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Vuforia.VideoBackgroundAbstractBehaviour>::<>f__am$cacheB
	Transform_1_t2412 * ___U3CU3Ef__amU24cacheB_15;
};
