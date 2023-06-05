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

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetStaticGestureConfidenceThreshold
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EMagicLeapHandTrackingGesture  Gesture                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Confidence                     (Parm, ZeroConstructor, IsPlainOldData)

void UMagicLeapHandTrackingFunctionLibrary::STATIC_SetStaticGestureConfidenceThreshold(EMagicLeapHandTrackingGesture Gesture, float Confidence)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetStaticGestureConfidenceThreshold");

	UMagicLeapHandTrackingFunctionLibrary_SetStaticGestureConfidenceThreshold_Params params;
	params.Gesture = Gesture;
	params.Confidence = Confidence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetConfiguration
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<EMagicLeapHandTrackingGesture> StaticGesturesToActivate       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel           (Parm, ZeroConstructor, IsPlainOldData)
// EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTrackingEnabled               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHandTrackingFunctionLibrary::STATIC_SetConfiguration(TArray<EMagicLeapHandTrackingGesture> StaticGesturesToActivate, EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel, EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel, bool bTrackingEnabled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetConfiguration");

	UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Params params;
	params.StaticGesturesToActivate = StaticGesturesToActivate;
	params.KeypointsFilterLevel = KeypointsFilterLevel;
	params.GestureFilterLevel = GestureFilterLevel;
	params.bTrackingEnabled = bTrackingEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.IsHoldingControl
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EControllerHand                Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHandTrackingFunctionLibrary::STATIC_IsHoldingControl(EControllerHand Hand)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.IsHoldingControl");

	UMagicLeapHandTrackingFunctionLibrary_IsHoldingControl_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetStaticGestureConfidenceThreshold
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EMagicLeapHandTrackingGesture  Gesture                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMagicLeapHandTrackingFunctionLibrary::STATIC_GetStaticGestureConfidenceThreshold(EMagicLeapHandTrackingGesture Gesture)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetStaticGestureConfidenceThreshold");

	UMagicLeapHandTrackingFunctionLibrary_GetStaticGestureConfidenceThreshold_Params params;
	params.Gesture = Gesture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMotionSourceForHandKeypoint
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// EControllerHand                Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// EMagicLeapHandTrackingKeypoint Keypoint                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   OutMotionSource                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHandTrackingFunctionLibrary::STATIC_GetMotionSourceForHandKeypoint(EControllerHand Hand, EMagicLeapHandTrackingKeypoint Keypoint, struct FName* OutMotionSource)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMotionSourceForHandKeypoint");

	UMagicLeapHandTrackingFunctionLibrary_GetMotionSourceForHandKeypoint_Params params;
	params.Hand = Hand;
	params.Keypoint = Keypoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMotionSource != nullptr)
		*OutMotionSource = params.OutMotionSource;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMagicLeapHandTrackingLiveLinkSource
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle   SourceHandle                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHandTrackingFunctionLibrary::STATIC_GetMagicLeapHandTrackingLiveLinkSource(struct FLiveLinkSourceHandle* SourceHandle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMagicLeapHandTrackingLiveLinkSource");

	UMagicLeapHandTrackingFunctionLibrary_GetMagicLeapHandTrackingLiveLinkSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SourceHandle != nullptr)
		*SourceHandle = params.SourceHandle;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandThumbTip
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// EControllerHand                Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// EMagicLeapGestureTransformSpace TransformSpace                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Secondary                      (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHandTrackingFunctionLibrary::STATIC_GetHandThumbTip(EControllerHand Hand, EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Secondary)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandThumbTip");

	UMagicLeapHandTrackingFunctionLibrary_GetHandThumbTip_Params params;
	params.Hand = Hand;
	params.TransformSpace = TransformSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Secondary != nullptr)
		*Secondary = params.Secondary;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandKeypointForMotionSource
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   MotionSource                   (Parm, ZeroConstructor, IsPlainOldData)
// EMagicLeapHandTrackingKeypoint OutKeyPoint                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHandTrackingFunctionLibrary::STATIC_GetHandKeypointForMotionSource(const struct FName& MotionSource, EMagicLeapHandTrackingKeypoint* OutKeyPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandKeypointForMotionSource");

	UMagicLeapHandTrackingFunctionLibrary_GetHandKeypointForMotionSource_Params params;
	params.MotionSource = MotionSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutKeyPoint != nullptr)
		*OutKeyPoint = params.OutKeyPoint;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandIndexFingerTip
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// EControllerHand                Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// EMagicLeapGestureTransformSpace TransformSpace                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Pointer                        (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHandTrackingFunctionLibrary::STATIC_GetHandIndexFingerTip(EControllerHand Hand, EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Pointer)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandIndexFingerTip");

	UMagicLeapHandTrackingFunctionLibrary_GetHandIndexFingerTip_Params params;
	params.Hand = Hand;
	params.TransformSpace = TransformSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pointer != nullptr)
		*Pointer = params.Pointer;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenterNormalized
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// EControllerHand                Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HandCenterNormalized           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHandTrackingFunctionLibrary::STATIC_GetHandCenterNormalized(EControllerHand Hand, struct FVector* HandCenterNormalized)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenterNormalized");

	UMagicLeapHandTrackingFunctionLibrary_GetHandCenterNormalized_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HandCenterNormalized != nullptr)
		*HandCenterNormalized = params.HandCenterNormalized;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenter
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// EControllerHand                Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              HandCenter                     (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHandTrackingFunctionLibrary::STATIC_GetHandCenter(EControllerHand Hand, struct FTransform* HandCenter)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenter");

	UMagicLeapHandTrackingFunctionLibrary_GetHandCenter_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HandCenter != nullptr)
		*HandCenter = params.HandCenter;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypointTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// EControllerHand                Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// EMagicLeapHandTrackingKeypoint Keypoint                       (Parm, ZeroConstructor, IsPlainOldData)
// EMagicLeapGestureTransformSpace TransformSpace                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHandTrackingFunctionLibrary::STATIC_GetGestureKeypointTransform(EControllerHand Hand, EMagicLeapHandTrackingKeypoint Keypoint, EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Transform)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypointTransform");

	UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform_Params params;
	params.Hand = Hand;
	params.Keypoint = Keypoint;
	params.TransformSpace = TransformSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypoints
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// EControllerHand                Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FTransform>      Keypoints                      (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHandTrackingFunctionLibrary::STATIC_GetGestureKeypoints(EControllerHand Hand, TArray<struct FTransform>* Keypoints)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypoints");

	UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypoints_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Keypoints != nullptr)
		*Keypoints = params.Keypoints;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGestureConfidence
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// EControllerHand                Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Confidence                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHandTrackingFunctionLibrary::STATIC_GetCurrentGestureConfidence(EControllerHand Hand, float* Confidence)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGestureConfidence");

	UMagicLeapHandTrackingFunctionLibrary_GetCurrentGestureConfidence_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Confidence != nullptr)
		*Confidence = params.Confidence;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGesture
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// EControllerHand                Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// EMagicLeapHandTrackingGesture  Gesture                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHandTrackingFunctionLibrary::STATIC_GetCurrentGesture(EControllerHand Hand, EMagicLeapHandTrackingGesture* Gesture)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGesture");

	UMagicLeapHandTrackingFunctionLibrary_GetCurrentGesture_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Gesture != nullptr)
		*Gesture = params.Gesture;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetConfiguration
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<EMagicLeapHandTrackingGesture> ActiveStaticGestures           (Parm, OutParm, ZeroConstructor)
// EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bTrackingEnabled               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHandTrackingFunctionLibrary::STATIC_GetConfiguration(TArray<EMagicLeapHandTrackingGesture>* ActiveStaticGestures, EMagicLeapHandTrackingKeypointFilterLevel* KeypointsFilterLevel, EMagicLeapHandTrackingGestureFilterLevel* GestureFilterLevel, bool* bTrackingEnabled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetConfiguration");

	UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActiveStaticGestures != nullptr)
		*ActiveStaticGestures = params.ActiveStaticGestures;
	if (KeypointsFilterLevel != nullptr)
		*KeypointsFilterLevel = params.KeypointsFilterLevel;
	if (GestureFilterLevel != nullptr)
		*GestureFilterLevel = params.GestureFilterLevel;
	if (bTrackingEnabled != nullptr)
		*bTrackingEnabled = params.bTrackingEnabled;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
