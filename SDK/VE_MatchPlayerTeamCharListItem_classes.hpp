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

// WidgetBlueprintGeneratedClass MatchPlayerTeamCharListItem.MatchPlayerTeamCharListItem_C
// 0x0000 (0x02F8 - 0x02F8)
class UMatchPlayerTeamCharListItem_C : public UPDMatchPlayerTeamCharListItem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MatchPlayerTeamCharListItem.MatchPlayerTeamCharListItem_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
