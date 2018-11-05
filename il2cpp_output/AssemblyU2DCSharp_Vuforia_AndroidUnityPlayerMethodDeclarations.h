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

// Vuforia.AndroidUnityPlayer
struct AndroidUnityPlayer_t22;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaUnity_InitEr.h"

// System.Void Vuforia.AndroidUnityPlayer::.ctor()
extern "C" void AndroidUnityPlayer__ctor_m30 (AndroidUnityPlayer_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::LoadNativeLibraries()
extern "C" void AndroidUnityPlayer_LoadNativeLibraries_m31 (AndroidUnityPlayer_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::InitializePlatform()
extern "C" void AndroidUnityPlayer_InitializePlatform_m32 (AndroidUnityPlayer_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaUnity/InitError Vuforia.AndroidUnityPlayer::Start(System.String)
extern "C" int32_t AndroidUnityPlayer_Start_m33 (AndroidUnityPlayer_t22 * __this, String_t* ___licenseKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::Update()
extern "C" void AndroidUnityPlayer_Update_m34 (AndroidUnityPlayer_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::OnPause()
extern "C" void AndroidUnityPlayer_OnPause_m35 (AndroidUnityPlayer_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::OnResume()
extern "C" void AndroidUnityPlayer_OnResume_m36 (AndroidUnityPlayer_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::OnDestroy()
extern "C" void AndroidUnityPlayer_OnDestroy_m37 (AndroidUnityPlayer_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::Dispose()
extern "C" void AndroidUnityPlayer_Dispose_m38 (AndroidUnityPlayer_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::LoadNativeLibrariesFromJava()
extern "C" void AndroidUnityPlayer_LoadNativeLibrariesFromJava_m39 (AndroidUnityPlayer_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::InitAndroidPlatform()
extern "C" void AndroidUnityPlayer_InitAndroidPlatform_m40 (AndroidUnityPlayer_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.AndroidUnityPlayer::InitVuforia(System.String)
extern "C" int32_t AndroidUnityPlayer_InitVuforia_m41 (AndroidUnityPlayer_t22 * __this, String_t* ___licenseKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::InitializeSurface()
extern "C" void AndroidUnityPlayer_InitializeSurface_m42 (AndroidUnityPlayer_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::ResetUnityScreenOrientation()
extern "C" void AndroidUnityPlayer_ResetUnityScreenOrientation_m43 (AndroidUnityPlayer_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::CheckOrientation()
extern "C" void AndroidUnityPlayer_CheckOrientation_m44 (AndroidUnityPlayer_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
