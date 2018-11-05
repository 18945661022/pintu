﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Xml.SmallXmlParser/IContentHandler
struct IContentHandler_t1533;
// System.IO.TextReader
struct TextReader_t1532;
// System.Collections.Stack
struct Stack_t880;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t381;
// System.Char[]
struct CharU5BU5D_t275;
// Mono.Xml.SmallXmlParser/AttrListImpl
struct AttrListImpl_t1531;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t974;

#include "mscorlib_System_Object.h"

// Mono.Xml.SmallXmlParser
struct  SmallXmlParser_t1529  : public Object_t
{
	// Mono.Xml.SmallXmlParser/IContentHandler Mono.Xml.SmallXmlParser::handler
	Object_t * ___handler_0;
	// System.IO.TextReader Mono.Xml.SmallXmlParser::reader
	TextReader_t1532 * ___reader_1;
	// System.Collections.Stack Mono.Xml.SmallXmlParser::elementNames
	Stack_t880 * ___elementNames_2;
	// System.Collections.Stack Mono.Xml.SmallXmlParser::xmlSpaces
	Stack_t880 * ___xmlSpaces_3;
	// System.String Mono.Xml.SmallXmlParser::xmlSpace
	String_t* ___xmlSpace_4;
	// System.Text.StringBuilder Mono.Xml.SmallXmlParser::buffer
	StringBuilder_t381 * ___buffer_5;
	// System.Char[] Mono.Xml.SmallXmlParser::nameBuffer
	CharU5BU5D_t275* ___nameBuffer_6;
	// System.Boolean Mono.Xml.SmallXmlParser::isWhitespace
	bool ___isWhitespace_7;
	// Mono.Xml.SmallXmlParser/AttrListImpl Mono.Xml.SmallXmlParser::attributes
	AttrListImpl_t1531 * ___attributes_8;
	// System.Int32 Mono.Xml.SmallXmlParser::line
	int32_t ___line_9;
	// System.Int32 Mono.Xml.SmallXmlParser::column
	int32_t ___column_10;
	// System.Boolean Mono.Xml.SmallXmlParser::resetColumn
	bool ___resetColumn_11;
};
struct SmallXmlParser_t1529_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.SmallXmlParser::<>f__switch$map18
	Dictionary_2_t974 * ___U3CU3Ef__switchU24map18_12;
};