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

// BlueprintGeneratedClass RID_OG_Popup.RID_OG_Popup_C
// 0x0000 (0x0030 - 0x0030)
class URID_OG_Popup_C : public URichTextBlockImageDecorator
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RID_OG_Popup.RID_OG_Popup_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
