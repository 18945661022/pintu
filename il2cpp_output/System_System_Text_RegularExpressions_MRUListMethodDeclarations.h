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

// System.Text.RegularExpressions.MRUList
struct MRUList_t1339;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.MRUList::.ctor()
extern "C" void MRUList__ctor_m7386 (MRUList_t1339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.MRUList::Use(System.Object)
extern "C" void MRUList_Use_m7387 (MRUList_t1339 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.RegularExpressions.MRUList::Evict()
extern "C" Object_t * MRUList_Evict_m7388 (MRUList_t1339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
