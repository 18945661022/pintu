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


#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaUnity_Vufori.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_ScreenOrientation.h"

// System.Void Vuforia.VuforiaUnity::Deinit()
extern "C" void VuforiaUnity_Deinit_m234 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaUnity::IsRendererDirty()
extern "C" bool VuforiaUnity_IsRendererDirty_m3899 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaUnity::SetHint(Vuforia.VuforiaUnity/VuforiaHint,System.Int32)
extern "C" bool VuforiaUnity_SetHint_m3900 (Object_t * __this /* static, unused */, int32_t ___hint, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaUnity::SetHint(System.UInt32,System.Int32)
extern "C" bool VuforiaUnity_SetHint_m3901 (Object_t * __this /* static, unused */, uint32_t ___hint, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.VuforiaUnity::GetProjectionGL(System.Single,System.Single,UnityEngine.ScreenOrientation)
extern "C" Matrix4x4_t52  VuforiaUnity_GetProjectionGL_m3902 (Object_t * __this /* static, unused */, float ___nearPlane, float ___farPlane, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaUnity::OnPause()
extern "C" void VuforiaUnity_OnPause_m232 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaUnity::OnResume()
extern "C" void VuforiaUnity_OnResume_m233 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaUnity::SetRendererDirty()
extern "C" void VuforiaUnity_SetRendererDirty_m3903 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
