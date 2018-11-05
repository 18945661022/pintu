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

// Vuforia.SmartTerrainBuilderImpl
struct SmartTerrainBuilderImpl_t564;
// System.Collections.Generic.IEnumerable`1<Vuforia.ReconstructionAbstractBehaviour>
struct IEnumerable_1_t663;
// Vuforia.ReconstructionAbstractBehaviour
struct ReconstructionAbstractBehaviour_t37;
// Vuforia.Reconstruction
struct Reconstruction_t603;
// Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[]
struct SmartTerrainRevisionDataU5BU5D_t660;
// Vuforia.VuforiaManagerImpl/SurfaceData[]
struct SurfaceDataU5BU5D_t661;
// Vuforia.VuforiaManagerImpl/PropData[]
struct PropDataU5BU5D_t662;

#include "codegen/il2cpp-codegen.h"

// System.Boolean Vuforia.SmartTerrainBuilderImpl::Init()
extern "C" bool SmartTerrainBuilderImpl_Init_m2768 (SmartTerrainBuilderImpl_t564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::Deinit()
extern "C" bool SmartTerrainBuilderImpl_Deinit_m2769 (SmartTerrainBuilderImpl_t564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.ReconstructionAbstractBehaviour> Vuforia.SmartTerrainBuilderImpl::GetReconstructions()
extern "C" Object_t* SmartTerrainBuilderImpl_GetReconstructions_m2770 (SmartTerrainBuilderImpl_t564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::AddReconstruction(Vuforia.ReconstructionAbstractBehaviour)
extern "C" bool SmartTerrainBuilderImpl_AddReconstruction_m2771 (SmartTerrainBuilderImpl_t564 * __this, ReconstructionAbstractBehaviour_t37 * ___reconstructionBehaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::RemoveReconstruction(Vuforia.ReconstructionAbstractBehaviour)
extern "C" bool SmartTerrainBuilderImpl_RemoveReconstruction_m2772 (SmartTerrainBuilderImpl_t564 * __this, ReconstructionAbstractBehaviour_t37 * ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::DestroyReconstruction(Vuforia.Reconstruction)
extern "C" bool SmartTerrainBuilderImpl_DestroyReconstruction_m2773 (SmartTerrainBuilderImpl_t564 * __this, Object_t * ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainBuilderImpl::UpdateSmartTerrainData(Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[],Vuforia.VuforiaManagerImpl/SurfaceData[],Vuforia.VuforiaManagerImpl/PropData[])
extern "C" void SmartTerrainBuilderImpl_UpdateSmartTerrainData_m2774 (SmartTerrainBuilderImpl_t564 * __this, SmartTerrainRevisionDataU5BU5D_t660* ___smartTerrainRevisions, SurfaceDataU5BU5D_t661* ___updatedSurfaces, PropDataU5BU5D_t662* ___updatedProps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainBuilderImpl::.ctor()
extern "C" void SmartTerrainBuilderImpl__ctor_m2775 (SmartTerrainBuilderImpl_t564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
