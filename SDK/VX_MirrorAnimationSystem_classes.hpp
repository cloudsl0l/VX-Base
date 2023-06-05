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

// Class MirrorAnimationSystem.ExtCharacter
// 0x0000 (0x04C0 - 0x04C0)
class AExtCharacter : public ACharacter
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MirrorAnimationSystem.ExtCharacter");
		
		return ptr;
	}


	void SetRootMotionMirrorAndFlipAxis(TEnumAsByte<EAxis> MirrorAxis, TEnumAsByte<EAxis> FlipAxis);
	void SetMirrorRootMotion(bool Mirror);
	void GetRootMotionMirrorAndFlipAxis(TEnumAsByte<EAxis>* MirrorAxis, TEnumAsByte<EAxis>* FlipAxis);
	bool GetMirrorRootMotion();
};


// Class MirrorAnimationSystem.ExtCharacterMovementComponent
// 0x0010 (0x0620 - 0x0610)
class UExtCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	bool                                               MirrorRootMotion;                                         // 0x0610(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 MirrorAxis;                                               // 0x0611(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 FlipAxis;                                                 // 0x0612(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xD];                                       // 0x0613(0x000D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MirrorAnimationSystem.ExtCharacterMovementComponent");
		
		return ptr;
	}

};


// Class MirrorAnimationSystem.MirrorTable
// 0x0010 (0x0040 - 0x0030)
class UMirrorTable : public UDataAsset
{
public:
	TArray<struct FMirrorBone>                         MirrorBones;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MirrorAnimationSystem.MirrorTable");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
