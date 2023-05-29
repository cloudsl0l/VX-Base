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

// Function SkinnedDecalComponent.SkinnedDecalInstance.UpdateDecal
// (Final, Native, Public, BlueprintCallable)

void USkinnedDecalInstance::UpdateDecal()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SkinnedDecalComponent.SkinnedDecalInstance.UpdateDecal");

	USkinnedDecalInstance_UpdateDecal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinnedDecalComponent.SkinnedDecalInstance.GetSampler
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkinnedDecalSampler*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkinnedDecalSampler* USkinnedDecalInstance::GetSampler()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SkinnedDecalComponent.SkinnedDecalInstance.GetSampler");

	USkinnedDecalInstance_GetSampler_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SkinnedDecalComponent.SkinnedDecalSampler.UpdateInstance
// (Final, Native, Public)
// Parameters:
// class USkinnedDecalInstance*   Instance                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USkinnedDecalSampler::UpdateInstance(class USkinnedDecalInstance* Instance)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SkinnedDecalComponent.SkinnedDecalSampler.UpdateInstance");

	USkinnedDecalSampler_UpdateInstance_Params params;
	params.Instance = Instance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinnedDecalComponent.SkinnedDecalSampler.UpdateAllDecals
// (Final, Native, Public, BlueprintCallable)

void USkinnedDecalSampler::UpdateAllDecals()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SkinnedDecalComponent.SkinnedDecalSampler.UpdateAllDecals");

	USkinnedDecalSampler_UpdateAllDecals_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinnedDecalComponent.SkinnedDecalSampler.SpawnStaticDecal
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FQuat                   Rotation                       (ConstParm, Parm, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Size                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            SubUV                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            DecalTexIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USkinnedDecalSampler::SpawnStaticDecal(const struct FVector& Location, const struct FQuat& Rotation, const struct FName& BoneName, float Size, int SubUV, int Index, int DecalTexIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SkinnedDecalComponent.SkinnedDecalSampler.SpawnStaticDecal");

	USkinnedDecalSampler_SpawnStaticDecal_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.BoneName = BoneName;
	params.Size = Size;
	params.SubUV = SubUV;
	params.Index = Index;
	params.DecalTexIndex = DecalTexIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SkinnedDecalComponent.SkinnedDecalSampler.SpawnDecal
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FQuat                   Rotation                       (ConstParm, Parm, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Size                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            SubUV                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            DecalTexIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USkinnedDecalSampler::SpawnDecal(const struct FVector& Location, const struct FQuat& Rotation, const struct FName& BoneName, float Size, int SubUV, int Index, int DecalTexIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SkinnedDecalComponent.SkinnedDecalSampler.SpawnDecal");

	USkinnedDecalSampler_SpawnDecal_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.BoneName = BoneName;
	params.Size = Size;
	params.SubUV = SubUV;
	params.Index = Index;
	params.DecalTexIndex = DecalTexIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SkinnedDecalComponent.SkinnedDecalSampler.SetupMaterials
// (Final, Native, Public, BlueprintCallable)

void USkinnedDecalSampler::SetupMaterials()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SkinnedDecalComponent.SkinnedDecalSampler.SetupMaterials");

	USkinnedDecalSampler_SetupMaterials_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinnedDecalComponent.SkinnedDecalSampler.SetupComponentMaterials
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USkinnedDecalSampler::SetupComponentMaterials(class USkeletalMeshComponent* Component)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SkinnedDecalComponent.SkinnedDecalSampler.SetupComponentMaterials");

	USkinnedDecalSampler_SetupComponentMaterials_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinnedDecalComponent.SkinnedDecalSampler.SetMeshComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  MeshComponent                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Child                          (Parm, ZeroConstructor, IsPlainOldData)

void USkinnedDecalSampler::SetMeshComponent(class USkeletalMeshComponent* MeshComponent, bool Child)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SkinnedDecalComponent.SkinnedDecalSampler.SetMeshComponent");

	USkinnedDecalSampler_SetMeshComponent_Params params;
	params.MeshComponent = MeshComponent;
	params.Child = Child;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinnedDecalComponent.SkinnedDecalSampler.RemoveDecal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USkinnedDecalSampler::RemoveDecal(int Index)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SkinnedDecalComponent.SkinnedDecalSampler.RemoveDecal");

	USkinnedDecalSampler_RemoveDecal_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinnedDecalComponent.SkinnedDecalSampler.GetDataTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTextureRenderTarget2D*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTextureRenderTarget2D* USkinnedDecalSampler::GetDataTarget()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SkinnedDecalComponent.SkinnedDecalSampler.GetDataTarget");

	USkinnedDecalSampler_GetDataTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SkinnedDecalComponent.SkinnedDecalSampler.CloneDecals
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkinnedDecalSampler*    Source                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USkinnedDecalSampler::CloneDecals(class USkinnedDecalSampler* Source)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SkinnedDecalComponent.SkinnedDecalSampler.CloneDecals");

	USkinnedDecalSampler_CloneDecals_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinnedDecalComponent.SkinnedDecalSampler.ClearAllDecals
// (Final, Native, Public, BlueprintCallable)

void USkinnedDecalSampler::ClearAllDecals()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SkinnedDecalComponent.SkinnedDecalSampler.ClearAllDecals");

	USkinnedDecalSampler_ClearAllDecals_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinnedDecalComponent.SkinnedDecalSampler.AutoSetupForStatic
// (Final, Native, Public, BlueprintCallable)

void USkinnedDecalSampler::AutoSetupForStatic()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SkinnedDecalComponent.SkinnedDecalSampler.AutoSetupForStatic");

	USkinnedDecalSampler_AutoSetupForStatic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinnedDecalComponent.SkinnedDecalSampler.AutoSetup
// (Final, Native, Public, BlueprintCallable)

void USkinnedDecalSampler::AutoSetup()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SkinnedDecalComponent.SkinnedDecalSampler.AutoSetup");

	USkinnedDecalSampler_AutoSetup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
