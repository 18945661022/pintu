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

// System.OverflowException
struct OverflowException_t2044;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1005;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.OverflowException::.ctor()
extern "C" void OverflowException__ctor_m12842 (OverflowException_t2044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.OverflowException::.ctor(System.String)
extern "C" void OverflowException__ctor_m12843 (OverflowException_t2044 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.OverflowException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void OverflowException__ctor_m12844 (OverflowException_t2044 * __this, SerializationInfo_t1005 * ___info, StreamingContext_t1006  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
