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

// Class MagicLeapIdentity.MagicLeapIdentity
// 0x0010 (0x0038 - 0x0028)
class UMagicLeapIdentity : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MagicLeapIdentity.MagicLeapIdentity");
		
		return ptr;
	}


	void RequestIdentityAttributeValueDelegate__DelegateSignature(EMagicLeapIdentityError ResultCode, TArray<struct FMagicLeapIdentityAttribute> AttributeValue);
	EMagicLeapIdentityError RequestAttributeValueAsync(TArray<EMagicLeapIdentityKey> RequestedAttributeList, const struct FScriptDelegate& ResultDelegate);
	EMagicLeapIdentityError RequestAttributeValue(TArray<EMagicLeapIdentityKey> RequestedAttributeList, TArray<struct FMagicLeapIdentityAttribute>* RequestedAttributeValues);
	void ModifyIdentityAttributeValueDelegate__DelegateSignature(EMagicLeapIdentityError ResultCode, TArray<EMagicLeapIdentityKey> AttributesUpdatedSuccessfully);
	void GetAllAvailableAttributesAsync(const struct FScriptDelegate& ResultDelegate);
	EMagicLeapIdentityError GetAllAvailableAttributes(TArray<EMagicLeapIdentityKey>* AvailableAttributes);
	void AvailableIdentityAttributesDelegate__DelegateSignature(EMagicLeapIdentityError ResultCode, TArray<EMagicLeapIdentityKey> AvailableAttributes);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
