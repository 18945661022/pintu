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

// Vuforia.WebCamTexAdaptorImpl
struct WebCamTexAdaptorImpl_t574;
// UnityEngine.Texture
struct Texture_t77;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vec.h"

// System.Boolean Vuforia.WebCamTexAdaptorImpl::get_DidUpdateThisFrame()
extern "C" bool WebCamTexAdaptorImpl_get_DidUpdateThisFrame_m2798 (WebCamTexAdaptorImpl_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamTexAdaptorImpl::get_IsPlaying()
extern "C" bool WebCamTexAdaptorImpl_get_IsPlaying_m2799 (WebCamTexAdaptorImpl_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture Vuforia.WebCamTexAdaptorImpl::get_Texture()
extern "C" Texture_t77 * WebCamTexAdaptorImpl_get_Texture_m2800 (WebCamTexAdaptorImpl_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamTexAdaptorImpl::.ctor(System.String,System.Int32,Vuforia.VuforiaRenderer/Vec2I)
extern "C" void WebCamTexAdaptorImpl__ctor_m2801 (WebCamTexAdaptorImpl_t574 * __this, String_t* ___deviceName, int32_t ___requestedFPS, Vec2I_t556  ___requestedTextureSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamTexAdaptorImpl::Play()
extern "C" void WebCamTexAdaptorImpl_Play_m2802 (WebCamTexAdaptorImpl_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamTexAdaptorImpl::Stop()
extern "C" void WebCamTexAdaptorImpl_Stop_m2803 (WebCamTexAdaptorImpl_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
