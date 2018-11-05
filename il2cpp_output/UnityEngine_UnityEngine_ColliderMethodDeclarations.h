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

// UnityEngine.Collider
struct Collider_t105;
// UnityEngine.Rigidbody
struct Rigidbody_t882;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C" void Collider_set_enabled_m224 (Collider_t105 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
extern "C" Rigidbody_t882 * Collider_get_attachedRigidbody_m4842 (Collider_t105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
