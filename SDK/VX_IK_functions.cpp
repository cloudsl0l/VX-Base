// Veiled Experts (idk bro) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IK.IK_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               InPose                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UIK_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function IK.IK_C.AnimGraph");

	UIK_C_AnimGraph_Params params;
	params.InPose = InPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function IK.IK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_IK_AnimGraphNode_PDSequenceEvaluator_23C17D9A45E0095238AD268E062842B2
// (BlueprintEvent)

void UIK_C::EvaluateGraphExposedInputs_ExecuteUbergraph_IK_AnimGraphNode_PDSequenceEvaluator_23C17D9A45E0095238AD268E062842B2()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function IK.IK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_IK_AnimGraphNode_PDSequenceEvaluator_23C17D9A45E0095238AD268E062842B2");

	UIK_C_EvaluateGraphExposedInputs_ExecuteUbergraph_IK_AnimGraphNode_PDSequenceEvaluator_23C17D9A45E0095238AD268E062842B2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IK.IK_C.ExecuteUbergraph_IK
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIK_C::ExecuteUbergraph_IK(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function IK.IK_C.ExecuteUbergraph_IK");

	UIK_C_ExecuteUbergraph_IK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
