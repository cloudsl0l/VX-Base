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

// WidgetBlueprintGeneratedClass CustomizeListItem.CustomizeListItem_C
// 0x0008 (0x0350 - 0x0348)
class UCustomizeListItem_C : public UPDCustomizeListItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CustomizeListItem.CustomizeListItem_C");
		
		return ptr;
	}


	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void ExecuteUbergraph_CustomizeListItem(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
