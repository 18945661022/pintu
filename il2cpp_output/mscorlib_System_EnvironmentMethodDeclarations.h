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

// System.String
struct String_t;
// System.OperatingSystem
struct OperatingSystem_t2019;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_PlatformID.h"
#include "mscorlib_System_Environment_SpecialFolder.h"

// System.Boolean System.Environment::get_SocketSecurityEnabled()
extern "C" bool Environment_get_SocketSecurityEnabled_m12567 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::get_NewLine()
extern "C" String_t* Environment_get_NewLine_m6746 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.PlatformID System.Environment::get_Platform()
extern "C" int32_t Environment_get_Platform_m12568 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetOSVersionString()
extern "C" String_t* Environment_GetOSVersionString_m12569 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.OperatingSystem System.Environment::get_OSVersion()
extern "C" OperatingSystem_t2019 * Environment_get_OSVersion_m12570 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::internalGetEnvironmentVariable(System.String)
extern "C" String_t* Environment_internalGetEnvironmentVariable_m12571 (Object_t * __this /* static, unused */, String_t* ___variable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetEnvironmentVariable(System.String)
extern "C" String_t* Environment_GetEnvironmentVariable_m6831 (Object_t * __this /* static, unused */, String_t* ___variable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetWindowsFolderPath(System.Int32)
extern "C" String_t* Environment_GetWindowsFolderPath_m12572 (Object_t * __this /* static, unused */, int32_t ___folder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetFolderPath(System.Environment/SpecialFolder)
extern "C" String_t* Environment_GetFolderPath_m6815 (Object_t * __this /* static, unused */, int32_t ___folder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::ReadXdgUserDir(System.String,System.String,System.String,System.String)
extern "C" String_t* Environment_ReadXdgUserDir_m12573 (Object_t * __this /* static, unused */, String_t* ___config_dir, String_t* ___home_dir, String_t* ___key, String_t* ___fallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::InternalGetFolderPath(System.Environment/SpecialFolder)
extern "C" String_t* Environment_InternalGetFolderPath_m12574 (Object_t * __this /* static, unused */, int32_t ___folder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Environment::get_IsRunningOnWindows()
extern "C" bool Environment_get_IsRunningOnWindows_m12575 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetMachineConfigPath()
extern "C" String_t* Environment_GetMachineConfigPath_m12576 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::internalGetHome()
extern "C" String_t* Environment_internalGetHome_m12577 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
