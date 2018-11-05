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

// System.Text.StringBuilder
struct StringBuilder_t381;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1005;
// System.Object
struct Object_t;
// System.Char[]
struct CharU5BU5D_t275;
// System.Object[]
struct ObjectU5BU5D_t110;
// System.IFormatProvider
struct IFormatProvider_t2089;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32,System.Int32,System.Int32)
extern "C" void StringBuilder__ctor_m11937 (StringBuilder_t381 * __this, String_t* ___value, int32_t ___startIndex, int32_t ___length, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void StringBuilder__ctor_m11938 (StringBuilder_t381 * __this, String_t* ___value, int32_t ___startIndex, int32_t ___length, int32_t ___capacity, int32_t ___maxCapacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor()
extern "C" void StringBuilder__ctor_m1627 (StringBuilder_t381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
extern "C" void StringBuilder__ctor_m4230 (StringBuilder_t381 * __this, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String)
extern "C" void StringBuilder__ctor_m1685 (StringBuilder_t381 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32)
extern "C" void StringBuilder__ctor_m7754 (StringBuilder_t381 * __this, String_t* ___value, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void StringBuilder__ctor_m11939 (StringBuilder_t381 * __this, SerializationInfo_t1005 * ___info, StreamingContext_t1006  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void StringBuilder_System_Runtime_Serialization_ISerializable_GetObjectData_m11940 (StringBuilder_t381 * __this, SerializationInfo_t1005 * ___info, StreamingContext_t1006  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.StringBuilder::get_Capacity()
extern "C" int32_t StringBuilder_get_Capacity_m11941 (StringBuilder_t381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Capacity(System.Int32)
extern "C" void StringBuilder_set_Capacity_m11942 (StringBuilder_t381 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.StringBuilder::get_Length()
extern "C" int32_t StringBuilder_get_Length_m6819 (StringBuilder_t381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
extern "C" void StringBuilder_set_Length_m7818 (StringBuilder_t381 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.StringBuilder::get_Chars(System.Int32)
extern "C" uint16_t StringBuilder_get_Chars_m11943 (StringBuilder_t381 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Chars(System.Int32,System.Char)
extern "C" void StringBuilder_set_Chars_m11944 (StringBuilder_t381 * __this, int32_t ___index, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.StringBuilder::ToString()
extern "C" String_t* StringBuilder_ToString_m1631 (StringBuilder_t381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.StringBuilder::ToString(System.Int32,System.Int32)
extern "C" String_t* StringBuilder_ToString_m11945 (StringBuilder_t381 * __this, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
extern "C" StringBuilder_t381 * StringBuilder_Remove_m11946 (StringBuilder_t381 * __this, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Replace(System.String,System.String)
extern "C" StringBuilder_t381 * StringBuilder_Replace_m11947 (StringBuilder_t381 * __this, String_t* ___oldValue, String_t* ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Replace(System.String,System.String,System.Int32,System.Int32)
extern "C" StringBuilder_t381 * StringBuilder_Replace_m11948 (StringBuilder_t381 * __this, String_t* ___oldValue, String_t* ___newValue, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C" StringBuilder_t381 * StringBuilder_Append_m5781 (StringBuilder_t381 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
extern "C" StringBuilder_t381 * StringBuilder_Append_m7782 (StringBuilder_t381 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int64)
extern "C" StringBuilder_t381 * StringBuilder_Append_m7766 (StringBuilder_t381 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
extern "C" StringBuilder_t381 * StringBuilder_Append_m7755 (StringBuilder_t381 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C" StringBuilder_t381 * StringBuilder_Append_m1919 (StringBuilder_t381 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char,System.Int32)
extern "C" StringBuilder_t381 * StringBuilder_Append_m11949 (StringBuilder_t381 * __this, uint16_t ___value, int32_t ___repeatCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char[],System.Int32,System.Int32)
extern "C" StringBuilder_t381 * StringBuilder_Append_m11950 (StringBuilder_t381 * __this, CharU5BU5D_t275* ___value, int32_t ___startIndex, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String,System.Int32,System.Int32)
extern "C" StringBuilder_t381 * StringBuilder_Append_m11951 (StringBuilder_t381 * __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine()
extern "C" StringBuilder_t381 * StringBuilder_AppendLine_m1630 (StringBuilder_t381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
extern "C" StringBuilder_t381 * StringBuilder_AppendLine_m1629 (StringBuilder_t381 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object[])
extern "C" StringBuilder_t381 * StringBuilder_AppendFormat_m6749 (StringBuilder_t381 * __this, String_t* ___format, ObjectU5BU5D_t110* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.IFormatProvider,System.String,System.Object[])
extern "C" StringBuilder_t381 * StringBuilder_AppendFormat_m11952 (StringBuilder_t381 * __this, Object_t * ___provider, String_t* ___format, ObjectU5BU5D_t110* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
extern "C" StringBuilder_t381 * StringBuilder_AppendFormat_m6748 (StringBuilder_t381 * __this, String_t* ___format, Object_t * ___arg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
extern "C" StringBuilder_t381 * StringBuilder_AppendFormat_m6747 (StringBuilder_t381 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object,System.Object)
extern "C" StringBuilder_t381 * StringBuilder_AppendFormat_m7791 (StringBuilder_t381 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.String)
extern "C" StringBuilder_t381 * StringBuilder_Insert_m11953 (StringBuilder_t381 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.Char)
extern "C" StringBuilder_t381 * StringBuilder_Insert_m11954 (StringBuilder_t381 * __this, int32_t ___index, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.String,System.Int32)
extern "C" StringBuilder_t381 * StringBuilder_Insert_m11955 (StringBuilder_t381 * __this, int32_t ___index, String_t* ___value, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::InternalEnsureCapacity(System.Int32)
extern "C" void StringBuilder_InternalEnsureCapacity_m11956 (StringBuilder_t381 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
