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

// System.Net.HttpWebRequest
struct HttpWebRequest_t1144;
// System.Uri
struct Uri_t1232;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1005;
// System.Net.ServicePoint
struct ServicePoint_t1233;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern "C" void HttpWebRequest__ctor_m6983 (HttpWebRequest_t1144 * __this, Uri_t1232 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest__ctor_m6984 (HttpWebRequest_t1144 * __this, SerializationInfo_t1005 * ___serializationInfo, StreamingContext_t1006  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
extern "C" void HttpWebRequest__cctor_m6985 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m6986 (HttpWebRequest_t1144 * __this, SerializationInfo_t1005 * ___serializationInfo, StreamingContext_t1006  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
extern "C" Uri_t1232 * HttpWebRequest_get_Address_m6835 (HttpWebRequest_t1144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern "C" ServicePoint_t1233 * HttpWebRequest_get_ServicePoint_m6839 (HttpWebRequest_t1144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern "C" ServicePoint_t1233 * HttpWebRequest_GetServicePoint_m6987 (HttpWebRequest_t1144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_GetObjectData_m6988 (HttpWebRequest_t1144 * __this, SerializationInfo_t1005 * ___serializationInfo, StreamingContext_t1006  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
