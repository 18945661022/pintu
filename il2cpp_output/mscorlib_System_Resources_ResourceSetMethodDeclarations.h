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

// System.Resources.ResourceSet
struct ResourceSet_t1717;
// System.IO.Stream
struct Stream_t1149;
// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_t1619;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t95;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1213;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Resources.ResourceSet::.ctor()
extern "C" void ResourceSet__ctor_m10718 (ResourceSet_t1717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::.ctor(System.IO.Stream)
extern "C" void ResourceSet__ctor_m10719 (ResourceSet_t1717 * __this, Stream_t1149 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::.ctor(System.IO.UnmanagedMemoryStream)
extern "C" void ResourceSet__ctor_m10720 (ResourceSet_t1717 * __this, UnmanagedMemoryStream_t1619 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::.ctor(System.String)
extern "C" void ResourceSet__ctor_m10721 (ResourceSet_t1717 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Resources.ResourceSet::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ResourceSet_System_Collections_IEnumerable_GetEnumerator_m10722 (ResourceSet_t1717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::Dispose()
extern "C" void ResourceSet_Dispose_m10723 (ResourceSet_t1717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::Dispose(System.Boolean)
extern "C" void ResourceSet_Dispose_m10724 (ResourceSet_t1717 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Resources.ResourceSet::GetEnumerator()
extern "C" Object_t * ResourceSet_GetEnumerator_m10725 (ResourceSet_t1717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceSet::GetObjectInternal(System.String,System.Boolean)
extern "C" Object_t * ResourceSet_GetObjectInternal_m10726 (ResourceSet_t1717 * __this, String_t* ___name, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceSet::GetObject(System.String)
extern "C" Object_t * ResourceSet_GetObject_m10727 (ResourceSet_t1717 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceSet::GetObject(System.String,System.Boolean)
extern "C" Object_t * ResourceSet_GetObject_m10728 (ResourceSet_t1717 * __this, String_t* ___name, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::ReadResources()
extern "C" void ResourceSet_ReadResources_m10729 (ResourceSet_t1717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
