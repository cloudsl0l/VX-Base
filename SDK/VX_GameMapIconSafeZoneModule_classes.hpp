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

// WidgetBlueprintGeneratedClass GameMapIconSafeZoneModule.GameMapIconSafeZoneModule_C
// 0x0008 (0x0330 - 0x0328)
class UGameMapIconSafeZoneModule_C : public UPDGameMapIconSafeZoneModule
{
public:
	class UPDTextBlock*                                TB_Name;                                                  // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameMapIconSafeZoneModule.GameMapIconSafeZoneModule_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
