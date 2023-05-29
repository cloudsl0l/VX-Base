#pragma once

// Veiled Experts (i dont know the version bro) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AkAudio.EAkCallbackType
enum class EAkCallbackType : uint8_t
{
	EndOfEvent                     = 0,
	Marker                         = 1,
	Duration                       = 2,
	Starvation                     = 3,
	MusicPlayStarted               = 4,
	MusicSyncBeat                  = 5,
	MusicSyncBar                   = 6,
	MusicSyncEntry                 = 7,
	MusicSyncExit                  = 8,
	MusicSyncGrid                  = 9,
	MusicSyncUserCue               = 10,
	MusicSyncPoint                 = 11,
	MIDIEvent                      = 12,
	EAkCallbackType_MAX            = 13
};


// Enum AkAudio.EAkResult
enum class EAkResult : uint8_t
{
	NotImplemented                 = 0,
	Success                        = 1,
	Fail                           = 2,
	PartialSuccess                 = 3,
	NotCompatible                  = 4,
	AlreadyConnected               = 5,
	InvalidFile                    = 6,
	AudioFileHeaderTooLarge        = 7,
	MaxReached                     = 8,
	InvalidID                      = 9,
	IDNotFound                     = 10,
	InvalidInstanceID              = 11,
	NoMoreData                     = 12,
	InvalidStateGroup              = 13,
	ChildAlreadyHasAParent         = 14,
	InvalidLanguage                = 15,
	CannotAddItseflAsAChild        = 16,
	InvalidParameter               = 17,
	ElementAlreadyInList           = 18,
	PathNotFound                   = 19,
	PathNoVertices                 = 20,
	PathNotRunning                 = 21,
	PathNotPaused                  = 22,
	PathNodeAlreadyInList          = 23,
	PathNodeNotInList              = 24,
	DataNeeded                     = 25,
	NoDataNeeded                   = 26,
	DataReady                      = 27,
	NoDataReady                    = 28,
	InsufficientMemory             = 29,
	Cancelled                      = 30,
	UnknownBankID                  = 31,
	BankReadError                  = 32,
	InvalidSwitchType              = 33,
	FormatNotReady                 = 34,
	WrongBankVersion               = 35,
	FileNotFound                   = 36,
	DeviceNotReady                 = 37,
	BankAlreadyLoaded              = 38,
	RenderedFX                     = 39,
	ProcessNeeded                  = 40,
	ProcessDone                    = 41,
	MemManagerNotInitialized       = 42,
	StreamMgrNotInitialized        = 43,
	SSEInstructionsNotSupported    = 44,
	Busy                           = 45,
	UnsupportedChannelConfig       = 46,
	PluginMediaNotAvailable        = 47,
	MustBeVirtualized              = 48,
	CommandTooLarge                = 49,
	RejectedByFilter               = 50,
	InvalidCustomPlatformName      = 51,
	DLLCannotLoad                  = 52,
	DLLPathNotFound                = 53,
	NoJavaVM                       = 54,
	OpenSLError                    = 55,
	PluginNotRegistered            = 56,
	DataAlignmentError             = 57,
	EAkResult_MAX                  = 58
};


// Enum AkAudio.EAkAndroidAudioAPI
enum class EAkAndroidAudioAPI : uint8_t
{
	AAudio                         = 0,
	OpenSL_ES                      = 1,
	EAkAndroidAudioAPI_MAX         = 2
};


// Enum AkAudio.EAkAudioSessionMode
enum class EAkAudioSessionMode : uint8_t
{
	Default                        = 0,
	VoiceChat                      = 1,
	GameChat                       = 2,
	VideoRecording                 = 3,
	Measurement                    = 4,
	MoviePlayback                  = 5,
	VideoChat                      = 6,
	EAkAudioSessionMode_MAX        = 7
};


// Enum AkAudio.EAkAudioSessionCategoryOptions
enum class EAkAudioSessionCategoryOptions : uint8_t
{
	MixWithOthers                  = 0,
	DuckOthers                     = 1,
	AllowBluetooth                 = 2,
	DefaultToSpeaker               = 3,
	EAkAudioSessionCategoryOptions_MAX = 4
};


// Enum AkAudio.EAkAudioSessionCategory
enum class EAkAudioSessionCategory : uint8_t
{
	Ambient                        = 0,
	SoloAmbient                    = 1,
	PlayAndRecord                  = 2,
	EAkAudioSessionCategory_MAX    = 3
};


// Enum AkAudio.EReflectionFilterBits
enum class EReflectionFilterBits : uint8_t
{
	Wall                           = 0,
	Ceiling                        = 1,
	Floor                          = 2,
	EReflectionFilterBits_MAX      = 3
};


// Enum AkAudio.AkCodecId
enum class EAkCodecId : uint8_t
{
	None                           = 0,
	PCM                            = 1,
	ADPCM                          = 2,
	XMA                            = 3,
	Vorbis                         = 4,
	AAC                            = 5,
	ATRAC9                         = 6,
	OpusNX                         = 7,
	AkOpus                         = 8,
	AkOpusWEM                      = 9,
	AkCodecId_MAX                  = 10
};


// Enum AkAudio.EAkMidiCcValues
enum class EAkMidiCcValues : uint8_t
{
	AkMidiCcBankSelectCoarse       = 0,
	AkMidiCcModWheelCoarse         = 1,
	AkMidiCcBreathCtrlCoarse       = 2,
	AkMidiCcCtrl3Coarse            = 3,
	AkMidiCcFootPedalCoarse        = 4,
	AkMidiCcPortamentoCoarse       = 5,
	AkMidiCcDataEntryCoarse        = 6,
	AkMidiCcVolumeCoarse           = 7,
	AkMidiCcBalanceCoarse          = 8,
	AkMidiCcCtrl9Coarse            = 9,
	AkMidiCcPanPositionCoarse      = 10,
	AkMidiCcExpressionCoarse       = 11,
	AkMidiCcEffectCtrl1Coarse      = 12,
	AkMidiCcEffectCtrl2Coarse      = 13,
	AkMidiCcCtrl14Coarse           = 14,
	AkMidiCcCtrl15Coarse           = 15,
	AkMidiCcGenSlider1             = 16,
	AkMidiCcGenSlider2             = 17,
	AkMidiCcGenSlider3             = 18,
	AkMidiCcGenSlider4             = 19,
	AkMidiCcCtrl20Coarse           = 20,
	AkMidiCcCtrl21Coarse           = 21,
	AkMidiCcCtrl22Coarse           = 22,
	AkMidiCcCtrl23Coarse           = 23,
	AkMidiCcCtrl24Coarse           = 24,
	AkMidiCcCtrl25Coarse           = 25,
	AkMidiCcCtrl26Coarse           = 26,
	AkMidiCcCtrl27Coarse           = 27,
	AkMidiCcCtrl28Coarse           = 28,
	AkMidiCcCtrl29Coarse           = 29,
	AkMidiCcCtrl30Coarse           = 30,
	AkMidiCcCtrl31Coarse           = 31,
	AkMidiCcBankSelectFine         = 32,
	AkMidiCcModWheelFine           = 33,
	AkMidiCcBreathCtrlFine         = 34,
	AkMidiCcCtrl3Fine              = 35,
	AkMidiCcFootPedalFine          = 36,
	AkMidiCcPortamentoFine         = 37,
	AkMidiCcDataEntryFine          = 38,
	AkMidiCcVolumeFine             = 39,
	AkMidiCcBalanceFine            = 40,
	AkMidiCcCtrl9Fine              = 41,
	AkMidiCcPanPositionFine        = 42,
	AkMidiCcExpressionFine         = 43,
	AkMidiCcEffectCtrl1Fine        = 44,
	AkMidiCcEffectCtrl2Fine        = 45,
	AkMidiCcCtrl14Fine             = 46,
	AkMidiCcCtrl15Fine             = 47,
	AkMidiCcCtrl20Fine             = 48,
	AkMidiCcCtrl21Fine             = 49,
	AkMidiCcCtrl22Fine             = 50,
	AkMidiCcCtrl23Fine             = 51,
	AkMidiCcCtrl24Fine             = 52,
	AkMidiCcCtrl25Fine             = 53,
	AkMidiCcCtrl26Fine             = 54,
	AkMidiCcCtrl27Fine             = 55,
	AkMidiCcCtrl28Fine             = 56,
	AkMidiCcCtrl29Fine             = 57,
	AkMidiCcCtrl30Fine             = 58,
	AkMidiCcCtrl31Fine             = 59,
	AkMidiCcHoldPedal              = 60,
	AkMidiCcPortamentoOnOff        = 61,
	AkMidiCcSustenutoPedal         = 62,
	AkMidiCcSoftPedal              = 63,
	AkMidiCcLegatoPedal            = 64,
	AkMidiCcHoldPedal2             = 65,
	AkMidiCcSoundVariation         = 66,
	AkMidiCcSoundTimbre            = 67,
	AkMidiCcSoundReleaseTime       = 68,
	AkMidiCcSoundAttackTime        = 69,
	AkMidiCcSoundBrightness        = 70,
	AkMidiCcSoundCtrl6             = 71,
	AkMidiCcSoundCtrl7             = 72,
	AkMidiCcSoundCtrl8             = 73,
	AkMidiCcSoundCtrl9             = 74,
	AkMidiCcSoundCtrl10            = 75,
	AkMidiCcGeneralButton1         = 76,
	AkMidiCcGeneralButton2         = 77,
	AkMidiCcGeneralButton3         = 78,
	AkMidiCcGeneralButton4         = 79,
	AkMidiCcReverbLevel            = 80,
	AkMidiCcTremoloLevel           = 81,
	AkMidiCcChorusLevel            = 82,
	AkMidiCcCelesteLevel           = 83,
	AkMidiCcPhaserLevel            = 84,
	AkMidiCcDataButtonP1           = 85,
	AkMidiCcDataButtonM1           = 86,
	AkMidiCcNonRegisterCoarse      = 87,
	AkMidiCcNonRegisterFine        = 88,
	AkMidiCcAllSoundOff            = 89,
	AkMidiCcAllControllersOff      = 90,
	AkMidiCcLocalKeyboard          = 91,
	AkMidiCcAllNotesOff            = 92,
	AkMidiCcOmniModeOff            = 93,
	AkMidiCcOmniModeOn             = 94,
	AkMidiCcOmniMonophonicOn       = 95,
	AkMidiCcOmniPolyphonicOn       = 96,
	EAkMidiCcValues_MAX            = 97
};


// Enum AkAudio.EAkMidiEventType
enum class EAkMidiEventType : uint8_t
{
	AkMidiEventTypeInvalid         = 0,
	AkMidiEventTypeNoteOff         = 1,
	AkMidiEventTypeNoteOn          = 2,
	AkMidiEventTypeNoteAftertouch  = 3,
	AkMidiEventTypeController      = 4,
	AkMidiEventTypeProgramChange   = 5,
	AkMidiEventTypeChannelAftertouch = 6,
	AkMidiEventTypePitchBend       = 7,
	AkMidiEventTypeSysex           = 8,
	AkMidiEventTypeEscape          = 9,
	AkMidiEventTypeMeta            = 10,
	EAkMidiEventType_MAX           = 11
};


// Enum AkAudio.ERTPCValueType
enum class ERTPCValueType : uint8_t
{
	Default                        = 0,
	Global                         = 1,
	GameObject                     = 2,
	PlayingID                      = 3,
	Unavailable                    = 4,
	ERTPCValueType_MAX             = 5
};


// Enum AkAudio.EAkCurveInterpolation
enum class EAkCurveInterpolation : uint8_t
{
	Log3                           = 0,
	Sine                           = 1,
	Log1                           = 2,
	InvSCurve                      = 3,
	Linear                         = 4,
	SCurve                         = 5,
	Exp1                           = 6,
	SineRecip                      = 7,
	Exp3                           = 8,
	LastFadeCurve                  = 9,
	Constant                       = 10,
	EAkCurveInterpolation_MAX      = 11
};


// Enum AkAudio.AkActionOnEventType
enum class EAkActionOnEventType : uint8_t
{
	Stop                           = 0,
	Pause                          = 1,
	Resume                         = 2,
	Break                          = 3,
	ReleaseEnvelope                = 4,
	AkActionOnEventType_MAX        = 5
};


// Enum AkAudio.AkMultiPositionType
enum class EAkMultiPositionType : uint8_t
{
	SingleSource                   = 0,
	MultiSources                   = 1,
	MultiDirections                = 2,
	AkMultiPositionType_MAX        = 3
};


// Enum AkAudio.AkSpeakerConfiguration
enum class EAkSpeakerConfiguration : uint8_t
{
	Ak_Speaker_Front_Left          = 0,
	Ak_Speaker_Front_Right         = 1,
	Ak_Speaker_Front_Center        = 2,
	Ak_Speaker_Low_Frequency       = 3,
	Ak_Speaker_Back_Left           = 4,
	Ak_Speaker_Back_Right          = 5,
	Ak_Speaker_Back_Center         = 6,
	Ak_Speaker_Side_Left           = 7,
	Ak_Speaker_Side_Right          = 8,
	Ak_Speaker_Top                 = 9,
	Ak_Speaker_Height_Front_Left   = 10,
	Ak_Speaker_Height_Front_Center = 11,
	Ak_Speaker_Height_Front_Right  = 12,
	Ak_Speaker_Height_Back_Left    = 13,
	Ak_Speaker_Height_Back_Center  = 14,
	Ak_Speaker_Height_Back_Right   = 15,
	Ak_Speaker_MAX                 = 16
};


// Enum AkAudio.AkChannelConfiguration
enum class EAkChannelConfiguration : uint8_t
{
	Ak_Parent                      = 0,
	Ak_LFE                         = 1,
	AK_Audio_Objects               = 2,
	Ak_1                           = 3,
	Ak_2                           = 4,
	Ak_201                         = 5,
	Ak_3                           = 6,
	Ak_301                         = 7,
	Ak_4                           = 8,
	Ak_401                         = 9,
	Ak_5                           = 10,
	Ak_501                         = 11,
	Ak_7                           = 12,
	Ak_5_1                         = 13,
	Ak_7_1                         = 14,
	Ak_7_101                       = 15,
	Ak_Auro_9                      = 16,
	Ak_Auro_10                     = 17,
	Ak_Auro_11                     = 18,
	Ak_Auro_13                     = 19,
	Ak_Ambisonics_1st_order        = 20,
	Ak_Ambisonics_2nd_order        = 21,
	Ak_Ambisonics_3rd_order        = 22,
	Ak_Ambisonics_4th_order        = 23,
	Ak_Ambisonics_5th_order        = 24,
	AkChannelConfiguration_MAX     = 25
};


// Enum AkAudio.AkAcousticPortalState
enum class EAkAcousticPortalState : uint8_t
{
	Closed                         = 0,
	Open                           = 1,
	AkAcousticPortalState_MAX      = 2
};


// Enum AkAudio.PanningRule
enum class EPanningRule : uint8_t
{
	PanningRule_Speakers           = 0,
	PanningRule_Headphones         = 1,
	PanningRule_MAX                = 2
};


// Enum AkAudio.AkMeshType
enum class EAkMeshType : uint8_t
{
	StaticMesh                     = 0,
	CollisionMesh                  = 1,
	AkMeshType_MAX                 = 2
};


// Enum AkAudio.EAkCommSystem
enum class EAkCommSystem : uint8_t
{
	Socket                         = 0,
	HTCS                           = 1,
	EAkCommSystem_MAX              = 2
};


// Enum AkAudio.EAkChannelMask
enum class EAkChannelMask : uint8_t
{
	FrontLeft                      = 0,
	FrontRight                     = 1,
	FrontCenter                    = 2,
	LowFrequency                   = 3,
	BackLeft                       = 4,
	BackRight                      = 5,
	BackCenter                     = 6,
	SideLeft                       = 7,
	SideRight                      = 8,
	Top                            = 9,
	HeightFrontLeft                = 10,
	HeightFrontCenter              = 11,
	HeightFrontRight               = 12,
	HeightBackLeft                 = 13,
	HeightBackCenter               = 14,
	HeightBackRight                = 15,
	EAkChannelMask_MAX             = 16
};


// Enum AkAudio.EAkChannelConfigType
enum class EAkChannelConfigType : uint8_t
{
	Anonymous                      = 0,
	Standard                       = 1,
	Ambisonic                      = 2,
	EAkChannelConfigType_MAX       = 3
};


// Enum AkAudio.EAkPanningRule
enum class EAkPanningRule : uint8_t
{
	Speakers                       = 0,
	Headphones                     = 1,
	EAkPanningRule_MAX             = 2
};


// Enum AkAudio.EAkFitToGeometryMode
enum class EAkFitToGeometryMode : uint8_t
{
	OrientedBox                    = 0,
	AlignedBox                     = 1,
	ConvexPolyhedron               = 2,
	EAkFitToGeometryMode_MAX       = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AkAudio.AkMainOutputSettings
// 0x0028
struct FAkMainOutputSettings
{
	struct FString                                     AudioDeviceShareset;                                      // 0x0000(0x0010) (Edit, ZeroConstructor)
	uint32_t                                           DeviceID;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EAkPanningRule                                     PanningRule;                                              // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0014(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	EAkChannelConfigType                               ChannelConfigType;                                        // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0018(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	uint32_t                                           ChannelMask;                                              // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           NumberOfChannels;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct AkAudio.AkSpatialAudioSettings
// 0x0020
struct FAkSpatialAudioSettings
{
	uint32_t                                           MaxSoundPropagationDepth;                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MovementThreshold;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           NumberOfPrimaryRays;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ReflectionOrder;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaximumPathLength;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CPULimitPercentage;                                       // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               EnableDiffractionOnReflections;                           // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               EnableGeometricDiffractionAndTransmission;                // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CalcEmitterVirtualPosition;                               // 0x001A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseObstruction;                                           // 0x001B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseOcclusion;                                             // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct AkAudio.AkCommonInitializationSettings
// 0x0060
struct FAkCommonInitializationSettings
{
	uint32_t                                           MaximumNumberOfMemoryPools;                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MaximumNumberOfPositioningPaths;                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           CommandQueueSize;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           SamplesPerFrame;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAkMainOutputSettings                       MainOutputSettings;                                       // 0x0010(0x0028) (Edit)
	float                                              StreamingLookAheadRatio;                                  // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint16_t                                           NumberOfRefillsInVoice;                                   // 0x003C(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
	struct FAkSpatialAudioSettings                     SpatialAudioSettings;                                     // 0x0040(0x0020) (Edit)
};

// ScriptStruct AkAudio.AkCommonInitializationSettingsWithSampleRate
// 0x0008 (0x0068 - 0x0060)
struct FAkCommonInitializationSettingsWithSampleRate : public FAkCommonInitializationSettings
{
	uint32_t                                           SampleRate;                                               // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct AkAudio.AkCommunicationSettings
// 0x0020
struct FAkCommunicationSettings
{
	uint32_t                                           PoolSize;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint16_t                                           DiscoveryBroadcastPort;                                   // 0x0004(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	uint16_t                                           CommandPort;                                              // 0x0006(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	uint16_t                                           NotificationPort;                                         // 0x0008(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct FString                                     NetworkName;                                              // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AkAudio.AkCommunicationSettingsWithSystemInitialization
// 0x0008 (0x0028 - 0x0020)
struct FAkCommunicationSettingsWithSystemInitialization : public FAkCommunicationSettings
{
	bool                                               InitializeSystemComms;                                    // 0x0020(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct AkAudio.AkAdvancedInitializationSettings
// 0x002C
struct FAkAdvancedInitializationSettings
{
	uint32_t                                           IO_MemorySize;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           IO_Granularity;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetAutoStreamBufferLength;                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseStreamCache;                                           // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	uint32_t                                           MaximumPinnedBytesInCache;                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               EnableGameSyncPreparation;                                // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	uint32_t                                           ContinuousPlaybackLookAhead;                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MonitorQueuePoolSize;                                     // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MaximumHardwareTimeoutMs;                                 // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DebugOutOfRangeCheckEnabled;                              // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	float                                              DebugOutOfRangeLimit;                                     // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkAdvancedInitializationSettingsWithMultiCoreRendering
// 0x0004 (0x0030 - 0x002C)
struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : public FAkAdvancedInitializationSettings
{
	bool                                               EnableMultiCoreRendering;                                 // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct AkAudio.AkAndroidAdvancedInitializationSettings
// 0x0008 (0x0038 - 0x0030)
struct FAkAndroidAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	uint32_t                                           AudioAPI;                                                 // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RoundFrameSizeToHardwareSize;                             // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
};

// ScriptStruct AkAudio.AkExternalSourceInfo
// 0x0038
struct FAkExternalSourceInfo
{
	struct FString                                     ExternalSrcName;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EAkCodecId                                         CodecID;                                                  // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     Filename;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UAkExternalMediaAsset*                       ExternalSourceAsset;                                      // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsStreamed;                                               // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct AkAudio.AkBoolPropertyToControl
// 0x0010
struct FAkBoolPropertyToControl
{
	struct FString                                     ItemProperty;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AkAudio.AkWwiseObjectDetails
// 0x0030
struct FAkWwiseObjectDetails
{
	struct FString                                     ItemName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     ItemPath;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     ItemId;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AkAudio.AkWwiseItemToControl
// 0x0040
struct FAkWwiseItemToControl
{
	struct FAkWwiseObjectDetails                       ItemPicked;                                               // 0x0000(0x0030) (Edit, EditConst)
	struct FString                                     ItemPath;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AkAudio.AkChannelMask
// 0x0004
struct FAkChannelMask
{
	int                                                ChannelMask;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkMidiEventBase
// 0x0002
struct FAkMidiEventBase
{
	EAkMidiEventType                                   Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Chan;                                                     // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkMidiProgramChange
// 0x0001 (0x0003 - 0x0002)
struct FAkMidiProgramChange : public FAkMidiEventBase
{
	unsigned char                                      ProgramNum;                                               // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkMidiPitchBend
// 0x0006 (0x0008 - 0x0002)
struct FAkMidiPitchBend : public FAkMidiEventBase
{
	unsigned char                                      ValueLsb;                                                 // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ValueMsb;                                                 // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FullValue;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkMidiNoteOnOff
// 0x0002 (0x0004 - 0x0002)
struct FAkMidiNoteOnOff : public FAkMidiEventBase
{
	unsigned char                                      Note;                                                     // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Velocity;                                                 // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkMidiNoteAftertouch
// 0x0002 (0x0004 - 0x0002)
struct FAkMidiNoteAftertouch : public FAkMidiEventBase
{
	unsigned char                                      Note;                                                     // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Value;                                                    // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkMidiGeneric
// 0x0002 (0x0004 - 0x0002)
struct FAkMidiGeneric : public FAkMidiEventBase
{
	unsigned char                                      Param1;                                                   // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Param2;                                                   // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkMidiChannelAftertouch
// 0x0001 (0x0003 - 0x0002)
struct FAkMidiChannelAftertouch : public FAkMidiEventBase
{
	unsigned char                                      Value;                                                    // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkMidiCc
// 0x0002 (0x0004 - 0x0002)
struct FAkMidiCc : public FAkMidiEventBase
{
	EAkMidiCcValues                                    Cc;                                                       // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Value;                                                    // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkSegmentInfo
// 0x0024
struct FAkSegmentInfo
{
	int                                                CurrentPosition;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PreEntryDuration;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ActiveDuration;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PostExitDuration;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RemainingLookAheadTime;                                   // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BeatDuration;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BarDuration;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GridDuration;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GridOffset;                                               // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkGeometrySurfaceOverride
// 0x0018
struct FAkGeometrySurfaceOverride
{
	class UAkAcousticTexture*                          AcousticTexture;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableOcclusionOverride : 1;                             // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              OcclusionValue;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SurfaceArea;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct AkAudio.AkAcousticSurface
// 0x0018
struct FAkAcousticSurface
{
	uint32_t                                           Texture;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Occlusion;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct AkAudio.AkTriangle
// 0x0008
struct FAkTriangle
{
	uint16_t                                           Point0;                                                   // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           Point1;                                                   // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           Point2;                                                   // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           Surface;                                                  // 0x0006(0x0002) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkGeometryData
// 0x0050
struct FAkGeometryData
{
	TArray<struct FVector>                             Vertices;                                                 // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FAkAcousticSurface>                  Surfaces;                                                 // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FAkTriangle>                         Triangles;                                                // 0x0020(0x0010) (ZeroConstructor)
	TArray<class UPhysicalMaterial*>                   ToOverrideAcousticTexture;                                // 0x0030(0x0010) (ZeroConstructor)
	TArray<class UPhysicalMaterial*>                   ToOverrideOcclusion;                                      // 0x0040(0x0010) (ZeroConstructor)
};

// ScriptStruct AkAudio.AkHololensAdvancedInitializationSettings
// 0x0004 (0x0034 - 0x0030)
struct FAkHololensAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	bool                                               UseHeadMountedDisplayAudioDevice;                         // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
};

// ScriptStruct AkAudio.AkPluginInfo
// 0x0028
struct FAkPluginInfo
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	uint32_t                                           PluginID;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     dll;                                                      // 0x0018(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct AkAudio.AkAudioSession
// 0x000C
struct FAkAudioSession
{
	EAkAudioSessionCategory                            AudioSessionCategory;                                     // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	uint32_t                                           AudioSessionCategoryOptions;                              // 0x0004(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	EAkAudioSessionMode                                AudioSessionMode;                                         // 0x0008(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0008(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct AkAudio.AkPropertyToControl
// 0x0010
struct FAkPropertyToControl
{
	struct FString                                     ItemProperty;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AkAudio.AkPS4AdvancedInitializationSettings
// 0x0008 (0x0038 - 0x0030)
struct FAkPS4AdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	uint32_t                                           ACPBatchBufferSize;                                       // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseHardwareCodecLowLatencyMode;                           // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
};

// ScriptStruct AkAudio.AkAcousticTextureParams
// 0x0020
struct FAkAcousticTextureParams
{
	struct FVector4                                    AbsorptionValues;                                         // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct AkAudio.AkPoly
// 0x0018
struct FAkPoly
{
	class UAkAcousticTexture*                          Texture;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Occlusion;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableSurface;                                            // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              SurfaceArea;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct AkAudio.AkCommunicationSettingsWithCommSelection
// 0x0008 (0x0028 - 0x0020)
struct FAkCommunicationSettingsWithCommSelection : public FAkCommunicationSettings
{
	EAkCommSystem                                      CommunicationSystem;                                      // 0x0020(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0020(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct AkAudio.AkWaapiSubscriptionId
// 0x0008
struct FAkWaapiSubscriptionId
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AkAudio.AKWaapiJsonObject
// 0x0010
struct FAKWaapiJsonObject
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AkAudio.AkWaapiUri
// 0x0010
struct FAkWaapiUri
{
	struct FString                                     Uri;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct AkAudio.AkWaapiFieldNames
// 0x0010
struct FAkWaapiFieldNames
{
	struct FString                                     FieldName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct AkAudio.AkWindowsAdvancedInitializationSettings
// 0x0008 (0x0038 - 0x0030)
struct FAkWindowsAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	bool                                               UseHeadMountedDisplayAudioDevice;                         // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	uint32_t                                           MaxSystemAudioObjects;                                    // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkXboxOneApuHeapInitializationSettings
// 0x0008
struct FAkXboxOneApuHeapInitializationSettings
{
	uint32_t                                           CachedSize;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           NonCachedSize;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkXboxOneAdvancedInitializationSettings
// 0x0004 (0x0034 - 0x0030)
struct FAkXboxOneAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	uint16_t                                           MaximumNumberOfXMAVoices;                                 // 0x0030(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseHardwareCodecLowLatencyMode;                           // 0x0032(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0033(0x0001) MISSED OFFSET
};

// ScriptStruct AkAudio.AkAudioEventTrackKey
// 0x0020
struct FAkAudioEventTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               AkAudioEvent;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     EventName;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
};

// ScriptStruct AkAudio.MovieSceneTangentDataSerializationHelper
// 0x0014
struct FMovieSceneTangentDataSerializationHelper
{
	float                                              ArriveTangent;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LeaveTangent;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveTangentWeightMode>           TangentWeightMode;                                        // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              ArriveTangentWeight;                                      // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LeaveTangentWeight;                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.MovieSceneFloatValueSerializationHelper
// 0x001C
struct FMovieSceneFloatValueSerializationHelper
{
	float                                              Value;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveInterpMode>                  InterpMode;                                               // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveTangentMode>                 TangentMode;                                              // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FMovieSceneTangentDataSerializationHelper   Tangent;                                                  // 0x0008(0x0014)
};

// ScriptStruct AkAudio.MovieSceneFloatChannelSerializationHelper
// 0x0030
struct FMovieSceneFloatChannelSerializationHelper
{
	TEnumAsByte<ERichCurveExtrapolation>               PreInfinityExtrap;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveExtrapolation>               PostInfinityExtrap;                                       // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<int>                                        Times;                                                    // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneFloatValueSerializationHelper> Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	float                                              DefaultValue;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasDefaultValue;                                         // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct AkAudio.AkReverbDescriptor
// 0x0028
struct FAkReverbDescriptor
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AkAudio.AkGeometrySurfacePropertiesToMap
// 0x0030
struct FAkGeometrySurfacePropertiesToMap
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AkAudio.AkGeometrySurfacePropertiesToMap.AcousticTexture
	float                                              OcclusionValue;                                           // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct AkAudio.AkSurfaceProperties
// 0x0040
struct FAkSurfaceProperties
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct AkAudio.AkEdgeInfo
// 0x0028
struct FAkEdgeInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AkAudio.MovieSceneAkAudioEventTemplate
// 0x0008 (0x0028 - 0x0020)
struct FMovieSceneAkAudioEventTemplate : public FMovieSceneEvalTemplate
{
	class UMovieSceneAkAudioEventSection*              Section;                                                  // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct AkAudio.MovieSceneAkAudioRTPCTemplate
// 0x0008 (0x0028 - 0x0020)
struct FMovieSceneAkAudioRTPCTemplate : public FMovieSceneEvalTemplate
{
	class UMovieSceneAkAudioRTPCSection*               Section;                                                  // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
