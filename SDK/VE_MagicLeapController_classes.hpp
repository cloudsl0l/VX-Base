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

// Class MagicLeapController.MagicLeapControllerFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapControllerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MagicLeapController.MagicLeapControllerFunctionLibrary");
		
		return ptr;
	}


	bool STATIC_SetMotionSourceForHand(EControllerHand Hand, const struct FName& MotionSource);
	bool STATIC_SetControllerTrackingMode(EMagicLeapControllerTrackingMode TrackingMode);
	bool STATIC_PlayLEDPattern(const struct FName& MotionSource, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	bool STATIC_PlayLEDEffect(const struct FName& MotionSource, EMagicLeapControllerLEDEffect LEDEffect, EMagicLeapControllerLEDSpeed LEDSpeed, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	bool STATIC_PlayHapticPattern(const struct FName& MotionSource, EMagicLeapControllerHapticPattern HapticPattern, EMagicLeapControllerHapticIntensity Intensity);
	bool STATIC_PlayControllerLEDEffect(EControllerHand Hand, EMagicLeapControllerLEDEffect LEDEffect, EMagicLeapControllerLEDSpeed LEDSpeed, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	bool STATIC_PlayControllerLED(EControllerHand Hand, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	bool STATIC_PlayControllerHapticFeedback(EControllerHand Hand, EMagicLeapControllerHapticPattern HapticPattern, EMagicLeapControllerHapticIntensity Intensity);
	int STATIC_MaxSupportedMagicLeapControllers();
	bool STATIC_IsMLControllerConnected(const struct FName& MotionSource);
	void STATIC_InvertControllerMapping();
	struct FName STATIC_GetMotionSourceForHand(EControllerHand Hand);
	EMagicLeapControllerType STATIC_GetMLControllerType(EControllerHand Hand);
	EControllerHand STATIC_GetHandForMotionSource(const struct FName& MotionSource);
	EMagicLeapControllerType STATIC_GetControllerType(const struct FName& MotionSource);
	EMagicLeapControllerTrackingMode STATIC_GetControllerTrackingMode();
	bool STATIC_GetControllerMapping(int ControllerIndex, EControllerHand* Hand);
};


// Class MagicLeapController.MagicLeapTouchpadGesturesComponent
// 0x0090 (0x0140 - 0x00B0)
class UMagicLeapTouchpadGesturesComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x00B0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MagicLeapController.MagicLeapTouchpadGesturesComponent.OnTouchpadGestureStart
	unsigned char                                      UnknownData02[0x10];                                      // 0x00C8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MagicLeapController.MagicLeapTouchpadGesturesComponent.OnTouchpadGestureContinue
	unsigned char                                      UnknownData03[0x10];                                      // 0x00D8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MagicLeapController.MagicLeapTouchpadGesturesComponent.OnTouchpadGestureEnd
	unsigned char                                      UnknownData04[0x58];                                      // 0x00E8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MagicLeapController.MagicLeapTouchpadGesturesComponent");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
