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

// System.Security.Cryptography.MACTripleDES
struct MACTripleDES_t1893;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t73;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.MACTripleDES::.ctor()
extern "C" void MACTripleDES__ctor_m11482 (MACTripleDES_t1893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::Setup(System.String,System.Byte[])
extern "C" void MACTripleDES_Setup_m11483 (MACTripleDES_t1893 * __this, String_t* ___strTripleDES, ByteU5BU5D_t73* ___rgbKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::Finalize()
extern "C" void MACTripleDES_Finalize_m11484 (MACTripleDES_t1893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::Dispose(System.Boolean)
extern "C" void MACTripleDES_Dispose_m11485 (MACTripleDES_t1893 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::Initialize()
extern "C" void MACTripleDES_Initialize_m11486 (MACTripleDES_t1893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void MACTripleDES_HashCore_m11487 (MACTripleDES_t1893 * __this, ByteU5BU5D_t73* ___rgbData, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.MACTripleDES::HashFinal()
extern "C" ByteU5BU5D_t73* MACTripleDES_HashFinal_m11488 (MACTripleDES_t1893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
