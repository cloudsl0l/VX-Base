#pragma once

// Veiled Experts (i dont know the version bro) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ConstructionSystemRuntime.ConstructionSystemTool
// 0x0008 (0x0030 - 0x0028)
class UConstructionSystemTool : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ConstructionSystemRuntime.ConstructionSystemTool");
		
		return ptr;
	}

};


// Class ConstructionSystemRuntime.ConstructionSystemBuildTool
// 0x0138 (0x0168 - 0x0030)
class UConstructionSystemBuildTool : public UConstructionSystemTool
{
public:
	float                                              TraceDistance;                                            // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CursorRotationStepAngle;                                  // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UConstructionSystemCursor*                   Cursor;                                                   // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPrefabricatorAssetInterface*                ActivePrefabAsset;                                        // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x120];                                     // 0x0048(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ConstructionSystemRuntime.ConstructionSystemBuildTool");
		
		return ptr;
	}


	void SetActivePrefab(class UPrefabricatorAssetInterface* InActivePrefabAsset);
	void HandleInput_RotateCursorStep(float NumSteps);
	void HandleInput_CursorMovePrev();
	void HandleInput_CursorMoveNext();
	void HandleInput_ConstructAtCursor();
};


// Class ConstructionSystemRuntime.ConstructionSystemComponent
// 0x00A0 (0x0150 - 0x00B0)
class UConstructionSystemComponent : public UActorComponent
{
public:
	class UMaterialInterface*                          CursorMaterial;                                           // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          CursorInvalidMaterial;                                    // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TraceStartDistance;                                       // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TraceSweepRadius;                                         // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ConstructionCameraActor;                                  // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConstructionCameraTransitionTime;                         // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConstructionCameraTransitionExp;                          // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 BuildMenuUI;                                              // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UConstructionSystemUIAsset*                  BuildMenuData;                                            // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 BuildMenuUIInstance;                                      // 0x00E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	EConstructionSystemToolType                        ActiveToolType;                                           // 0x00F0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	TMap<EConstructionSystemToolType, class UConstructionSystemTool*> Tools;                                                    // 0x00F8(0x0050) (Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0148(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ConstructionSystemRuntime.ConstructionSystemComponent");
		
		return ptr;
	}


	void ToggleConstructionSystem();
	void ShowBuildMenu();
	void SetActiveTool(EConstructionSystemToolType InToolType);
	void HideBuildMenu();
	class UConstructionSystemTool* GetTool(EConstructionSystemToolType InToolType);
	EConstructionSystemToolType GetActiveToolType();
	class UConstructionSystemTool* GetActiveTool();
	void EnableConstructionSystem(EConstructionSystemToolType InToolType);
	void DisableConstructionSystem();
};


// Class ConstructionSystemRuntime.ConstructionSystemItemUserData
// 0x0008 (0x0030 - 0x0028)
class UConstructionSystemItemUserData : public UAssetUserData
{
public:
	int                                                Seed;                                                     // 0x0028(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ConstructionSystemRuntime.ConstructionSystemItemUserData");
		
		return ptr;
	}

};


// Class ConstructionSystemRuntime.ConstructionSystemCursor
// 0x0038 (0x0060 - 0x0028)
class UConstructionSystemCursor : public UObject
{
public:
	class APrefabActor*                                CursorGhostActor;                                         // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                CursorSeed;                                               // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UMaterialInterface*                          CursorMaterial;                                           // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInterface*                          CursorInvalidMaterial;                                    // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UPrefabricatorConstructionSnapComponent*> SnapComponents;                                           // 0x0048(0x0010) (ExportObject, ZeroConstructor, Transient)
	int                                                ActiveSnapComponentIndex;                                 // 0x0058(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ConstructionSystemRuntime.ConstructionSystemCursor");
		
		return ptr;
	}

};


// Class ConstructionSystemRuntime.ConstructionSystemRemoveTool
// 0x0060 (0x0090 - 0x0030)
class UConstructionSystemRemoveTool : public UConstructionSystemTool
{
public:
	float                                              TraceDistance;                                            // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class APrefabActor>                 FocusedActor;                                             // 0x0034(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x54];                                      // 0x003C(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ConstructionSystemRuntime.ConstructionSystemRemoveTool");
		
		return ptr;
	}


	void HandleInput_RemoveAtCursor();
};


// Class ConstructionSystemRuntime.ConstructionSystemSaveGame
// 0x0078 (0x00A0 - 0x0028)
class UConstructionSystemSaveGame : public USaveGame
{
public:
	struct FString                                     SaveSlotName;                                             // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)
	uint32_t                                           UserIndex;                                                // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FConstructionSystemSavePlayerInfo           PlayerInfo;                                               // 0x0040(0x0050) (Edit, EditConst)
	TArray<struct FConstructionSystemSaveConstructedItem> ConstructedItems;                                         // 0x0090(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ConstructionSystemRuntime.ConstructionSystemSaveGame");
		
		return ptr;
	}

};


// Class ConstructionSystemRuntime.ConstructionSystemSaveSystem
// 0x0000 (0x0028 - 0x0028)
class UConstructionSystemSaveSystem : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ConstructionSystemRuntime.ConstructionSystemSaveSystem");
		
		return ptr;
	}


	void STATIC_SaveConstructionSystemLevel(class UObject* WorldContextObject, const struct FString& SaveSlotName, int UserIndex, bool bSavePlayerState);
	void STATIC_LoadConstructionSystemLevel(class UObject* WorldContextObject, const struct FName& LevelName, bool bAbsolute, const struct FString& SaveSlotName, int UserIndex);
	void STATIC_HandleConstructionSystemLevelLoad(class UObject* WorldContextObject);
};


// Class ConstructionSystemRuntime.PrefabricatorConstructionSnapComponent
// 0x0010 (0x0450 - 0x0440)
class UPrefabricatorConstructionSnapComponent : public UBoxComponent
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0440(0x0003) MISSED OFFSET
	bool                                               bAlignToGroundSlope;                                      // 0x0443(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseMaxGroundSlopeConstraint;                             // 0x0444(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0445(0x0003) MISSED OFFSET
	float                                              MaxGroundPlacementSlope;                                  // 0x0448(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x044C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ConstructionSystemRuntime.PrefabricatorConstructionSnapComponent");
		
		return ptr;
	}

};


// Class ConstructionSystemRuntime.PrefabricatorConstructionSnap
// 0x0008 (0x0228 - 0x0220)
class APrefabricatorConstructionSnap : public AActor
{
public:
	class UPrefabricatorConstructionSnapComponent*     ConstructionSnapComponent;                                // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ConstructionSystemRuntime.PrefabricatorConstructionSnap");
		
		return ptr;
	}

};


// Class ConstructionSystemRuntime.ConstructionSystemBuildUI
// 0x0000 (0x0028 - 0x0028)
class UConstructionSystemBuildUI : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ConstructionSystemRuntime.ConstructionSystemBuildUI");
		
		return ptr;
	}


	void SetUIAsset(class UConstructionSystemUIAsset* UIAsset);
	void SetConstructionSystem(class UConstructionSystemComponent* ConstructionSystem);
};


// Class ConstructionSystemRuntime.ConstructionSystemUIAsset
// 0x0028 (0x0058 - 0x0030)
class UConstructionSystemUIAsset : public UDataAsset
{
public:
	struct FText                                       MenuTitle;                                                // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FConstructionSystemUICategory>       Categories;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ConstructionSystemRuntime.ConstructionSystemUIAsset");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
