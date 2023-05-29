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

// WidgetBlueprintGeneratedClass GameMapIconEnemyDeath.GameMapIconEnemyDeath_C
// 0x0000 (0x02F0 - 0x02F0)
class UGameMapIconEnemyDeath_C : public UPDGameMapIconFxUI
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameMapIconEnemyDeath.GameMapIconEnemyDeath_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
