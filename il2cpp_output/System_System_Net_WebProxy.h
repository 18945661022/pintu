﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Uri
struct Uri_t1232;
// System.Collections.ArrayList
struct ArrayList_t1066;
// System.Net.ICredentials
struct ICredentials_t1288;

#include "mscorlib_System_Object.h"

// System.Net.WebProxy
struct  WebProxy_t1287  : public Object_t
{
	// System.Uri System.Net.WebProxy::address
	Uri_t1232 * ___address_0;
	// System.Boolean System.Net.WebProxy::bypassOnLocal
	bool ___bypassOnLocal_1;
	// System.Collections.ArrayList System.Net.WebProxy::bypassList
	ArrayList_t1066 * ___bypassList_2;
	// System.Net.ICredentials System.Net.WebProxy::credentials
	Object_t * ___credentials_3;
	// System.Boolean System.Net.WebProxy::useDefaultCredentials
	bool ___useDefaultCredentials_4;
};
