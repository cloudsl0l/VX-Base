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

// WidgetBlueprintGeneratedClass AutoFarmingLogUI.AutoFarmingLogUI_C
// 0x0000 (0x02E8 - 0x02E8)
class UAutoFarmingLogUI_C : public UPDAutoFarmingLogUI
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AutoFarmingLogUI.AutoFarmingLogUI_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif