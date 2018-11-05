#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.DataSetImpl
struct DataSetImpl_t468;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableImpl.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Vuforia.ObjectTargetImpl
struct  ObjectTargetImpl_t467  : public TrackableImpl_t466
{
	// UnityEngine.Vector3 Vuforia.ObjectTargetImpl::mSize
	Vector3_t81  ___mSize_2;
	// Vuforia.DataSetImpl Vuforia.ObjectTargetImpl::mDataSet
	DataSetImpl_t468 * ___mDataSet_3;
};
