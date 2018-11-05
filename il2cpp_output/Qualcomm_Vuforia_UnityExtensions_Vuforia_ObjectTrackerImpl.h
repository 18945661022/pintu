#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Vuforia.DataSetImpl>
struct List_1_t516;
// System.Collections.Generic.List`1<Vuforia.DataSet>
struct List_1_t517;
// Vuforia.ImageTargetBuilder
struct ImageTargetBuilder_t499;
// Vuforia.TargetFinder
struct TargetFinder_t518;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ObjectTracker.h"

// Vuforia.ObjectTrackerImpl
struct  ObjectTrackerImpl_t515  : public ObjectTracker_t139
{
	// System.Collections.Generic.List`1<Vuforia.DataSetImpl> Vuforia.ObjectTrackerImpl::mActiveDataSets
	List_1_t516 * ___mActiveDataSets_1;
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.ObjectTrackerImpl::mDataSets
	List_1_t517 * ___mDataSets_2;
	// Vuforia.ImageTargetBuilder Vuforia.ObjectTrackerImpl::mImageTargetBuilder
	ImageTargetBuilder_t499 * ___mImageTargetBuilder_3;
	// Vuforia.TargetFinder Vuforia.ObjectTrackerImpl::mTargetFinder
	TargetFinder_t518 * ___mTargetFinder_4;
};
