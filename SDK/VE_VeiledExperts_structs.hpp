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

// Enum VeiledExperts.ECoreNetError
enum class ECoreNetError : uint8_t
{
	CNE_None                       = 0,
	CNE_ConnectError               = 1,
	CNE_DisconnectByClient         = 2,
	CNE_DisconnectedByServer       = 3,
	CNE_ReceiveError               = 4,
	CNE_SendError                  = 5,
	CNE_RSADecryptError            = 6,
	CNE_TimeOut                    = 7,
	CNE_MAX                        = 8
};


// Enum VeiledExperts.ECoreNetResult
enum class ECoreNetResult : uint8_t
{
	CNR_None                       = 0,
	CNR_Success                    = 1,
	CNR_Failure                    = 2,
	CNR_MAX                        = 3
};


// Enum VeiledExperts.EProfileCategory
enum class EProfileCategory : uint8_t
{
	NONE                           = 0,
	BANNER                         = 1,
	ETC                            = 2,
	EProfileCategory_MAX           = 3
};


// Enum VeiledExperts.EWeaponCategory
enum class EWeaponCategory : uint8_t
{
	NONE                           = 0,
	HG                             = 1,
	SMG_SG                         = 2,
	AR_LMG                         = 3,
	SR_BOW                         = 4,
	MELEE                          = 5,
	ETC                            = 6,
	EWeaponCategory_MAX            = 7
};


// Enum VeiledExperts.EPDAimingState
enum class EPDAimingState : uint8_t
{
	Idle                           = 0,
	HipFire                        = 1,
	Aim                            = 2,
	ADS                            = 3,
	MAX                            = 4
};


// Enum VeiledExperts.EPDMovementState
enum class EPDMovementState : uint8_t
{
	Grounded                       = 0,
	Falling                        = 1,
	Climbing                       = 2,
	Flying                         = 3,
	Sliding                        = 4,
	MAX                            = 5
};


// Enum VeiledExperts.EPDLocoState
enum class EPDLocoState : uint8_t
{
	NotMoving                      = 0,
	Stopping                       = 1,
	Starting_F                     = 2,
	Starting_L                     = 3,
	Starting_R                     = 4,
	Moving                         = 5,
	MAX                            = 6
};


// Enum VeiledExperts.EPDLocoType
enum class EPDLocoType : uint8_t
{
	Default                        = 0,
	Climb                          = 1,
	Cover                          = 2,
	Groggy                         = 3,
	Slide                          = 4,
	ZipLine                        = 5,
	Dead                           = 6,
	MAX                            = 7
};


// Enum VeiledExperts.EPDCharacterActionType
enum class EPDCharacterActionType : uint8_t
{
	None                           = 0,
	Land                           = 1,
	Jump                           = 2,
	Roll                           = 3,
	Vault                          = 4,
	Climbup                        = 5,
	LedgeGrapParkour               = 6,
	LedgeGrapClimbing              = 7,
	MeleeAttack                    = 8,
	CQC_Attacker                   = 9,
	CQC_Victim                     = 10,
	Lean                           = 11,
	ShoulderSwap                   = 12,
	ChangeStance                   = 13,
	ItemUse                        = 14,
	GroggyRescueSelf               = 15,
	ClimbEnterUpward               = 16,
	ClimbEnterDownward             = 17,
	ClimbEnterVault                = 18,
	ClimbMove                      = 19,
	ClimbExit                      = 20,
	GroggyEnter                    = 21,
	GroggyExit                     = 22,
	Death_Normal                   = 23,
	Death_Groggy                   = 24,
	FireWeapon                     = 25,
	AimWeapon                      = 26,
	ChangeWeapon                   = 27,
	ReloadWeapon                   = 28,
	InstantThrowWeapon             = 29,
	ThrowWeapon                    = 30,
	BoltAction                     = 31,
	OutCover                       = 32,
	AimCharge                      = 33,
	PickUpItem                     = 34,
	DynamicShielding               = 35,
	GroggyRescue                   = 36,
	SNDModeBomb                    = 37,
	Guard                          = 38,
	MeleeHit                       = 39,
	KnockBack                      = 40,
	FallingObjcetKnockBack         = 41,
	SlidingEnter                   = 42,
	SlidingExit                    = 43,
	ZipLineEnter                   = 44,
	ZipLine                        = 45,
	Signature_RevolerSpinning      = 46,
	Signature_DrinkBottle          = 47,
	Signature_EatHotdog            = 48,
	Signature_LickKnife            = 49,
	Signature_CoinToss             = 50,
	Signature_GlassesScan          = 51,
	Signature_ShootFlare           = 52,
	Signature_SprayMoney           = 53,
	Signature_Warcry               = 54,
	Signature_SpinSickle           = 55,
	Signature_TurnTable            = 56,
	Signature_FeverTurnTable       = 57,
	Signature_LookMagnifier        = 58,
	Lepton_Hacking                 = 59,
	Lepton_Maintenance             = 60,
	JuggernautWear_Start           = 61,
	JuggernautWear_End             = 62,
	JuggernautDash_Start           = 63,
	JuggernautDash_End             = 64,
	ExoSuitWear_Start              = 65,
	ExoSuitWear_End                = 66,
	ExoSuitDash                    = 67,
	ExoSuitLauncher                = 68,
	ArmorPlateReplaceKit           = 69,
	TurnInPlace                    = 70,
	AFK                            = 71,
	RoundEnter                     = 72,
	BurnReaction                   = 73,
	SummonNPC                      = 74,
	SummonUPS                      = 75,
	MAX                            = 76
};


// Enum VeiledExperts.EAgentDisplayType
enum class EAgentDisplayType : uint8_t
{
	EAgentDisplay_DMITRY           = 0,
	EAgentDisplay_NICKI            = 1,
	EAgentDisplay_JACK             = 2,
	EAgentDisplay_LUNA             = 3,
	EAgentDisplay_TYRONE           = 4,
	EAgentDisplay_YOUNGSIK         = 5,
	EAgentDisplay_LILY             = 6,
	EAgentDisplay_SIMON            = 7,
	EAgentDisplay_SOY              = 8,
	EAgentDisplay_ESTER            = 9,
	EAgentDisplay_RITA             = 10,
	EAgentDisplay_MAX              = 11
};


// Enum VeiledExperts.ESurfaceSubType
enum class ESurfaceSubType : uint8_t
{
	Sub0                           = 0,
	Sub1                           = 1,
	Sub2                           = 2,
	ESurfaceSubType_MAX            = 3
};


// Enum VeiledExperts.ESubLevelEvent
enum class ESubLevelEvent : uint8_t
{
	SLE_NONE                       = 0,
	SLE_ExplodeAreaA               = 1,
	SLE_MAX                        = 2
};


// Enum VeiledExperts.ETRIGGERNOTI
enum class ETRIGGERNOTI : uint8_t
{
	ETB_ALL                        = 0,
	ETB_PLAYER                     = 1,
	ETB_NPC                        = 2,
	ETB_MAX                        = 3
};


// Enum VeiledExperts.ENavFlagType
enum class ENavFlagType : uint8_t
{
	None                           = 0,
	Cover                          = 1,
	Parkour                        = 2,
	Climbing                       = 3,
	Zipline                        = 4,
	StandMonitoring                = 5,
	CrouchMonitoring               = 6,
	Camping                        = 7,
	Sniping                        = 8,
	MoveAssistant                  = 9,
	MissionArea                    = 10,
	ENavFlagType_MAX               = 11
};


// Enum VeiledExperts.EDamageType
enum class EDamageType : uint8_t
{
	None                           = 0,
	Melee                          = 1,
	Weapon                         = 2,
	SystemGroggy                   = 3,
	Fall                           = 4,
	Vehicle                        = 5,
	RedStorm                       = 6,
	Explosion                      = 7,
	Blaze                          = 8,
	Burn                           = 9,
	Gas                            = 10,
	Heal                           = 11,
	InstallSeed                    = 12,
	ExplosionSeed                  = 13,
	DeactiveSeed                   = 14,
	SuicideGroggyToKill            = 15,
	BOFall                         = 16,
	BOMFall                        = 17,
	JuggernautDashCounter          = 18,
	ArmorBroken                    = 19,
	CQC                            = 20,
	Drill                          = 21,
	Max                            = 22
};


// Enum VeiledExperts.ESceneLightGroup
enum class ESceneLightGroup : uint8_t
{
	ESceneLightG_MainLobby         = 0,
	ESceneLightG_AgentCreate       = 1,
	ESceneLightG_CustomWeapon      = 2,
	ESceneLightG_CustomAgent       = 3,
	ESceneLightG_MatchAgentSelect  = 4,
	ESceneLightG_Result            = 5,
	ESceneLightG_MAX               = 6
};


// Enum VeiledExperts.EActionReserveOption
enum class EActionReserveOption : uint8_t
{
	None                           = 0,
	IsAbleTo                       = 1,
	MustReserve                    = 2,
	IfBlockedDontReserve           = 3,
	EActionReserveOption_MAX       = 4
};


// Enum VeiledExperts.EPDGroggyRescueActionType
enum class EPDGroggyRescueActionType : uint8_t
{
	GroggyRescueAction_Start       = 0,
	GroggyRescueAction_Complete    = 1,
	GroggyRescueAction_Cancel      = 2,
	GroggyRescueAction_MAX         = 3
};


// Enum VeiledExperts.EParkourHeightType
enum class EParkourHeightType : uint8_t
{
	Parkour                        = 0,
	Parkour01                      = 1,
	Parkour02                      = 2,
	Parkour03                      = 3,
	Parkour04                      = 4,
	Parkour05                      = 5,
	MAX                            = 6
};


// Enum VeiledExperts.ESlideEnterType
enum class ESlideEnterType : uint8_t
{
	SlideEnter_None                = 0,
	SlideEnter_Default             = 1,
	SlideEnter_Falling             = 2,
	SlideEnter_Groggy              = 3,
	SlideEnter_GroggyFalling       = 4,
	SlideEnter_Die                 = 5,
	SlideEnter_MAX                 = 6
};


// Enum VeiledExperts.ESlideExitType
enum class ESlideExitType : uint8_t
{
	SlideExit_None                 = 0,
	SlideExit_Default              = 1,
	SlideExit_Roll                 = 2,
	SlideExit_Falling              = 3,
	SlideExit_Groggy               = 4,
	SlideExit_GroggyFalling        = 5,
	SlideExit_Die                  = 6,
	SlideExit_MAX                  = 7
};


// Enum VeiledExperts.EAkBankName
enum class EAkBankName : uint8_t
{
	sfx                            = 0,
	weapons                        = 1,
	ambience                       = 2,
	bgm                            = 3,
	foley                          = 4,
	EAkBankName_MAX                = 5
};


// Enum VeiledExperts.EGameModeWidget
enum class EGameModeWidget : uint8_t
{
	None                           = 0,
	PlayerInfo                     = 1,
	Spectator                      = 2,
	StateGauge                     = 3,
	Perk                           = 4,
	CoinInfo                       = 5,
	CrossHair                      = 6,
	TargetScreen                   = 7,
	DamageIndicator                = 8,
	ThreeDIndicator                = 9,
	InteractionInfo                = 10,
	RoundInfo                      = 11,
	RoundResult                    = 12,
	GameTime                       = 13,
	IngameMap                      = 14,
	RingCommand                    = 15,
	MarkerGuide                    = 16,
	UnknownMarket                  = 17,
	StatusBoard                    = 18,
	ReportPopup                    = 19,
	WorldMessage                   = 20,
	BattleLog                      = 21,
	KillMessage                    = 22,
	KillLog                        = 23,
	PerkNotify                     = 24,
	PingLog                        = 25,
	TutorialQuest                  = 26,
	CCTVObjDesc                    = 27,
	RoundWait                      = 28,
	PersonalMission                = 29,
	ObserverReady                  = 30,
	SpectatorHelp                  = 31,
	PlayerGroggy                   = 32,
	PracticeKeyGuide               = 33,
	SurrenderVote                  = 34,
	GameTip                        = 35,
	MAX                            = 36
};


// Enum VeiledExperts.EUIName
enum class EUIName : uint8_t
{
	None                           = 0,
	Start                          = 1,
	Login                          = 2,
	Outgame                        = 3,
	DebugLog                       = 4,
	Loading                        = 5,
	LoadIntro                      = 6,
	LoadMatch                      = 7,
	Ingame                         = 8,
	IngameDefault                  = 9,
	IngameBreakInto                = 10,
	GameResult                     = 11,
	OptionContent                  = 12,
	OKPopup                        = 13,
	OKCancelPopup                  = 14,
	OptionPopup                    = 15,
	OptionUpdatedNotiPopup         = 16,
	LobbyUserListPopup             = 17,
	InvitePartyPopup               = 18,
	TutorialPopup                  = 19,
	StroyPerkPopup                 = 20,
	GainPerkPopup                  = 21,
	GuideWebPagePopup              = 22,
	WebPopup                       = 23,
	TermsOfServicePopup            = 24,
	ServerMaintenanceNoti          = 25,
	ClanInfoPopup                  = 26,
	PopupUserInfo                  = 27,
	AgentProfilePopup              = 28,
	IngameEscapePlayerPopupUI      = 29,
	OutgameEscapePlayerPopupUI     = 30,
	InvalidGameResultPopup         = 31,
	ReportOutGamePopup             = 32,
	GameSetupInformationPopup      = 33,
	NicknamePopup                  = 34,
	WaitPopup                      = 35,
	MatchCategoryListItem          = 36,
	MatchListItem                  = 37,
	MatchModeListItem              = 38,
	SystemMessage                  = 39,
	GameModeSelectItem             = 40,
	LobbyUserListItem              = 41,
	CommunityPopup                 = 42,
	PartySlotListItem              = 43,
	FriendListItem                 = 44,
	FriendAddItem                  = 45,
	FriendClanItem                 = 46,
	FindPartyPopup                 = 47,
	CustomMatchJoinPopup           = 48,
	CustomMatchListItem            = 49,
	CustomMatchOption              = 50,
	AgentListItem                  = 51,
	AgentSlotListItem              = 52,
	CustomCharacterListItem        = 53,
	PlayLogPlayInfoItem            = 54,
	TrainingListItem               = 55,
	KillLogItem                    = 56,
	EventLogItem                   = 57,
	TutorialQuestListItem          = 58,
	NameTagAlly                    = 59,
	NameTagEnemy                   = 60,
	ObjectTag                      = 61,
	ObjectTagSite                  = 62,
	MissionLeptonTag               = 63,
	PingIndicator                  = 64,
	TutorialMarker                 = 65,
	IngameShopMain                 = 66,
	CategoryListItem               = 67,
	IngameShopListItem             = 68,
	IngameShopEtcItemElem          = 69,
	IngameShopPartListItem         = 70,
	IngameShopUpgradeListItem      = 71,
	PurchaseMsg                    = 72,
	RingCommand                    = 73,
	InvenDragModule                = 74,
	LootingList                    = 75,
	DamageIndicator                = 76,
	PlayerEntryItemAlly            = 77,
	PlayerEntryItemEnemy           = 78,
	MissionScorePlayerEntryItem    = 79,
	MSStatusBoardPlayerInfo        = 80,
	MSStatusBoardRoundItem         = 81,
	PerkEntryItem                  = 82,
	AttackDamageIndicator          = 83,
	GrenadeIndicator               = 84,
	CoinInfoListItem               = 85,
	PingLogItem                    = 86,
	PersonalMissionModule          = 87,
	PersonalMissionRewardModule    = 88,
	ScreenMarkerLoot               = 89,
	StatusBoardRoundResultItem     = 90,
	TDMStatusBoardPlayerInfoAlly   = 91,
	TDMStatusBoardPlayerInfoEnemy  = 92,
	KillLogAssistPlayerItem        = 93,
	AutoFarmingLogItem             = 94,
	AutoFarmingLogUI               = 95,
	PlayerInfoItemAlly             = 96,
	PlayerGroggyItem               = 97,
	Intro_BaseMap                  = 98,
	Intro_Derailed                 = 99,
	Intro_Windfarm                 = 100,
	Intro_Shipyard                 = 101,
	Intro_Bridge                   = 102,
	Intro_Altacity                 = 103,
	Intro_Wheatfield               = 104,
	Intro_Vacanthouse              = 105,
	Intro_KoreaTown                = 106,
	BaseGameMode                   = 107,
	DefuseBombMode_VX              = 108,
	DefuseBombMode_Legacy          = 109,
	TeamDeathMatchMode_VX          = 110,
	TeamDeathMatchMode_Legacy      = 111,
	ShowDownMode_VX                = 112,
	ShowDownMode_Legacy            = 113,
	UnKnownMarketPartListItem      = 114,
	UnKnownMarketPurchaseMsgItem   = 115,
	UnKnownMarketInvenListItem     = 116,
	ResultRoundItem                = 117,
	ResultExpItem                  = 118,
	ResultExpEventItem             = 119,
	ResultRoundMenuItem            = 120,
	MailPopup                      = 121,
	MailNotificationSlot           = 122,
	MailItemListSlot               = 123,
	TeamCharListItem               = 124,
	LeptonPresetTab                = 125,
	AgentDefaultLeptonPopup        = 126,
	AgentDefaultLeptonListItem     = 127,
	ObserverJoin                   = 128,
	UI_Max                         = 129,
	EUIName_MAX                    = 130
};


// Enum VeiledExperts.EGameModeInternal
enum class EGameModeInternal : uint8_t
{
	DefuseBomb                     = 0,
	TeamDeathMatch                 = 1,
	Showdown                       = 2,
	EGameModeInternal_MAX          = 3
};


// Enum VeiledExperts.ECameraPlayActorType
enum class ECameraPlayActorType : uint8_t
{
	StaticCamera                   = 0,
	AgentCreate                    = 1,
	AgentSelect                    = 2,
	AgentLobby                     = 3,
	AgentMatching                  = 4,
	CustomAgent                    = 5,
	CustomWeapon                   = 6,
	MatchAgentSelect               = 7,
	GameResult                     = 8,
	CQC                            = 9,
	RoundInitialize                = 10,
	BreakInto                      = 11,
	ObserverAttach                 = 12,
	SEEDView                       = 13,
	StartAction                    = 14,
	ECameraPlayActorType_MAX       = 15
};


// Enum VeiledExperts.EPDCamGroupPlayParam
enum class EPDCamGroupPlayParam : uint8_t
{
	None                           = 0,
	StartFadeIn                    = 1,
	SpeedCurve                     = 2,
	EPDCamGroupPlayParam_MAX       = 3
};


// Enum VeiledExperts.EPDCamPlayParam
enum class EPDCamPlayParam : uint8_t
{
	None                           = 0,
	ShowUI                         = 1,
	EPDCamPlayParam_MAX            = 2
};


// Enum VeiledExperts.EPDHitReactionAnimType
enum class EPDHitReactionAnimType : uint8_t
{
	HitReaction_None               = 0,
	HitReaction_Normal             = 1,
	HitReaction_Run                = 2,
	HitReaction_Lower              = 3,
	HitReaction_Head               = 4,
	HitReaction_Melee              = 5,
	HitReaction_BombGraze          = 6,
	HitReaction_BulletGraze        = 7,
	MAX                            = 8
};


// Enum VeiledExperts.EPDRagdollState
enum class EPDRagdollState : uint8_t
{
	Wake                           = 0,
	Freeze                         = 1,
	EPDRagdollState_MAX            = 2
};


// Enum VeiledExperts.EPDNPCActionState
enum class EPDNPCActionState : uint8_t
{
	None                           = 0,
	LookAround                     = 1,
	Surprised                      = 2,
	MAX                            = 3
};


// Enum VeiledExperts.EPDNPCLocoState
enum class EPDNPCLocoState : uint8_t
{
	NotMoving                      = 0,
	Moving                         = 1,
	MAX                            = 2
};


// Enum VeiledExperts.EOptionSensitivenessType
enum class EOptionSensitivenessType : uint8_t
{
	ZOOM0                          = 0,
	ZOOM1                          = 1,
	ZOOM2                          = 2,
	ZOOM3                          = 3,
	ZOOM4                          = 4,
	_TOTAL_COUNT                   = 5,
	EOptionSensitivenessType_MAX   = 6
};


// Enum VeiledExperts.EPDParkourType
enum class EPDParkourType : uint8_t
{
	NONE                           = 0,
	STAIR                          = 1,
	HURDLE                         = 2,
	WALL                           = 3,
	NEXTFLOOR                      = 4,
	MAX                            = 5
};


// Enum VeiledExperts.EPDActionRuleCondtion
enum class EPDActionRuleCondtion : uint8_t
{
	NOT_CHANGE                     = 0,
	WAIT_PREV_ACTION               = 1,
	IMMEDIATE_NEXT_ACTION          = 2,
	EPDActionRuleCondtion_MAX      = 3
};


// Enum VeiledExperts.EPDIKStanceFrame
enum class EPDIKStanceFrame : uint8_t
{
	Idle                           = 0,
	Default                        = 1,
	SingleShot                     = 2,
	VerticalGrip                   = 3,
	AngleGrip                      = 4,
	HalfGrip                       = 5,
	MagGrip                        = 6,
	Max                            = 7
};


// Enum VeiledExperts.EPDSpecificWeaponAnimset
enum class EPDSpecificWeaponAnimset : uint8_t
{
	HK416                          = 0,
	SCAR                           = 1,
	AK47                           = 2,
	MP5                            = 3,
	MPX                            = 4,
	BenelliM4                      = 5,
	M24                            = 6,
	M14                            = 7,
	M249                           = 8,
	M134                           = 9,
	KrissVector                    = 10,
	AUGA3                          = 11,
	ASVAL                          = 12,
	AWP                            = 13,
	Glock                          = 14,
	DesertEagle                    = 15,
	DoubleBarrel                   = 16,
	PBPistol                       = 17,
	Bow                            = 18,
	M870                           = 19,
	G36                            = 20,
	MAC10                          = 21,
	P30L                           = 22,
	SVD                            = 23,
	DoubleDefense                  = 24,
	Barrett                        = 25,
	Special                        = 26,
	MAX                            = 27
};


// Enum VeiledExperts.EPDAnimset
enum class EPDAnimset : uint8_t
{
	Bare                           = 0,
	HK416                          = 1,
	MP5                            = 2,
	BenelliM4                      = 3,
	M24                            = 4,
	M249                           = 5,
	Glock                          = 6,
	Throw                          = 7,
	M134                           = 8,
	Knife                          = 9,
	KnuckleBlade                   = 10,
	Bow                            = 11,
	Karambit                       = 12,
	CAxe                           = 13,
	Tonfa                          = 14,
	ThreeBaton                     = 15,
	CHammer                        = 16,
	FistKnife                      = 17,
	Wrench                         = 18,
	ExoSuit                        = 19,
	SkullMic                       = 20,
	MAX                            = 21
};


// Enum VeiledExperts.EPDLeanState
enum class EPDLeanState : uint8_t
{
	Lean_None                      = 0,
	Lean_Left                      = 1,
	Lean_Right                     = 2,
	MAX                            = 3
};


// Enum VeiledExperts.EPDSocketOffsetState
enum class EPDSocketOffsetState : uint8_t
{
	SocketOffset_Left              = 0,
	SocketOffset_Right             = 1,
	MAX                            = 2
};


// Enum VeiledExperts.EPDSlideStanceState
enum class EPDSlideStanceState : uint8_t
{
	SlideStance_Default            = 0,
	SlideStance_Groggy             = 1,
	MAX                            = 2
};


// Enum VeiledExperts.EPDThrowStanceState
enum class EPDThrowStanceState : uint8_t
{
	ThrowStance_Over               = 0,
	ThrowStance_Under              = 1,
	MAX                            = 2
};


// Enum VeiledExperts.EPDClimbStanceState
enum class EPDClimbStanceState : uint8_t
{
	Climb_4P                       = 0,
	Climb_2P                       = 1,
	MAX                            = 2
};


// Enum VeiledExperts.EPDRotationState
enum class EPDRotationState : uint8_t
{
	None                           = 0,
	FreeLook                       = 1,
	VelocityDirection              = 2,
	LookingDirection               = 3,
	Max                            = 4
};


// Enum VeiledExperts.EPDStanceState
enum class EPDStanceState : uint8_t
{
	Standing                       = 0,
	Crouching                      = 1,
	MAX                            = 2
};


// Enum VeiledExperts.EPDGaitsState
enum class EPDGaitsState : uint8_t
{
	Staying                        = 0,
	Walking                        = 1,
	Jogging                        = 2,
	Running                        = 3,
	Sprinting                      = 4,
	MAX                            = 5
};


// Enum VeiledExperts.EPDInputMoveType
enum class EPDInputMoveType : uint8_t
{
	Walk                           = 0,
	Run                            = 1,
	Sprint                         = 2,
	MAX                            = 3
};


// Enum VeiledExperts.EPDActionNotifyType
enum class EPDActionNotifyType : uint8_t
{
	ActionNotify_Begin_Anim        = 0,
	ActionNotify_End_Anim          = 1,
	ActionNotify_Event_Anim        = 2,
	ActionNotify_Event_CPP         = 3,
	ActionNotify_MAX               = 4
};


// Enum VeiledExperts.EPDActionTriggerType
enum class EPDActionTriggerType : uint8_t
{
	Activate                       = 0,
	End                            = 1,
	Cancel                         = 2,
	Toggle                         = 3,
	EPDActionTriggerType_MAX       = 4
};


// Enum VeiledExperts.EPDActionSlotType
enum class EPDActionSlotType : uint8_t
{
	Fullbody                       = 0,
	Upper                          = 1,
	Lower                          = 2,
	Additive                       = 3,
	EPDActionSlotType_MAX          = 4
};


// Enum VeiledExperts.EPDLobbyAnimStatus
enum class EPDLobbyAnimStatus : uint8_t
{
	None                           = 0,
	Lobby_Scene_Select             = 1,
	Lobby_Scene_Select_Idle        = 2,
	Lobby_Scene_Matching_Start     = 3,
	Lobby_Scene_Matching_Idle      = 4,
	Lobby_Scene_Matching_Cancel    = 5,
	Lobby_Scene_Customizing        = 6,
	Lobby_Scene_Shop               = 7,
	Result_Scene_Win               = 8,
	Result_Scene_Win_Idle          = 9,
	Result_Scene_Lose              = 10,
	Result_Scene_Lose_IDle         = 11,
	MAX                            = 12
};


// Enum VeiledExperts.EPDDirCalcMethodType
enum class EPDDirCalcMethodType : uint8_t
{
	_2WAY                          = 0,
	_4WAY                          = 1,
	_8WAY                          = 2,
	MAX                            = 3
};


// Enum VeiledExperts.EPD4DirType
enum class EPD4DirType : uint8_t
{
	Forward                        = 0,
	Left                           = 1,
	Right                          = 2,
	Back                           = 3,
	MAX                            = 4
};


// Enum VeiledExperts.EPDDirectionType
enum class EPDDirectionType : uint8_t
{
	FWD                            = 0,
	BCK                            = 1,
	RT                             = 2,
	LFT                            = 3,
	FWD_RT                         = 4,
	FWD_LFT                        = 5,
	BCK_RT                         = 6,
	BCK_LFT                        = 7,
	MAX                            = 8
};


// Enum VeiledExperts.EPDHitReactionType
enum class EPDHitReactionType : uint8_t
{
	FULL_BODY                      = 0,
	UPPER_BODY                     = 1,
	LOWER_BODY                     = 2,
	MELEE_HIT                      = 3,
	MAX                            = 4
};


// Enum VeiledExperts.EPDCharacterParts
enum class EPDCharacterParts : uint8_t
{
	Head                           = 0,
	Body                           = 1,
	Hair                           = 2,
	Accessory                      = 3,
	EPDCharacterParts_MAX          = 4
};


// Enum VeiledExperts.EDebugFlagsMOA
enum class EDebugFlagsMOA : uint8_t
{
	None                           = 0,
	DrawVirtualShotLines           = 1,
	DrawCircle                     = 2,
	DrawCone                       = 3,
	EDebugFlagsMOA_MAX             = 4
};


// Enum VeiledExperts.EPDClimbMoveType
enum class EPDClimbMoveType : uint8_t
{
	ClimbMove_None                 = 0,
	ClimbMove_Default              = 1,
	ClimbMove_InTurn               = 2,
	ClimbMove_OutTurn              = 3,
	ClimbMove_Jump                 = 4,
	ClimbMove_Wide                 = 5,
	ClimbMove_LongJump             = 6,
	ClimbMove_MAX                  = 7
};


// Enum VeiledExperts.EPDClimbPointUptype
enum class EPDClimbPointUptype : uint8_t
{
	ClimbPoint_None                = 0,
	ClimbPoint_Vault               = 1,
	ClimbPoint_ClimbUp             = 2,
	ClimbPoint_MAX                 = 3
};


// Enum VeiledExperts.EControlTapType
enum class EControlTapType : uint8_t
{
	None                           = 0,
	MoveNAction                    = 1,
	ETCAction                      = 2,
	EControlTapType_MAX            = 3
};


// Enum VeiledExperts.ECrossHairColorPreset
enum class ECrossHairColorPreset : uint8_t
{
	WHITE                          = 0,
	RED                            = 1,
	BLUE                           = 2,
	GREEN                          = 3,
	YELLOW                         = 4,
	PINK                           = 5,
	ECrossHairColorPreset_MAX      = 6
};


// Enum VeiledExperts.ECrossHairDrawStyle
enum class ECrossHairDrawStyle : uint8_t
{
	Scaled                         = 0,
	ScaledWithOutline              = 1,
	NonScaled                      = 2,
	NonScaledWithOutline           = 3,
	ECrossHairDrawStyle_MAX        = 4
};


// Enum VeiledExperts.ECustomizeLeptonCostViewType
enum class ECustomizeLeptonCostViewType : uint8_t
{
	Empty                          = 0,
	Equiped                        = 1,
	Unique                         = 2,
	ECustomizeLeptonCostViewType_MAX = 3
};


// Enum VeiledExperts.EDYNAMICOBJECTSTATE
enum class EDYNAMICOBJECTSTATE : uint8_t
{
	NONE                           = 0,
	ALIVEOBJ                       = 1,
	MDESTROY                       = 2,
	FDESTROY                       = 3,
	CLOSE                          = 4,
	OPEN                           = 5,
	OPEN2                          = 6,
	MOVE                           = 7,
	MOVE2                          = 8,
	EDYNAMICOBJECTSTATE_MAX        = 9
};


// Enum VeiledExperts.EGraphicsScalabilityType
enum class EGraphicsScalabilityType : uint8_t
{
	None                           = 0,
	Resolution                     = 1,
	ViewDistance                   = 2,
	AntiAliasing                   = 3,
	PostProcessing                 = 4,
	Shadows                        = 5,
	Texture                        = 6,
	Effects                        = 7,
	Foliage                        = 8,
	EGraphicsScalabilityType_MAX   = 9
};


// Enum VeiledExperts.EDisplayMode
enum class EDisplayMode : uint8_t
{
	Windowed                       = 0,
	Fullscreen                     = 1,
	EDisplayMode_MAX               = 2
};


// Enum VeiledExperts.EDisplayTapType
enum class EDisplayTapType : uint8_t
{
	None                           = 0,
	Video                          = 1,
	System                         = 2,
	EDisplayTapType_MAX            = 3
};


// Enum VeiledExperts.EDroneArmLagState
enum class EDroneArmLagState : uint8_t
{
	None                           = 0,
	Floating                       = 1,
	Crouch                         = 2,
	Parkour_Enable                 = 3,
	Parkour_Disable                = 4,
	EDroneArmLagState_MAX          = 5
};


// Enum VeiledExperts.EENVTYPE
enum class EENVTYPE : uint8_t
{
	DEFAULT                        = 0,
	DESTROY                        = 1,
	SAND                           = 2,
	WET                            = 3,
	EENVTYPE_MAX                   = 4
};


// Enum VeiledExperts.EPDEndAnimationType
enum class EPDEndAnimationType : uint8_t
{
	StartMove                      = 0,
	StopMove                       = 1,
	Pivot                          = 2,
	Max                            = 3
};


// Enum VeiledExperts.EPDEnvEffectClientType
enum class EPDEnvEffectClientType : uint8_t
{
	Normal                         = 0,
	SandStorm                      = 1,
	Rain                           = 2,
	SeaFog                         = 3,
	DustStorm                      = 4,
	GasLeakeage                    = 5,
	EPDEnvEffectClientType_MAX     = 6
};


// Enum VeiledExperts.ESafeZoneDrawStyle
enum class ESafeZoneDrawStyle : uint8_t
{
	Line                           = 0,
	Solid                          = 1,
	ESafeZoneDrawStyle_MAX         = 2
};


// Enum VeiledExperts.ESafeZoneDrawType
enum class ESafeZoneDrawType : uint8_t
{
	None                           = 0,
	CurrentArea                    = 1,
	NextArea                       = 2,
	Custom                         = 3,
	ESafeZoneDrawType_MAX          = 4
};


// Enum VeiledExperts.EMapShape
enum class EMapShape : uint8_t
{
	Rect                           = 0,
	Oval                           = 1,
	EMapShape_MAX                  = 2
};


// Enum VeiledExperts.EGamePlayTapType
enum class EGamePlayTapType : uint8_t
{
	None                           = 0,
	Mouse                          = 1,
	UI                             = 2,
	Play                           = 3,
	EGamePlayTapType_MAX           = 4
};


// Enum VeiledExperts.GBOStep
enum class EGBOStep : uint8_t
{
	ALL                            = 0,
	Step1                          = 1,
	Step2                          = 2,
	Step3                          = 3,
	Step4                          = 4,
	Step5                          = 5,
	GBOStep_MAX                    = 6
};


// Enum VeiledExperts.EInventorySlot
enum class EInventorySlot : uint8_t
{
	Slot_None                      = 0,
	Weapon_MainSlot                = 1,
	Weapon_SubSlot                 = 2,
	Weapon_PistolSlot              = 3,
	Weapon_MeleeSlot               = 4,
	Weapon_ThrowSlot               = 5,
	Slot_Max                       = 6,
	EInventorySlot_MAX             = 7
};


// Enum VeiledExperts.EPDHitFeedBackType
enum class EPDHitFeedBackType : uint8_t
{
	Hit                            = 0,
	Hit_NoDmg                      = 1,
	Groggy                         = 2,
	Death                          = 3,
	HeadShot                       = 4,
	Armor                          = 5,
	ArmorBroken                    = 6,
	EPDHitFeedBackType_MAX         = 7
};


// Enum VeiledExperts.EPDSpectatingModeType
enum class EPDSpectatingModeType : uint8_t
{
	None                           = 0,
	FreeLookMode                   = 1,
	PlayerLookMode                 = 2,
	Max                            = 3
};


// Enum VeiledExperts.ESmoothTurn
enum class ESmoothTurn : uint8_t
{
	SmoothTurn_None                = 0,
	SmoothTurn_Left                = 1,
	SmoothTurn_Right               = 2,
	SmoothTurn_MAX                 = 3
};


// Enum VeiledExperts.ENavDataType
enum class ENavDataType : uint8_t
{
	Nav1                           = 0,
	Nav2                           = 1,
	ENavDataType_MAX               = 2
};


// Enum VeiledExperts.EPDNeutralObjectType
enum class EPDNeutralObjectType : uint8_t
{
	Gull                           = 0,
	MBird                          = 1,
	Crow                           = 2,
	Dove                           = 3,
	EPDNeutralObjectType_MAX       = 4
};


// Enum VeiledExperts.EOverlapNumber
enum class EOverlapNumber : uint8_t
{
	None                           = 0,
	Overlap1                       = 1,
	Overlap2                       = 2,
	Overlap3                       = 3,
	Overlap4                       = 4,
	Overlap5                       = 5,
	Overlap6                       = 6,
	Overlap7                       = 7,
	Overlap8                       = 8,
	Overlap9                       = 9,
	Overlap10                      = 10,
	EOverlapNumber_MAX             = 11
};


// Enum VeiledExperts.EOptionContentType
enum class EOptionContentType : uint8_t
{
	ComboBox                       = 0,
	Slider                         = 1,
	InputKeySelector               = 2,
	InputToggleKeySelector         = 3,
	CheckBox                       = 4,
	Tabs                           = 5,
	OneButton                      = 6,
	CrossHairImage                 = 7,
	EOptionContentType_MAX         = 8
};


// Enum VeiledExperts.EStabilityThreadType
enum class EStabilityThreadType : uint8_t
{
	Multithread                    = 0,
	Singlethread                   = 1,
	EStabilityThreadType_MAX       = 2
};


// Enum VeiledExperts.EBlockType
enum class EBlockType : uint8_t
{
	Default                        = 0,
	Friend_Clan                    = 1,
	AllBlock                       = 2,
	EBlockType_MAX                 = 3
};


// Enum VeiledExperts.EOptionQuality
enum class EOptionQuality : uint8_t
{
	LowQuality                     = 0,
	MediumQuality                  = 1,
	HighQuality                    = 2,
	EpicQuality                    = 3,
	EOptionQuality_MAX             = 4
};


// Enum VeiledExperts.EGraphicsQuality
enum class EGraphicsQuality : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Epic                           = 3,
	Custom                         = 4,
	EGraphicsQuality_MAX           = 5
};


// Enum VeiledExperts.EMouseSensitivityType
enum class EMouseSensitivityType : uint8_t
{
	NormalSensitivity              = 0,
	AimingSensitivity              = 1,
	UnitedAimSensitivity           = 2,
	IronsightSensitivity           = 3,
	X2ZoomScope                    = 4,
	X4ZoomScope                    = 5,
	X8ZoomScope                    = 6,
	X16ZoomScope                   = 7,
	EMouseSensitivityType_MAX      = 8
};


// Enum VeiledExperts.ESoundTapType
enum class ESoundTapType : uint8_t
{
	None                           = 0,
	Sound                          = 1,
	Voice                          = 2,
	ESoundTapType_MAX              = 3
};


// Enum VeiledExperts.EOptionType
enum class EOptionType : uint8_t
{
	None                           = 0,
	Display                        = 1,
	Sounds                         = 2,
	Gameplay                       = 3,
	Controls                       = 4,
	OptionType_Max                 = 5,
	EOptionType_MAX                = 6
};


// Enum VeiledExperts.EOutgameCharacterSpawnGroup
enum class EOutgameCharacterSpawnGroup : uint8_t
{
	OutgameCharacterSG_Lobby       = 0,
	OutgameCharacterSG_AgentSelect = 1,
	OutgameCharacterSG_AgentCreate = 2,
	OutgameCharacterSG_Customize   = 3,
	OutgameCharacterSG_MatchAgentSelect = 4,
	OutgameCharacterSG_Result      = 5,
	OutgameCharacterSG_MAX         = 6
};


// Enum VeiledExperts.EPartySlotState
enum class EPartySlotState : uint8_t
{
	Empty                          = 0,
	Inviting                       = 1,
	Filled                         = 2,
	EPartySlotState_MAX            = 3
};


// Enum VeiledExperts.EPDCameraShakeAnimType
enum class EPDCameraShakeAnimType : uint8_t
{
	SHAKE_NONE                     = 0,
	SHAKE_SitFrontWalk             = 1,
	SHAKE_SitBackWalk              = 2,
	SHAKE_SitRightWalk             = 3,
	SHAKE_SitLeftWalk              = 4,
	SHAKE_SitFrontRun              = 5,
	SHAKE_SitBackRun               = 6,
	SHAKE_SitRightRun              = 7,
	SHAKE_SitLeftRun               = 8,
	SHAKE_StandFrontWalk           = 9,
	SHAKE_StandBackWalk            = 10,
	SHAKE_StandRightWalk           = 11,
	SHAKE_StandLeftWalk            = 12,
	SHAKE_StandFrontRun            = 13,
	SHAKE_StandBackRun             = 14,
	SHAKE_StandRightRun            = 15,
	SHAKE_StandLeftRun             = 16,
	SHAKE_JoggingFront             = 17,
	SHAKE_JoggingBack              = 18,
	SHAKE_JoggingRight             = 19,
	SHAKE_JoggingLeft              = 20,
	SHAKE_MoveJuggernautFront      = 21,
	SHAKE_MoveJuggernautBack       = 22,
	SHAKE_MoveJuggernautRight      = 23,
	SHAKE_MoveJuggernautLeft       = 24,
	SHAKE_MoveJuggernautDash       = 25,
	SHAKE_JuggernautBigStep        = 26,
	SHAKE_Climb                    = 27,
	SHAKE_ClimbEnter               = 28,
	SHAKE_ClimbJump                = 29,
	SHAKE_Jump                     = 30,
	SHAKE_Zipline                  = 31,
	SHAKE_Slide                    = 32,
	SHAKE_StartSandStorm           = 33,
	SHAKE_ClimbLedgeGrap           = 34,
	SHAKE_ParkourLedgeGrap         = 35,
	SHAKE_Land                     = 36,
	SHAKE_LandAutoRoll             = 37,
	SHAKE_LandSoftCrawl            = 38,
	SHAKE_LandHardCrawl            = 39,
	SHAKE_Hit                      = 40,
	SHAKE_JuggernautDashHit        = 41,
	SHAKE_GrenadeExplosion         = 42,
	SHAKE_StunExplosion            = 43,
	SHAKE_ShieldingExplosion       = 44,
	SHAKE_C4Explosion              = 45,
	SHAKE_BOMExplosion1            = 46,
	SHAKE_BOMExplosion2            = 47,
	SHAKE_BOMExplosion3            = 48,
	SHAKE_BOMExplosion4            = 49,
	SHAKE_FireAR                   = 50,
	SHAKE_FireSMG                  = 51,
	SHAKE_FireSR                   = 52,
	SHAKE_FireSG                   = 53,
	SHAKE_FireLMG                  = 54,
	SHAKE_FirePistol               = 55,
	SHAKE_FireMiniGun              = 56,
	SHAKE_FireBow                  = 57,
	SHAKE_BulletGraze              = 58,
	SHAKE_MeleeHitWeak             = 59,
	SHAKE_MeleeHitStrong           = 60,
	SHAKE_FP_FireAR                = 61,
	SHAKE_FP_FireSMG               = 62,
	SHAKE_FP_FireSR                = 63,
	SHAKE_FP_FireDMR               = 64,
	SHAKE_FP_FireSG                = 65,
	SHAKE_FP_FireLMG               = 66,
	SHAKE_FP_FirePistol            = 67,
	SHAKE_FP_FireBow               = 68,
	SHAKE_FP_Jump                  = 69,
	SHAKE_FP_Land                  = 70,
	SHAKE_FP_MeleeHitWeak          = 71,
	SHAKE_FP_MeleeHitStrong        = 72,
	SHAKE_MAX                      = 73
};


// Enum VeiledExperts.ECameraMovementType
enum class ECameraMovementType : uint8_t
{
	CMT_Stand                      = 0,
	CMT_Crouch                     = 1,
	CMT_Aiming                     = 2,
	CMT_CrouchAiming               = 3,
	CMT_Aiming_Bow                 = 4,
	CMT_CrouchAiming_Bow           = 5,
	CMT_FirstPerson                = 6,
	CMT_CrouchFirstPerson          = 7,
	CMT_FirstPerson_Bow            = 8,
	CMT_Groggy                     = 9,
	CMT_Indoor                     = 10,
	CMT_ForwardRun                 = 11,
	CMT_AddCrouch                  = 12,
	CMT_AddLowCrouch               = 13,
	CMT_Roll                       = 14,
	CMT_PKRCU100WCamera            = 15,
	CMT_PKRCU100RCamera            = 16,
	CMT_PKRCU150WCamera1           = 17,
	CMT_PKRCU150WCamera2           = 18,
	CMT_PKRCU150RCamera1           = 19,
	CMT_PKRCU150RCamera2           = 20,
	CMT_PKRCU200WCamera1           = 21,
	CMT_PKRCU200WCamera2           = 22,
	CMT_PKRCU200RCamera1           = 23,
	CMT_PKRCU200RCamera2           = 24,
	CMT_PKRCU250WCamera1           = 25,
	CMT_PKRCU250WCamera2           = 26,
	CMT_PKRCU250RCamera1           = 27,
	CMT_PKRCU250RCamera2           = 28,
	CMT_PKRCU300WCamera1           = 29,
	CMT_PKRCU300WCamera2           = 30,
	CMT_PKRCU300RCamera1           = 31,
	CMT_PKRCU300RCamera2           = 32,
	CMT_PKRVT100WCamera            = 33,
	CMT_PKRVT100RCamera            = 34,
	CMT_PKRVT150WCamera1           = 35,
	CMT_PKRVT150WCamera2           = 36,
	CMT_PKRVT150RCamera1           = 37,
	CMT_PKRVT150RCamera2           = 38,
	CMT_PKRVT200WCamera1           = 39,
	CMT_PKRVT200WCamera2           = 40,
	CMT_PKRVT200RCamera1           = 41,
	CMT_PKRVT200RCamera2           = 42,
	CMT_PKRVT250WCamera1           = 43,
	CMT_PKRVT250WCamera2           = 44,
	CMT_PKRVT250RCamera1           = 45,
	CMT_PKRVT250RCamera2           = 46,
	CMT_PKRVT300WCamera1           = 47,
	CMT_PKRVT300WCamera2           = 48,
	CMT_PKRVT300RCamera1           = 49,
	CMT_PKRVT300RCamera2           = 50,
	CMT_PKRCloseUpCamera           = 51,
	CMT_PKRDefCamera               = 52,
	CMT_Jump                       = 53,
	CMT_LongJump                   = 54,
	CMT_Climb                      = 55,
	CMT_Zipline                    = 56,
	CMT_Slide                      = 57,
	CMT_JuggernautEquip            = 58,
	CMT_JuggernautDash             = 59,
	CMT_Stealth                    = 60,
	CMT_Seed_Bomb_Install_Defuse   = 61,
	CMT_Seed_Bomb_Install_Defuse_Indoor = 62,
	CMT_GgoggySeed_Bomb_Install_Defuse = 63,
	CMT_BowEquip                   = 64,
	CMT_Count                      = 65,
	CMT_MAX                        = 66
};


// Enum VeiledExperts.EBlendSquenceType
enum class EBlendSquenceType : uint8_t
{
	None                           = 0,
	Blending                       = 1,
	BlendingOrbit                  = 2,
	BlendingOrbitReverse           = 3,
	End                            = 4,
	EBlendSquenceType_MAX          = 5
};


// Enum VeiledExperts.ESpectatingParkourCamera
enum class ESpectatingParkourCamera : uint8_t
{
	None                           = 0,
	Following                      = 1,
	FollowingEnd                   = 2,
	MAX                            = 3
};


// Enum VeiledExperts.EPDFootStepNotifyType
enum class EPDFootStepNotifyType : uint8_t
{
	Run                            = 0,
	Jump                           = 1,
	SoftLand                       = 2,
	HardLand                       = 3,
	JugDash                        = 4,
	Roll                           = 5,
	Max                            = 6
};


// Enum VeiledExperts.EPDTraceChannel
enum class EPDTraceChannel : uint8_t
{
	Visibility                     = 0,
	Parkour                        = 1,
	Climb                          = 2,
	Weapon                         = 3,
	AttackObject                   = 4,
	Pickup                         = 5,
	Ladder                         = 6,
	Projectile                     = 7,
	Audio                          = 8,
	Slide                          = 9,
	AudioOcc                       = 10,
	EPDTraceChannel_MAX            = 11
};


// Enum VeiledExperts.EBattleIntensityState
enum class EBattleIntensityState : uint8_t
{
	INTENSITY_NORMAL               = 0,
	INTENSITY_ALARMED              = 1,
	INTENSITY_COMBAT_SIMPLE        = 2,
	INTENSITY_COMBAT_HARD          = 3,
	INTENSITY_MAX                  = 4
};


// Enum VeiledExperts.EQuestAction
enum class EQuestAction : uint8_t
{
	QA_None                        = 0,
	QA_OUTGAME_CHA_VOICE           = 1,
	QA_HIT                         = 2,
	QA_RANGE                       = 3,
	QA_THROW                       = 4,
	QA_CHA_STATE                   = 5,
	QA_AREA                        = 6,
	QA_PING                        = 7,
	QA_USEITEM                     = 8,
	QA_INTERACTION                 = 9,
	QA_MODE_EVENT                  = 10,
	QA_ADD_ITEM                    = 11,
	QA_UPGRADE                     = 12,
	QA_INGAME_MOVIE                = 13,
	QA_BATTLE_ASPECT               = 14,
	QA_GAME_READY                  = 15,
	QA_ROUND_END                   = 16,
	QA_OPERATOR_CHECK              = 17,
	QA_ENV_EFFECT                  = 18,
	QA_CHANGE_MOVE_TYPE            = 19,
	QA_ETC_ACTION                  = 20,
	QA_BATTLE_INTENSITY            = 21,
	QA_RANGE_IN_LOCATION           = 22,
	QA_SHOP_READY                  = 23,
	QA_UNEQUIP_POWERARMOR          = 24,
	QA_CHANGE_GAMEMODE_STATE       = 25,
	QA_UPDATE_GAMEMODE_TIME        = 26,
	QA_CHANGE_TDM_GAMESCORE        = 27,
	QA_MISSION_EVENT_CHECK         = 28,
	QA_MISSION_RANK_SCORE_CHECK    = 29,
	QA_MAX                         = 30
};


// Enum VeiledExperts.EQuestList
enum class EQuestList : uint8_t
{
	QL_None                        = 0,
	QL_VOICE_ENEMY_HIT             = 1,
	QL_VOICE_TEAM_HIT              = 2,
	QL_VOICE_TEAM_ENEMY_HIT        = 3,
	QL_VOICE_TEAM_ME_HIT           = 4,
	QL_VOICE_ENEMY_TEAM_HIT        = 5,
	QL_VOICE_ENEMY_ME_HIT          = 6,
	QL_VOICE_GROGGY                = 7,
	QL_VOICE_DEATH                 = 8,
	QL_VOICE_ENEMY_GROGGY          = 9,
	QL_VOICE_ENEMY_DEATH           = 10,
	QL_VOICE_DOT_HIT               = 11,
	QL_VOICE_SMOKE_AREA            = 12,
	QL_VOICE_THROW_GRANADE         = 13,
	QL_VOICE_THROW_HEAL            = 14,
	QL_VOICE_THROW_GAS             = 15,
	QL_VOICE_THROW_SCAN            = 16,
	QL_VOICE_JUGGERNAUT            = 17,
	QL_VOICE_CHANGE_ARMORPLATE     = 18,
	QL_VOICE_RECOVER               = 19,
	QL_VOICE_FULL_INVEN            = 20,
	QL_VOICE_GET_SEED              = 21,
	QL_VOICE_SET_SEED              = 22,
	QL_VOICE_RELEASE_SEED          = 23,
	QL_VOICE_RELOAD                = 24,
	QL_VOICE_SHOP_BUYREQUEST       = 25,
	QL_VOICE_SHOP_CANCEL           = 26,
	QL_VOICE_SHOP_REFUSE           = 27,
	QL_VOICE_INTER_LEDEAR_DELEGATE = 28,
	QL_VOICE_SIGNATURE             = 29,
	QL_VOICE_GROGGY_REQUEST        = 30,
	QL_VOICE_GROGGY_HEAL           = 31,
	QL_VOICE_INTER_BOMB_DELEGATE   = 32,
	QL_VOICE_MONOLOGUE             = 33,
	QL_VOICE_CHA_INTERACTION_TALK  = 34,
	QL_VOICE_OUTGAME_CHA_CREATE    = 35,
	QL_VOICE_OUTGAME_CHA_SELECT    = 36,
	QL_VOICE_OUTGAME_LOBBY         = 37,
	QL_VOICE_OUTGAME_RESULT_WIN    = 38,
	QL_VOICE_OUTGAME_RESULT_LOSE   = 39,
	QL_VOICE_ENEMY_SNIPER_FIND     = 40,
	QL_VOICE_NEAR_GRANADE          = 41,
	QL_VOICE_REQ_COIN              = 42,
	QL_VOICE_PING_MOVE             = 43,
	QL_VOICE_PING_GO               = 44,
	QL_VOICE_PING_ASSEMBLE         = 45,
	QL_VOICE_PING_RETREAT          = 46,
	QL_VOICE_PING_INSTALL          = 47,
	QL_VOICE_PING_DEFUSE           = 48,
	QL_VOICE_PING_CAUTIONINSTALL   = 49,
	QL_VOICE_PING_CAUTIONDEFUSE    = 50,
	QL_VOICE_PING_ENEMY            = 51,
	QL_VOICE_PING_WATCH            = 52,
	QL_VOICE_PING_SUPPORT          = 53,
	QL_VOICE_PING_RUSH             = 54,
	QL_VOICE_PING_ATTACK           = 55,
	QL_VOICE_PING_DEFENSE          = 56,
	QL_VOICE_PING_SOS              = 57,
	QL_VOICE_PING_ALLYGROGGY       = 58,
	QL_VOICE_PING_ENEMYGROGGY      = 59,
	QL_VOICE_PING_ENEMYDEAD        = 60,
	QL_VOICE_PING_ENEMYJUGGERNAUT  = 61,
	QL_VOICE_PING_HELLO            = 62,
	QL_VOICE_PING_SORRY            = 63,
	QL_VOICE_PING_GREAT            = 64,
	QL_VOICE_PING_THANKYOU         = 65,
	QL_VOICE_PING_BLAHBLAH         = 66,
	QL_VOICE_PING_INVEST           = 67,
	QL_VOICE_PING_SAVING           = 68,
	QL_VOICE_PING_ALLIN            = 69,
	QL_VOICE_PING_RICH             = 70,
	QL_VOICE_PING_POOR             = 71,
	QL_VOICE_PING_ITEM             = 72,
	QL_VOICE_PING_SEED             = 73,
	QL_VOICE_PING_WEAPON_AR        = 74,
	QL_VOICE_PING_WEAPON_SMG       = 75,
	QL_VOICE_PING_WEAPON_SR        = 76,
	QL_VOICE_PING_WEAPON_SG        = 77,
	QL_VOICE_PING_WEAPON_LMG       = 78,
	QL_VOICE_PING_WEAPON_BOW       = 79,
	QL_VOICE_PING_WEAPON_SUB       = 80,
	QL_VOICE_PING_AMMO             = 81,
	QL_VOICE_PING_AMMO01           = 82,
	QL_VOICE_PING_AMMO02           = 83,
	QL_VOICE_PING_AMMO_762_LR      = 84,
	QL_VOICE_PING_AMMO_12GAUGE     = 85,
	QL_VOICE_PING_AMMO_ARROW       = 86,
	QL_VOICE_PING_THROW_GRENADE    = 87,
	QL_VOICE_PING_THROW_GAS        = 88,
	QL_VOICE_PING_THROW_SCAN       = 89,
	QL_VOICE_PING_THROW_HEAL       = 90,
	QL_VOICE_PING_BANDAGE          = 91,
	QL_VOICE_PING_ARMORPLATE       = 92,
	QL_VOICE_PING_ASTRAPI          = 93,
	QL_VOICE_PING_SELFREVIVALKIT   = 94,
	QL_VOICE_PING_BOMBDEACTIVATEKIT = 95,
	QL_VOICE_PING_JUGGERNAUT       = 96,
	QL_VOICE_PING_INVEN_COIN       = 97,
	QL_VOICE_PING_INVEN_SEED       = 98,
	QL_VOICE_PING_INVEN_WEAPON_MAIN = 99,
	QL_VOICE_PING_INVEN_WEAPON_SUB = 100,
	QL_VOICE_PING_INVEN_AMMO       = 101,
	QL_VOICE_PING_INVEN_AMMO01     = 102,
	QL_VOICE_PING_INVEN_AMMO02     = 103,
	QL_VOICE_PING_INVEN_AMMO_762_LR = 104,
	QL_VOICE_PING_INVEN_AMMO_12GAUGE = 105,
	QL_VOICE_PING_INVEN_AMMO_ARROW = 106,
	QL_VOICE_PING_SHOP             = 107,
	QL_VOICE_PING_SHOP_WEAPON_AR   = 108,
	QL_VOICE_PING_SHOP_WEAPON_SMG  = 109,
	QL_VOICE_PING_SHOP_WEAPON_SR   = 110,
	QL_VOICE_PING_SHOP_WEAPON_SG   = 111,
	QL_VOICE_PING_SHOP_WEAPON_LMG  = 112,
	QL_VOICE_PING_SHOP_WEAPON_BOW  = 113,
	QL_VOICE_PING_SHOP_WEAPON_SUB  = 114,
	QL_VOICE_PING_SHOP_AMMO        = 115,
	QL_VOICE_PING_SHOP_AMMO01      = 116,
	QL_VOICE_PING_SHOP_AMMO02      = 117,
	QL_VOICE_PING_SHOP_AMMO_762_LR = 118,
	QL_VOICE_PING_SHOP_AMMO_12GAUGE = 119,
	QL_VOICE_PING_SHOP_AMMO_ARROW  = 120,
	QL_VOICE_PING_SHOP_THROW_GRENADE = 121,
	QL_VOICE_PING_SHOP_THROW_GAS   = 122,
	QL_VOICE_PING_SHOP_THROW_SCAN  = 123,
	QL_VOICE_PING_SHOP_THROW_HEAL  = 124,
	QL_VOICE_PING_SHOP_BANDAGE     = 125,
	QL_VOICE_PING_SHOP_ARMORPLATE  = 126,
	QL_VOICE_PING_SHOP_ASTRAPI     = 127,
	QL_VOICE_PING_SHOP_SELFREVIVALKIT = 128,
	QL_VOICE_PING_SHOP_BOMBDEACTIVATEKIT = 129,
	QL_VOICE_PING_SHOP_JUGGERNAUT  = 130,
	QL_VOICE_PING_SHOP_TEMABUFF    = 131,
	QL_VOICE_PING_FUND_ARMORY      = 132,
	QL_VOICE_PING_FUND_ORDNANCE    = 133,
	QL_VOICE_PING_FUND_TACTICAL    = 134,
	QL_VOICE_PING_GROGGY_MOVE      = 135,
	QL_VOICE_PING_GROGGY_ENEMY     = 136,
	QL_VOICE_PING_AGREE            = 137,
	QL_VOICE_PING_DECLINE          = 138,
	QL_VOICE_PING_TARGET_CANEL     = 139,
	QL_VOICE_PING_CLAIM            = 140,
	QL_VOICE_PING_HELP_AGREE       = 141,
	QL_VOICE_BREAKINTO_START       = 142,
	QL_VOICE_SCAN_ME               = 143,
	QL_OPERATOR_TEAM_LEAVE         = 144,
	QL_OPERATOR_ENEMY_LEAVE        = 145,
	QL_OPERATOR_ARMORY_UPGRADE     = 146,
	QL_OPERATOR_TACTICAL_UPGRADE   = 147,
	QL_OPERATOR_EQUIP_UPGRADE      = 148,
	QL_OPERATOR_DERAILED_INGAME_MOVIE = 149,
	QL_OPERATOR_SHIPYARD_INGAME_MOVIE = 150,
	QL_OPERATOR_WINDFARM_INGAME_MOVIE = 151,
	QL_OPERATOR_BRIDGE_INGAME_MOVIE = 152,
	QL_OPERATOR_CHANGE_STARTPOINT_ATTACK = 153,
	QL_OPERATOR_CHANGE_STARTPOINT_DEFENCE = 154,
	QL_OPERATOR_REMAIN_TIME        = 155,
	QL_OPERATOR_FILED_MOVE         = 156,
	QL_OPERATOR_GET_SEED           = 157,
	QL_OPERATOR_SEED_INSTALL       = 158,
	QL_OPERATOR_SEED_RELEASE       = 159,
	QL_OPERATOR_SEED_NOTIFY        = 160,
	QL_OPERATOR_RESULT             = 161,
	QL_OPERATOR_INTER_START        = 162,
	QL_OPERATOR_INTER_END          = 163,
	QL_OPERATOR_ARMED_TIME         = 164,
	QL_OPERATOR_ALLREADY           = 165,
	QL_OPERATOR_AUTO_SUPPLY        = 166,
	QL_OPERATOR_ENEMY_INFO_OPEN    = 167,
	QL_OPERATOR_ENEMY_INFO_OPEN_S  = 168,
	QL_OPERATOR_ENEMY_UPGRADE_OPEN = 169,
	QL_OPERATOR_SEED_DROP          = 170,
	QL_OPERATOR_BATTLE_ASPECT_E4_T3 = 171,
	QL_OPERATOR_BATTLE_ASPECT_E3_T1_AT = 172,
	QL_OPERATOR_BATTLE_ASPECT_E3_T1_DEF = 173,
	QL_OPERATOR_BATTLE_ASPECT_E1_T3_AT = 174,
	QL_OPERATOR_BATTLE_ASPECT_E1_T3_DEF = 175,
	QL_OPERATOR_BATTLE_ASPECT_E1_T1_AT = 176,
	QL_OPERATOR_BATTLE_ASPECT_E1_T1_DEF = 177,
	QL_OPERATOR_LAST_ROUND         = 178,
	QL_OPERATOR_FIRST_WIN          = 179,
	QL_OPERATOR_FIRST_LOSE         = 180,
	QL_OPERATOR_WININGSTREAK       = 181,
	QL_OPERATOR_LOSINGSTREAK       = 182,
	QL_OPERATOR_WININGSTREAK01     = 183,
	QL_OPERATOR_LOSINGSTREAK01     = 184,
	QL_OPERATOR_WININGSTREAK_3_N_LOSE = 185,
	QL_OPERATOR_LOSINGSTREAK_3_N_WIN = 186,
	QL_OPERATOR_ENEMY_JUGGERNAUT   = 187,
	QL_OPERATOR_ENEMY_JUGGERNAUT01 = 188,
	QL_OPERATOR_TEAM_JUGGERNAUT    = 189,
	QL_OPERATOR_TEAM_JUGGERNAUT01  = 190,
	QL_OPERATOR_ENEMY_JUGGERNAUT02 = 191,
	QL_OPERATOR_TEAM_JUGGERNAUT02  = 192,
	QL_OPERATOR_TEAM_KILL          = 193,
	QL_OPERATOR_FIRST_KILL         = 194,
	QL_OPERATOR_DOUBLE_KILL        = 195,
	QL_OPERATOR_TRIPLE_KILL        = 196,
	QL_OPERATOR_ALL_KILL           = 197,
	QL_OPERATOR_ALL_KILL_MELEE     = 198,
	QL_OPERATOR_HALF_JUG_ARMOR     = 199,
	QL_OPERATOR_HALF_JUG_AMMO      = 200,
	QL_OPERATOR_ZERO_JUG_AMMO      = 201,
	QL_OPERATOR_SHOP_NOTBUY_ARMOR  = 202,
	QL_OPERATOR_SHOP_NOTBUY_AMMO   = 203,
	QL_OPERATOR_SHOP_NOTBUY_SNIPERSCOPE = 204,
	QL_OPERATOR_30_UNDER_HAVE_HEAL_PACK = 205,
	QL_OPERATOR_30_UNDER_NEED_HEAL_PACK = 206,
	QL_OPERATOR_ARMORPLATE_USE     = 207,
	QL_OPERATOR_ARMORPLATE_NEED    = 208,
	QL_OPERATOR_SENDSTORM          = 209,
	QL_OPERATOR_TUTORIAL_START     = 210,
	QL_OPERATOR_TUTORIAL           = 211,
	QL_OPERATOR_TUTORIAL01         = 212,
	QL_OPERATOR_TUTORIAL02         = 213,
	QL_OPERATOR_TUTORIAL03         = 214,
	QL_OPERATOR_TUTORIAL04         = 215,
	QL_OPERATOR_TUTORIAL05         = 216,
	QL_OPERATOR_TUTORIAL06         = 217,
	QL_OPERATOR_TUTORIAL07         = 218,
	QL_OPERATOR_TUTORIAL08         = 219,
	QL_OPERATOR_TUTORIAL09         = 220,
	QL_OPERATOR_TUTORIAL10         = 221,
	QL_OPERATOR_TUTORIAL11         = 222,
	QL_OPERATOR_TUTORIAL12         = 223,
	QL_OPERATOR_TUTORIAL13         = 224,
	QL_OPERATOR_TUTORIAL14         = 225,
	QL_OPERATOR_TUTORIAL15         = 226,
	QL_OPERATOR_TUTORIAL16         = 227,
	QL_OPERATOR_TUTORIAL17         = 228,
	QL_OPERATOR_TUTORIAL18         = 229,
	QL_OPERATOR_TUTORIAL19         = 230,
	QL_OPERATOR_TUTORIAL20         = 231,
	QL_OPERATOR_TUTORIAL21         = 232,
	QL_OPERATOR_TUTORIAL22         = 233,
	QL_OPERATOR_TUTORIAL23         = 234,
	QL_OPERATOR_TUTORIAL24         = 235,
	QL_OPERATOR_TUTORIAL25         = 236,
	QL_OPERATOR_TUTORIAL26         = 237,
	QL_OPERATOR_TUTORIAL27         = 238,
	QL_OPERATOR_TUTORIAL28         = 239,
	QL_OPERATOR_TUTORIAL29         = 240,
	QL_OPERATOR_TUTORIAL30         = 241,
	QL_OPERATOR_TUTORIAL31         = 242,
	QL_OPERATOR_TUTORIAL32         = 243,
	QL_OPERATOR_TUTORIAL33         = 244,
	QL_OPERATOR_TUTORIAL34         = 245,
	QL_OPERATOR_TUTORIAL35         = 246,
	QL_OPERATOR_TUTORIAL36         = 247,
	QL_OPERATOR_TUTORIAL37         = 248,
	QL_OPERATOR_TUTORIAL38         = 249,
	QL_OPERATOR_TUTORIAL39         = 250,
	QL_OPERATOR_TUTORIAL40         = 251,
	QL_OPERATOR_TUTORIAL41         = 252,
	QL_OPERATOR_TUTORIAL42         = 253,
	QL_OPERATOR_TUTORIAL_END       = 254,
	QL_OPERATOR_SIGNATURE_SCAN     = 255,
	QL_OPERATOR_SOY_SIGNATURE_SCAN = 256,
	QL_OPERATOR_BREAKINTO_READY    = 257,
	QL_OPERATOR_BREAKINTO_START    = 258,
	QL_OPERATOR_BREAKINTO_TEAM_ALERT = 259,
	QL_OPERATOR_GET_LEPTON         = 260,
	QL_OPERATOR_ENEMY_GET_LEPTON   = 261,
	QL_OPERATOR_LEPTON_DROP        = 262,
	QL_OPERATOR_TARGET_IS_ENEMY    = 263,
	QL_OPERATOR_TARGET_IS_ME       = 264,
	QL_OPERATOR_TDM_GAMESTART      = 265,
	QL_OPERATOR_TDM_TARGETSCORE_75PER = 266,
	QL_OPERATOR_TDM_REMAINTIME_ALERT = 267,
	QL_OPERATOR_TDM_OVERTIME_ALERT = 268,
	QL_OPERATOR_TDM_MYTEAM_UPPERHAND = 269,
	QL_OPERATOR_TDM_ENEMYTEAM_UPPERHAND = 270,
	QL_OPERATOR_TDM_MYTEAM_REVERSE = 271,
	QL_OPERATOR_TDM_ENEMYTEAM_REVERSE = 272,
	QL_OPERATOR_TDM_MYTEAM_BEFOER_WIN = 273,
	QL_OPERATOR_TDM_ENEMYTEAM_BEFOER_WIN = 274,
	QL_OPERATOR_TDM_MAINPLAYER_CARRY_TEAM = 275,
	QL_OPERATOR_TDM_MYTEAM_WIN     = 276,
	QL_OPERATOR_TDM_ENEMYTEAM_WIN  = 277,
	QL_OPERATOR_MS_START           = 278,
	QL_OPERATOR_MS_PLAY_1ST        = 279,
	QL_OPERATOR_MS_PLAY_LOST_1ST   = 280,
	QL_OPERATOR_MS_BOAST           = 281,
	QL_OPERATOR_MS_ROUND_1ST       = 282,
	QL_OPERATOR_MS_ROUND_2ND_3RD   = 283,
	QL_OPERATOR_MS_LAST_RESULT_1ST = 284,
	QL_OPERATOR_MS_LAST_RESULT_2ND_3RD = 285,
	QL_OPERATOR_MS_LAST_RESULT_OUT_RANK = 286,
	QL_OPERATOR_ENEMY_CREATE_UPS   = 287,
	QL_OPERATOR_ENEMY_SEED_HIT_EMP = 288,
	QL_OPERATOR_MYTEAM_SEED_HIT_EMP = 289,
	QL_OPERATOR_ENEMY_UPS_BROKE    = 290,
	QL_OPERATOR_MYTEAM_UPS_BROKE   = 291,
	QL_OPERATOR_SEED_PLAYER_NOTIFY = 292,
	QL_OPERATOR_SEED_INSTALL_30SEC_NOTIFY = 293,
	QL_BI_NORMAL                   = 294,
	QL_BI_ALARMED                  = 295,
	QL_BI_COMBAT_SIMPLE            = 296,
	QL_BI_COMBAT_HARD              = 297,
	QL_Max                         = 298
};


// Enum VeiledExperts.EQuestType
enum class EQuestType : uint8_t
{
	QT_VOICE                       = 0,
	QT_BATTLE_INTENSITY            = 1,
	QT_MAX                         = 2
};


// Enum VeiledExperts.EReloadNotifyType
enum class EReloadNotifyType : uint8_t
{
	NONE                           = 0,
	AttachMagazineToHand           = 1,
	HideMagazine                   = 2,
	All                            = 3,
	EReloadNotifyType_MAX          = 4
};


// Enum VeiledExperts.ESceneEvent
enum class ESceneEvent : uint8_t
{
	SE_None                        = 0,
	SE_ChangeMatchList             = 1,
	SE_MatchingFail                = 2,
	SE_MatchingStart               = 3,
	SE_MatchingNotify              = 4,
	SE_MatchingExpansion           = 5,
	SE_MatchingCancel              = 6,
	SE_LoadSelectedMatchList       = 7,
	SE_ChangeMatchType             = 8,
	SE_ChangeMatchCategory         = 9,
	SE_RefreshMatchModeList        = 10,
	SE_SingleMatchStart            = 11,
	SE_AgentSelected               = 12,
	SE_AgentSelectedReq            = 13,
	SE_AgentCreateModelInputLock   = 14,
	SE_AgentReload                 = 15,
	SE_WeaponSelected              = 16,
	SE_WeaponSelectCategory        = 17,
	SE_WeaponSelectLoadout         = 18,
	SE_CustomizeEnter              = 19,
	SE_CustomizeSelectMenu         = 20,
	SE_CustomizeSelectMainCategory = 21,
	SE_CustomizeSelectSubCategory  = 22,
	SE_CustomizeSelectContent      = 23,
	SE_CustomizeEquipLepton        = 24,
	SE_CustomizeResetPresetBtnClick = 25,
	SE_CustomizeResetPresetLepton  = 26,
	SE_CustomizeCheckLeptonSaveAndLeave = 27,
	SE_CustomizeSaveEquipLepton    = 28,
	SE_CustomizeUnlockContent      = 29,
	SE_CustomizeEquipContent       = 30,
	SE_CustomizeEquipComplete      = 31,
	SE_CustomizeEquipFinish        = 32,
	SE_CustomizeCheckEquipChanged  = 33,
	SE_CustomizeCheckEquipChangedByMovePage = 34,
	SE_CustomizeSaveWeapon         = 35,
	SE_CustomizeSaveAgent          = 36,
	SE_CustomizeLoadingComplete    = 37,
	SE_CustomizeEquipDefaultParts  = 38,
	SE_CustomizeChangeLoadoutIndex = 39,
	SE_CustomizeEquipRecommendedParts = 40,
	SE_CustomizeHoverWeaponParts   = 41,
	SE_UpdatePartyMember           = 42,
	SE_RemovePartyMember           = 43,
	SE_ResultMoveStep              = 44,
	SE_ResultMoveNextStep          = 45,
	SE_LoadingIntroMoviePlay       = 46,
	SE_MatchCharSelect             = 47,
	SE_CustomizeBannerEnter        = 48,
	SE_CustomizeBannerDefault      = 49,
	SE_CustomizeBannerRecommend    = 50,
	SE_CustomizeBannerEquip        = 51,
	SE_MAX                         = 52
};


// Enum VeiledExperts.ESceneName
enum class ESceneName : uint8_t
{
	None                           = 0,
	Start                          = 1,
	Login                          = 2,
	Outgame                        = 3,
	AgentNick                      = 4,
	MainLobby                      = 5,
	AgentCreate                    = 6,
	AgentSelect                    = 7,
	AgentCustomize                 = 8,
	WeaponSelect                   = 9,
	WeaponCustomize                = 10,
	Clan                           = 11,
	Training                       = 12,
	CustomMatch                    = 13,
	MatchAgentSetting              = 14,
	GameResult                     = 15,
	BannerCustomize                = 16,
	Load                           = 17,
	LoadIntro                      = 18,
	LoadMatch                      = 19,
	LoadResult                     = 20,
	Ingame                         = 21,
	IngameDefault                  = 22,
	IngameBreakInto                = 23,
	Scene_Max                      = 24,
	ESceneName_MAX                 = 25
};


// Enum VeiledExperts.EPDSentryGunAnimState
enum class EPDSentryGunAnimState : uint8_t
{
	None                           = 0,
	Spawn                          = 1,
	Ready                          = 2,
	Emp                            = 3,
	Install                        = 4,
	Activated                      = 5,
	EPDSentryGunAnimState_MAX      = 6
};


// Enum VeiledExperts.EBowStringAction
enum class EBowStringAction : uint8_t
{
	Grab                           = 0,
	Release                        = 1,
	PullTight                      = 2,
	EBowStringAction_MAX           = 3
};


// Enum VeiledExperts.EPDSlidableType
enum class EPDSlidableType : uint8_t
{
	Slidable_None                  = 0,
	Slidable_Start                 = 1,
	Slidable_Loop                  = 2,
	Slidable_End                   = 3,
	Slidable_MAX                   = 4
};


// Enum VeiledExperts.ESplineMovementType
enum class ESplineMovementType : uint8_t
{
	Position                       = 0,
	OffsetRotateAndPosition        = 1,
	RotateAndPosition              = 2,
	UseCustomRotation              = 3,
	UseCharacterBone               = 4,
	FOVOnly                        = 5,
	ESplineMovementType_MAX        = 6
};


// Enum VeiledExperts.EMoveInterpolateType
enum class EMoveInterpolateType : uint8_t
{
	None                           = 0,
	PrevPosInclusive               = 1,
	EMoveInterpolateType_MAX       = 2
};


// Enum VeiledExperts.ECustomizePage
enum class ECustomizePage : uint8_t
{
	None                           = 0,
	AgentSkin                      = 1,
	AgentLepton                    = 2,
	AgentProfile                   = 3,
	AgentMelee                     = 4,
	AgentUnique                    = 5,
	WeaponSkin                     = 6,
	WeaponSticker                  = 7,
	WeaponParts                    = 8,
	WeaponAcc                      = 9,
	WeaponKillCounter              = 10,
	WeaponUnique                   = 11,
	ECustomizePage_MAX             = 12
};


// Enum VeiledExperts.ETabButtonState
enum class ETabButtonState : uint8_t
{
	UnSelect                       = 0,
	Select                         = 1,
	ETabButtonState_MAX            = 2
};


// Enum VeiledExperts.EPDTransformationActorType
enum class EPDTransformationActorType : uint8_t
{
	None                           = 0,
	NPC                            = 1,
	SEED                           = 2,
	EPDTransformationActorType_MAX = 3
};


// Enum VeiledExperts.EInvenSortOrder
enum class EInvenSortOrder : uint8_t
{
	Property_Coin                  = 0,
	Property_ArmorPlate            = 1,
	Property_Bandage               = 2,
	Property_Painkiller            = 3,
	Property_Pouchkit              = 4,
	Property_FirstAidkit           = 5,
	Property_Astrapi               = 6,
	Property_SelfRevivalKit        = 7,
	Property_Scope                 = 8,
	Property_FrontSight            = 9,
	Property_SideSight             = 10,
	Property_RearSight             = 11,
	Property_Grip                  = 12,
	Property_Muzzle                = 13,
	Property_Stock                 = 14,
	Property_Magazine              = 15,
	Property_Ammo                  = 16,
	Property_Ammo01                = 17,
	Property_Ammo02                = 18,
	Property_Ammo_762_LR           = 19,
	Property_Ammo_12Gauge          = 20,
	Property_Ammo03                = 21,
	Property_Ammo04                = 22,
	Property_Ammo_762G             = 23,
	Property_Ammo_Arrow            = 24,
	Property_Ammo_Exosuit          = 25,
	Property_Ammo_Drill            = 26,
	Property_AR                    = 27,
	Property_SMG                   = 28,
	Property_SR                    = 29,
	Property_SG                    = 30,
	Property_LMG                   = 31,
	Property_BOW                   = 32,
	Property_RPG                   = 33,
	Property_MINIGUN               = 34,
	Property_EXOSUIT_SMG           = 35,
	Property_ETC                   = 36,
	Property_Pistol                = 37,
	Property_Grenade               = 38,
	Property_Smoke                 = 39,
	Property_GasGrenade            = 40,
	Property_ScanGrenade           = 41,
	Property_Explosive             = 42,
	Property_SND_BombDeactivateKit = 43,
	Property_MAX                   = 44
};


// Enum VeiledExperts.EChannelRange
enum class EChannelRange : uint8_t
{
	None                           = 0,
	Party                          = 1,
	Area                           = 2,
	Team                           = 3,
	Text                           = 4,
	Max                            = 5
};


// Enum VeiledExperts.EMapObjectState
enum class EMapObjectState : uint8_t
{
	None                           = 0,
	Normal                         = 1,
	Groggy                         = 2,
	Dead                           = 3,
	Revive                         = 4,
	Rescue                         = 5,
	Bandage                        = 6,
	Astrapi                        = 7,
	ArmorKit                       = 8,
	Seed                           = 9,
	Shop                           = 10,
	Max                            = 11
};


// Enum VeiledExperts.EMapObjectType
enum class EMapObjectType : uint8_t
{
	None                           = 0,
	MainPlayer                     = 1,
	Ally                           = 2,
	Enemy                          = 3,
	Npc                            = 4,
	SentryGunNpc                   = 5,
	DroneNpc                       = 6,
	Object                         = 7,
	Seed                           = 8,
	Demolition                     = 9,
	EnemyDamage                    = 10,
	EnemyDeath                     = 11,
	SafeZone                       = 12,
	FireSound                      = 13,
	Ping                           = 14,
	Camp                           = 15,
	Drawing                        = 16,
	ItemBox                        = 17,
	CoinBox                        = 18,
	YoungsikHacking                = 19,
	TutorialMarker                 = 20,
	ThrowObj                       = 21,
	LevelRegion                    = 22,
	Spectating                     = 23,
	Max                            = 24
};


// Enum VeiledExperts.EEntryPointType
enum class EEntryPointType : uint8_t
{
	EPT_NONE                       = 0,
	EPT_Entry                      = 1,
	EPT_Exit                       = 2,
	EPT_MAX                        = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct VeiledExperts.GroupRangeInfo
// 0x0024
struct FGroupRangeInfo
{
	int                                                DefScore;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PlayerExistWeight;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PlayerNoneWeight;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ARadius;                                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BRadius;                                                  // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      AColor;                                                   // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      BColor;                                                   // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Bold;                                                     // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.PDAudioSwitch
// 0x0020
struct FPDAudioSwitch
{
	struct FString                                     Group;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Switch;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct VeiledExperts.ActionNotifyData
// 0x0038
struct FActionNotifyData
{
	struct FName                                       EventName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveBase*                                  Curve;                                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EventVector;                                              // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	class UAnimSequenceBase*                           NotifyAnimSequence;                                       // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	ECameraMovementType                                CameraMovement;                                           // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct VeiledExperts.PDAS_HPAnimEvent
// 0x0030
struct FPDAS_HPAnimEvent
{
	int                                                HP;                                                       // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AnimIndex;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EffectID;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x000C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     SoundName;                                                // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UStaticMesh*                                 MeshForDS;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct VeiledExperts.AutoBreakSetting
// 0x000C
struct FAutoBreakSetting
{
	int                                                Round;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MinTimeToBreak;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxTimeToBreak;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct VeiledExperts.AutoBreakSettings
// 0x0018
struct FAutoBreakSettings
{
	EGameModeInternal                                  GameMode;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FAutoBreakSetting>                   Settings;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct VeiledExperts.PDButtonOutLine
// 0x00C8
struct FPDButtonOutLine
{
	struct FAnchors                                    Anchors;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FMargin                                     Offsets;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Alignment;                                                // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSizeToContent;                                           // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FSlateBrush                                 OutLineStyle;                                             // 0x0030(0x0088) (Edit, BlueprintVisible)
	struct FLinearColor                                BrushColor;                                               // 0x00B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.PDCameraGroupPlayData
// 0x0018
struct FPDCameraGroupPlayData
{
	EPDCamGroupPlayParam                               Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Duration;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 SpeedCurve;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct VeiledExperts.PDCameraPlayData
// 0x0038
struct FPDCameraPlayData
{
	EPDCamPlayParam                                    Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     TargetLocation;                                           // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       TargetString;                                             // 0x0010(0x0018) (Edit, BlueprintVisible)
	float                                              StartTime;                                                // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct VeiledExperts.ClimbNodeInfo
// 0x0020
struct FClimbNodeInfo
{
	bool                                               bDataOverridden;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class APDClimbableActor*                           ClimbableActor;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EPDClimbStanceState                                ClimbType;                                                // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EPDClimbMoveType                                   MoveType;                                                 // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EPDClimbPointUptype                                ClimbUpType;                                              // 0x0012(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xD];                                       // 0x0013(0x000D) MISSED OFFSET
};

// ScriptStruct VeiledExperts.NeighborInfo
// 0x0040
struct FNeighborInfo
{
	struct FClimbNodeInfo                              Self;                                                     // 0x0000(0x0020) (Edit)
	TArray<struct FClimbNodeInfo>                      NeighborActors;                                           // 0x0020(0x0010) (Edit, ZeroConstructor)
	TArray<struct FClimbNodeInfo>                      NeighborActorsToJump;                                     // 0x0030(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct VeiledExperts.NeighborInfoArray
// 0x0020
struct FNeighborInfoArray
{
	TArray<class APDClimbNodeActor*>                   ClimbNodeActors;                                          // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
	class APDClimbableActor*                           ClimbableActor;                                           // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.EnvSetting
// 0x0060
struct FEnvSetting
{
	unsigned char                                      bApplyLightIntensity : 1;                                 // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              SkyLightIntensity;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirectionalLightIntensity;                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      SkyLightColor;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      DirectionalLightColor;                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseFogSetting : 1;                                       // 0x0014(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FLinearColor                                FogInscatteringColor;                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FogMaxOpacity;                                            // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FogDensity;                                               // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FogHeightFalloff;                                         // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FogStartDistance;                                         // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FogDensity2;                                              // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FogHeightFalloff2;                                        // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FogHeightOffset2;                                         // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      VolumetricFogAlbedo;                                      // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricFogScatteringDistribution;                      // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricFogExtinctionScale;                             // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricFogDistance;                                    // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MovingObjectPosition;                                     // 0x0054(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.SafeZoneDrawing
// 0x0008
struct FSafeZoneDrawing
{
	ESafeZoneDrawStyle                                 Style;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FColor                                      Color;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.HitFeedbackIcon
// 0x0020
struct FHitFeedbackIcon
{
	class UPaperSprite*                                Sprite;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.PDPWUsingInABPAnimDatas
// 0x0128
struct FPDPWUsingInABPAnimDatas
{
	class UAnimSequence*                               Loco_Stand_Idle;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Loco_Crouch_Idle;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Loco_Stand_HipFireIdle;                                   // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Loco_Crouch_HipFireIdle;                                  // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Loco_Stand_ADSIdle;                                       // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Loco_Crouch_ADSIdle;                                      // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Loco_Stand_Fall;                                          // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Loco_Crouch_Fall;                                         // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               StandToCrouch;                                            // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               CrouchToStand;                                            // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               StandToCrouch_ADS;                                        // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               CrouchToStand_ADS;                                        // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Loco_Crouch_Walk_HipFireIdle;                             // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 Loco_Stand_Run;                                           // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 Loco_Crouch_Run;                                          // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 Loco_Stand_Run_ADS;                                       // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 Loco_Crouch_Run_ADS;                                      // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 Loco_Stand_RunStart;                                      // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Loco_Stand_RunStart_L;                                    // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Loco_Stand_RunStart_R;                                    // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 Loco_Crouch_RunStart;                                     // 0x00A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Loco_Stand_Fall_FP;                                       // 0x00A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 Loco_Stand_Walk_FP;                                       // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               WaitBeforePlay_Stand_FP;                                  // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Stance;                                                   // 0x00C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             AO_Lean_Stand;                                            // 0x00C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             AO_Lean_Crouch;                                           // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             AO_Stand_HipFire;                                         // 0x00D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             AO_Crouch_HipFire;                                        // 0x00E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             AO_Stand_ADS;                                             // 0x00E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             AO_Crouch_ADS;                                            // 0x00F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             AO_Crouch_Walk_HipFire;                                   // 0x00F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Stand_LeanR_ADS;                                          // 0x0100(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Crouch_LeanR_ADS;                                         // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Stand_LeanR_HF;                                           // 0x0110(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Crouch_LeanR_HF;                                          // 0x0118(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Crouch_LeanR_Walk_HF;                                     // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.PDPerSpecificWeaponAnimDatas
// 0x00E0
struct FPDPerSpecificWeaponAnimDatas
{
	class UAnimSequence*                               Stance;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReloadWeapon_Stand;                                       // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReloadWeapon_Crouch;                                      // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                QuickReloadWeapon_Stand;                                  // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                QuickReloadWeapon_Crouch;                                 // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                SlowReloadWeapon_Stand;                                   // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                SlowReloadWeapon_Crouch;                                  // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                FireWeapon_FP;                                            // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                BoltActionFP;                                             // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Weapon_ReloadEmpty;                                       // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Weapon_ReloadNotEmpty;                                    // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Weapon_FireEmpty;                                         // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Weapon_FireNotEmpty;                                      // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Weapon_BoltAction;                                        // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Weapon_ReloadEmptyEnd;                                    // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Weapon_Idle;                                              // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Weapon_QuickReloadEmpty;                                  // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Weapon_QuickReloadEmptyEnd;                               // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Weapon_Slow_Reload_Empty;                                 // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Weapon_Slow_Reload_EmptyEnd;                              // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Weapon_Slow_Reload_NotEmpty;                              // 0x00A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Weapon_Draw;                                              // 0x00A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Aim_Charge_Stand;                                         // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Aim_Charge_Crouch;                                        // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ADSAimYaw;                                                // 0x00C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ADSPlusAimPitch_Stn;                                      // 0x00C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ADSPlusAimPitch_Cro;                                      // 0x00C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ADSPlusAimPitch_CroWalk;                                  // 0x00CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ADSPlusAimPitch_Stn_Lean;                                 // 0x00D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ADSPlusAimPitch_Cro_Lean;                                 // 0x00D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ADSPlusAimPitch_CroWalk_Lean;                             // 0x00D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
};

// ScriptStruct VeiledExperts.PDIKAnimInstanceProxy
// 0x00F0 (0x0BA0 - 0x0AB0)
struct FPDIKAnimInstanceProxy : public FIKAnimInstanceProxy
{
	struct FPDHandIKData                               HandIKData;                                               // 0x0AB0(0x00A0) (BlueprintVisible, BlueprintReadOnly)
	float                                              StanceExplicitTime;                                       // 0x0B50(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B54(0x0004) MISSED OFFSET
	class UPDIKAnimInstance*                           IKAnimInstance;                                           // 0x0B58(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPDStateComponent*                           OwnerStateComponent;                                      // 0x0B60(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class APDCharacterEntity*                          OwnerCharacterEntity;                                     // 0x0B68(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AimClampedYaw;                                            // 0x0B70(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2C];                                      // 0x0B74(0x002C) MISSED OFFSET
};

// ScriptStruct VeiledExperts.PDIngameMapPos
// 0x0028
struct FPDIngameMapPos
{
	struct FAnchors                                    Anchors;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FMargin                                     Offsets;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Alignment;                                                // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.PDResultAnimSequence
// 0x0018
struct FPDResultAnimSequence
{
	class UAnimSequence*                               ActionAnimData;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               IdleAnimData;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                EquipWeaponIndex;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct VeiledExperts.PDResultHairAnimSequence
// 0x0010
struct FPDResultHairAnimSequence
{
	class UAnimSequence*                               ActionAnimData;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               IdleAnimData;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.PDLobbyAnimData
// 0x00A0
struct FPDLobbyAnimData
{
	class UAnimSequence*                               Lobby_Scene_Select;                                       // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Lobby_Scene_Idle_2;                                       // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Lobby_Scene_Matching_Start;                               // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Lobby_Scene_Matching_Idle;                                // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Lobby_Scene_Matching_Cancel;                              // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Lobby_Scene_Customizing;                                  // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FPDResultAnimSequence>               Result_Scene_Win;                                         // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FPDResultAnimSequence>               Result_Scene_Lose;                                        // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UAnimSequence*                               Lobby_Scene_Select_Hair;                                  // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Lobby_Scene_Idle_Hair_2;                                  // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Lobby_Scene_Matching_Start_Hair;                          // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Lobby_Scene_Matching_Idle_Hair;                           // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Lobby_Scene_Matching_Cancel_Hair;                         // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Lobby_Scene_Customizing_Hair;                             // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FPDResultHairAnimSequence>           Result_Scene_Win_Hair;                                    // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FPDResultHairAnimSequence>           Result_Scene_Lose_Hair;                                   // 0x0090(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct VeiledExperts.PDActionExecutionInfo
// 0x0020
struct FPDActionExecutionInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct VeiledExperts.PDPCUsingInABPAnimDatas
// 0x0060
struct FPDPCUsingInABPAnimDatas
{
	class UBlendSpace*                                 Loco_Climb_2P;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 Loco_Climb_4P;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Loco_Groggy_Idle_Bare;                                    // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Loco_Groggy_Idle_HG;                                      // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 Loco_Groggy_Run_Bare;                                     // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 Loco_Groggy_Run_HG;                                       // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Loco_Fall_Groggy_Idle_Bare;                               // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Loco_Climb_Groggy_Idle_Bare;                              // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             AO_Groggy_Bare;                                           // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             AO_Groggy_HG;                                             // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 Loco_Slide_Default;                                       // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 Loco_Slide_Groggy;                                        // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.PDLeanAnimDatas
// 0x0008
struct FPDLeanAnimDatas
{
	class UAnimMontage*                                Lean_Loop;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.PDTurnAnimDatas
// 0x00C0
struct FPDTurnAnimDatas
{
	class UAnimMontage*                                Loco_Stand_TurnInPlaceLeft;                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Loco_Stand_TurnInPlaceRight;                              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Loco_Stand_TurnInPlaceLeft_GunStance;                     // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Loco_Stand_TurnInPlaceRight_GunStance;                    // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Loco_Crouch_TurnInPlaceLeft;                              // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Loco_Crouch_TurnInPlaceRight;                             // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Loco_Crouch_TurnInPlaceLeft_GunStance;                    // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Loco_Crouch_TurnInPlaceRight_GunStance;                   // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Loco_Groggy_TurnInPlaceLeft;                              // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Loco_Groggy_TurnInPlaceRight;                             // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Stand_AlignRotation_TurnLeft;                             // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Stand_AlignRoatation_TurnRight;                           // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Crouch_AlignRoatation_TurnLeft;                           // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Crouch_AlignRotation_TurnRight;                           // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Mirror_Turn_Stn;                                          // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Mirror_Turn_Cro;                                          // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Stand_TurnInPlaceLeft_Glock;                              // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Stand_TurnInPlaceRight_Glock;                             // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Crouch_TurnInPlaceLeft_Glock;                             // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Crouch_TurnInPlaceRight_Glock;                            // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Stand_TurnInPlaceLeft_Bow;                                // 0x00A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Stand_TurnInPlaceRight_Bow;                               // 0x00A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Crouch_TurnInPlaceLeft_Bow;                               // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Crouch_TurnInPlaceRight_Bow;                              // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.PDParkourActionAnimDatas
// 0x01B0
struct FPDParkourActionAnimDatas
{
	class UAnimMontage*                                Jump;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Jump_Sprint;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Jump_Long01;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Jump_Long02;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Jump_Long03;                                              // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Jump_Long04;                                              // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                SoftLand;                                                 // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AutoRollLand;                                             // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                HardLand;                                                 // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                HardLand1;                                                // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                HardLand2;                                                // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                HardLand1_Move;                                           // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                HardLand2_Move;                                           // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                groggyland;                                               // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                DamageLand;                                               // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Roll_F01;                                                 // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Roll_F02;                                                 // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Roll_F03;                                                 // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Roll_F04;                                                 // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Roll_B;                                                   // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Roll_L;                                                   // 0x00A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Roll_R;                                                   // 0x00A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                GRO_Roll_F;                                               // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                GRO_Roll_B;                                               // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                GRO_Roll_L;                                               // 0x00C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                GRO_Roll_R;                                               // 0x00C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Vault_100_Walk;                                           // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Vault_100_Run;                                            // 0x00D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Vault_150_Walk;                                           // 0x00E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Vault_150_Run;                                            // 0x00E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Vault_200_Walk;                                           // 0x00F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Vault_200_Run;                                            // 0x00F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Vault_250_Walk;                                           // 0x0100(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Vault_250_Run;                                            // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Vault_300_Walk;                                           // 0x0110(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Vault_300_Run;                                            // 0x0118(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Climbup_51;                                               // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Climbup_100_Walk;                                         // 0x0128(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Climbup_100_Run;                                          // 0x0130(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Climbup_150_Walk;                                         // 0x0138(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Climbup_150_Run;                                          // 0x0140(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Climbup_200_Walk;                                         // 0x0148(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Climbup_200_Run;                                          // 0x0150(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Climbup_250_Walk;                                         // 0x0158(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Climbup_250_Run;                                          // 0x0160(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Climbup_300_Walk;                                         // 0x0168(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Climbup_300_Run;                                          // 0x0170(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Climbup_2P_Walk;                                          // 0x0178(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Climbup_2P_Run;                                           // 0x0180(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ClimbupMoveStart_101;                                     // 0x0188(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ClimbupMoveStart_200_301;                                 // 0x0190(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                LedgeGrapVault;                                           // 0x0198(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                LedgeGrapClimbupFull;                                     // 0x01A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                LedgeGrapClimbupHalf;                                     // 0x01A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.PDClimbActionAnimDatas
// 0x0068
struct FPDClimbActionAnimDatas
{
	class UAnimMontage*                                ClimbEnter;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ClimbLedgeGrap;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ClimbExit;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ClimbExit_2PJump;                                         // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ClimbExit_4PJump;                                         // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ClimbMove_Turn;                                           // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ClimbMove_2P;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ClimbMove_2PWide;                                         // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ClimbMove_4P;                                             // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ClimbMove_4PWide;                                         // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ClimbJump_2P;                                             // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ClimbJump_4P;                                             // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ClimbLongJump_4P;                                         // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.PDGroggyActionAnimDatas
// 0x0080
struct FPDGroggyActionAnimDatas
{
	class UAnimMontage*                                Enter_MeleeHit;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Enter_Random_Hit_Head;                                    // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Enter_Random_Hit_Chest;                                   // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Enter_Random_Hit_Abdomen;                                 // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Enter_Random_Hit_LeftLeg;                                 // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Enter_Random_Hit_RightLeg;                                // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Exit;                                                     // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                FallEnter;                                                // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                FallLand;                                                 // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Climb2PEnter;                                             // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Climb4PEnter;                                             // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                SlideEnter;                                               // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                InertiaEnter;                                             // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                FrontKnockBackEnter;                                      // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                BackKnockBackEnter;                                       // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                BurnEnter;                                                // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.PDInteractionActionAnimDatas
// 0x0048
struct FPDInteractionActionAnimDatas
{
	class UAnimMontage*                                PickItem_Crouch_Left;                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                PickItem_Crouch_Right;                                    // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                PickItem_Stand_Left;                                      // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                PickItem_Stand_Right;                                     // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Door_HingeOpen;                                           // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                GroggyRescue;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Bomb;                                                     // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Bomb_Crouch;                                              // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Bomb_Groggy;                                              // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.PDItemUseActionAnimDatas
// 0x0030
struct FPDItemUseActionAnimDatas
{
	class UAnimMontage*                                Bandage;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Painkiller;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ArmorPlateReplaceKit;                                     // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Bandage_CLI;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Painkiller_CLI;                                           // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ArmorPlateReplaceKit_CLI;                                 // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.PDDeathAnimData
// 0x0040
struct FPDDeathAnimData
{
	class UAnimMontage*                                Death_Random;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Death_GROGGY_Random;                                      // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Death_Groggy_By_Soccer_Kick;                              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Death_GROGGY_Fall;                                        // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Death_CLIMB_2P;                                           // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Death_CLIMB_4P;                                           // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Death_Front_KnockBack;                                    // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Death_Back_KnockBack;                                     // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.PDKnockbackAnimData
// 0x0050
struct FPDKnockbackAnimData
{
	class UAnimMontage*                                Knockback_WeakCenter;                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Knockback_WeakLeft;                                       // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Knockback_WeakRight;                                      // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Knockback_MidCenter;                                      // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Knockback_MidLeft;                                        // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Knockback_MidRight;                                       // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Knockback_StrongCenter;                                   // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Knockback_StrongLeft;                                     // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Knockback_StrongRight;                                    // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Knockback_FallingObject;                                  // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.PDPerkAnimDatas
// 0x0020
struct FPDPerkAnimDatas
{
	class UAnimMontage*                                RobCoin;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReviveInGroggy;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Hacking;                                                  // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Maintenance;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.PDZiplineAnimData
// 0x0010
struct FPDZiplineAnimData
{
	class UAnimMontage*                                ZiplineEnter;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ZiplineRide;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.PDSignatureAnimDatas
// 0x0068
struct FPDSignatureAnimDatas
{
	class UAnimMontage*                                RevolverSpinning;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                DrinkBottle;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                EatHotDog;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                LickKnife;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                CoinToss;                                                 // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                GlassesScan;                                              // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                LookMagnifier;                                            // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ShootFlare;                                               // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                SprayMoney;                                               // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Warcry;                                                   // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                SpinSickle;                                               // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                TurnTable;                                                // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                FeverTurnTable;                                           // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.PDSlideAnimDatas
// 0x0020
struct FPDSlideAnimDatas
{
	class UAnimMontage*                                SlideEnter;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                SlideExitDefault;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                SlideExitRoll;                                            // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                SlideExitGroggy;                                          // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.PDHitReactionAnimData
// 0x0150
struct FPDHitReactionAnimData
{
	class UAnimMontage*                                AM_BurnReactionAnim;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                AM_NormalHitAnimA;                                        // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                AM_NormalHitAnimB;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                AM_NormalHitAnimC;                                        // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UAnimMontage*>                        FowardNormalHitAnims;                                     // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        BackNormalHitAnims;                                       // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        LeftNormalHitAnims;                                       // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        RightNormalHitAnims;                                      // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        HitHeadAnims;                                             // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        BulletGrazeAnimsStand;                                    // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        BulletGrazeAnimsCrouch;                                   // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        BombGrazeAnimsStand;                                      // 0x0090(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        BombGrazeAnimsCrouch;                                     // 0x00A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UAnimMontage*                                AM_RunHitAnimA;                                           // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                AM_RunHitAnimB;                                           // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                AM_RunHitAnimC;                                           // 0x00C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    HitReactionRotation;                                      // 0x00C8(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HitReactionAngleFoward;                                   // 0x00D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitReactionAngleLeft;                                     // 0x00D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitReactionAngleRight;                                    // 0x00DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitReactionAngleBack;                                     // 0x00E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 HitReactionRotationCurve;                                 // 0x00E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NoramlHitMotionFrequency_Local;                           // 0x00F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NoramlHitMotionFrequency_Remote;                          // 0x00F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunHitMotionFrequency_Local;                              // 0x00F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunHitMotionFrequency_Remote;                             // 0x00FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FirstHitTime;                                             // 0x0100(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	class UAnimMontage*                                AM_Lower_Right_HitAnim;                                   // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                AM_Lower_Left_HitAnim;                                    // 0x0110(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitDelay;                                                 // 0x0118(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	class UAnimMontage*                                AM_UpperBody_WeakCenter;                                  // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                AM_UpperBody_WeakLeft;                                    // 0x0128(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                AM_UpperBody_WeakRight;                                   // 0x0130(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                AM_UpperBody_StrongCenter;                                // 0x0138(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                AM_UpperBody_StrongLeft;                                  // 0x0140(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                AM_UpperBody_StrongRight;                                 // 0x0148(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct VeiledExperts.PDWearJuggernautAnimData
// 0x0018
struct FPDWearJuggernautAnimData
{
	class UAnimMontage*                                WearJuggernaut;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                JuggernautDash;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                JuggernautLauncher;                                       // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.PDCQCAnimData
// 0x0018
struct FPDCQCAnimData
{
	class UAnimMontage*                                CQCAttack;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                CQCDamage;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CQC_KnockBackSpaceCheckLength;                            // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CQC_KnockBackSpaceCheckLength_Groggy;                     // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.PDSummonNPCAnimData
// 0x0018
struct FPDSummonNPCAnimData
{
	class UAnimMontage*                                Common;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                SummonUPS;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                SummonDrone;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.PDAFKAnimData
// 0x0058
struct FPDAFKAnimData
{
	class UAnimMontage*                                RifleStand;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                RifleCrouch;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	uint32_t                                           RiflePercentTypeD;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UAnimMontage*                                HGStand;                                                  // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                HGCrouch;                                                 // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ThrowStand;                                               // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ThrowCrouch;                                              // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                MeleeStand;                                               // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                MeleeCrouch;                                              // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                BowStand;                                                 // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                BowCrouch;                                                // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.PDSceneDirectionAnimData
// 0x0030
struct FPDSceneDirectionAnimData
{
	class UAnimMontage*                                RoundEnterSeriousAnim;                                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        SeriousAnimLinkedKeyType;                                 // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UAnimMontage*                                RoundEnterLightAnim;                                      // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        LightAnimLinkedKeyType;                                   // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct VeiledExperts.PDAttackAnimData
// 0x0008
struct FPDAttackAnimData
{
	class UAnimMontage*                                Execution;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.PDPerAgentAnimData
// 0x00A8
struct FPDPerAgentAnimData
{
	struct FPDAFKAnimData                              AFKAnimData;                                              // 0x0000(0x0058) (Edit)
	struct FPDSceneDirectionAnimData                   SceneDirectionAnimData;                                   // 0x0058(0x0030) (Edit)
	struct FPDAttackAnimData                           AttackAnimData;                                           // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPDCQCAnimData                              CQC_AnimData;                                             // 0x0090(0x0018) (Edit)
};

// ScriptStruct VeiledExperts.PDPerCharacterAnimDatas
// 0x0E80
struct FPDPerCharacterAnimDatas
{
	struct FPDPCUsingInABPAnimDatas                    UsingInABPAnimDatas;                                      // 0x0000(0x0060) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPDLeanAnimDatas                            LeanAnimData;                                             // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPDTurnAnimDatas                            TurnAnimDatas;                                            // 0x0068(0x00C0) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPDParkourActionAnimDatas                   ParkourAnimDatas;                                         // 0x0128(0x01B0) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPDClimbActionAnimDatas                     ClimbActionAnimDatas;                                     // 0x02D8(0x0068) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPDGroggyActionAnimDatas                    GroggyActionAnimDatas;                                    // 0x0340(0x0080) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPDInteractionActionAnimDatas               InteractionActionAnimDatas;                               // 0x03C0(0x0048) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPDItemUseActionAnimDatas                   ItemUseActionAnimDatas;                                   // 0x0408(0x0030) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPDDeathAnimData                            DeathAnimData;                                            // 0x0438(0x0040) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPDKnockbackAnimData                        KnockbackAnimData;                                        // 0x0478(0x0050) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPDPerkAnimDatas                            PerkAnimData;                                             // 0x04C8(0x0020) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPDZiplineAnimData                          ZipLineAnimData;                                          // 0x04E8(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPDSignatureAnimDatas                       SignatureAnimData;                                        // 0x04F8(0x0068) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPDSlideAnimDatas                           SlideAnimData;                                            // 0x0560(0x0020) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPDHitReactionAnimData                      HitReactionAnimData;                                      // 0x0580(0x0150) (Edit)
	struct FPDWearJuggernautAnimData                   WearJuggernautAnimData[0x2];                              // 0x06D0(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPDCQCAnimData                              CQC_FemaleCommonAnimData;                                 // 0x0700(0x0018) (Edit)
	struct FPDCQCAnimData                              CQC_MaleCommonAnimData;                                   // 0x0718(0x0018) (Edit)
	struct FPDSummonNPCAnimData                        SummonNPC_AnimData;                                       // 0x0730(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPDPerAgentAnimData                         PerAgentAnimData[0xB];                                    // 0x0748(0x00A8) (Edit)
};

// ScriptStruct VeiledExperts.PDLandActionAnimDatas
// 0x0008
struct FPDLandActionAnimDatas
{
	class UAnimMontage*                                SoftLand;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.PDMeleeActionAnimDatas
// 0x0020
struct FPDMeleeActionAnimDatas
{
	class UAnimMontage*                                Melee_Attack_DefAtt;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Melee_Attack_LBTAtt;                                      // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Melee_Attack_RBTAtt;                                      // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Melee_Attack_FallAtt;                                     // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.PDWeaponHandlingAnimDatas
// 0x00D0
struct FPDWeaponHandlingAnimDatas
{
	class UAnimMontage*                                Stand_FireWeapon;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Crouch_FireWeapon;                                        // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Stand_Fire_HipFire;                                       // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Crouch_Fire_HipFire;                                      // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Stand_FireWeapon_FP;                                      // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Crouch_FireWeapon_FP;                                     // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Crouch_Walk_Fire_HipFire;                                 // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Crouch_Walk_Fire_ADS;                                     // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 Stand_FireRecoil_HipFire;                                 // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 Crouch_FireRecoil_HipFire;                                // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 Stand_FireRecoil_ADS;                                     // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 Crouch_FireRecoil_ADS;                                    // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 Stand_FireRecoil_ADS_FP;                                  // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 Crouch_FireRecoil_ADS_FP;                                 // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 Crouch_Walk_FireRecoil_HipFire;                           // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPDFireRecoilLevelData*                      FireRecoilLeveldata;                                      // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPDFireRecoilLevelData*                      FireRecoilLeveldata_FP;                                   // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReloadWeapon_Stand;                                       // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReloadWeapon_Crouch;                                      // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReloadWeapon_Groggy;                                      // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                HolsterWeapon;                                            // 0x00A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                DrawWeapon;                                               // 0x00A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                DrawWeapon_FP;                                            // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                BoltAction;                                               // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                BoltAction_Crouch;                                        // 0x00C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                BoltAction_Groggy;                                        // 0x00C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.PDPWParkourAnimDatas
// 0x0048
struct FPDPWParkourAnimDatas
{
	class UAnimMontage*                                Roll_F;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Roll_F02;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Roll_F03;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Roll_F04;                                                 // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Roll_B;                                                   // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Roll_L;                                                   // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Roll_R;                                                   // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Jump_FP;                                                  // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Land_FP;                                                  // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.PDPerWeaponAnimDatas
// 0x0268
struct FPDPerWeaponAnimDatas
{
	struct FPDPWUsingInABPAnimDatas                    UsingInABPAnimDatas;                                      // 0x0000(0x0128) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPDLandActionAnimDatas                      LandAnimDatas;                                            // 0x0128(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPDMeleeActionAnimDatas                     MeleeActionAnimDatas;                                     // 0x0130(0x0020) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPDWeaponHandlingAnimDatas                  WeaponHandlingAnimDatas;                                  // 0x0150(0x00D0) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPDPWParkourAnimDatas                       ParkourDatas;                                             // 0x0220(0x0048) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.PDPlayerAnimDatas
// 0x58A8 (0x58B0 - 0x0008)
struct FPDPlayerAnimDatas : public FTableRowBase
{
	struct FPDPerCharacterAnimDatas                    PerCharacterAnimDatas;                                    // 0x0008(0x0E80) (Edit)
	struct FPDPerWeaponAnimDatas                       PerWeaponAnimDatas[0x15];                                 // 0x0E88(0x0268) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPDPerSpecificWeaponAnimDatas               PerSpecificWeaponAnimDatas[0x1B];                         // 0x4110(0x00E0) (Edit)
};

// ScriptStruct VeiledExperts.PDLobbyCharacterAnimData
// 0x00A0 (0x00A8 - 0x0008)
struct FPDLobbyCharacterAnimData : public FTableRowBase
{
	struct FPDLobbyAnimData                            LobbyAnimData;                                            // 0x0008(0x00A0) (Edit)
};

// ScriptStruct VeiledExperts.PDAnimGraphAimingValues
// 0x000C
struct FPDAnimGraphAimingValues
{
	struct FRotator                                    SpineRotation;                                            // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
};

// ScriptStruct VeiledExperts.SkelMeshMergeSectionMapping_BP
// 0x0010
struct FSkelMeshMergeSectionMapping_BP
{
	TArray<int>                                        SectionIDs;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct VeiledExperts.SkelMeshMergeUVTransform
// 0x0010
struct FSkelMeshMergeUVTransform
{
	TArray<struct FTransform>                          UVTransforms;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct VeiledExperts.SkelMeshMergeUVTransformMapping
// 0x0010
struct FSkelMeshMergeUVTransformMapping
{
	TArray<struct FSkelMeshMergeUVTransform>           UVTransformsPerMesh;                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct VeiledExperts.SkeletalMeshMergeParams
// 0x0048
struct FSkeletalMeshMergeParams
{
	TArray<struct FSkelMeshMergeSectionMapping_BP>     MeshSectionMappings;                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FSkelMeshMergeUVTransformMapping>    UVTransformsPerMesh;                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class USkeletalMesh*>                       MeshesToMerge;                                            // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                StripTopLODS;                                             // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bNeedsCpuAccess : 1;                                      // 0x0034(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSkeletonBefore : 1;                                      // 0x0034(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	class USkeleton*                                   Skeleton;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPhysicsAsset*                               PhysicsAsset;                                             // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.ParkourHandOffset
// 0x0008 (0x0010 - 0x0008)
struct FParkourHandOffset : public FTableRowBase
{
	float                                              LeftHandOffset;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RightHandOffset;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.ActionTaskData
// 0x0070
struct FActionTaskData
{
	bool                                               BoolValue0;                                               // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BoolValue1;                                               // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                IntValue0;                                                // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                IntValue1;                                                // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue0;                                              // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue1;                                              // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VectorValue0;                                             // 0x0014(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VectorValue1;                                             // 0x0020(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FTransform                                  TransformValue;                                           // 0x0030(0x0030) (BlueprintVisible, IsPlainOldData)
	class UObject*                                     ObjectValue0;                                             // 0x0060(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ObjectValue1;                                             // 0x0068(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.WeaponAnimDataSet
// 0x0008
struct FWeaponAnimDataSet
{
	class UAnimMontage*                                Fire;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.BulletWeaponAnimDataSet
// 0x0008 (0x0010 - 0x0008)
struct FBulletWeaponAnimDataSet : public FWeaponAnimDataSet
{
	class UAnimMontage*                                Reload;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.PDIngameFacialAnimData
// 0x0068
struct FPDIngameFacialAnimData
{
	class UAnimSequence*                               Idle;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Crouch;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Exhauted;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               ads;                                                      // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Groggy;                                                   // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Dead;                                                     // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Env1;                                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Melee;                                                    // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Hipfire;                                                  // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ADSFire;                                                  // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Reload;                                                   // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Painful;                                                  // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Parkour;                                                  // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.PDFacialAnimData
// 0x0478 (0x0480 - 0x0008)
struct FPDFacialAnimData : public FTableRowBase
{
	struct FPDIngameFacialAnimData                     IngameFacialAnimData[0xB];                                // 0x0008(0x0068) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.PDHitReactionBSAnimData
// 0x0008
struct FPDHitReactionBSAnimData
{
	class UBlendSpaceBase*                             HitReaction_BS;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VeiledExperts.SmoothMoveInfo
// 0x0108
struct FSmoothMoveInfo
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
	class UPrimitiveComponent*                         TargetRotationComponent;                                  // 0x0090(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         TargetLocationComponent;                                  // 0x0098(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      TargetRotationActor;                                      // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetLocationActor;                                      // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x00B0(0x0038) MISSED OFFSET
	class UCurveFloat*                                 CurrentSmoothRotationCurve;                               // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CurrentSmoothLocationCurveFloat;                          // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                CurrentSmoothLocationCurveVector;                         // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0100(0x0008) MISSED OFFSET
};

// ScriptStruct VeiledExperts.CameraMoveInfo
// 0x0050
struct FCameraMoveInfo
{
	float                                              ArmLength;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SocketOffset;                                             // 0x0004(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetOffset;                                             // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RelativeRotation;                                         // 0x001C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FOV;                                                      // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InterpTime;                                               // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ReturnTime;                                               // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DelayTime;                                                // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UCurveFloat>                  BlendingCurve;                                            // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UCurveFloat>                  ReturnCurve;                                              // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct VeiledExperts.PDFootstepInfo
// 0x0050
struct FPDFootstepInfo
{
	class UDecalComponent*                             Decal;                                                    // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0008(0x0048) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
