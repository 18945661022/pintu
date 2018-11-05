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

// Vuforia.WordResultImpl
struct WordResultImpl_t588;
// Vuforia.Word
struct Word_t589;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_OrientedBoundingBox.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour_.h"

// System.Void Vuforia.WordResultImpl::.ctor(Vuforia.Word)
extern "C" void WordResultImpl__ctor_m2837 (WordResultImpl_t588 * __this, Object_t * ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Word Vuforia.WordResultImpl::get_Word()
extern "C" Object_t * WordResultImpl_get_Word_m2838 (WordResultImpl_t588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.WordResultImpl::get_Position()
extern "C" Vector3_t81  WordResultImpl_get_Position_m2839 (WordResultImpl_t588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Vuforia.WordResultImpl::get_Orientation()
extern "C" Quaternion_t92  WordResultImpl_get_Orientation_m2840 (WordResultImpl_t588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.OrientedBoundingBox Vuforia.WordResultImpl::get_Obb()
extern "C" OrientedBoundingBox_t489  WordResultImpl_get_Obb_m2841 (WordResultImpl_t588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TrackableBehaviour/Status Vuforia.WordResultImpl::get_CurrentStatus()
extern "C" int32_t WordResultImpl_get_CurrentStatus_m2842 (WordResultImpl_t588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordResultImpl::SetPose(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" void WordResultImpl_SetPose_m2843 (WordResultImpl_t588 * __this, Vector3_t81  ___position, Quaternion_t92  ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordResultImpl::SetObb(Vuforia.OrientedBoundingBox)
extern "C" void WordResultImpl_SetObb_m2844 (WordResultImpl_t588 * __this, OrientedBoundingBox_t489  ___obb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordResultImpl::SetStatus(Vuforia.TrackableBehaviour/Status)
extern "C" void WordResultImpl_SetStatus_m2845 (WordResultImpl_t588 * __this, int32_t ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
