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

// Vuforia.TargetFinderImpl
struct TargetFinderImpl_t616;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<Vuforia.TargetFinder/TargetSearchResult>
struct IEnumerable_1_t677;
// Vuforia.ImageTargetAbstractBehaviour
struct ImageTargetAbstractBehaviour_t21;
// UnityEngine.GameObject
struct GameObject_t83;
// System.Collections.Generic.IEnumerable`1<Vuforia.ImageTarget>
struct IEnumerable_1_t678;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_InitSt.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_Update.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_Filter.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_Target.h"

// System.Void Vuforia.TargetFinderImpl::.ctor()
extern "C" void TargetFinderImpl__ctor_m3790 (TargetFinderImpl_t616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TargetFinderImpl::Finalize()
extern "C" void TargetFinderImpl_Finalize_m3791 (TargetFinderImpl_t616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::StartInit(System.String,System.String)
extern "C" bool TargetFinderImpl_StartInit_m3792 (TargetFinderImpl_t616 * __this, String_t* ___userAuth, String_t* ___secretAuth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TargetFinder/InitState Vuforia.TargetFinderImpl::GetInitState()
extern "C" int32_t TargetFinderImpl_GetInitState_m3793 (TargetFinderImpl_t616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::Deinit()
extern "C" bool TargetFinderImpl_Deinit_m3794 (TargetFinderImpl_t616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::StartRecognition()
extern "C" bool TargetFinderImpl_StartRecognition_m3795 (TargetFinderImpl_t616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::Stop()
extern "C" bool TargetFinderImpl_Stop_m3796 (TargetFinderImpl_t616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TargetFinderImpl::SetUIScanlineColor(UnityEngine.Color)
extern "C" void TargetFinderImpl_SetUIScanlineColor_m3797 (TargetFinderImpl_t616 * __this, Color_t67  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TargetFinderImpl::SetUIPointColor(UnityEngine.Color)
extern "C" void TargetFinderImpl_SetUIPointColor_m3798 (TargetFinderImpl_t616 * __this, Color_t67  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::IsRequesting()
extern "C" bool TargetFinderImpl_IsRequesting_m3799 (TargetFinderImpl_t616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TargetFinder/UpdateState Vuforia.TargetFinderImpl::Update()
extern "C" int32_t TargetFinderImpl_Update_m3800 (TargetFinderImpl_t616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TargetFinder/UpdateState Vuforia.TargetFinderImpl::Update(Vuforia.TargetFinder/FilterMode)
extern "C" int32_t TargetFinderImpl_Update_m3801 (TargetFinderImpl_t616 * __this, int32_t ___filterMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.TargetFinder/TargetSearchResult> Vuforia.TargetFinderImpl::GetResults()
extern "C" Object_t* TargetFinderImpl_GetResults_m3802 (TargetFinderImpl_t616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.TargetFinderImpl::EnableTracking(Vuforia.TargetFinder/TargetSearchResult,System.String)
extern "C" ImageTargetAbstractBehaviour_t21 * TargetFinderImpl_EnableTracking_m3803 (TargetFinderImpl_t616 * __this, TargetSearchResult_t613  ___result, String_t* ___gameObjectName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.TargetFinderImpl::EnableTracking(Vuforia.TargetFinder/TargetSearchResult,UnityEngine.GameObject)
extern "C" ImageTargetAbstractBehaviour_t21 * TargetFinderImpl_EnableTracking_m3804 (TargetFinderImpl_t616 * __this, TargetSearchResult_t613  ___result, GameObject_t83 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TargetFinderImpl::ClearTrackables(System.Boolean)
extern "C" void TargetFinderImpl_ClearTrackables_m3805 (TargetFinderImpl_t616 * __this, bool ___destroyGameObjects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.ImageTarget> Vuforia.TargetFinderImpl::GetImageTargets()
extern "C" Object_t* TargetFinderImpl_GetImageTargets_m3806 (TargetFinderImpl_t616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
