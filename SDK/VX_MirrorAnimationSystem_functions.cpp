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

// Function MirrorAnimationSystem.ExtCharacter.SetRootMotionMirrorAndFlipAxis
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EAxis>             MirrorAxis                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAxis>             FlipAxis                       (Parm, ZeroConstructor, IsPlainOldData)

void AExtCharacter::SetRootMotionMirrorAndFlipAxis(TEnumAsByte<EAxis> MirrorAxis, TEnumAsByte<EAxis> FlipAxis)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MirrorAnimationSystem.ExtCharacter.SetRootMotionMirrorAndFlipAxis");

	AExtCharacter_SetRootMotionMirrorAndFlipAxis_Params params;
	params.MirrorAxis = MirrorAxis;
	params.FlipAxis = FlipAxis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MirrorAnimationSystem.ExtCharacter.SetMirrorRootMotion
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           Mirror                         (Parm, ZeroConstructor, IsPlainOldData)

void AExtCharacter::SetMirrorRootMotion(bool Mirror)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MirrorAnimationSystem.ExtCharacter.SetMirrorRootMotion");

	AExtCharacter_SetMirrorRootMotion_Params params;
	params.Mirror = Mirror;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MirrorAnimationSystem.ExtCharacter.GetRootMotionMirrorAndFlipAxis
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EAxis>             MirrorAxis                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAxis>             FlipAxis                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AExtCharacter::GetRootMotionMirrorAndFlipAxis(TEnumAsByte<EAxis>* MirrorAxis, TEnumAsByte<EAxis>* FlipAxis)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MirrorAnimationSystem.ExtCharacter.GetRootMotionMirrorAndFlipAxis");

	AExtCharacter_GetRootMotionMirrorAndFlipAxis_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MirrorAxis != nullptr)
		*MirrorAxis = params.MirrorAxis;
	if (FlipAxis != nullptr)
		*FlipAxis = params.FlipAxis;
}


// Function MirrorAnimationSystem.ExtCharacter.GetMirrorRootMotion
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AExtCharacter::GetMirrorRootMotion()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MirrorAnimationSystem.ExtCharacter.GetMirrorRootMotion");

	AExtCharacter_GetMirrorRootMotion_Params params;

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
