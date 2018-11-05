#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.String>
struct List_1_t486;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Vuforia.DatabaseLoadAbstractBehaviour
struct  DatabaseLoadAbstractBehaviour_t8  : public MonoBehaviour_t10
{
	// System.Boolean Vuforia.DatabaseLoadAbstractBehaviour::mDatasetsLoaded
	bool ___mDatasetsLoaded_1;
	// System.Collections.Generic.List`1<System.String> Vuforia.DatabaseLoadAbstractBehaviour::mDataSetsToLoad
	List_1_t486 * ___mDataSetsToLoad_2;
	// System.Collections.Generic.List`1<System.String> Vuforia.DatabaseLoadAbstractBehaviour::mDataSetsToActivate
	List_1_t486 * ___mDataSetsToActivate_3;
	// System.Collections.Generic.List`1<System.String> Vuforia.DatabaseLoadAbstractBehaviour::mExternalDatasetRoots
	List_1_t486 * ___mExternalDatasetRoots_4;
};
