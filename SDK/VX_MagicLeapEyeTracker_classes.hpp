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

// Class MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary");
		
		return ptr;
	}


	bool STATIC_GetEyeBlinkState(struct FMagicLeapEyeBlinkState* BlinkState);
	EMagicLeapEyeTrackingCalibrationStatus STATIC_GetCalibrationStatus();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
