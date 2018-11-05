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

// Vuforia.StencilHideExcessAreaClipping
struct StencilHideExcessAreaClipping_t444;
// UnityEngine.GameObject
struct GameObject_t83;
// System.String
struct String_t;
// UnityEngine.Shader
struct Shader_t124;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// UnityEngine.GameObject Vuforia.StencilHideExcessAreaClipping::CreateQuad(UnityEngine.GameObject,System.String,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Int32)
extern "C" GameObject_t83 * StencilHideExcessAreaClipping_CreateQuad_m2163 (StencilHideExcessAreaClipping_t444 * __this, GameObject_t83 * ___parent, String_t* ___name, Vector3_t81  ___position, Quaternion_t92  ___rotation, Vector3_t81  ___scale, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::OnVuforiaStarted()
extern "C" void StencilHideExcessAreaClipping_OnVuforiaStarted_m2164 (StencilHideExcessAreaClipping_t444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.StencilHideExcessAreaClipping::HasCalculationDataChanged()
extern "C" bool StencilHideExcessAreaClipping_HasCalculationDataChanged_m2165 (StencilHideExcessAreaClipping_t444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::.ctor(UnityEngine.GameObject,UnityEngine.Shader)
extern "C" void StencilHideExcessAreaClipping__ctor_m2166 (StencilHideExcessAreaClipping_t444 * __this, GameObject_t83 * ___gameObject, Shader_t124 * ___matteShader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::SetPlanesRenderingActive(System.Boolean)
extern "C" void StencilHideExcessAreaClipping_SetPlanesRenderingActive_m2167 (StencilHideExcessAreaClipping_t444 * __this, bool ___activeflag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.StencilHideExcessAreaClipping::IsPlanesRenderingActive()
extern "C" bool StencilHideExcessAreaClipping_IsPlanesRenderingActive_m2168 (StencilHideExcessAreaClipping_t444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::OnPreCull()
extern "C" void StencilHideExcessAreaClipping_OnPreCull_m2169 (StencilHideExcessAreaClipping_t444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::OnPostRender()
extern "C" void StencilHideExcessAreaClipping_OnPostRender_m2170 (StencilHideExcessAreaClipping_t444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::Start()
extern "C" void StencilHideExcessAreaClipping_Start_m2171 (StencilHideExcessAreaClipping_t444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::OnDisable()
extern "C" void StencilHideExcessAreaClipping_OnDisable_m2172 (StencilHideExcessAreaClipping_t444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::OnEnable()
extern "C" void StencilHideExcessAreaClipping_OnEnable_m2173 (StencilHideExcessAreaClipping_t444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::OnDestroy()
extern "C" void StencilHideExcessAreaClipping_OnDestroy_m2174 (StencilHideExcessAreaClipping_t444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::Update(UnityEngine.Vector3)
extern "C" void StencilHideExcessAreaClipping_Update_m2175 (StencilHideExcessAreaClipping_t444 * __this, Vector3_t81  ___planeOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
