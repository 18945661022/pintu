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

// System.Net.WebProxy
struct WebProxy_t1287;
// System.Uri
struct Uri_t1232;
// System.String[]
struct StringU5BU5D_t726;
// System.Net.ICredentials
struct ICredentials_t1288;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1005;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebProxy::.ctor()
extern "C" void WebProxy__ctor_m7064 (WebProxy_t1287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Uri,System.Boolean,System.String[],System.Net.ICredentials)
extern "C" void WebProxy__ctor_m7065 (WebProxy_t1287 * __this, Uri_t1232 * ___address, bool ___bypassOnLocal, StringU5BU5D_t726* ___bypassList, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy__ctor_m7066 (WebProxy_t1287 * __this, SerializationInfo_t1005 * ___serializationInfo, StreamingContext_t1006  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_m7067 (WebProxy_t1287 * __this, SerializationInfo_t1005 * ___serializationInfo, StreamingContext_t1006  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::get_UseDefaultCredentials()
extern "C" bool WebProxy_get_UseDefaultCredentials_m7068 (WebProxy_t1287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebProxy::GetProxy(System.Uri)
extern "C" Uri_t1232 * WebProxy_GetProxy_m7069 (WebProxy_t1287 * __this, Uri_t1232 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::IsBypassed(System.Uri)
extern "C" bool WebProxy_IsBypassed_m7070 (WebProxy_t1287 * __this, Uri_t1232 * ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_GetObjectData_m7071 (WebProxy_t1287 * __this, SerializationInfo_t1005 * ___serializationInfo, StreamingContext_t1006  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::CheckBypassList()
extern "C" void WebProxy_CheckBypassList_m7072 (WebProxy_t1287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
