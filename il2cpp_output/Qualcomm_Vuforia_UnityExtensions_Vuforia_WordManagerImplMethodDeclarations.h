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

// Vuforia.WordManagerImpl
struct WordManagerImpl_t580;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult>
struct IEnumerable_1_t664;
// System.Collections.Generic.IEnumerable`1<Vuforia.Word>
struct IEnumerable_1_t665;
// Vuforia.Word
struct Word_t589;
// Vuforia.WordAbstractBehaviour
struct WordAbstractBehaviour_t70;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordAbstractBehaviour>
struct IEnumerable_1_t666;
// UnityEngine.Transform
struct Transform_t51;
// Vuforia.VuforiaManagerImpl/WordData[]
struct WordDataU5BU5D_t549;
// Vuforia.VuforiaManagerImpl/WordResultData[]
struct WordResultDataU5BU5D_t550;
// System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordData>
struct IEnumerable_1_t667;
// System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordResultData>
struct IEnumerable_1_t668;
// Vuforia.WordResult
struct WordResult_t587;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WordPrefabCreationM.h"

// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult> Vuforia.WordManagerImpl::GetActiveWordResults()
extern "C" Object_t* WordManagerImpl_GetActiveWordResults_m2814 (WordManagerImpl_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult> Vuforia.WordManagerImpl::GetNewWords()
extern "C" Object_t* WordManagerImpl_GetNewWords_m2815 (WordManagerImpl_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Word> Vuforia.WordManagerImpl::GetLostWords()
extern "C" Object_t* WordManagerImpl_GetLostWords_m2816 (WordManagerImpl_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordManagerImpl::TryGetWordBehaviour(Vuforia.Word,Vuforia.WordAbstractBehaviour&)
extern "C" bool WordManagerImpl_TryGetWordBehaviour_m2817 (WordManagerImpl_t580 * __this, Object_t * ___word, WordAbstractBehaviour_t70 ** ___behaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordAbstractBehaviour> Vuforia.WordManagerImpl::GetTrackableBehaviours()
extern "C" Object_t* WordManagerImpl_GetTrackableBehaviours_m2818 (WordManagerImpl_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::DestroyWordBehaviour(Vuforia.WordAbstractBehaviour,System.Boolean)
extern "C" void WordManagerImpl_DestroyWordBehaviour_m2819 (WordManagerImpl_t580 * __this, WordAbstractBehaviour_t70 * ___behaviour, bool ___destroyGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::InitializeWordBehaviourTemplates(Vuforia.WordPrefabCreationMode,System.Int32)
extern "C" void WordManagerImpl_InitializeWordBehaviourTemplates_m2820 (WordManagerImpl_t580 * __this, int32_t ___wordPrefabCreationMode, int32_t ___maxInstances, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::InitializeWordBehaviourTemplates()
extern "C" void WordManagerImpl_InitializeWordBehaviourTemplates_m2821 (WordManagerImpl_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::RemoveDestroyedTrackables()
extern "C" void WordManagerImpl_RemoveDestroyedTrackables_m2822 (WordManagerImpl_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWords(UnityEngine.Transform,Vuforia.VuforiaManagerImpl/WordData[],Vuforia.VuforiaManagerImpl/WordResultData[])
extern "C" void WordManagerImpl_UpdateWords_m2823 (WordManagerImpl_t580 * __this, Transform_t51 * ___arCameraTransform, WordDataU5BU5D_t549* ___newWordData, WordResultDataU5BU5D_t550* ___wordResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::SetWordBehavioursToNotFound()
extern "C" void WordManagerImpl_SetWordBehavioursToNotFound_m2824 (WordManagerImpl_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::CleanupWordBehaviours()
extern "C" void WordManagerImpl_CleanupWordBehaviours_m2825 (WordManagerImpl_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWords(System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordData>,System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordResultData>)
extern "C" void WordManagerImpl_UpdateWords_m2826 (WordManagerImpl_t580 * __this, Object_t* ___newWordData, Object_t* ___wordResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWordResultPoses(UnityEngine.Transform,System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordResultData>)
extern "C" void WordManagerImpl_UpdateWordResultPoses_m2827 (WordManagerImpl_t580 * __this, Transform_t51 * ___arCameraTransform, Object_t* ___wordResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::AssociateWordResultsWithBehaviours()
extern "C" void WordManagerImpl_AssociateWordResultsWithBehaviours_m2828 (WordManagerImpl_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UnregisterLostWords()
extern "C" void WordManagerImpl_UnregisterLostWords_m2829 (WordManagerImpl_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWordBehaviourPoses()
extern "C" void WordManagerImpl_UpdateWordBehaviourPoses_m2830 (WordManagerImpl_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::AssociateWordBehaviour(Vuforia.WordResult)
extern "C" WordAbstractBehaviour_t70 * WordManagerImpl_AssociateWordBehaviour_m2831 (WordManagerImpl_t580 * __this, WordResult_t587 * ___wordResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::AssociateWordBehaviour(Vuforia.WordResult,Vuforia.WordAbstractBehaviour)
extern "C" WordAbstractBehaviour_t70 * WordManagerImpl_AssociateWordBehaviour_m2832 (WordManagerImpl_t580 * __this, WordResult_t587 * ___wordResult, WordAbstractBehaviour_t70 * ___wordBehaviourTemplate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::InstantiateWordBehaviour(Vuforia.WordAbstractBehaviour)
extern "C" WordAbstractBehaviour_t70 * WordManagerImpl_InstantiateWordBehaviour_m2833 (Object_t * __this /* static, unused */, WordAbstractBehaviour_t70 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::CreateWordBehaviour()
extern "C" WordAbstractBehaviour_t70 * WordManagerImpl_CreateWordBehaviour_m2834 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::.ctor()
extern "C" void WordManagerImpl__ctor_m2835 (WordManagerImpl_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
