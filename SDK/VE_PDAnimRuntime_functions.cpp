// Veiled Experts (i dont know the version bro) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PDAnimRuntime.IKTargetGetter.K2_GetTarget
// (Event, Protected, HasOutParms, HasDefaults, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMesh                   (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FTransform              TargetTransform                (Parm, OutParm, IsPlainOldData)
// class USceneComponent*         TargetComponent                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIKTargetGetter::K2_GetTarget(class USkeletalMeshComponent* SkeletalMesh, struct FTransform* TargetTransform, class USceneComponent** TargetComponent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PDAnimRuntime.IKTargetGetter.K2_GetTarget");

	UIKTargetGetter_K2_GetTarget_Params params;
	params.SkeletalMesh = SkeletalMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetTransform != nullptr)
		*TargetTransform = params.TargetTransform;
	if (TargetComponent != nullptr)
		*TargetComponent = params.TargetComponent;

	return params.ReturnValue;
}


// Function PDAnimRuntime.IKTargetGetter.GetName
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UIKTargetGetter::GetName()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PDAnimRuntime.IKTargetGetter.GetName");

	UIKTargetGetter_GetName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
