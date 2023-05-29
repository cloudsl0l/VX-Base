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

// Class UObjectPlugin.MyPluginObject
// 0x0010 (0x0038 - 0x0028)
class UMyPluginObject : public UObject
{
public:
	struct FMyPluginStruct                             MyStruct;                                                 // 0x0028(0x0010)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class UObjectPlugin.MyPluginObject");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
