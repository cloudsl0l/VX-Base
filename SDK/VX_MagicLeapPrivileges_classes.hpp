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

// Class MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapPrivilegesFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary");
		
		return ptr;
	}


	bool STATIC_RequestPrivilegeAsync(EMagicLeapPrivilege Privilege, const struct FScriptDelegate& ResultDelegate);
	bool STATIC_RequestPrivilege(EMagicLeapPrivilege Privilege);
	bool STATIC_CheckPrivilege(EMagicLeapPrivilege Privilege);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
