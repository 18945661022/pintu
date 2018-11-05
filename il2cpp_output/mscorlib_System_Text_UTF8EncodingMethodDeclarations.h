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

// System.Text.UTF8Encoding
struct UTF8Encoding_t1967;
// System.Char[]
struct CharU5BU5D_t275;
// System.Byte[]
struct ByteU5BU5D_t73;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1946;
// System.Text.Decoder
struct Decoder_t1585;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.UTF8Encoding::.ctor()
extern "C" void UTF8Encoding__ctor_m12002 (UTF8Encoding_t1967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF8Encoding::.ctor(System.Boolean)
extern "C" void UTF8Encoding__ctor_m12003 (UTF8Encoding_t1967 * __this, bool ___encoderShouldEmitUTF8Identifier, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF8Encoding::.ctor(System.Boolean,System.Boolean)
extern "C" void UTF8Encoding__ctor_m12004 (UTF8Encoding_t1967 * __this, bool ___encoderShouldEmitUTF8Identifier, bool ___throwOnInvalidBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetByteCount(System.Char[],System.Int32,System.Int32,System.Char&,System.Boolean)
extern "C" int32_t UTF8Encoding_InternalGetByteCount_m12005 (Object_t * __this /* static, unused */, CharU5BU5D_t275* ___chars, int32_t ___index, int32_t ___count, uint16_t* ___leftOver, bool ___flush, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetByteCount(System.Char*,System.Int32,System.Char&,System.Boolean)
extern "C" int32_t UTF8Encoding_InternalGetByteCount_m12006 (Object_t * __this /* static, unused */, uint16_t* ___chars, int32_t ___count, uint16_t* ___leftOver, bool ___flush, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C" int32_t UTF8Encoding_GetByteCount_m12007 (UTF8Encoding_t1967 * __this, CharU5BU5D_t275* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetByteCount(System.Char*,System.Int32)
extern "C" int32_t UTF8Encoding_GetByteCount_m12008 (UTF8Encoding_t1967 * __this, uint16_t* ___chars, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Char&,System.Boolean)
extern "C" int32_t UTF8Encoding_InternalGetBytes_m12009 (Object_t * __this /* static, unused */, CharU5BU5D_t275* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t73* ___bytes, int32_t ___byteIndex, uint16_t* ___leftOver, bool ___flush, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetBytes(System.Char*,System.Int32,System.Byte*,System.Int32,System.Char&,System.Boolean)
extern "C" int32_t UTF8Encoding_InternalGetBytes_m12010 (Object_t * __this /* static, unused */, uint16_t* ___chars, int32_t ___count, uint8_t* ___bytes, int32_t ___bcount, uint16_t* ___leftOver, bool ___flush, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t UTF8Encoding_GetBytes_m12011 (UTF8Encoding_t1967 * __this, CharU5BU5D_t275* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t73* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t UTF8Encoding_GetBytes_m12012 (UTF8Encoding_t1967 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t73* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C" int32_t UTF8Encoding_GetBytes_m12013 (UTF8Encoding_t1967 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetCharCount(System.Byte[],System.Int32,System.Int32,System.UInt32,System.UInt32,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
extern "C" int32_t UTF8Encoding_InternalGetCharCount_m12014 (Object_t * __this /* static, unused */, ByteU5BU5D_t73* ___bytes, int32_t ___index, int32_t ___count, uint32_t ___leftOverBits, uint32_t ___leftOverCount, Object_t * ___provider, DecoderFallbackBuffer_t1946 ** ___fallbackBuffer, ByteU5BU5D_t73** ___bufferArg, bool ___flush, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetCharCount(System.Byte*,System.Int32,System.UInt32,System.UInt32,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
extern "C" int32_t UTF8Encoding_InternalGetCharCount_m12015 (Object_t * __this /* static, unused */, uint8_t* ___bytes, int32_t ___count, uint32_t ___leftOverBits, uint32_t ___leftOverCount, Object_t * ___provider, DecoderFallbackBuffer_t1946 ** ___fallbackBuffer, ByteU5BU5D_t73** ___bufferArg, bool ___flush, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::Fallback(System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Byte*,System.Int64,System.UInt32)
extern "C" int32_t UTF8Encoding_Fallback_m12016 (Object_t * __this /* static, unused */, Object_t * ___provider, DecoderFallbackBuffer_t1946 ** ___buffer, ByteU5BU5D_t73** ___bufferArg, uint8_t* ___bytes, int64_t ___index, uint32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF8Encoding::Fallback(System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Byte*,System.Int64,System.UInt32,System.Char*,System.Int32&)
extern "C" void UTF8Encoding_Fallback_m12017 (Object_t * __this /* static, unused */, Object_t * ___provider, DecoderFallbackBuffer_t1946 ** ___buffer, ByteU5BU5D_t73** ___bufferArg, uint8_t* ___bytes, int64_t ___byteIndex, uint32_t ___size, uint16_t* ___chars, int32_t* ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t UTF8Encoding_GetCharCount_m12018 (UTF8Encoding_t1967 * __this, ByteU5BU5D_t73* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.UInt32&,System.UInt32&,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
extern "C" int32_t UTF8Encoding_InternalGetChars_m12019 (Object_t * __this /* static, unused */, ByteU5BU5D_t73* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t275* ___chars, int32_t ___charIndex, uint32_t* ___leftOverBits, uint32_t* ___leftOverCount, Object_t * ___provider, DecoderFallbackBuffer_t1946 ** ___fallbackBuffer, ByteU5BU5D_t73** ___bufferArg, bool ___flush, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetChars(System.Byte*,System.Int32,System.Char*,System.Int32,System.UInt32&,System.UInt32&,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
extern "C" int32_t UTF8Encoding_InternalGetChars_m12020 (Object_t * __this /* static, unused */, uint8_t* ___bytes, int32_t ___byteCount, uint16_t* ___chars, int32_t ___charCount, uint32_t* ___leftOverBits, uint32_t* ___leftOverCount, Object_t * ___provider, DecoderFallbackBuffer_t1946 ** ___fallbackBuffer, ByteU5BU5D_t73** ___bufferArg, bool ___flush, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t UTF8Encoding_GetChars_m12021 (UTF8Encoding_t1967 * __this, ByteU5BU5D_t73* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t275* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetMaxByteCount(System.Int32)
extern "C" int32_t UTF8Encoding_GetMaxByteCount_m12022 (UTF8Encoding_t1967 * __this, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetMaxCharCount(System.Int32)
extern "C" int32_t UTF8Encoding_GetMaxCharCount_m12023 (UTF8Encoding_t1967 * __this, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.UTF8Encoding::GetDecoder()
extern "C" Decoder_t1585 * UTF8Encoding_GetDecoder_m12024 (UTF8Encoding_t1967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.UTF8Encoding::GetPreamble()
extern "C" ByteU5BU5D_t73* UTF8Encoding_GetPreamble_m12025 (UTF8Encoding_t1967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.UTF8Encoding::Equals(System.Object)
extern "C" bool UTF8Encoding_Equals_m12026 (UTF8Encoding_t1967 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetHashCode()
extern "C" int32_t UTF8Encoding_GetHashCode_m12027 (UTF8Encoding_t1967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetByteCount(System.String)
extern "C" int32_t UTF8Encoding_GetByteCount_m12028 (UTF8Encoding_t1967 * __this, String_t* ___chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.UTF8Encoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* UTF8Encoding_GetString_m12029 (UTF8Encoding_t1967 * __this, ByteU5BU5D_t73* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
