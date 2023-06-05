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

// Class BinkMediaPlayer.BinkFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UBinkFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class BinkMediaPlayer.BinkFunctionLibrary");
		
		return ptr;
	}


	struct FTimespan STATIC_BinkLoadingMovie_GetTime();
	struct FTimespan STATIC_BinkLoadingMovie_GetDuration();
	void STATIC_Bink_DrawOverlays();
};


// Class BinkMediaPlayer.BinkMediaPlayer
// 0x00D0 (0x00F8 - 0x0028)
class UBinkMediaPlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty BinkMediaPlayer.BinkMediaPlayer.OnMediaClosed
	unsigned char                                      UnknownData02[0x10];                                      // 0x0040(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty BinkMediaPlayer.BinkMediaPlayer.OnMediaOpened
	unsigned char                                      UnknownData03[0x10];                                      // 0x0050(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty BinkMediaPlayer.BinkMediaPlayer.OnMediaReachedEnd
	unsigned char                                      UnknownData04[0x10];                                      // 0x0060(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty BinkMediaPlayer.BinkMediaPlayer.OnPlaybackSuspended
	unsigned char                                      Looping : 1;                                              // 0x0070(0x0001) (Edit)
	unsigned char                                      StartImmediately : 1;                                     // 0x0070(0x0001) (Edit)
	unsigned char                                      DelayedOpen : 1;                                          // 0x0070(0x0001) (Edit)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	struct FVector2D                                   BinkDestinationUpperLeft;                                 // 0x0074(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   BinkDestinationLowerRight;                                // 0x007C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	struct FString                                     URL;                                                      // 0x0088(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<EBinkMediaPlayerBinkBufferModes>       BinkBufferMode;                                           // 0x0098(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBinkMediaPlayerBinkSoundTrack>        BinkSoundTrack;                                           // 0x0099(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x009A(0x0002) MISSED OFFSET
	int                                                BinkSoundTrackStart;                                      // 0x009C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBinkMediaPlayerBinkDrawStyle>         BinkDrawStyle;                                            // 0x00A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	int                                                BinkLayerDepth;                                           // 0x00A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x50];                                      // 0x00A8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class BinkMediaPlayer.BinkMediaPlayer");
		
		return ptr;
	}


	bool SupportsSeeking();
	bool SupportsScrubbing();
	bool SupportsRate(float Rate, bool Unthinned);
	void Stop();
	void SetVolume(float Rate);
	bool SetRate(float Rate);
	bool SetLooping(bool InLooping);
	bool Seek(const struct FTimespan& InTime);
	bool Rewind();
	bool Play();
	bool Pause();
	bool OpenUrl(const struct FString& NewURL);
	bool IsStopped();
	bool IsPlaying();
	bool IsPaused();
	bool IsLooping();
	bool IsInitialized();
	struct FString GetUrl();
	struct FTimespan GetTime();
	float GetRate();
	struct FTimespan GetDuration();
	void Draw(class UTexture* Texture, bool tonemap, int out_nits, float Alpha, bool srgb_decode, bool hdr);
	void CloseUrl();
	bool CanPlay();
	bool CanPause();
};


// Class BinkMediaPlayer.BinkMediaTexture
// 0x0030 (0x0190 - 0x0160)
class UBinkMediaTexture : public UTexture
{
public:
	class UBinkMediaPlayer*                            MediaPlayer;                                              // 0x0160(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPixelFormat>                          PixelFormat;                                              // 0x0168(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               tonemap;                                                  // 0x0169(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x016A(0x0002) MISSED OFFSET
	float                                              OutputNits;                                               // 0x016C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // 0x0170(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               DecodeSRGB;                                               // 0x0174(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1B];                                      // 0x0175(0x001B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class BinkMediaPlayer.BinkMediaTexture");
		
		return ptr;
	}


	void SetMediaPlayer(class UBinkMediaPlayer* InMediaPlayer);
	void Clear();
};


// Class BinkMediaPlayer.BinkMoviePlayerSettings
// 0x0020 (0x0048 - 0x0028)
class UBinkMoviePlayerSettings : public UObject
{
public:
	TEnumAsByte<EBinkMoviePlayerBinkBufferModes>       BinkBufferMode;                                           // 0x0028(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	TEnumAsByte<EBinkMoviePlayerBinkSoundTrack>        BinkSoundTrack;                                           // 0x0029(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	int                                                BinkSoundTrackStart;                                      // 0x002C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	struct FVector2D                                   BinkDestinationUpperLeft;                                 // 0x0030(0x0008) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	struct FVector2D                                   BinkDestinationLowerRight;                                // 0x0038(0x0008) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	TEnumAsByte<EPixelFormat>                          BinkPixelFormat;                                          // 0x0040(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class BinkMediaPlayer.BinkMoviePlayerSettings");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
