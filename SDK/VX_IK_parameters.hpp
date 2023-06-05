#pragma once

// Veiled Experts (idk bro) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IK.IK_C.AnimGraph
struct UIK_C_AnimGraph_Params
{
	struct FPoseLink                                   InPose;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   AnimGraph;                                                // (Parm, OutParm)
};

// Function IK.IK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_IK_AnimGraphNode_PDSequenceEvaluator_23C17D9A45E0095238AD268E062842B2
struct UIK_C_EvaluateGraphExposedInputs_ExecuteUbergraph_IK_AnimGraphNode_PDSequenceEvaluator_23C17D9A45E0095238AD268E062842B2_Params
{
};

// Function IK.IK_C.ExecuteUbergraph_IK
struct UIK_C_ExecuteUbergraph_IK_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
