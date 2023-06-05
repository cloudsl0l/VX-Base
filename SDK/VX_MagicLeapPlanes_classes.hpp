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

// Class MagicLeapPlanes.MagicLeapPlanesComponent
// 0x0070 (0x0260 - 0x01F0)
class UMagicLeapPlanesComponent : public USceneComponent
{
public:
	TArray<EMagicLeapPlaneQueryFlags>                  QueryFlags;                                               // 0x01F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UBoxComponent*                               SearchVolume;                                             // 0x0200(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                MaxResults;                                               // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinHolePerimeter;                                         // 0x020C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinPlaneArea;                                             // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMagicLeapPlaneQueryType                           QueryType;                                                // 0x0214(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0215(0x0003) MISSED OFFSET
	float                                              SimilarityThreshold;                                      // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x021C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x021C(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MagicLeapPlanes.MagicLeapPlanesComponent.OnPlanesQueryResult
	unsigned char                                      UnknownData03[0x10];                                      // 0x0230(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MagicLeapPlanes.MagicLeapPlanesComponent.OnPersistentPlanesQueryResult
	unsigned char                                      UnknownData04[0x20];                                      // 0x0240(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MagicLeapPlanes.MagicLeapPlanesComponent");
		
		return ptr;
	}


	bool RequestPlanesAsync();
};


// Class MagicLeapPlanes.MagicLeapPlanesFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapPlanesFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MagicLeapPlanes.MagicLeapPlanesFunctionLibrary");
		
		return ptr;
	}


	void STATIC_ReorderPlaneFlags(TArray<EMagicLeapPlaneQueryFlags> InPriority, TArray<EMagicLeapPlaneQueryFlags> InFlagsToReorder, TArray<EMagicLeapPlaneQueryFlags>* OutReorderedFlags);
	bool STATIC_RemovePersistentQuery(const struct FGuid& Handle);
	void STATIC_RemoveFlagsNotInQuery(TArray<EMagicLeapPlaneQueryFlags> InQueryFlags, TArray<EMagicLeapPlaneQueryFlags> InResultFlags, TArray<EMagicLeapPlaneQueryFlags>* OutFlags);
	bool STATIC_PlanesQueryBeginAsync(const struct FMagicLeapPlanesQuery& Query, const struct FScriptDelegate& ResultDelegate);
	bool STATIC_PlanesPersistentQueryBeginAsync(const struct FMagicLeapPlanesQuery& Query, const struct FGuid& Handle, const struct FScriptDelegate& ResultDelegate);
	bool STATIC_IsTrackerValid();
	struct FTransform STATIC_GetContentScale(class AActor* ContentActor, const struct FMagicLeapPlaneResult& PlaneResult);
	bool STATIC_DestroyTracker();
	bool STATIC_CreateTracker();
	struct FGuid STATIC_AddPersistentQuery(EMagicLeapPlaneQueryType PersistentQueryType);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
