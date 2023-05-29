#pragma once

// Veiled Experts (i dont know the version bro) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MirrorAnimationSystem.MirrorBone
// 0x0028
struct FMirrorBone
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 MirrorAxis;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 FlipAxis;                                                 // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsTwinBone;                                               // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
	struct FName                                       TwinBoneName;                                             // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MirrorTranslation;                                        // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FRotator                                    RotationOffset;                                           // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InvertTwinRotationX;                                      // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InvertTwinRotationY;                                      // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InvertTwinRotationZ;                                      // 0x0026(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0027(0x0001) MISSED OFFSET
};

// ScriptStruct MirrorAnimationSystem.AnimNode_Mirror
// 0x0018 (0x0028 - 0x0010)
struct FAnimNode_Mirror : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible)
	class UMirrorTable*                                MirrorTable;                                              // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MirrorAnimationSystem.AnimNode_MirrorCS
// 0x0060 (0x0128 - 0x00C8)
struct FAnimNode_MirrorCS : public FAnimNode_SkeletalControlBase
{
	TEnumAsByte<EAxis>                                 MirrorAxis;                                               // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CompletlySymmetrical;                                     // 0x00C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00CA(0x0006) MISSED OFFSET
	struct FString                                     Substring_A;                                              // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Substring_B;                                              // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x38];                                      // 0x00F0(0x0038) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
