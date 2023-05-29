#pragma once

// Veiled Experts (i dont know the version bro) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetMotionSourceForHand
struct UMagicLeapControllerFunctionLibrary_SetMotionSourceForHand_Params
{
	EControllerHand                                    Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       MotionSource;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetControllerTrackingMode
struct UMagicLeapControllerFunctionLibrary_SetControllerTrackingMode_Params
{
	EMagicLeapControllerTrackingMode                   TrackingMode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDPattern
struct UMagicLeapControllerFunctionLibrary_PlayLEDPattern_Params
{
	struct FName                                       MotionSource;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EMagicLeapControllerLEDPattern                     LEDPattern;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EMagicLeapControllerLEDColor                       LEDColor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DurationInSec;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDEffect
struct UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Params
{
	struct FName                                       MotionSource;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EMagicLeapControllerLEDEffect                      LEDEffect;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EMagicLeapControllerLEDSpeed                       LEDSpeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EMagicLeapControllerLEDPattern                     LEDPattern;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EMagicLeapControllerLEDColor                       LEDColor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DurationInSec;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayHapticPattern
struct UMagicLeapControllerFunctionLibrary_PlayHapticPattern_Params
{
	struct FName                                       MotionSource;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EMagicLeapControllerHapticPattern                  HapticPattern;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	EMagicLeapControllerHapticIntensity                Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLEDEffect
struct UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Params
{
	EControllerHand                                    Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EMagicLeapControllerLEDEffect                      LEDEffect;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EMagicLeapControllerLEDSpeed                       LEDSpeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EMagicLeapControllerLEDPattern                     LEDPattern;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EMagicLeapControllerLEDColor                       LEDColor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DurationInSec;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLED
struct UMagicLeapControllerFunctionLibrary_PlayControllerLED_Params
{
	EControllerHand                                    Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EMagicLeapControllerLEDPattern                     LEDPattern;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EMagicLeapControllerLEDColor                       LEDColor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DurationInSec;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerHapticFeedback
struct UMagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback_Params
{
	EControllerHand                                    Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EMagicLeapControllerHapticPattern                  HapticPattern;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	EMagicLeapControllerHapticIntensity                Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.MaxSupportedMagicLeapControllers
struct UMagicLeapControllerFunctionLibrary_MaxSupportedMagicLeapControllers_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.IsMLControllerConnected
struct UMagicLeapControllerFunctionLibrary_IsMLControllerConnected_Params
{
	struct FName                                       MotionSource;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.InvertControllerMapping
struct UMagicLeapControllerFunctionLibrary_InvertControllerMapping_Params
{
};

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMotionSourceForHand
struct UMagicLeapControllerFunctionLibrary_GetMotionSourceForHand_Params
{
	EControllerHand                                    Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMLControllerType
struct UMagicLeapControllerFunctionLibrary_GetMLControllerType_Params
{
	EControllerHand                                    Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EMagicLeapControllerType                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetHandForMotionSource
struct UMagicLeapControllerFunctionLibrary_GetHandForMotionSource_Params
{
	struct FName                                       MotionSource;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EControllerHand                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerType
struct UMagicLeapControllerFunctionLibrary_GetControllerType_Params
{
	struct FName                                       MotionSource;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EMagicLeapControllerType                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerTrackingMode
struct UMagicLeapControllerFunctionLibrary_GetControllerTrackingMode_Params
{
	EMagicLeapControllerTrackingMode                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerMapping
struct UMagicLeapControllerFunctionLibrary_GetControllerMapping_Params
{
	int                                                ControllerIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	EControllerHand                                    Hand;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
