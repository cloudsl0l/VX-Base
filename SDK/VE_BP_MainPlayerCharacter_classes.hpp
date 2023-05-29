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

// BlueprintGeneratedClass BP_MainPlayerCharacter.BP_MainPlayerCharacter_C
// 0x0000 (0x0E10 - 0x0E10)
class ABP_MainPlayerCharacter_C : public APDMainPlayerCharacter
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MainPlayerCharacter.BP_MainPlayerCharacter_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
