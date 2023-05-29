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

// WidgetBlueprintGeneratedClass UnKnownMarketWeaponCategory.UnKnownMarketWeaponCategory_C
// 0x0008 (0x0318 - 0x0310)
class UUnKnownMarketWeaponCategory_C : public UPDUnKnownMarketWeaponCategory
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0310(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UnKnownMarketWeaponCategory.UnKnownMarketWeaponCategory_C");
		
		return ptr;
	}


	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_UnKnownMarketWeaponCategory(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
