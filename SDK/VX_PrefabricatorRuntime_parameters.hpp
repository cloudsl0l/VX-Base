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

// Function PrefabricatorRuntime.PrefabActor.SavePrefab
struct APrefabActor_SavePrefab_Params
{
};

// Function PrefabricatorRuntime.PrefabActor.RandomizeSeed
struct APrefabActor_RandomizeSeed_Params
{
	struct FRandomStream                               InRandom;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bRecursive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrefabricatorRuntime.PrefabActor.LoadPrefab
struct APrefabActor_LoadPrefab_Params
{
};

// Function PrefabricatorRuntime.PrefabActor.IsPrefabOutdated
struct APrefabActor_IsPrefabOutdated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrefabricatorRuntime.PrefabActor.GetPrefabAsset
struct APrefabActor_GetPrefabAsset_Params
{
	class UPrefabricatorAsset*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrefabricatorRuntime.PrefabRandomizer.Randomize
struct APrefabRandomizer_Randomize_Params
{
	int                                                InSeed;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrefabricatorRuntime.PrefabricatorEventListener.PostSpawn
struct UPrefabricatorEventListener_PostSpawn_Params
{
	class APrefabActor*                                Prefab;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.SpawnPrefab
struct UPrefabricatorBlueprintLibrary_SpawnPrefab_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UPrefabricatorAssetInterface*                Prefab;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                Seed;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APrefabActor*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.RandomizePrefab
struct UPrefabricatorBlueprintLibrary_RandomizePrefab_Params
{
	class APrefabActor*                                PrefabActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               InRandom;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.GetAllAttachedActors
struct UPrefabricatorBlueprintLibrary_GetAllAttachedActors_Params
{
	class AActor*                                      Prefab;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              AttachedActors;                                           // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
