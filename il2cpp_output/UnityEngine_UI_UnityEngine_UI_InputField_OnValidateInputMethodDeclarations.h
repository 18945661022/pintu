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

// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t261;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t263;
// System.AsyncCallback
struct AsyncCallback_t264;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_String.h"

// System.Void UnityEngine.UI.InputField/OnValidateInput::.ctor(System.Object,System.IntPtr)
extern "C" void OnValidateInput__ctor_m919 (OnValidateInput_t261 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.UI.InputField/OnValidateInput::Invoke(System.String,System.Int32,System.Char)
extern "C" uint16_t OnValidateInput_Invoke_m920 (OnValidateInput_t261 * __this, String_t* ___text, int32_t ___charIndex, uint16_t ___addedChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" uint16_t pinvoke_delegate_wrapper_OnValidateInput_t261(Il2CppObject* delegate, String_t* ___text, int32_t ___charIndex, uint16_t ___addedChar);
// System.IAsyncResult UnityEngine.UI.InputField/OnValidateInput::BeginInvoke(System.String,System.Int32,System.Char,System.AsyncCallback,System.Object)
extern "C" Object_t * OnValidateInput_BeginInvoke_m921 (OnValidateInput_t261 * __this, String_t* ___text, int32_t ___charIndex, uint16_t ___addedChar, AsyncCallback_t264 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.UI.InputField/OnValidateInput::EndInvoke(System.IAsyncResult)
extern "C" uint16_t OnValidateInput_EndInvoke_m922 (OnValidateInput_t261 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;