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

// BlueprintGeneratedClass RichTextBlockImageDecorator.RichTextBlockImageDecorator_C
// 0x0000 (0x0030 - 0x0030)
class URichTextBlockImageDecorator_C : public URichTextBlockImageDecorator
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RichTextBlockImageDecorator.RichTextBlockImageDecorator_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
