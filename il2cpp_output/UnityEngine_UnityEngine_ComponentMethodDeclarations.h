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

// UnityEngine.Component
struct Component_t149;
// UnityEngine.Transform
struct Transform_t51;
// UnityEngine.Camera
struct Camera_t53;
// UnityEngine.AudioSource
struct AudioSource_t89;
// UnityEngine.GameObject
struct GameObject_t83;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t377;

#include "codegen/il2cpp-codegen.h"

// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" Transform_t51 * Component_get_transform_m276 (Component_t149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::InternalGetTransform()
extern "C" Transform_t51 * Component_InternalGetTransform_m5731 (Component_t149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Component::get_camera()
extern "C" Camera_t53 * Component_get_camera_m1660 (Component_t149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource UnityEngine.Component::get_audio()
extern "C" AudioSource_t89 * Component_get_audio_m411 (Component_t149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" GameObject_t83 * Component_get_gameObject_m279 (Component_t149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::InternalGetGameObject()
extern "C" GameObject_t83 * Component_InternalGetGameObject_m5732 (Component_t149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern "C" Component_t149 * Component_GetComponent_m2090 (Component_t149 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInChildren(System.Type)
extern "C" Component_t149 * Component_GetComponentInChildren_m5733 (Component_t149 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Type,System.Boolean,System.Boolean,System.Object)
extern "C" void Component_GetComponentsForListInternal_m5734 (Component_t149 * __this, Type_t * ___searchType, Type_t * ___listElementType, bool ___recursive, bool ___includeInactive, Object_t * ___resultList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C" void Component_GetComponents_m1772 (Component_t149 * __this, Type_t * ___type, List_1_t377 * ___results, const MethodInfo* method) IL2CPP_METHOD_ATTR;
