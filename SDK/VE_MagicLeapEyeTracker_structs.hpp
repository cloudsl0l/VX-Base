#pragma once

// Veiled Experts (i dont know the version bro) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MagicLeapEyeTracker.EMagicLeapEyeTrackingCalibrationStatus
enum class EMagicLeapEyeTrackingCalibrationStatus : uint8_t
{
	None                           = 0,
	Bad                            = 1,
	Good                           = 2,
	EMagicLeapEyeTrackingCalibrationStatus_MAX = 3
};


// Enum MagicLeapEyeTracker.EMagicLeapEyeTrackingStatus
enum class EMagicLeapEyeTrackingStatus : uint8_t
{
	NotConnected                   = 0,
	Disabled                       = 1,
	UserNotPresent                 = 2,
	UserPresent                    = 3,
	UserPresentAndWatchingWindow   = 4,
	EMagicLeapEyeTrackingStatus_MAX = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MagicLeapEyeTracker.MagicLeapEyeBlinkState
// 0x0002
struct FMagicLeapEyeBlinkState
{
	bool                                               LeftEyeBlinked;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RightEyeBlinked;                                          // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
