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

// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack
struct PatternLinkStack_t1346;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::.ctor()
extern "C" void PatternLinkStack__ctor_m7402 (PatternLinkStack_t1346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::set_BaseAddress(System.Int32)
extern "C" void PatternLinkStack_set_BaseAddress_m7403 (PatternLinkStack_t1346 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::get_OffsetAddress()
extern "C" int32_t PatternLinkStack_get_OffsetAddress_m7404 (PatternLinkStack_t1346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::set_OffsetAddress(System.Int32)
extern "C" void PatternLinkStack_set_OffsetAddress_m7405 (PatternLinkStack_t1346 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::GetOffset(System.Int32)
extern "C" int32_t PatternLinkStack_GetOffset_m7406 (PatternLinkStack_t1346 * __this, int32_t ___target_addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::GetCurrent()
extern "C" Object_t * PatternLinkStack_GetCurrent_m7407 (PatternLinkStack_t1346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::SetCurrent(System.Object)
extern "C" void PatternLinkStack_SetCurrent_m7408 (PatternLinkStack_t1346 * __this, Object_t * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
