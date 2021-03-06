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

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1495;
// Mono.Math.BigInteger
struct BigInteger_t1496;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m8875 (ModulusRing_t1495 * __this, BigInteger_t1496 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m8876 (ModulusRing_t1495 * __this, BigInteger_t1496 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1496 * ModulusRing_Multiply_m8877 (ModulusRing_t1495 * __this, BigInteger_t1496 * ___a, BigInteger_t1496 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1496 * ModulusRing_Difference_m8878 (ModulusRing_t1495 * __this, BigInteger_t1496 * ___a, BigInteger_t1496 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1496 * ModulusRing_Pow_m8879 (ModulusRing_t1495 * __this, BigInteger_t1496 * ___a, BigInteger_t1496 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1496 * ModulusRing_Pow_m8880 (ModulusRing_t1495 * __this, uint32_t ___b, BigInteger_t1496 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
