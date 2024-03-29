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

// Class MagicLeapImageTracker.MagicLeapImageTrackerComponent
// 0x0080 (0x0270 - 0x01F0)
class UMagicLeapImageTrackerComponent : public USceneComponent
{
public:
	class UTexture2D*                                  TargetImageTexture;                                       // 0x01F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // 0x01F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              LongerDimension;                                          // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsStationary;                                            // 0x020C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseUnreliablePose;                                       // 0x020D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x020E(0x0002) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x020E(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MagicLeapImageTracker.MagicLeapImageTrackerComponent.OnSetImageTargetSucceeded
	unsigned char                                      UnknownData02[0x10];                                      // 0x0220(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MagicLeapImageTracker.MagicLeapImageTrackerComponent.OnSetImageTargetFailed
	unsigned char                                      UnknownData03[0x10];                                      // 0x0230(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MagicLeapImageTracker.MagicLeapImageTrackerComponent.OnImageTargetFound
	unsigned char                                      UnknownData04[0x10];                                      // 0x0240(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MagicLeapImageTracker.MagicLeapImageTrackerComponent.OnImageTargetLost
	unsigned char                                      UnknownData05[0x10];                                      // 0x0250(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MagicLeapImageTracker.MagicLeapImageTrackerComponent.OnImageTargetUnreliableTracking
	unsigned char                                      UnknownData06[0x10];                                      // 0x0260(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MagicLeapImageTracker.MagicLeapImageTrackerComponent");
		
		return ptr;
	}


	bool SetTargetAsync(class UTexture2D* ImageTarget);
	bool RemoveTargetAsync();
};


// Class MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapImageTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary");
		
		return ptr;
	}


	void STATIC_SetMaxSimultaneousTargets(int MaxSimultaneousTargets);
	bool STATIC_IsImageTrackingEnabled();
	int STATIC_GetMaxSimultaneousTargets();
	void STATIC_EnableImageTracking(bool bEnable);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
