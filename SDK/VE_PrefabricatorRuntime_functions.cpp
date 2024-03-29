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

// Function PrefabricatorRuntime.PrefabActor.SavePrefab
// (Final, Native, Public, BlueprintCallable)

void APrefabActor::SavePrefab()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabActor.SavePrefab");

	APrefabActor_SavePrefab_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrefabricatorRuntime.PrefabActor.RandomizeSeed
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRandomStream           InRandom                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bRecursive                     (Parm, ZeroConstructor, IsPlainOldData)

void APrefabActor::RandomizeSeed(const struct FRandomStream& InRandom, bool bRecursive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabActor.RandomizeSeed");

	APrefabActor_RandomizeSeed_Params params;
	params.InRandom = InRandom;
	params.bRecursive = bRecursive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrefabricatorRuntime.PrefabActor.LoadPrefab
// (Final, Native, Public, BlueprintCallable)

void APrefabActor::LoadPrefab()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabActor.LoadPrefab");

	APrefabActor_LoadPrefab_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrefabricatorRuntime.PrefabActor.IsPrefabOutdated
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrefabActor::IsPrefabOutdated()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabActor.IsPrefabOutdated");

	APrefabActor_IsPrefabOutdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrefabricatorRuntime.PrefabActor.GetPrefabAsset
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPrefabricatorAsset*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPrefabricatorAsset* APrefabActor::GetPrefabAsset()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabActor.GetPrefabAsset");

	APrefabActor_GetPrefabAsset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrefabricatorRuntime.PrefabRandomizer.Randomize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InSeed                         (Parm, ZeroConstructor, IsPlainOldData)

void APrefabRandomizer::Randomize(int InSeed)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabRandomizer.Randomize");

	APrefabRandomizer_Randomize_Params params;
	params.InSeed = InSeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrefabricatorRuntime.PrefabricatorEventListener.PostSpawn
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class APrefabActor*            Prefab                         (Parm, ZeroConstructor, IsPlainOldData)

void UPrefabricatorEventListener::PostSpawn(class APrefabActor* Prefab)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabricatorEventListener.PostSpawn");

	UPrefabricatorEventListener_PostSpawn_Params params;
	params.Prefab = Prefab;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.SpawnPrefab
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UPrefabricatorAssetInterface* Prefab                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int                            Seed                           (Parm, ZeroConstructor, IsPlainOldData)
// class APrefabActor*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APrefabActor* UPrefabricatorBlueprintLibrary::STATIC_SpawnPrefab(class UObject* WorldContextObject, class UPrefabricatorAssetInterface* Prefab, const struct FTransform& Transform, int Seed)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.SpawnPrefab");

	UPrefabricatorBlueprintLibrary_SpawnPrefab_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Prefab = Prefab;
	params.Transform = Transform;
	params.Seed = Seed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.RandomizePrefab
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class APrefabActor*            PrefabActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FRandomStream           InRandom                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPrefabricatorBlueprintLibrary::STATIC_RandomizePrefab(class APrefabActor* PrefabActor, const struct FRandomStream& InRandom)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.RandomizePrefab");

	UPrefabricatorBlueprintLibrary_RandomizePrefab_Params params;
	params.PrefabActor = PrefabActor;
	params.InRandom = InRandom;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.GetAllAttachedActors
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Prefab                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          AttachedActors                 (Parm, OutParm, ZeroConstructor)

void UPrefabricatorBlueprintLibrary::STATIC_GetAllAttachedActors(class AActor* Prefab, TArray<class AActor*>* AttachedActors)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.GetAllAttachedActors");

	UPrefabricatorBlueprintLibrary_GetAllAttachedActors_Params params;
	params.Prefab = Prefab;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttachedActors != nullptr)
		*AttachedActors = params.AttachedActors;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
