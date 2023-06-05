#pragma once

// Veiled Experts (idk bro) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PrefabricatorRuntime.PrefabActor
// 0x0020 (0x0240 - 0x0220)
class APrefabActor : public AActor
{
public:
	class UPrefabComponent*                            PrefabComponent;                                          // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FGuid                                       LastUpdateID;                                             // 0x0228(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                Seed;                                                     // 0x0238(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x023C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabActor");
		
		return ptr;
	}


	void SavePrefab();
	void RandomizeSeed(const struct FRandomStream& InRandom, bool bRecursive);
	void LoadPrefab();
	bool IsPrefabOutdated();
	class UPrefabricatorAsset* GetPrefabAsset();
};


// Class PrefabricatorRuntime.ReplicablePrefabActor
// 0x0000 (0x0240 - 0x0240)
class AReplicablePrefabActor : public APrefabActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class PrefabricatorRuntime.ReplicablePrefabActor");
		
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabComponent
// 0x0030 (0x0220 - 0x01F0)
class UPrefabComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x01F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty PrefabricatorRuntime.PrefabComponent.PrefabAssetInterface
	unsigned char                                      UnknownData01[0x8];                                       // 0x0218(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabComponent");
		
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabDebugActor
// 0x0018 (0x0238 - 0x0220)
class APrefabDebugActor : public AActor
{
public:
	class AActor*                                      Actor;                                                    // 0x0220(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ActorData;                                                // 0x0228(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabDebugActor");
		
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabRandomizer
// 0x0040 (0x0260 - 0x0220)
class APrefabRandomizer : public AActor
{
public:
	bool                                               bRandomizeOnBeginPlay;                                    // 0x0220(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0221(0x0003) MISSED OFFSET
	int                                                SeedOffset;                                               // 0x0224(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxBuildTimePerFrame;                                     // 0x0228(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x022C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x022C(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PrefabricatorRuntime.PrefabRandomizer.OnRandomizationComplete
	bool                                               bFastSyncBuild;                                           // 0x0240(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1F];                                      // 0x0241(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabRandomizer");
		
		return ptr;
	}


	void Randomize(int InSeed);
};


// Class PrefabricatorRuntime.PrefabricatorProperty
// 0x0048 (0x0070 - 0x0028)
class UPrefabricatorProperty : public UObject
{
public:
	struct FString                                     PropertyName;                                             // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     ExportedValue;                                            // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FPrefabricatorPropertyAssetMapping>  AssetSoftReferenceMappings;                               // 0x0048(0x0010) (ZeroConstructor)
	bool                                               bIsCrossReferencedActor;                                  // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	struct FGuid                                       CrossReferencePrefabActorId;                              // 0x005C(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorProperty");
		
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabricatorEventListener
// 0x0000 (0x0028 - 0x0028)
class UPrefabricatorEventListener : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorEventListener");
		
		return ptr;
	}


	void PostSpawn(class APrefabActor* Prefab);
};


// Class PrefabricatorRuntime.PrefabricatorAssetInterface
// 0x0010 (0x0038 - 0x0028)
class UPrefabricatorAssetInterface : public UObject
{
public:
	class UPrefabricatorEventListener*                 EventListener;                                            // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReplicates;                                              // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorAssetInterface");
		
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabricatorAsset
// 0x0038 (0x0070 - 0x0038)
class UPrefabricatorAsset : public UPrefabricatorAssetInterface
{
public:
	TArray<struct FPrefabricatorActorData>             ActorData;                                                // 0x0038(0x0010) (ZeroConstructor)
	TEnumAsByte<EComponentMobility>                    PrefabMobility;                                           // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	struct FGuid                                       LastUpdateID;                                             // 0x004C(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	class UThumbnailInfo*                              ThumbnailInfo;                                            // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Version;                                                  // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorAsset");
		
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabricatorAssetCollection
// 0x0018 (0x0050 - 0x0038)
class UPrefabricatorAssetCollection : public UPrefabricatorAssetInterface
{
public:
	TArray<struct FPrefabricatorAssetCollectionItem>   Prefabs;                                                  // 0x0038(0x0010) (Edit, ZeroConstructor)
	uint32_t                                           Version;                                                  // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorAssetCollection");
		
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabricatorAssetUserData
// 0x0018 (0x0040 - 0x0028)
class UPrefabricatorAssetUserData : public UAssetUserData
{
public:
	TWeakObjectPtr<class APrefabActor>                 PrefabActor;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FGuid                                       ItemId;                                                   // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorAssetUserData");
		
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabricatorBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UPrefabricatorBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorBlueprintLibrary");
		
		return ptr;
	}


	class APrefabActor* STATIC_SpawnPrefab(class UObject* WorldContextObject, class UPrefabricatorAssetInterface* Prefab, const struct FTransform& Transform, int Seed);
	void STATIC_RandomizePrefab(class APrefabActor* PrefabActor, const struct FRandomStream& InRandom);
	void STATIC_GetAllAttachedActors(class AActor* Prefab, TArray<class AActor*>* AttachedActors);
};


// Class PrefabricatorRuntime.PrefabricatorSettings
// 0x0010 (0x0048 - 0x0038)
class UPrefabricatorSettings : public UDeveloperSettings
{
public:
	EPrefabricatorPivotPosition                        PivotPosition;                                            // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowDynamicUpdate;                                      // 0x0039(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	float                                              DefaultThumbnailPitch;                                    // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultThumbnailYaw;                                      // 0x0040(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultThumbnailZoom;                                     // 0x0044(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorSettings");
		
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabSeedLinkerComponent
// 0x0000 (0x01F0 - 0x01F0)
class UPrefabSeedLinkerComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabSeedLinkerComponent");
		
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabSeedLinker
// 0x0018 (0x0238 - 0x0220)
class APrefabSeedLinker : public AActor
{
public:
	TArray<TWeakObjectPtr<class APrefabActor>>         LinkedActors;                                             // 0x0220(0x0010) (Edit, ZeroConstructor)
	class UPrefabSeedLinkerComponent*                  SeedLinkerComponent;                                      // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabSeedLinker");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
