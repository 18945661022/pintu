﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t110;
// System.Type[]
struct TypeU5BU5D_t789;
// System.Reflection.MethodBase
struct MethodBase_t1028;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t1792;
// System.Collections.IDictionary
struct IDictionary_t1200;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t974;

#include "mscorlib_System_Object.h"

// System.Runtime.Remoting.Messaging.MethodCall
struct  MethodCall_t1787  : public Object_t
{
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_uri
	String_t* ____uri_0;
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_typeName
	String_t* ____typeName_1;
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_methodName
	String_t* ____methodName_2;
	// System.Object[] System.Runtime.Remoting.Messaging.MethodCall::_args
	ObjectU5BU5D_t110* ____args_3;
	// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::_methodSignature
	TypeU5BU5D_t789* ____methodSignature_4;
	// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::_methodBase
	MethodBase_t1028 * ____methodBase_5;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MethodCall::_callContext
	LogicalCallContext_t1792 * ____callContext_6;
	// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::_genericArguments
	TypeU5BU5D_t789* ____genericArguments_7;
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::ExternalProperties
	Object_t * ___ExternalProperties_8;
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::InternalProperties
	Object_t * ___InternalProperties_9;
};
struct MethodCall_t1787_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.MethodCall::<>f__switch$map1F
	Dictionary_2_t974 * ___U3CU3Ef__switchU24map1F_10;
};
