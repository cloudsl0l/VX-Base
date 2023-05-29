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

// Class MagicLeapLightEstimation.MagicLeapLightingTrackingComponent
// 0x0010 (0x00C0 - 0x00B0)
class UMagicLeapLightingTrackingComponent : public UActorComponent
{
public:
	bool                                               UseGlobalAmbience;                                        // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseColorTemp;                                             // 0x00B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x00B2(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MagicLeapLightEstimation.MagicLeapLightingTrackingComponent");
		
		return ptr;
	}

};


// Class MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapLightEstimationFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary");
		
		return ptr;
	}


	bool STATIC_IsTrackerValid();
	bool STATIC_GetColorTemperatureState(struct FMagicLeapLightEstimationColorTemperatureState* ColorTemperatureState);
	bool STATIC_GetAmbientGlobalState(struct FMagicLeapLightEstimationAmbientGlobalState* GlobalAmbientState);
	void STATIC_DestroyTracker();
	bool STATIC_CreateTracker();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
