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

// Vuforia.LegacyHideExcessAreaClipping
struct LegacyHideExcessAreaClipping_t445;
// UnityEngine.GameObject
struct GameObject_t83;
// System.String
struct String_t;
// UnityEngine.Shader
struct Shader_t124;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// UnityEngine.GameObject Vuforia.LegacyHideExcessAreaClipping::CreateQuad(UnityEngine.GameObject,System.String,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Int32)
extern "C" GameObject_t83 * LegacyHideExcessAreaClipping_CreateQuad_m2176 (LegacyHideExcessAreaClipping_t445 * __this, GameObject_t83 * ___parent, String_t* ___name, Vector3_t81  ___position, Quaternion_t92  ___rotation, Vector3_t81  ___scale, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::OnVuforiaStarted()
extern "C" void LegacyHideExcessAreaClipping_OnVuforiaStarted_m2177 (LegacyHideExcessAreaClipping_t445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.LegacyHideExcessAreaClipping::HasCalculationDataChanged()
extern "C" bool LegacyHideExcessAreaClipping_HasCalculationDataChanged_m2178 (LegacyHideExcessAreaClipping_t445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::.ctor(UnityEngine.GameObject,UnityEngine.Shader)
extern "C" void LegacyHideExcessAreaClipping__ctor_m2179 (LegacyHideExcessAreaClipping_t445 * __this, GameObject_t83 * ___gameObject, Shader_t124 * ___matteShader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::SetPlanesRenderingActive(System.Boolean)
extern "C" void LegacyHideExcessAreaClipping_SetPlanesRenderingActive_m2180 (LegacyHideExcessAreaClipping_t445 * __this, bool ___activeflag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.LegacyHideExcessAreaClipping::IsPlanesRenderingActive()
extern "C" bool LegacyHideExcessAreaClipping_IsPlanesRenderingActive_m2181 (LegacyHideExcessAreaClipping_t445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::OnPreCull()
extern "C" void LegacyHideExcessAreaClipping_OnPreCull_m2182 (LegacyHideExcessAreaClipping_t445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::OnPostRender()
extern "C" void LegacyHideExcessAreaClipping_OnPostRender_m2183 (LegacyHideExcessAreaClipping_t445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::Start()
extern "C" void LegacyHideExcessAreaClipping_Start_m2184 (LegacyHideExcessAreaClipping_t445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::OnDisable()
extern "C" void LegacyHideExcessAreaClipping_OnDisable_m2185 (LegacyHideExcessAreaClipping_t445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::OnEnable()
extern "C" void LegacyHideExcessAreaClipping_OnEnable_m2186 (LegacyHideExcessAreaClipping_t445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::OnDestroy()
extern "C" void LegacyHideExcessAreaClipping_OnDestroy_m2187 (LegacyHideExcessAreaClipping_t445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::Update(UnityEngine.Vector3)
extern "C" void LegacyHideExcessAreaClipping_Update_m2188 (LegacyHideExcessAreaClipping_t445 * __this, Vector3_t81  ___planeOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
