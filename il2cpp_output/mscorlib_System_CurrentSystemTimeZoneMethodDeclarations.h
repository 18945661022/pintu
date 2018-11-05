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

// System.CurrentSystemTimeZone
struct CurrentSystemTimeZone_t2055;
// System.Object
struct Object_t;
// System.Int64[]
struct Int64U5BU5D_t2092;
// System.String[]
struct StringU5BU5D_t726;
// System.Globalization.DaylightTime
struct DaylightTime_t1577;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.CurrentSystemTimeZone::.ctor()
extern "C" void CurrentSystemTimeZone__ctor_m12920 (CurrentSystemTimeZone_t2055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::.ctor(System.Int64)
extern "C" void CurrentSystemTimeZone__ctor_m12921 (CurrentSystemTimeZone_t2055 * __this, int64_t ___lnow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void CurrentSystemTimeZone_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m12922 (CurrentSystemTimeZone_t2055 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CurrentSystemTimeZone::GetTimeZoneData(System.Int32,System.Int64[]&,System.String[]&)
extern "C" bool CurrentSystemTimeZone_GetTimeZoneData_m12923 (Object_t * __this /* static, unused */, int32_t ___year, Int64U5BU5D_t2092** ___data, StringU5BU5D_t726** ___names, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightChanges(System.Int32)
extern "C" DaylightTime_t1577 * CurrentSystemTimeZone_GetDaylightChanges_m12924 (CurrentSystemTimeZone_t2055 * __this, int32_t ___year, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.CurrentSystemTimeZone::GetUtcOffset(System.DateTime)
extern "C" TimeSpan_t715  CurrentSystemTimeZone_GetUtcOffset_m12925 (CurrentSystemTimeZone_t2055 * __this, DateTime_t525  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::OnDeserialization(System.Globalization.DaylightTime)
extern "C" void CurrentSystemTimeZone_OnDeserialization_m12926 (CurrentSystemTimeZone_t2055 * __this, DaylightTime_t1577 * ___dlt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightTimeFromData(System.Int64[])
extern "C" DaylightTime_t1577 * CurrentSystemTimeZone_GetDaylightTimeFromData_m12927 (CurrentSystemTimeZone_t2055 * __this, Int64U5BU5D_t2092* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
