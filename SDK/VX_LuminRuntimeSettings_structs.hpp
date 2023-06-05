#pragma once

// Veiled Experts (idk bro) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum LuminRuntimeSettings.ELuminPrivilege
enum class ELuminPrivilege : uint8_t
{
	Invalid                        = 0,
	BatteryInfo                    = 1,
	CameraCapture                  = 2,
	ComputerVision                 = 3,
	WorldReconstruction            = 4,
	InAppPurchase                  = 5,
	AudioCaptureMic                = 6,
	DrmCertificates                = 7,
	Occlusion                      = 8,
	LowLatencyLightwear            = 9,
	Internet                       = 10,
	IdentityRead                   = 11,
	BackgroundDownload             = 12,
	BackgroundUpload               = 13,
	MediaDrm                       = 14,
	Media                          = 15,
	MediaMetadata                  = 16,
	PowerInfo                      = 17,
	LocalAreaNetwork               = 18,
	VoiceInput                     = 19,
	Documents                      = 20,
	ConnectBackgroundMusicService  = 21,
	RegisterBackgroundMusicService = 22,
	PcfRead                        = 23,
	PwFoundObjRead                 = 24,
	NormalNotificationsUsage       = 25,
	MusicService                   = 26,
	ControllerPose                 = 27,
	GesturesSubscribe              = 28,
	GesturesConfig                 = 29,
	AddressBookRead                = 30,
	AddressBookWrite               = 31,
	AddressBookBasicAccess         = 32,
	CoarseLocation                 = 33,
	FineLocation                   = 34,
	HandMesh                       = 35,
	WifiStatusRead                 = 36,
	SocialConnectionsInvitesAccess = 37,
	ELuminPrivilege_MAX            = 38
};


// Enum LuminRuntimeSettings.ELuminFrameTimingHint
enum class ELuminFrameTimingHint : uint8_t
{
	Unspecified                    = 0,
	Maximum                        = 1,
	FPS                            = 2,
	FPS01                          = 3,
	ELuminFrameTimingHint_MAX      = 4
};


// Enum LuminRuntimeSettings.ELuminComponentType
enum class ELuminComponentType : uint8_t
{
	Universe                       = 0,
	Fullscreen                     = 1,
	SearchProvider                 = 2,
	MusicService                   = 3,
	Screens                        = 4,
	ScreensImmersive               = 5,
	Console                        = 6,
	SystemUI                       = 7,
	ELuminComponentType_MAX        = 8
};


// Enum LuminRuntimeSettings.ELuminComponentSubElementType
enum class ELuminComponentSubElementType : uint8_t
{
	FileExtension                  = 0,
	MimeType                       = 1,
	Mode                           = 2,
	MusicAttribute                 = 3,
	Schema                         = 4,
	ELuminComponentSubElementType_MAX = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LuminRuntimeSettings.LocalizedIconInfo
// 0x0030
struct FLocalizedIconInfo
{
	struct FString                                     LanguageCode;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FDirectoryPath                              IconModelPath;                                            // 0x0010(0x0010) (Edit, Config, GlobalConfig)
	struct FDirectoryPath                              IconPortalPath;                                           // 0x0020(0x0010) (Edit, Config, GlobalConfig)
};

// ScriptStruct LuminRuntimeSettings.LocalizedIconInfos
// 0x0010
struct FLocalizedIconInfos
{
	TArray<struct FLocalizedIconInfo>                  IconData;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
};

// ScriptStruct LuminRuntimeSettings.LuminComponentSubElement
// 0x0018
struct FLuminComponentSubElement
{
	ELuminComponentSubElementType                      ElementType;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     Value;                                                    // 0x0008(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
};

// ScriptStruct LuminRuntimeSettings.LuminComponentElement
// 0x0048
struct FLuminComponentElement
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     VisibleName;                                              // 0x0010(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     ExecutableName;                                           // 0x0020(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	ELuminComponentType                                ComponentType;                                            // 0x0030(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	TArray<struct FLuminComponentSubElement>           ExtraComponentSubElements;                                // 0x0038(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
};

// ScriptStruct LuminRuntimeSettings.LocalizedAppName
// 0x0020
struct FLocalizedAppName
{
	struct FString                                     LanguageCode;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     AppName;                                                  // 0x0010(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
