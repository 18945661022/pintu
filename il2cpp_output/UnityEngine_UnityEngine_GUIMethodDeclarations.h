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

// UnityEngine.GUISkin
struct GUISkin_t143;
// System.String
struct String_t;
// UnityEngine.GUIContent
struct GUIContent_t413;
// UnityEngine.GUIStyle
struct GUIStyle_t142;
// UnityEngine.Texture
struct Texture_t77;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t98;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_FocusType.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C" void GUI__cctor_m5207 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C" void GUI_set_nextScrollStepTime_m5208 (Object_t * __this /* static, unused */, DateTime_t525  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C" void GUI_set_skin_m5209 (Object_t * __this /* static, unused */, GUISkin_t143 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" GUISkin_t143 * GUI_get_skin_m397 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_backgroundColor(UnityEngine.Color)
extern "C" void GUI_set_backgroundColor_m371 (Object_t * __this /* static, unused */, Color_t67  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_set_backgroundColor(UnityEngine.Color&)
extern "C" void GUI_INTERNAL_set_backgroundColor_m5210 (Object_t * __this /* static, unused */, Color_t67 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" void GUI_set_changed_m5211 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
extern "C" void GUI_Label_m205 (Object_t * __this /* static, unused */, Rect_t54  ___position, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Label_m5212 (Object_t * __this /* static, unused */, Rect_t54  ___position, GUIContent_t413 * ___content, GUIStyle_t142 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_DoLabel_m5213 (Object_t * __this /* static, unused */, Rect_t54  ___position, GUIContent_t413 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_INTERNAL_CALL_DoLabel_m5214 (Object_t * __this /* static, unused */, Rect_t54 * ___position, GUIContent_t413 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Box_m5215 (Object_t * __this /* static, unused */, Rect_t54  ___position, GUIContent_t413 * ___content, GUIStyle_t142 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
extern "C" bool GUI_Button_m206 (Object_t * __this /* static, unused */, Rect_t54  ___position, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.Texture)
extern "C" bool GUI_Button_m372 (Object_t * __this /* static, unused */, Rect_t54  ___position, Texture_t77 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" bool GUI_Button_m5216 (Object_t * __this /* static, unused */, Rect_t54  ___position, GUIContent_t413 * ___content, GUIStyle_t142 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_DoButton_m5217 (Object_t * __this /* static, unused */, Rect_t54  ___position, GUIContent_t413 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_INTERNAL_CALL_DoButton_m5218 (Object_t * __this /* static, unused */, Rect_t54 * ___position, GUIContent_t413 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::RepeatButton(UnityEngine.Rect,UnityEngine.Texture)
extern "C" bool GUI_RepeatButton_m373 (Object_t * __this /* static, unused */, Rect_t54  ___position, Texture_t77 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::RepeatButton(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C" bool GUI_RepeatButton_m402 (Object_t * __this /* static, unused */, Rect_t54  ___position, String_t* ___text, GUIStyle_t142 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoRepeatButton(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.FocusType)
extern "C" bool GUI_DoRepeatButton_m5219 (Object_t * __this /* static, unused */, Rect_t54  ___position, GUIContent_t413 * ___content, GUIStyle_t142 * ___style, int32_t ___focusType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
extern "C" Rect_t54  GUI_Window_m203 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t54  ___clientRect, WindowFunction_t98 * ___func, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" void GUI_CallWindowDelegate_m5220 (Object_t * __this /* static, unused */, WindowFunction_t98 * ___func, int32_t ___id, GUISkin_t143 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t142 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::DoWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean)
extern "C" Rect_t54  GUI_DoWindow_m5221 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t54  ___clientRect, WindowFunction_t98 * ___func, GUIContent_t413 * ___title, GUIStyle_t142 * ___style, GUISkin_t143 * ___skin, bool ___forceRectOnLayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::INTERNAL_CALL_DoWindow(System.Int32,UnityEngine.Rect&,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean)
extern "C" Rect_t54  GUI_INTERNAL_CALL_DoWindow_m5222 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t54 * ___clientRect, WindowFunction_t98 * ___func, GUIContent_t413 * ___title, GUIStyle_t142 * ___style, GUISkin_t143 * ___skin, bool ___forceRectOnLayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
