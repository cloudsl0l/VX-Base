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

// WidgetBlueprintGeneratedClass IngameGuideCoinInfoItem.IngameGuideCoinInfoItem_C
// 0x0000 (0x02E8 - 0x02E8)
class UIngameGuideCoinInfoItem_C : public UPDIngameGuideCoinInfoItem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass IngameGuideCoinInfoItem.IngameGuideCoinInfoItem_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
