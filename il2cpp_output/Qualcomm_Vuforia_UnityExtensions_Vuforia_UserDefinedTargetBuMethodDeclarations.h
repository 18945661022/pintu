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

// Vuforia.UserDefinedTargetBuildingAbstractBehaviour
struct UserDefinedTargetBuildingAbstractBehaviour_t49;
// Vuforia.IUserDefinedTargetEventHandler
struct IUserDefinedTargetEventHandler_t684;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ImageTargetBuilder_.h"

// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::RegisterEventHandler(Vuforia.IUserDefinedTargetEventHandler)
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_RegisterEventHandler_m4028 (UserDefinedTargetBuildingAbstractBehaviour_t49 * __this, Object_t * ___eventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.UserDefinedTargetBuildingAbstractBehaviour::UnregisterEventHandler(Vuforia.IUserDefinedTargetEventHandler)
extern "C" bool UserDefinedTargetBuildingAbstractBehaviour_UnregisterEventHandler_m4029 (UserDefinedTargetBuildingAbstractBehaviour_t49 * __this, Object_t * ___eventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::StartScanning()
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_StartScanning_m4030 (UserDefinedTargetBuildingAbstractBehaviour_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::BuildNewTarget(System.String,System.Single)
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_BuildNewTarget_m4031 (UserDefinedTargetBuildingAbstractBehaviour_t49 * __this, String_t* ___targetName, float ___sceenSizeWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::StopScanning()
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_StopScanning_m4032 (UserDefinedTargetBuildingAbstractBehaviour_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::SetFrameQuality(Vuforia.ImageTargetBuilder/FrameQuality)
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_SetFrameQuality_m4033 (UserDefinedTargetBuildingAbstractBehaviour_t49 * __this, int32_t ___frameQuality, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::Start()
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_Start_m4034 (UserDefinedTargetBuildingAbstractBehaviour_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::Update()
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_Update_m4035 (UserDefinedTargetBuildingAbstractBehaviour_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::OnEnable()
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_OnEnable_m4036 (UserDefinedTargetBuildingAbstractBehaviour_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::OnDisable()
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_OnDisable_m4037 (UserDefinedTargetBuildingAbstractBehaviour_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::OnDestroy()
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_OnDestroy_m4038 (UserDefinedTargetBuildingAbstractBehaviour_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::OnVuforiaStarted()
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_OnVuforiaStarted_m4039 (UserDefinedTargetBuildingAbstractBehaviour_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::OnPause(System.Boolean)
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_OnPause_m4040 (UserDefinedTargetBuildingAbstractBehaviour_t49 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::.ctor()
extern "C" void UserDefinedTargetBuildingAbstractBehaviour__ctor_m280 (UserDefinedTargetBuildingAbstractBehaviour_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
