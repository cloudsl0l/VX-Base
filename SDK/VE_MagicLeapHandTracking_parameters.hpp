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

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetStaticGestureConfidenceThreshold
struct UMagicLeapHandTrackingFunctionLibrary_SetStaticGestureConfidenceThreshold_Params
{
	EMagicLeapHandTrackingGesture                      Gesture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Confidence;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetConfiguration
struct UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Params
{
	TArray<EMagicLeapHandTrackingGesture>              StaticGesturesToActivate;                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	EMagicLeapHandTrackingKeypointFilterLevel          KeypointsFilterLevel;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EMagicLeapHandTrackingGestureFilterLevel           GestureFilterLevel;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTrackingEnabled;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.IsHoldingControl
struct UMagicLeapHandTrackingFunctionLibrary_IsHoldingControl_Params
{
	EControllerHand                                    Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetStaticGestureConfidenceThreshold
struct UMagicLeapHandTrackingFunctionLibrary_GetStaticGestureConfidenceThreshold_Params
{
	EMagicLeapHandTrackingGesture                      Gesture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMotionSourceForHandKeypoint
struct UMagicLeapHandTrackingFunctionLibrary_GetMotionSourceForHandKeypoint_Params
{
	EControllerHand                                    Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EMagicLeapHandTrackingKeypoint                     Keypoint;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       OutMotionSource;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMagicLeapHandTrackingLiveLinkSource
struct UMagicLeapHandTrackingFunctionLibrary_GetMagicLeapHandTrackingLiveLinkSource_Params
{
	struct FLiveLinkSourceHandle                       SourceHandle;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandThumbTip
struct UMagicLeapHandTrackingFunctionLibrary_GetHandThumbTip_Params
{
	EControllerHand                                    Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EMagicLeapGestureTransformSpace                    TransformSpace;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Secondary;                                                // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandKeypointForMotionSource
struct UMagicLeapHandTrackingFunctionLibrary_GetHandKeypointForMotionSource_Params
{
	struct FName                                       MotionSource;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EMagicLeapHandTrackingKeypoint                     OutKeyPoint;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandIndexFingerTip
struct UMagicLeapHandTrackingFunctionLibrary_GetHandIndexFingerTip_Params
{
	EControllerHand                                    Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EMagicLeapGestureTransformSpace                    TransformSpace;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Pointer;                                                  // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenterNormalized
struct UMagicLeapHandTrackingFunctionLibrary_GetHandCenterNormalized_Params
{
	EControllerHand                                    Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HandCenterNormalized;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenter
struct UMagicLeapHandTrackingFunctionLibrary_GetHandCenter_Params
{
	EControllerHand                                    Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  HandCenter;                                               // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypointTransform
struct UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform_Params
{
	EControllerHand                                    Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EMagicLeapHandTrackingKeypoint                     Keypoint;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EMagicLeapGestureTransformSpace                    TransformSpace;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypoints
struct UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypoints_Params
{
	EControllerHand                                    Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          Keypoints;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGestureConfidence
struct UMagicLeapHandTrackingFunctionLibrary_GetCurrentGestureConfidence_Params
{
	EControllerHand                                    Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Confidence;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGesture
struct UMagicLeapHandTrackingFunctionLibrary_GetCurrentGesture_Params
{
	EControllerHand                                    Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EMagicLeapHandTrackingGesture                      Gesture;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetConfiguration
struct UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Params
{
	TArray<EMagicLeapHandTrackingGesture>              ActiveStaticGestures;                                     // (Parm, OutParm, ZeroConstructor)
	EMagicLeapHandTrackingKeypointFilterLevel          KeypointsFilterLevel;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EMagicLeapHandTrackingGestureFilterLevel           GestureFilterLevel;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bTrackingEnabled;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
