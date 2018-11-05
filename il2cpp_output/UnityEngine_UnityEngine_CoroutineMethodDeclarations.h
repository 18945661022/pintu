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

// UnityEngine.Coroutine
struct Coroutine_t272;
struct Coroutine_t272_marshaled;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m5090 (Coroutine_t272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m5091 (Coroutine_t272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m5092 (Coroutine_t272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Coroutine_t272_marshal(const Coroutine_t272& unmarshaled, Coroutine_t272_marshaled& marshaled);
extern "C" void Coroutine_t272_marshal_back(const Coroutine_t272_marshaled& marshaled, Coroutine_t272& unmarshaled);
extern "C" void Coroutine_t272_marshal_cleanup(Coroutine_t272_marshaled& marshaled);
