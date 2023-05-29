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

// BlueprintGeneratedClass DmgTypeBP_Environmental.DmgTypeBP_Environmental_C
// 0x0000 (0x0040 - 0x0040)
class UDmgTypeBP_Environmental_C : public UDamageType
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DmgTypeBP_Environmental.DmgTypeBP_Environmental_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
