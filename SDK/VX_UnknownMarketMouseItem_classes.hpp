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

// WidgetBlueprintGeneratedClass UnknownMarketMouseItem.UnknownMarketMouseItem_C
// 0x0008 (0x0310 - 0x0308)
class UUnknownMarketMouseItem_C : public UPDUnknownMarketMouseItem
{
public:
	class UImage*                                      IMG_BoxGlow;                                              // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UnknownMarketMouseItem.UnknownMarketMouseItem_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
