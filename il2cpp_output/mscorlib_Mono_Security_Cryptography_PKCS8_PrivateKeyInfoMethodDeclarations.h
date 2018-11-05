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

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t1506;
// System.Byte[]
struct ByteU5BU5D_t73;
// System.Security.Cryptography.RSA
struct RSA_t1088;
// System.Security.Cryptography.DSA
struct DSA_t1095;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
extern "C" void PrivateKeyInfo__ctor_m9028 (PrivateKeyInfo_t1506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
extern "C" void PrivateKeyInfo__ctor_m9029 (PrivateKeyInfo_t1506 * __this, ByteU5BU5D_t73* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
extern "C" ByteU5BU5D_t73* PrivateKeyInfo_get_PrivateKey_m9030 (PrivateKeyInfo_t1506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
extern "C" void PrivateKeyInfo_Decode_m9031 (PrivateKeyInfo_t1506 * __this, ByteU5BU5D_t73* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
extern "C" ByteU5BU5D_t73* PrivateKeyInfo_RemoveLeadingZero_m9032 (Object_t * __this /* static, unused */, ByteU5BU5D_t73* ___bigInt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t73* PrivateKeyInfo_Normalize_m9033 (Object_t * __this /* static, unused */, ByteU5BU5D_t73* ___bigInt, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
extern "C" RSA_t1088 * PrivateKeyInfo_DecodeRSA_m9034 (Object_t * __this /* static, unused */, ByteU5BU5D_t73* ___keypair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
extern "C" DSA_t1095 * PrivateKeyInfo_DecodeDSA_m9035 (Object_t * __this /* static, unused */, ByteU5BU5D_t73* ___privateKey, DSAParameters_t1199  ___dsaParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
