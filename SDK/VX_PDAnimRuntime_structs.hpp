#pragma once

// Veiled Experts (idk bro) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum PDAnimRuntime.EPDCaptureSpace
enum class EPDCaptureSpace : uint8_t
{
	World                          = 0,
	Actor                          = 1,
	Component                      = 2,
	Target                         = 3,
	TargetComponent                = 4,
	EPDCaptureSpace_MAX            = 5
};


// Enum PDAnimRuntime.EPDIKTargetType
enum class EPDIKTargetType : uint8_t
{
	HandL                          = 0,
	HandR                          = 1,
	FootL                          = 2,
	FootR                          = 3,
	Max                            = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PDAnimRuntime.PDIKTargetData
// 0x00B0
struct FPDIKTargetData
{
	class UIKTargetGetter*                             IKTargetGetter;                                           // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      bEnableTranslation : 1;                                   // 0x0008(0x0001) (Edit)
	unsigned char                                      bEnableOrientation : 1;                                   // 0x0008(0x0001) (Edit)
	unsigned char                                      bUseWorldOrientation : 1;                                 // 0x0008(0x0001) (Edit)
	unsigned char                                      bCaptureTarget : 1;                                       // 0x0008(0x0001) (Edit)
	EPDCaptureSpace                                    CaptureSpace;                                             // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x56];                                      // 0x000A(0x0056) MISSED OFFSET
	struct FName                                       CapturedSocketName;                                       // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
	struct FTransform                                  TargetOffset;                                             // 0x0070(0x0030) (Edit, IsPlainOldData)
	EPDCaptureSpace                                    OffsetSpace;                                              // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	struct FName                                       OffsetSocketName;                                         // 0x00A4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PDAnimRuntime.IKTargetBoneArray
// 0x0010
struct FIKTargetBoneArray
{
	TArray<struct FBoneReference>                      Array;                                                    // 0x0000(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct PDAnimRuntime.IKAnimInstanceProxy
// 0x03D0 (0x0AB0 - 0x06E0)
struct FIKAnimInstanceProxy : public FAnimInstanceProxy
{
	struct FIKTargetBoneArray                          IKTargetBones;                                            // 0x06E0(0x0010) (Edit)
	unsigned char                                      UnknownData00[0x3C0];                                     // 0x06F0(0x03C0) MISSED OFFSET
};

// ScriptStruct PDAnimRuntime.PDHandIKData
// 0x00A0
struct FPDHandIKData
{
	unsigned char                                      bEnableHandIK : 1;                                        // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseRightShoulder : 1;                                    // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bEnableTriggerHandOverride : 1;                           // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       HandleAttachedBone;                                       // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       MuzzleBone;                                               // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UMeshComponent*                              WeaponMeshComponent;                                      // 0x0018(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  TriggerHandOffset;                                        // 0x0020(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  TriggerHandOverride;                                      // 0x0050(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     AimingTarget;                                             // 0x0080(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HandleHandAlpha;                                          // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TriggerHandAlpha;                                         // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StockAlpha;                                               // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MuzzleAlpha;                                              // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
};

// ScriptStruct PDAnimRuntime.AnimNode_PDAssetPlayerBase
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_PDAssetPlayerBase : public FAnimNode_AssetPlayerBase
{
	float                                              BlendTime;                                                // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bResetOnActivated;                                        // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintDebug;                                              // 0x0035(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x12];                                      // 0x0036(0x0012) MISSED OFFSET
};

// ScriptStruct PDAnimRuntime.AnimNode_PDBlendSpacePlayer
// 0x0270 (0x02B8 - 0x0048)
struct FAnimNode_PDBlendSpacePlayer : public FAnimNode_PDAssetPlayerBase
{
	float                                              X;                                                        // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bResetPlayTimeWhenBlendSpaceChanges;                      // 0x0059(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x005A(0x0002) MISSED OFFSET
	float                                              StartPosition;                                            // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             BlendSpace;                                               // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x78];                                      // 0x0068(0x0078) MISSED OFFSET
	class UBlendSpaceBase*                             PreviousBlendSpace;                                       // 0x00E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1D0];                                     // 0x00E8(0x01D0) MISSED OFFSET
};

// ScriptStruct PDAnimRuntime.PDIKProfileData
// 0x0080
struct FPDIKProfileData
{
	struct FBoneReference                              TriggerHand;                                              // 0x0000(0x0010) (Edit)
	struct FBoneReference                              HandleHand;                                               // 0x0010(0x0010) (Edit)
	struct FBoneReference                              RightShoulder;                                            // 0x0020(0x0010) (Edit)
	struct FBoneReference                              LeftShoulder;                                             // 0x0030(0x0010) (Edit)
	struct FBoneReference                              RightWeaponAttached;                                      // 0x0040(0x0010) (Edit)
	struct FBoneReference                              LeftWeaponAttached;                                       // 0x0050(0x0010) (Edit)
	struct FBoneReference                              HandleHandPalm;                                           // 0x0060(0x0010) (Edit)
	struct FBoneReference                              TriggerHandPalm;                                          // 0x0070(0x0010) (Edit)
};

// ScriptStruct PDAnimRuntime.AnimNode_PDIK
// 0x02E8 (0x03B0 - 0x00C8)
struct FAnimNode_PDIK : public FAnimNode_SkeletalControlBase
{
	TArray<struct FName>                               PreHandleSlots;                                           // 0x00C8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x00D8(0x0028) MISSED OFFSET
	struct FPDHandIKData                               HandIKData;                                               // 0x0100(0x00A0) (Edit, BlueprintVisible)
	float                                              MaxArmStretchOffset;                                      // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01A4(0x0004) MISSED OFFSET
	struct FPoseLink                                   StancePose;                                               // 0x01A8(0x0010) (Edit, BlueprintVisible)
	TArray<struct FPerBoneBlendWeight>                 PerBoneBlendWeights;                                      // 0x01B8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01C8(0x0004) MISSED OFFSET
	struct FGuid                                       SkeletonGuid;                                             // 0x01CC(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       VirtualBoneGuid;                                          // 0x01DC(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x54];                                      // 0x01EC(0x0054) MISSED OFFSET
	struct FName                                       IK_Handle_Off;                                            // 0x0240(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       IK_Handle_MustOff;                                        // 0x0248(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       IK_Weapon;                                                // 0x0250(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAimingIdleState;                                         // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0259(0x0003) MISSED OFFSET
	struct FName                                       IKProfileName;                                            // 0x025C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0264(0x0004) MISSED OFFSET
	TMap<struct FName, struct FPDIKProfileData>        IKProfiles;                                               // 0x0268(0x0050) (Edit)
	struct FBoneReference                              Hip;                                                      // 0x02B8(0x0010) (Edit)
	unsigned char                                      UnknownData06[0xE8];                                      // 0x02C8(0x00E8) MISSED OFFSET
};

// ScriptStruct PDAnimRuntime.AnimNode_PDSequenceEvaluator
// 0x0148 (0x0190 - 0x0048)
struct FAnimNode_PDSequenceEvaluator : public FAnimNode_PDAssetPlayerBase
{
	class UAnimSequenceBase*                           Sequence;                                                 // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplicitTime;                                             // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldLoop;                                              // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTeleportToExplicitTime;                                  // 0x0055(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESequenceEvalReinit>                   ReinitializationBehavior;                                 // 0x0056(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0057(0x0001) MISSED OFFSET
	float                                              StartPosition;                                            // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x134];                                     // 0x005C(0x0134) MISSED OFFSET
};

// ScriptStruct PDAnimRuntime.AnimNode_PDSequencePlayer
// 0x0180 (0x01C8 - 0x0048)
struct FAnimNode_PDSequencePlayer : public FAnimNode_PDAssetPlayerBase
{
	class UAnimSequenceBase*                           Sequence;                                                 // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayRateBasis;                                            // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBiasClamp                        PlayRateScaleBiasClamp;                                   // 0x0058(0x0030) (Edit, BlueprintVisible)
	float                                              StartPosition;                                            // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLoopAnimation;                                           // 0x008C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x133];                                     // 0x008D(0x0133) MISSED OFFSET
	class UAnimSequenceBase*                           PreviousSequence;                                         // 0x01C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
