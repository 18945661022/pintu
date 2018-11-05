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

// UnityEngine.Terrain
struct Terrain_t908;
// UnityEngine.TerrainData
struct TerrainData_t905;
// UnityEngine.Material
struct Material_t66;
// UnityEngine.Terrain[]
struct TerrainU5BU5D_t1011;
// UnityEngine.GameObject
struct GameObject_t83;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_TerrainRenderFlags.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_TreeInstance.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_TerrainChangedFlags.h"

// System.Void UnityEngine.Terrain::.ctor()
extern "C" void Terrain__ctor_m4936 (Terrain_t908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.Terrain::get_InstanceObject()
extern "C" IntPtr_t Terrain_get_InstanceObject_m4937 (Terrain_t908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_InstanceObject(System.IntPtr)
extern "C" void Terrain_set_InstanceObject_m4938 (Terrain_t908 * __this, IntPtr_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::OnDestroy()
extern "C" void Terrain_OnDestroy_m4939 (Terrain_t908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::MakeSureObjectIsAlive()
extern "C" void Terrain_MakeSureObjectIsAlive_m4940 (Terrain_t908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Cleanup(System.IntPtr)
extern "C" void Terrain_Cleanup_m4941 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TerrainRenderFlags UnityEngine.Terrain::get_editorRenderFlags()
extern "C" int32_t Terrain_get_editorRenderFlags_m4942 (Terrain_t908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_editorRenderFlags(UnityEngine.TerrainRenderFlags)
extern "C" void Terrain_set_editorRenderFlags_m4943 (Terrain_t908 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::GetEditorRenderFlags(System.IntPtr)
extern "C" int32_t Terrain_GetEditorRenderFlags_m4944 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::SetEditorRenderFlags(System.IntPtr,System.Int32)
extern "C" void Terrain_SetEditorRenderFlags_m4945 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TerrainData UnityEngine.Terrain::get_terrainData()
extern "C" TerrainData_t905 * Terrain_get_terrainData_m4946 (Terrain_t908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_terrainData(UnityEngine.TerrainData)
extern "C" void Terrain_set_terrainData_m4947 (Terrain_t908 * __this, TerrainData_t905 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TerrainData UnityEngine.Terrain::Internal_GetTerrainData(System.IntPtr)
extern "C" TerrainData_t905 * Terrain_Internal_GetTerrainData_m4948 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetTerrainData(System.IntPtr,UnityEngine.TerrainData)
extern "C" void Terrain_Internal_SetTerrainData_m4949 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, TerrainData_t905 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_treeDistance()
extern "C" float Terrain_get_treeDistance_m4950 (Terrain_t908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_treeDistance(System.Single)
extern "C" void Terrain_set_treeDistance_m4951 (Terrain_t908 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_GetTreeDistance(System.IntPtr)
extern "C" float Terrain_Internal_GetTreeDistance_m4952 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetTreeDistance(System.IntPtr,System.Single)
extern "C" void Terrain_Internal_SetTreeDistance_m4953 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_treeBillboardDistance()
extern "C" float Terrain_get_treeBillboardDistance_m4954 (Terrain_t908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_treeBillboardDistance(System.Single)
extern "C" void Terrain_set_treeBillboardDistance_m4955 (Terrain_t908 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_GetTreeBillboardDistance(System.IntPtr)
extern "C" float Terrain_Internal_GetTreeBillboardDistance_m4956 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetTreeBillboardDistance(System.IntPtr,System.Single)
extern "C" void Terrain_Internal_SetTreeBillboardDistance_m4957 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_treeCrossFadeLength()
extern "C" float Terrain_get_treeCrossFadeLength_m4958 (Terrain_t908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_treeCrossFadeLength(System.Single)
extern "C" void Terrain_set_treeCrossFadeLength_m4959 (Terrain_t908 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_GetTreeCrossFadeLength(System.IntPtr)
extern "C" float Terrain_Internal_GetTreeCrossFadeLength_m4960 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetTreeCrossFadeLength(System.IntPtr,System.Single)
extern "C" void Terrain_Internal_SetTreeCrossFadeLength_m4961 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::get_treeMaximumFullLODCount()
extern "C" int32_t Terrain_get_treeMaximumFullLODCount_m4962 (Terrain_t908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_treeMaximumFullLODCount(System.Int32)
extern "C" void Terrain_set_treeMaximumFullLODCount_m4963 (Terrain_t908 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::Internal_GetTreeMaximumFullLODCount(System.IntPtr)
extern "C" int32_t Terrain_Internal_GetTreeMaximumFullLODCount_m4964 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetTreeMaximumFullLODCount(System.IntPtr,System.Int32)
extern "C" void Terrain_Internal_SetTreeMaximumFullLODCount_m4965 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_detailObjectDistance()
extern "C" float Terrain_get_detailObjectDistance_m4966 (Terrain_t908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_detailObjectDistance(System.Single)
extern "C" void Terrain_set_detailObjectDistance_m4967 (Terrain_t908 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_GetDetailObjectDistance(System.IntPtr)
extern "C" float Terrain_Internal_GetDetailObjectDistance_m4968 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetDetailObjectDistance(System.IntPtr,System.Single)
extern "C" void Terrain_Internal_SetDetailObjectDistance_m4969 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_detailObjectDensity()
extern "C" float Terrain_get_detailObjectDensity_m4970 (Terrain_t908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_detailObjectDensity(System.Single)
extern "C" void Terrain_set_detailObjectDensity_m4971 (Terrain_t908 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_GetDetailObjectDensity(System.IntPtr)
extern "C" float Terrain_Internal_GetDetailObjectDensity_m4972 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetDetailObjectDensity(System.IntPtr,System.Single)
extern "C" void Terrain_Internal_SetDetailObjectDensity_m4973 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_heightmapPixelError()
extern "C" float Terrain_get_heightmapPixelError_m4974 (Terrain_t908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_heightmapPixelError(System.Single)
extern "C" void Terrain_set_heightmapPixelError_m4975 (Terrain_t908 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_GetHeightmapPixelError(System.IntPtr)
extern "C" float Terrain_Internal_GetHeightmapPixelError_m4976 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetHeightmapPixelError(System.IntPtr,System.Single)
extern "C" void Terrain_Internal_SetHeightmapPixelError_m4977 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::get_heightmapMaximumLOD()
extern "C" int32_t Terrain_get_heightmapMaximumLOD_m4978 (Terrain_t908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_heightmapMaximumLOD(System.Int32)
extern "C" void Terrain_set_heightmapMaximumLOD_m4979 (Terrain_t908 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::Internal_GetHeightmapMaximumLOD(System.IntPtr)
extern "C" int32_t Terrain_Internal_GetHeightmapMaximumLOD_m4980 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetHeightmapMaximumLOD(System.IntPtr,System.Int32)
extern "C" void Terrain_Internal_SetHeightmapMaximumLOD_m4981 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_basemapDistance()
extern "C" float Terrain_get_basemapDistance_m4982 (Terrain_t908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_basemapDistance(System.Single)
extern "C" void Terrain_set_basemapDistance_m4983 (Terrain_t908 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_GetBasemapDistance(System.IntPtr)
extern "C" float Terrain_Internal_GetBasemapDistance_m4984 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetBasemapDistance(System.IntPtr,System.Single)
extern "C" void Terrain_Internal_SetBasemapDistance_m4985 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_splatmapDistance()
extern "C" float Terrain_get_splatmapDistance_m4986 (Terrain_t908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_splatmapDistance(System.Single)
extern "C" void Terrain_set_splatmapDistance_m4987 (Terrain_t908 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::get_lightmapIndex()
extern "C" int32_t Terrain_get_lightmapIndex_m4988 (Terrain_t908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_lightmapIndex(System.Int32)
extern "C" void Terrain_set_lightmapIndex_m4989 (Terrain_t908 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::SetLightmapIndex(System.Int32)
extern "C" void Terrain_SetLightmapIndex_m4990 (Terrain_t908 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::ShiftLightmapIndex(System.Int32)
extern "C" void Terrain_ShiftLightmapIndex_m4991 (Terrain_t908 * __this, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::Internal_GetLightmapIndex(System.IntPtr)
extern "C" int32_t Terrain_Internal_GetLightmapIndex_m4992 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetLightmapIndex(System.IntPtr,System.Int32)
extern "C" void Terrain_Internal_SetLightmapIndex_m4993 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::get_lightmapSize()
extern "C" int32_t Terrain_get_lightmapSize_m4994 (Terrain_t908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_lightmapSize(System.Int32)
extern "C" void Terrain_set_lightmapSize_m4995 (Terrain_t908 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::Internal_GetLightmapSize(System.IntPtr)
extern "C" int32_t Terrain_Internal_GetLightmapSize_m4996 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetLightmapSize(System.IntPtr,System.Int32)
extern "C" void Terrain_Internal_SetLightmapSize_m4997 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Terrain::get_castShadows()
extern "C" bool Terrain_get_castShadows_m4998 (Terrain_t908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_castShadows(System.Boolean)
extern "C" void Terrain_set_castShadows_m4999 (Terrain_t908 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Terrain::Internal_GetCastShadows(System.IntPtr)
extern "C" bool Terrain_Internal_GetCastShadows_m5000 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetCastShadows(System.IntPtr,System.Boolean)
extern "C" void Terrain_Internal_SetCastShadows_m5001 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Terrain::get_materialTemplate()
extern "C" Material_t66 * Terrain_get_materialTemplate_m5002 (Terrain_t908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_materialTemplate(UnityEngine.Material)
extern "C" void Terrain_set_materialTemplate_m5003 (Terrain_t908 * __this, Material_t66 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Terrain::Internal_GetMaterialTemplate(System.IntPtr)
extern "C" Material_t66 * Terrain_Internal_GetMaterialTemplate_m5004 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetMaterialTemplate(System.IntPtr,UnityEngine.Material)
extern "C" void Terrain_Internal_SetMaterialTemplate_m5005 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, Material_t66 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Terrain::get_drawTreesAndFoliage()
extern "C" bool Terrain_get_drawTreesAndFoliage_m5006 (Terrain_t908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_drawTreesAndFoliage(System.Boolean)
extern "C" void Terrain_set_drawTreesAndFoliage_m5007 (Terrain_t908 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Terrain::Internal_GetDrawTreesAndFoliage(System.IntPtr)
extern "C" bool Terrain_Internal_GetDrawTreesAndFoliage_m5008 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetDrawTreesAndFoliage(System.IntPtr,System.Boolean)
extern "C" void Terrain_Internal_SetDrawTreesAndFoliage_m5009 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Terrain::get_collectDetailPatches()
extern "C" bool Terrain_get_collectDetailPatches_m5010 (Terrain_t908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_collectDetailPatches(System.Boolean)
extern "C" void Terrain_set_collectDetailPatches_m5011 (Terrain_t908 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Terrain::Internal_GetCollectDetailPatches(System.IntPtr)
extern "C" bool Terrain_Internal_GetCollectDetailPatches_m5012 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetCollectDetailPatches(System.IntPtr,System.Boolean)
extern "C" void Terrain_Internal_SetCollectDetailPatches_m5013 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::SampleHeight(UnityEngine.Vector3)
extern "C" float Terrain_SampleHeight_m5014 (Terrain_t908 * __this, Vector3_t81  ___worldPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_SampleHeight(System.IntPtr,UnityEngine.Vector3)
extern "C" float Terrain_Internal_SampleHeight_m5015 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, Vector3_t81  ___worldPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::INTERNAL_CALL_Internal_SampleHeight(UnityEngine.Terrain,System.IntPtr,UnityEngine.Vector3&)
extern "C" float Terrain_INTERNAL_CALL_Internal_SampleHeight_m5016 (Object_t * __this /* static, unused */, Terrain_t908 * ___self, IntPtr_t ___terrainInstance, Vector3_t81 * ___worldPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::ApplyDelayedHeightmapModification()
extern "C" void Terrain_ApplyDelayedHeightmapModification_m5017 (Terrain_t908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_ApplyDelayedHeightmapModification(System.IntPtr)
extern "C" void Terrain_Internal_ApplyDelayedHeightmapModification_m5018 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::AddTreeInstance(UnityEngine.TreeInstance)
extern "C" void Terrain_AddTreeInstance_m5019 (Terrain_t908 * __this, TreeInstance_t904  ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_AddTreeInstance(System.IntPtr,UnityEngine.TreeInstance)
extern "C" void Terrain_Internal_AddTreeInstance_m5020 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, TreeInstance_t904  ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::INTERNAL_CALL_Internal_AddTreeInstance(UnityEngine.Terrain,System.IntPtr,UnityEngine.TreeInstance&)
extern "C" void Terrain_INTERNAL_CALL_Internal_AddTreeInstance_m5021 (Object_t * __this /* static, unused */, Terrain_t908 * ___self, IntPtr_t ___terrainInstance, TreeInstance_t904 * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::SetNeighbors(UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain)
extern "C" void Terrain_SetNeighbors_m5022 (Terrain_t908 * __this, Terrain_t908 * ___left, Terrain_t908 * ___top, Terrain_t908 * ___right, Terrain_t908 * ___bottom, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetNeighbors(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" void Terrain_Internal_SetNeighbors_m5023 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, IntPtr_t ___left, IntPtr_t ___top, IntPtr_t ___right, IntPtr_t ___bottom, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Terrain::GetPosition()
extern "C" Vector3_t81  Terrain_GetPosition_m5024 (Terrain_t908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Terrain::Internal_GetPosition(System.IntPtr)
extern "C" Vector3_t81  Terrain_Internal_GetPosition_m5025 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Flush()
extern "C" void Terrain_Flush_m5026 (Terrain_t908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_Flush(System.IntPtr)
extern "C" void Terrain_Internal_Flush_m5027 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::RemoveTrees(UnityEngine.Vector2,System.Single,System.Int32)
extern "C" void Terrain_RemoveTrees_m5028 (Terrain_t908 * __this, Vector2_t141  ___position, float ___radius, int32_t ___prototypeIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_RemoveTrees(System.IntPtr,UnityEngine.Vector2,System.Single,System.Int32)
extern "C" void Terrain_Internal_RemoveTrees_m5029 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, Vector2_t141  ___position, float ___radius, int32_t ___prototypeIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::INTERNAL_CALL_Internal_RemoveTrees(UnityEngine.Terrain,System.IntPtr,UnityEngine.Vector2&,System.Single,System.Int32)
extern "C" void Terrain_INTERNAL_CALL_Internal_RemoveTrees_m5030 (Object_t * __this /* static, unused */, Terrain_t908 * ___self, IntPtr_t ___terrainInstance, Vector2_t141 * ___position, float ___radius, int32_t ___prototypeIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::OnTerrainChanged(UnityEngine.TerrainChangedFlags)
extern "C" void Terrain_OnTerrainChanged_m5031 (Terrain_t908 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_OnTerrainChanged(System.IntPtr,UnityEngine.TerrainChangedFlags)
extern "C" void Terrain_Internal_OnTerrainChanged_m5032 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.Terrain::Construct()
extern "C" IntPtr_t Terrain_Construct_m5033 (Terrain_t908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::OnEnable()
extern "C" void Terrain_OnEnable_m5034 (Terrain_t908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_OnEnable(System.IntPtr)
extern "C" void Terrain_Internal_OnEnable_m5035 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::OnDisable()
extern "C" void Terrain_OnDisable_m5036 (Terrain_t908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_OnDisable(System.IntPtr)
extern "C" void Terrain_Internal_OnDisable_m5037 (Terrain_t908 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Terrain UnityEngine.Terrain::get_activeTerrain()
extern "C" Terrain_t908 * Terrain_get_activeTerrain_m5038 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Terrain[] UnityEngine.Terrain::get_activeTerrains()
extern "C" TerrainU5BU5D_t1011* Terrain_get_activeTerrains_m5039 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Terrain::CreateTerrainGameObject(UnityEngine.TerrainData)
extern "C" GameObject_t83 * Terrain_CreateTerrainGameObject_m5040 (Object_t * __this /* static, unused */, TerrainData_t905 * ___assignTerrain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::ReconnectTerrainData()
extern "C" void Terrain_ReconnectTerrainData_m5041 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
