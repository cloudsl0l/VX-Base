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

// Class MagicLeapARPin.MagicLeapARPinComponent
// 0x0130 (0x0320 - 0x01F0)
class UMagicLeapARPinComponent : public USceneComponent
{
public:
	struct FString                                     ObjectUID;                                                // 0x01F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                UserIndex;                                                // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMagicLeapAutoPinType                              AutoPinType;                                              // 0x0204(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldPinActor;                                          // 0x0205(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0206(0x0002) MISSED OFFSET
	class UMagicLeapARPinSaveGame*                     PinDataClass;                                             // 0x0208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0210(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MagicLeapARPin.MagicLeapARPinComponent.OnPersistentEntityPinned
	unsigned char                                      UnknownData02[0x10];                                      // 0x0220(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MagicLeapARPin.MagicLeapARPinComponent.OnPersistentEntityPinLost
	struct FGuid                                       PinnedCFUID;                                              // 0x0230(0x0010) (ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             PinnedSceneComponent;                                     // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMagicLeapARPinSaveGame*                     PinData;                                                  // 0x0248(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xD0];                                      // 0x0250(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinComponent");
		
		return ptr;
	}


	void UnPin();
	bool PinSceneComponent(class USceneComponent* ComponentToPin);
	bool PinRestoredOrSynced();
	bool PinActor(class AActor* ActorToPin);
	void PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced);
	void PersistentEntityPinLost__DelegateSignature();
	bool IsPinned();
	bool GetPinState(struct FMagicLeapARPinState* State);
	bool GetPinnedPinID(struct FGuid* PinID);
	class UMagicLeapARPinSaveGame* GetPinData(class UMagicLeapARPinSaveGame* PinDataClass);
};


// Class MagicLeapARPin.MagicLeapARPinFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapARPinFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinFunctionLibrary");
		
		return ptr;
	}


	void STATIC_UnBindToOnMagicLeapARPinUpdatedDelegate(const struct FScriptDelegate& Delegate);
	bool STATIC_IsTrackerValid();
	EMagicLeapPassableWorldError STATIC_GetNumAvailableARPins(int* Count);
	EMagicLeapPassableWorldError STATIC_GetClosestARPin(const struct FVector& SearchPoint, struct FGuid* PinID);
	EMagicLeapPassableWorldError STATIC_GetAvailableARPins(int NumRequested, TArray<struct FGuid>* Pins);
	struct FString STATIC_GetARPinStateToString(const struct FMagicLeapARPinState& State);
	EMagicLeapPassableWorldError STATIC_GetARPinState(const struct FGuid& PinID, struct FMagicLeapARPinState* State);
	bool STATIC_GetARPinPositionAndOrientation_TrackingSpace(const struct FGuid& PinID, struct FVector* Position, struct FRotator* Orientation, bool* PinFoundInEnvironment);
	bool STATIC_GetARPinPositionAndOrientation(const struct FGuid& PinID, struct FVector* Position, struct FRotator* Orientation, bool* PinFoundInEnvironment);
	EMagicLeapPassableWorldError STATIC_DestroyTracker();
	EMagicLeapPassableWorldError STATIC_CreateTracker();
	void STATIC_BindToOnMagicLeapARPinUpdatedDelegate(const struct FScriptDelegate& Delegate);
};


// Class MagicLeapARPin.MagicLeapARPinSettings
// 0x0018 (0x0040 - 0x0028)
class UMagicLeapARPinSettings : public UObject
{
public:
	float                                              UpdateCheckFrequency;                                     // 0x0028(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	struct FMagicLeapARPinState                        OnUpdatedEventTriggerDelta;                               // 0x002C(0x0010) (Edit, Config, GlobalConfig)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinSettings");
		
		return ptr;
	}

};


// Class MagicLeapARPin.MagicLeapARPinSaveGame
// 0x0078 (0x00A0 - 0x0028)
class UMagicLeapARPinSaveGame : public USaveGame
{
public:
	struct FGuid                                       PinnedID;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FTransform                                  ComponentWorldTransform;                                  // 0x0040(0x0030) (Edit, EditConst, IsPlainOldData)
	struct FTransform                                  PinTransform;                                             // 0x0070(0x0030) (Edit, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinSaveGame");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
