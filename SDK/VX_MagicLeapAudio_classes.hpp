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

// Class MagicLeapAudio.MagicLeapAudioFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapAudioFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MagicLeapAudio.MagicLeapAudioFunctionLibrary");
		
		return ptr;
	}


	bool STATIC_SetOnAudioJackUnpluggedDelegate(const struct FScriptDelegate& ResultDelegate);
	bool STATIC_SetOnAudioJackPluggedDelegate(const struct FScriptDelegate& ResultDelegate);
	bool STATIC_SetMicMute(bool IsMuted);
	bool STATIC_IsMicMuted();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
