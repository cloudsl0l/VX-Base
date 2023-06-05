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

// Enum MagicLeapPrivileges.EMagicLeapPrivilege
enum class EMagicLeapPrivilege : uint8_t
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
	EMagicLeapPrivilege_MAX        = 38
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
