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

// WidgetBlueprintGeneratedClass UnKnownWeaponStatProgress.UnKnownWeaponStatProgress_C
// 0x0000 (0x0390 - 0x0390)
class UUnKnownWeaponStatProgress_C : public UPDStatProgress
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UnKnownWeaponStatProgress.UnKnownWeaponStatProgress_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
