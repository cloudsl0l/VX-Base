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

// WidgetBlueprintGeneratedClass PlayLogMapIconDroneModule.PlayLogMapIconDroneModule_C
// 0x0000 (0x0300 - 0x0300)
class UPlayLogMapIconDroneModule_C : public UPDPlayLogMapIconNpcItemModule
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayLogMapIconDroneModule.PlayLogMapIconDroneModule_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
