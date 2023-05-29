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

// Class PDAnimRuntime.IKTargetGetter
// 0x0008 (0x0030 - 0x0028)
class UIKTargetGetter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class PDAnimRuntime.IKTargetGetter");
		
		return ptr;
	}


	bool K2_GetTarget(class USkeletalMeshComponent* SkeletalMesh, struct FTransform* TargetTransform, class USceneComponent** TargetComponent);
	struct FString GetName();
};


// Class PDAnimRuntime.AnimNotify_SetIKTarget
// 0x00B8 (0x00F0 - 0x0038)
class UAnimNotify_SetIKTarget : public UAnimNotify
{
public:
	EPDIKTargetType                                    IKTargetType;                                             // 0x0038(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FPDIKTargetData                             IKTargetData;                                             // 0x0040(0x00B0) (Edit, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class PDAnimRuntime.AnimNotify_SetIKTarget");
		
		return ptr;
	}

};


// Class PDAnimRuntime.IKAnimInterface
// 0x0000 (0x0028 - 0x0028)
class UIKAnimInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class PDAnimRuntime.IKAnimInterface");
		
		return ptr;
	}

};


// Class PDAnimRuntime.PDIKAnimLibrary
// 0x0000 (0x0028 - 0x0028)
class UPDIKAnimLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class PDAnimRuntime.PDIKAnimLibrary");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
