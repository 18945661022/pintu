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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Touch.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_TouchPhase.h"

// System.Int32 UnityEngine.Touch::get_fingerId()
extern "C" int32_t Touch_get_fingerId_m1671 (Touch_t80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" Vector2_t141  Touch_get_position_m392 (Touch_t80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition()
extern "C" Vector2_t141  Touch_get_deltaPosition_m388 (Touch_t80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Touch::get_tapCount()
extern "C" int32_t Touch_get_tapCount_m387 (Touch_t80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" int32_t Touch_get_phase_m391 (Touch_t80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Touch_t80_marshal(const Touch_t80& unmarshaled, Touch_t80_marshaled& marshaled);
extern "C" void Touch_t80_marshal_back(const Touch_t80_marshaled& marshaled, Touch_t80& unmarshaled);
extern "C" void Touch_t80_marshal_cleanup(Touch_t80_marshaled& marshaled);
