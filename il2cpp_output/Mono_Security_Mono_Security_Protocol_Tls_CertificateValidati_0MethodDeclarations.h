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

// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t1162;
// System.Object
struct Object_t;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t1159;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1092;
// System.IAsyncResult
struct IAsyncResult_t263;
// System.AsyncCallback
struct AsyncCallback_t264;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback2::.ctor(System.Object,System.IntPtr)
extern "C" void CertificateValidationCallback2__ctor_m6725 (CertificateValidationCallback2_t1162 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::Invoke(Mono.Security.X509.X509CertificateCollection)
extern "C" ValidationResult_t1159 * CertificateValidationCallback2_Invoke_m6726 (CertificateValidationCallback2_t1162 * __this, X509CertificateCollection_t1092 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" ValidationResult_t1159 * pinvoke_delegate_wrapper_CertificateValidationCallback2_t1162(Il2CppObject* delegate, X509CertificateCollection_t1092 * ___collection);
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::BeginInvoke(Mono.Security.X509.X509CertificateCollection,System.AsyncCallback,System.Object)
extern "C" Object_t * CertificateValidationCallback2_BeginInvoke_m6727 (CertificateValidationCallback2_t1162 * __this, X509CertificateCollection_t1092 * ___collection, AsyncCallback_t264 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::EndInvoke(System.IAsyncResult)
extern "C" ValidationResult_t1159 * CertificateValidationCallback2_EndInvoke_m6728 (CertificateValidationCallback2_t1162 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
