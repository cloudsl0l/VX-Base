// Veiled Experts (idk bro) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetMotionSourceForHand
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EControllerHand                Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   MotionSource                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapControllerFunctionLibrary::STATIC_SetMotionSourceForHand(EControllerHand Hand, const struct FName& MotionSource)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetMotionSourceForHand");

	UMagicLeapControllerFunctionLibrary_SetMotionSourceForHand_Params params;
	params.Hand = Hand;
	params.MotionSource = MotionSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetControllerTrackingMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EMagicLeapControllerTrackingMode TrackingMode                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapControllerFunctionLibrary::STATIC_SetControllerTrackingMode(EMagicLeapControllerTrackingMode TrackingMode)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetControllerTrackingMode");

	UMagicLeapControllerFunctionLibrary_SetControllerTrackingMode_Params params;
	params.TrackingMode = TrackingMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDPattern
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   MotionSource                   (Parm, ZeroConstructor, IsPlainOldData)
// EMagicLeapControllerLEDPattern LEDPattern                     (Parm, ZeroConstructor, IsPlainOldData)
// EMagicLeapControllerLEDColor   LEDColor                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          DurationInSec                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapControllerFunctionLibrary::STATIC_PlayLEDPattern(const struct FName& MotionSource, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDPattern");

	UMagicLeapControllerFunctionLibrary_PlayLEDPattern_Params params;
	params.MotionSource = MotionSource;
	params.LEDPattern = LEDPattern;
	params.LEDColor = LEDColor;
	params.DurationInSec = DurationInSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   MotionSource                   (Parm, ZeroConstructor, IsPlainOldData)
// EMagicLeapControllerLEDEffect  LEDEffect                      (Parm, ZeroConstructor, IsPlainOldData)
// EMagicLeapControllerLEDSpeed   LEDSpeed                       (Parm, ZeroConstructor, IsPlainOldData)
// EMagicLeapControllerLEDPattern LEDPattern                     (Parm, ZeroConstructor, IsPlainOldData)
// EMagicLeapControllerLEDColor   LEDColor                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          DurationInSec                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapControllerFunctionLibrary::STATIC_PlayLEDEffect(const struct FName& MotionSource, EMagicLeapControllerLEDEffect LEDEffect, EMagicLeapControllerLEDSpeed LEDSpeed, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDEffect");

	UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Params params;
	params.MotionSource = MotionSource;
	params.LEDEffect = LEDEffect;
	params.LEDSpeed = LEDSpeed;
	params.LEDPattern = LEDPattern;
	params.LEDColor = LEDColor;
	params.DurationInSec = DurationInSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayHapticPattern
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   MotionSource                   (Parm, ZeroConstructor, IsPlainOldData)
// EMagicLeapControllerHapticPattern HapticPattern                  (Parm, ZeroConstructor, IsPlainOldData)
// EMagicLeapControllerHapticIntensity Intensity                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapControllerFunctionLibrary::STATIC_PlayHapticPattern(const struct FName& MotionSource, EMagicLeapControllerHapticPattern HapticPattern, EMagicLeapControllerHapticIntensity Intensity)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayHapticPattern");

	UMagicLeapControllerFunctionLibrary_PlayHapticPattern_Params params;
	params.MotionSource = MotionSource;
	params.HapticPattern = HapticPattern;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLEDEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EControllerHand                Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// EMagicLeapControllerLEDEffect  LEDEffect                      (Parm, ZeroConstructor, IsPlainOldData)
// EMagicLeapControllerLEDSpeed   LEDSpeed                       (Parm, ZeroConstructor, IsPlainOldData)
// EMagicLeapControllerLEDPattern LEDPattern                     (Parm, ZeroConstructor, IsPlainOldData)
// EMagicLeapControllerLEDColor   LEDColor                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          DurationInSec                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapControllerFunctionLibrary::STATIC_PlayControllerLEDEffect(EControllerHand Hand, EMagicLeapControllerLEDEffect LEDEffect, EMagicLeapControllerLEDSpeed LEDSpeed, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLEDEffect");

	UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Params params;
	params.Hand = Hand;
	params.LEDEffect = LEDEffect;
	params.LEDSpeed = LEDSpeed;
	params.LEDPattern = LEDPattern;
	params.LEDColor = LEDColor;
	params.DurationInSec = DurationInSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLED
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EControllerHand                Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// EMagicLeapControllerLEDPattern LEDPattern                     (Parm, ZeroConstructor, IsPlainOldData)
// EMagicLeapControllerLEDColor   LEDColor                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          DurationInSec                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapControllerFunctionLibrary::STATIC_PlayControllerLED(EControllerHand Hand, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLED");

	UMagicLeapControllerFunctionLibrary_PlayControllerLED_Params params;
	params.Hand = Hand;
	params.LEDPattern = LEDPattern;
	params.LEDColor = LEDColor;
	params.DurationInSec = DurationInSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerHapticFeedback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EControllerHand                Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// EMagicLeapControllerHapticPattern HapticPattern                  (Parm, ZeroConstructor, IsPlainOldData)
// EMagicLeapControllerHapticIntensity Intensity                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapControllerFunctionLibrary::STATIC_PlayControllerHapticFeedback(EControllerHand Hand, EMagicLeapControllerHapticPattern HapticPattern, EMagicLeapControllerHapticIntensity Intensity)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerHapticFeedback");

	UMagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback_Params params;
	params.Hand = Hand;
	params.HapticPattern = HapticPattern;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.MaxSupportedMagicLeapControllers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMagicLeapControllerFunctionLibrary::STATIC_MaxSupportedMagicLeapControllers()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.MaxSupportedMagicLeapControllers");

	UMagicLeapControllerFunctionLibrary_MaxSupportedMagicLeapControllers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.IsMLControllerConnected
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   MotionSource                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapControllerFunctionLibrary::STATIC_IsMLControllerConnected(const struct FName& MotionSource)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.IsMLControllerConnected");

	UMagicLeapControllerFunctionLibrary_IsMLControllerConnected_Params params;
	params.MotionSource = MotionSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.InvertControllerMapping
// (Final, Native, Static, Public, BlueprintCallable)

void UMagicLeapControllerFunctionLibrary::STATIC_InvertControllerMapping()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.InvertControllerMapping");

	UMagicLeapControllerFunctionLibrary_InvertControllerMapping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMotionSourceForHand
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EControllerHand                Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UMagicLeapControllerFunctionLibrary::STATIC_GetMotionSourceForHand(EControllerHand Hand)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMotionSourceForHand");

	UMagicLeapControllerFunctionLibrary_GetMotionSourceForHand_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMLControllerType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EControllerHand                Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// EMagicLeapControllerType       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EMagicLeapControllerType UMagicLeapControllerFunctionLibrary::STATIC_GetMLControllerType(EControllerHand Hand)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMLControllerType");

	UMagicLeapControllerFunctionLibrary_GetMLControllerType_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetHandForMotionSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   MotionSource                   (Parm, ZeroConstructor, IsPlainOldData)
// EControllerHand                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EControllerHand UMagicLeapControllerFunctionLibrary::STATIC_GetHandForMotionSource(const struct FName& MotionSource)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetHandForMotionSource");

	UMagicLeapControllerFunctionLibrary_GetHandForMotionSource_Params params;
	params.MotionSource = MotionSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   MotionSource                   (Parm, ZeroConstructor, IsPlainOldData)
// EMagicLeapControllerType       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EMagicLeapControllerType UMagicLeapControllerFunctionLibrary::STATIC_GetControllerType(const struct FName& MotionSource)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerType");

	UMagicLeapControllerFunctionLibrary_GetControllerType_Params params;
	params.MotionSource = MotionSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerTrackingMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EMagicLeapControllerTrackingMode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EMagicLeapControllerTrackingMode UMagicLeapControllerFunctionLibrary::STATIC_GetControllerTrackingMode()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerTrackingMode");

	UMagicLeapControllerFunctionLibrary_GetControllerTrackingMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerMapping
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            ControllerIndex                (Parm, ZeroConstructor, IsPlainOldData)
// EControllerHand                Hand                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapControllerFunctionLibrary::STATIC_GetControllerMapping(int ControllerIndex, EControllerHand* Hand)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerMapping");

	UMagicLeapControllerFunctionLibrary_GetControllerMapping_Params params;
	params.ControllerIndex = ControllerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hand != nullptr)
		*Hand = params.Hand;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
