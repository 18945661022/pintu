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

// Vuforia.ImageTargetImpl
struct ImageTargetImpl_t512;
// System.String
struct String_t;
// Vuforia.DataSet
struct DataSet_t485;
// Vuforia.VirtualButton
struct VirtualButton_t623;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton>
struct IEnumerable_1_t655;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ImageTargetType.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_RectangleData.h"

// System.Void Vuforia.ImageTargetImpl::.ctor(System.String,System.Int32,Vuforia.ImageTargetType,Vuforia.DataSet)
extern "C" void ImageTargetImpl__ctor_m2620 (ImageTargetImpl_t512 * __this, String_t* ___name, int32_t ___id, int32_t ___imageTargetType, DataSet_t485 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetType Vuforia.ImageTargetImpl::get_ImageTargetType()
extern "C" int32_t ImageTargetImpl_get_ImageTargetType_m2621 (ImageTargetImpl_t512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.ImageTargetImpl::CreateVirtualButton(System.String,Vuforia.RectangleData)
extern "C" VirtualButton_t623 * ImageTargetImpl_CreateVirtualButton_m2622 (ImageTargetImpl_t512 * __this, String_t* ___name, RectangleData_t487  ___area, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.ImageTargetImpl::GetVirtualButtonByName(System.String)
extern "C" VirtualButton_t623 * ImageTargetImpl_GetVirtualButtonByName_m2623 (ImageTargetImpl_t512 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton> Vuforia.ImageTargetImpl::GetVirtualButtons()
extern "C" Object_t* ImageTargetImpl_GetVirtualButtons_m2624 (ImageTargetImpl_t512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetImpl::DestroyVirtualButton(Vuforia.VirtualButton)
extern "C" bool ImageTargetImpl_DestroyVirtualButton_m2625 (ImageTargetImpl_t512 * __this, VirtualButton_t623 * ___vb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.ImageTargetImpl::CreateNewVirtualButtonInNative(System.String,Vuforia.RectangleData)
extern "C" VirtualButton_t623 * ImageTargetImpl_CreateNewVirtualButtonInNative_m2626 (ImageTargetImpl_t512 * __this, String_t* ___name, RectangleData_t487  ___rectangleData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetImpl::UnregisterVirtualButtonInNative(Vuforia.VirtualButton)
extern "C" bool ImageTargetImpl_UnregisterVirtualButtonInNative_m2627 (ImageTargetImpl_t512 * __this, VirtualButton_t623 * ___vb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetImpl::CreateVirtualButtonsFromNative()
extern "C" void ImageTargetImpl_CreateVirtualButtonsFromNative_m2628 (ImageTargetImpl_t512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
