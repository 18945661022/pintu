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

// System.Collections.Generic.LinkedListNode`1<System.Int32>
struct LinkedListNode_1_t718;
// System.Collections.Generic.LinkedList`1<System.Int32>
struct LinkedList_1_t551;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Generic.LinkedListNode`1<System.Int32>::.ctor(System.Collections.Generic.LinkedList`1<T>,T)
extern "C" void LinkedListNode_1__ctor_m18130_gshared (LinkedListNode_1_t718 * __this, LinkedList_1_t551 * ___list, int32_t ___value, const MethodInfo* method);
#define LinkedListNode_1__ctor_m18130(__this, ___list, ___value, method) (( void (*) (LinkedListNode_1_t718 *, LinkedList_1_t551 *, int32_t, const MethodInfo*))LinkedListNode_1__ctor_m18130_gshared)(__this, ___list, ___value, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Int32>::.ctor(System.Collections.Generic.LinkedList`1<T>,T,System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedListNode_1__ctor_m18131_gshared (LinkedListNode_1_t718 * __this, LinkedList_1_t551 * ___list, int32_t ___value, LinkedListNode_1_t718 * ___previousNode, LinkedListNode_1_t718 * ___nextNode, const MethodInfo* method);
#define LinkedListNode_1__ctor_m18131(__this, ___list, ___value, ___previousNode, ___nextNode, method) (( void (*) (LinkedListNode_1_t718 *, LinkedList_1_t551 *, int32_t, LinkedListNode_1_t718 *, LinkedListNode_1_t718 *, const MethodInfo*))LinkedListNode_1__ctor_m18131_gshared)(__this, ___list, ___value, ___previousNode, ___nextNode, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Int32>::Detach()
extern "C" void LinkedListNode_1_Detach_m18132_gshared (LinkedListNode_1_t718 * __this, const MethodInfo* method);
#define LinkedListNode_1_Detach_m18132(__this, method) (( void (*) (LinkedListNode_1_t718 *, const MethodInfo*))LinkedListNode_1_Detach_m18132_gshared)(__this, method)
// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1<System.Int32>::get_List()
extern "C" LinkedList_1_t551 * LinkedListNode_1_get_List_m18133_gshared (LinkedListNode_1_t718 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_List_m18133(__this, method) (( LinkedList_1_t551 * (*) (LinkedListNode_1_t718 *, const MethodInfo*))LinkedListNode_1_get_List_m18133_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Int32>::get_Next()
extern "C" LinkedListNode_1_t718 * LinkedListNode_1_get_Next_m4456_gshared (LinkedListNode_1_t718 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Next_m4456(__this, method) (( LinkedListNode_1_t718 * (*) (LinkedListNode_1_t718 *, const MethodInfo*))LinkedListNode_1_get_Next_m4456_gshared)(__this, method)
// T System.Collections.Generic.LinkedListNode`1<System.Int32>::get_Value()
extern "C" int32_t LinkedListNode_1_get_Value_m4295_gshared (LinkedListNode_1_t718 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Value_m4295(__this, method) (( int32_t (*) (LinkedListNode_1_t718 *, const MethodInfo*))LinkedListNode_1_get_Value_m4295_gshared)(__this, method)
