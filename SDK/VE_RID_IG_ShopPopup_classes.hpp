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

// BlueprintGeneratedClass RID_IG_ShopPopup.RID_IG_ShopPopup_C
// 0x0000 (0x0030 - 0x0030)
class URID_IG_ShopPopup_C : public URichTextBlockImageDecorator
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RID_IG_ShopPopup.RID_IG_ShopPopup_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
