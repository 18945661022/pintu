﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[,]
struct ByteU5BU2CU5D_t1884;

#include "mscorlib_System_Security_Cryptography_SymmetricAlgorithm.h"

// System.Security.Cryptography.DES
struct  DES_t1226  : public SymmetricAlgorithm_t1083
{
};
struct DES_t1226_StaticFields{
	// System.Byte[,] System.Security.Cryptography.DES::weakKeys
	ByteU5BU2CU5D_t1884* ___weakKeys_10;
	// System.Byte[,] System.Security.Cryptography.DES::semiWeakKeys
	ByteU5BU2CU5D_t1884* ___semiWeakKeys_11;
};
