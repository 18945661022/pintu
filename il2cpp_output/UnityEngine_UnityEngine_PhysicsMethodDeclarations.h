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

// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t395;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"
#include "UnityEngine_UnityEngine_Ray.h"

// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Internal_Raycast_m4837 (Object_t * __this /* static, unused */, Vector3_t81  ___origin, Vector3_t81  ___direction, RaycastHit_t368 * ___hitInfo, float ___distance, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_INTERNAL_CALL_Internal_Raycast_m4838 (Object_t * __this /* static, unused */, Vector3_t81 * ___origin, Vector3_t81 * ___direction, RaycastHit_t368 * ___hitInfo, float ___distance, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m4839 (Object_t * __this /* static, unused */, Vector3_t81  ___origin, Vector3_t81  ___direction, RaycastHit_t368 * ___hitInfo, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m1806 (Object_t * __this /* static, unused */, Ray_t389  ___ray, RaycastHit_t368 * ___hitInfo, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t395* Physics_RaycastAll_m1733 (Object_t * __this /* static, unused */, Ray_t389  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t395* Physics_RaycastAll_m4840 (Object_t * __this /* static, unused */, Vector3_t81  ___origin, Vector3_t81  ___direction, float ___distance, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t395* Physics_INTERNAL_CALL_RaycastAll_m4841 (Object_t * __this /* static, unused */, Vector3_t81 * ___origin, Vector3_t81 * ___direction, float ___distance, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
