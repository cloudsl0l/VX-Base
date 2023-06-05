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

// WidgetBlueprintGeneratedClass MatchPlayerLaptonPresetTab.MatchPlayerLaptonPresetTab_C
// 0x0000 (0x0310 - 0x0310)
class UMatchPlayerLaptonPresetTab_C : public UPDMatchPlayerLaptonPresetTab
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MatchPlayerLaptonPresetTab.MatchPlayerLaptonPresetTab_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
