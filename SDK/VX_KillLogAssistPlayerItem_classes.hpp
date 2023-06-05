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

// WidgetBlueprintGeneratedClass KillLogAssistPlayerItem.KillLogAssistPlayerItem_C
// 0x0000 (0x02E8 - 0x02E8)
class UKillLogAssistPlayerItem_C : public UPDKillLogAssistPlayerItem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass KillLogAssistPlayerItem.KillLogAssistPlayerItem_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
