#pragma once
#define WINDOWS_IGNORE_PACKING_MISMATCH
// Veiled Experts (i dont know the version bro) SDK

#include <set>
#include <string>
#include <xlocale>
#include <windows.h>
#include <psapi.h>
static int x, y;

#include "SDK/VX_Basic.hpp"

#include "SDK/VX_CoreUObject_structs.hpp"
#include "SDK/VX_CoreUObject_classes.hpp"
#include "SDK/VX_CoreUObject_parameters.hpp"
#include "SDK/VX_InputCore_structs.hpp"
#include "SDK/VX_InputCore_classes.hpp"
#include "SDK/VX_InputCore_parameters.hpp"
#include "SDK/VX_AudioPlatformConfiguration_structs.hpp"
#include "SDK/VX_AudioPlatformConfiguration_classes.hpp"
#include "SDK/VX_AudioPlatformConfiguration_parameters.hpp"
#include "SDK/VX_PacketHandler_structs.hpp"
#include "SDK/VX_PacketHandler_classes.hpp"
#include "SDK/VX_PacketHandler_parameters.hpp"
#include "SDK/VX_PhysicsCore_structs.hpp"
#include "SDK/VX_PhysicsCore_classes.hpp"
#include "SDK/VX_PhysicsCore_parameters.hpp"
#include "SDK/VX_AudioExtensions_structs.hpp"
#include "SDK/VX_AudioExtensions_classes.hpp"
#include "SDK/VX_AudioExtensions_parameters.hpp"
#include "SDK/VX_SlateCore_structs.hpp"
#include "SDK/VX_SlateCore_classes.hpp"
#include "SDK/VX_SlateCore_parameters.hpp"
#include "SDK/VX_Slate_structs.hpp"
#include "SDK/VX_Slate_classes.hpp"
#include "SDK/VX_Slate_parameters.hpp"
#include "SDK/VX_Engine_structs.hpp"
#include "SDK/VX_Engine_classes.hpp"
#include "SDK/VX_Engine_parameters.hpp"
#include "SDK/VX_AnimationCore_structs.hpp"
#include "SDK/VX_AnimationCore_classes.hpp"
#include "SDK/VX_AnimationCore_parameters.hpp"
#include "SDK/VX_PropertyPath_structs.hpp"
#include "SDK/VX_PropertyPath_classes.hpp"
#include "SDK/VX_PropertyPath_parameters.hpp"
#include "SDK/VX_AnimGraphRuntime_structs.hpp"
#include "SDK/VX_AnimGraphRuntime_classes.hpp"
#include "SDK/VX_AnimGraphRuntime_parameters.hpp"
#include "SDK/VX_MovieScene_structs.hpp"
#include "SDK/VX_MovieScene_classes.hpp"
#include "SDK/VX_MovieScene_parameters.hpp"
#include "SDK/VX_MovieSceneTracks_structs.hpp"
#include "SDK/VX_MovieSceneTracks_classes.hpp"
#include "SDK/VX_MovieSceneTracks_parameters.hpp"
#include "SDK/VX_UMG_structs.hpp"
#include "SDK/VX_UMG_classes.hpp"
#include "SDK/VX_UMG_parameters.hpp"
#include "SDK/VX_WebBrowserWidget_structs.hpp"
#include "SDK/VX_WebBrowserWidget_classes.hpp"
#include "SDK/VX_WebBrowserWidget_parameters.hpp"
#include "SDK/VX_AkAudio_structs.hpp"
#include "SDK/VX_AkAudio_classes.hpp"
#include "SDK/VX_AkAudio_parameters.hpp"
#include "SDK/VX_PDAnimRuntime_structs.hpp"
#include "SDK/VX_PDAnimRuntime_classes.hpp"
#include "SDK/VX_PDAnimRuntime_parameters.hpp"
#include "SDK/VX_VeiledExperts_structs.hpp"
#include "SDK/VX_VeiledExperts_classes.hpp"
#include "SDK/VX_VeiledExperts_parameters.hpp"
#include "SDK/VX_AgentDefaultLeptonListItem_structs.hpp"
#include "SDK/VX_AgentDefaultLeptonListItem_classes.hpp"
#include "SDK/VX_AgentDefaultLeptonListItem_parameters.hpp"
#include "SDK/VX_AgentProfile_structs.hpp"
#include "SDK/VX_AgentProfile_classes.hpp"
#include "SDK/VX_AgentProfile_parameters.hpp"
#include "SDK/VX_EquipLeptonInfo_structs.hpp"
#include "SDK/VX_EquipLeptonInfo_classes.hpp"
#include "SDK/VX_EquipLeptonInfo_parameters.hpp"
#include "SDK/VX_LeptonSlot_structs.hpp"
#include "SDK/VX_LeptonSlot_classes.hpp"
#include "SDK/VX_LeptonSlot_parameters.hpp"
#include "SDK/VX_MainLobbyInfo_structs.hpp"
#include "SDK/VX_MainLobbyInfo_classes.hpp"
#include "SDK/VX_MainLobbyInfo_parameters.hpp"
#include "SDK/VX_MatchCategoryListItem_structs.hpp"
#include "SDK/VX_MatchCategoryListItem_classes.hpp"
#include "SDK/VX_MatchCategoryListItem_parameters.hpp"
#include "SDK/VX_MatchExtend_structs.hpp"
#include "SDK/VX_MatchExtend_classes.hpp"
#include "SDK/VX_MatchExtend_parameters.hpp"
#include "SDK/VX_MatchList_structs.hpp"
#include "SDK/VX_MatchList_classes.hpp"
#include "SDK/VX_MatchList_parameters.hpp"
#include "SDK/VX_MatchListItem_structs.hpp"
#include "SDK/VX_MatchListItem_classes.hpp"
#include "SDK/VX_MatchListItem_parameters.hpp"
#include "SDK/VX_MatchModeList_structs.hpp"
#include "SDK/VX_MatchModeList_classes.hpp"
#include "SDK/VX_MatchModeList_parameters.hpp"
#include "SDK/VX_MatchModeListItem_structs.hpp"
#include "SDK/VX_MatchModeListItem_classes.hpp"
#include "SDK/VX_MatchModeListItem_parameters.hpp"
#include "SDK/VX_MatchStartUI_structs.hpp"
#include "SDK/VX_MatchStartUI_classes.hpp"
#include "SDK/VX_MatchStartUI_parameters.hpp"
#include "SDK/VX_MissionListItem_structs.hpp"
#include "SDK/VX_MissionListItem_classes.hpp"
#include "SDK/VX_MissionListItem_parameters.hpp"
#include "SDK/VX_NewPartySlotListItem_structs.hpp"
#include "SDK/VX_NewPartySlotListItem_classes.hpp"
#include "SDK/VX_NewPartySlotListItem_parameters.hpp"
#include "SDK/VX_PartyMemberNameTag_structs.hpp"
#include "SDK/VX_PartyMemberNameTag_classes.hpp"
#include "SDK/VX_PartyMemberNameTag_parameters.hpp"
#include "SDK/VX_TrainingListItem_structs.hpp"
#include "SDK/VX_TrainingListItem_classes.hpp"
#include "SDK/VX_TrainingListItem_parameters.hpp"
#include "SDK/VX_BrickListItem_structs.hpp"
#include "SDK/VX_BrickListItem_classes.hpp"
#include "SDK/VX_BrickListItem_parameters.hpp"
#include "SDK/VX_ClanApplicantListItem_structs.hpp"
#include "SDK/VX_ClanApplicantListItem_classes.hpp"
#include "SDK/VX_ClanApplicantListItem_parameters.hpp"
#include "SDK/VX_ClanCreate_structs.hpp"
#include "SDK/VX_ClanCreate_classes.hpp"
#include "SDK/VX_ClanCreate_parameters.hpp"
#include "SDK/VX_ClanInfo_structs.hpp"
#include "SDK/VX_ClanInfo_classes.hpp"
#include "SDK/VX_ClanInfo_parameters.hpp"
#include "SDK/VX_ClanList_structs.hpp"
#include "SDK/VX_ClanList_classes.hpp"
#include "SDK/VX_ClanList_parameters.hpp"
#include "SDK/VX_ClanMemberListItem_structs.hpp"
#include "SDK/VX_ClanMemberListItem_classes.hpp"
#include "SDK/VX_ClanMemberListItem_parameters.hpp"
#include "SDK/VX_ClanOtherListItem_structs.hpp"
#include "SDK/VX_ClanOtherListItem_classes.hpp"
#include "SDK/VX_ClanOtherListItem_parameters.hpp"
#include "SDK/VX_ClanPage_structs.hpp"
#include "SDK/VX_ClanPage_classes.hpp"
#include "SDK/VX_ClanPage_parameters.hpp"
#include "SDK/VX_FindPartyListItem_structs.hpp"
#include "SDK/VX_FindPartyListItem_classes.hpp"
#include "SDK/VX_FindPartyListItem_parameters.hpp"
#include "SDK/VX_FriendAddItem_structs.hpp"
#include "SDK/VX_FriendAddItem_classes.hpp"
#include "SDK/VX_FriendAddItem_parameters.hpp"
#include "SDK/VX_FriendAddPage_structs.hpp"
#include "SDK/VX_FriendAddPage_classes.hpp"
#include "SDK/VX_FriendAddPage_parameters.hpp"
#include "SDK/VX_FriendClanItem_structs.hpp"
#include "SDK/VX_FriendClanItem_classes.hpp"
#include "SDK/VX_FriendClanItem_parameters.hpp"
#include "SDK/VX_FriendListItem_structs.hpp"
#include "SDK/VX_FriendListItem_classes.hpp"
#include "SDK/VX_FriendListItem_parameters.hpp"
#include "SDK/VX_FriendPage_structs.hpp"
#include "SDK/VX_FriendPage_classes.hpp"
#include "SDK/VX_FriendPage_parameters.hpp"
#include "SDK/VX_RecruitListItem_structs.hpp"
#include "SDK/VX_RecruitListItem_classes.hpp"
#include "SDK/VX_RecruitListItem_parameters.hpp"
#include "SDK/VX_CustomMatchListItem_structs.hpp"
#include "SDK/VX_CustomMatchListItem_classes.hpp"
#include "SDK/VX_CustomMatchListItem_parameters.hpp"
#include "SDK/VX_CustomMatchOption_structs.hpp"
#include "SDK/VX_CustomMatchOption_classes.hpp"
#include "SDK/VX_CustomMatchOption_parameters.hpp"
#include "SDK/VX_BeginnerOnBoard_Temp_structs.hpp"
#include "SDK/VX_BeginnerOnBoard_Temp_classes.hpp"
#include "SDK/VX_BeginnerOnBoard_Temp_parameters.hpp"
#include "SDK/VX_MatchModeList_Normal_Temp_structs.hpp"
#include "SDK/VX_MatchModeList_Normal_Temp_classes.hpp"
#include "SDK/VX_MatchModeList_Normal_Temp_parameters.hpp"
#include "SDK/VX_MatchModeListItem_Noraml_Temp2_structs.hpp"
#include "SDK/VX_MatchModeListItem_Noraml_Temp2_classes.hpp"
#include "SDK/VX_MatchModeListItem_Noraml_Temp2_parameters.hpp"
#include "SDK/VX_MatchStartUI_Temp_structs.hpp"
#include "SDK/VX_MatchStartUI_Temp_classes.hpp"
#include "SDK/VX_MatchStartUI_Temp_parameters.hpp"
#include "SDK/VX_CustomMatchTooltip_structs.hpp"
#include "SDK/VX_CustomMatchTooltip_classes.hpp"
#include "SDK/VX_CustomMatchTooltip_parameters.hpp"
#include "SDK/VX_PerkTooltipItem_structs.hpp"
#include "SDK/VX_PerkTooltipItem_classes.hpp"
#include "SDK/VX_PerkTooltipItem_parameters.hpp"
#include "SDK/VX_Mail_structs.hpp"
#include "SDK/VX_Mail_classes.hpp"
#include "SDK/VX_Mail_parameters.hpp"
#include "SDK/VX_MailBoxListItem_structs.hpp"
#include "SDK/VX_MailBoxListItem_classes.hpp"
#include "SDK/VX_MailBoxListItem_parameters.hpp"
#include "SDK/VX_MailItemListSlot_structs.hpp"
#include "SDK/VX_MailItemListSlot_classes.hpp"
#include "SDK/VX_MailItemListSlot_parameters.hpp"
#include "SDK/VX_MailNotificationSlot_structs.hpp"
#include "SDK/VX_MailNotificationSlot_classes.hpp"
#include "SDK/VX_MailNotificationSlot_parameters.hpp"
#include "SDK/VX_AgentCreate_structs.hpp"
#include "SDK/VX_AgentCreate_classes.hpp"
#include "SDK/VX_AgentCreate_parameters.hpp"
#include "SDK/VX_AgentSelect_structs.hpp"
#include "SDK/VX_AgentSelect_classes.hpp"
#include "SDK/VX_AgentSelect_parameters.hpp"
#include "SDK/VX_Clan_structs.hpp"
#include "SDK/VX_Clan_classes.hpp"
#include "SDK/VX_Clan_parameters.hpp"
#include "SDK/VX_Customize_structs.hpp"
#include "SDK/VX_Customize_classes.hpp"
#include "SDK/VX_Customize_parameters.hpp"
#include "SDK/VX_CustomMatch_structs.hpp"
#include "SDK/VX_CustomMatch_classes.hpp"
#include "SDK/VX_CustomMatch_parameters.hpp"
#include "SDK/VX_GameResult_structs.hpp"
#include "SDK/VX_GameResult_classes.hpp"
#include "SDK/VX_GameResult_parameters.hpp"
#include "SDK/VX_MainLobby_structs.hpp"
#include "SDK/VX_MainLobby_classes.hpp"
#include "SDK/VX_MainLobby_parameters.hpp"
#include "SDK/VX_NickNameCreate_structs.hpp"
#include "SDK/VX_NickNameCreate_classes.hpp"
#include "SDK/VX_NickNameCreate_parameters.hpp"
#include "SDK/VX_Outgame_structs.hpp"
#include "SDK/VX_Outgame_classes.hpp"
#include "SDK/VX_Outgame_parameters.hpp"
#include "SDK/VX_Profile_structs.hpp"
#include "SDK/VX_Profile_classes.hpp"
#include "SDK/VX_Profile_parameters.hpp"
#include "SDK/VX_Training_structs.hpp"
#include "SDK/VX_Training_classes.hpp"
#include "SDK/VX_Training_parameters.hpp"
#include "SDK/VX_WeaponSelect_structs.hpp"
#include "SDK/VX_WeaponSelect_classes.hpp"
#include "SDK/VX_WeaponSelect_parameters.hpp"
#include "SDK/VX_MissionListItem_Temp_structs.hpp"
#include "SDK/VX_MissionListItem_Temp_classes.hpp"
#include "SDK/VX_MissionListItem_Temp_parameters.hpp"
#include "SDK/VX_Training_Temp_structs.hpp"
#include "SDK/VX_Training_Temp_classes.hpp"
#include "SDK/VX_Training_Temp_parameters.hpp"
#include "SDK/VX_MatchPlayerLaptonPresetTab_structs.hpp"
#include "SDK/VX_MatchPlayerLaptonPresetTab_classes.hpp"
#include "SDK/VX_MatchPlayerLaptonPresetTab_parameters.hpp"
#include "SDK/VX_TrainingListItem_Temp_structs.hpp"
#include "SDK/VX_TrainingListItem_Temp_classes.hpp"
#include "SDK/VX_TrainingListItem_Temp_parameters.hpp"
#include "SDK/VX_MatchPlayerMyCharListItem_structs.hpp"
#include "SDK/VX_MatchPlayerMyCharListItem_classes.hpp"
#include "SDK/VX_MatchPlayerMyCharListItem_parameters.hpp"
#include "SDK/VX_MatchPlayerSettingUI_structs.hpp"
#include "SDK/VX_MatchPlayerSettingUI_classes.hpp"
#include "SDK/VX_MatchPlayerSettingUI_parameters.hpp"
#include "SDK/VX_MirrorAnimationSystem_structs.hpp"
#include "SDK/VX_MirrorAnimationSystem_classes.hpp"
#include "SDK/VX_MirrorAnimationSystem_parameters.hpp"
#include "SDK/VX_MatchPlayerTeamCharListItem_structs.hpp"
#include "SDK/VX_MatchPlayerTeamCharListItem_classes.hpp"
#include "SDK/VX_MatchPlayerTeamCharListItem_parameters.hpp"
#include "SDK/VX_GameSetupInfomationPopup_structs.hpp"
#include "SDK/VX_GameSetupInfomationPopup_classes.hpp"
#include "SDK/VX_GameSetupInfomationPopup_parameters.hpp"
#include "SDK/VX_OptionUpdatedNotiPopup_structs.hpp"
#include "SDK/VX_OptionUpdatedNotiPopup_classes.hpp"
#include "SDK/VX_OptionUpdatedNotiPopup_parameters.hpp"
#include "SDK/VX_BP_MainPlayerCharacter_structs.hpp"
#include "SDK/VX_BP_MainPlayerCharacter_classes.hpp"
#include "SDK/VX_BP_MainPlayerCharacter_parameters.hpp"
#include "SDK/VX_BP_PlayerCharacter_structs.hpp"
#include "SDK/VX_BP_PlayerCharacter_classes.hpp"
#include "SDK/VX_BP_PlayerCharacter_parameters.hpp"
#include "SDK/VX_WaitPopup_structs.hpp"
#include "SDK/VX_WaitPopup_classes.hpp"
#include "SDK/VX_WaitPopup_parameters.hpp"
#include "SDK/VX_LinkPopup_structs.hpp"
#include "SDK/VX_LinkPopup_classes.hpp"
#include "SDK/VX_LinkPopup_parameters.hpp"
#include "SDK/VX_TutorialPopup_structs.hpp"
#include "SDK/VX_TutorialPopup_classes.hpp"
#include "SDK/VX_TutorialPopup_parameters.hpp"
#include "SDK/VX_OptionPopup_structs.hpp"
#include "SDK/VX_OptionPopup_classes.hpp"
#include "SDK/VX_OptionPopup_parameters.hpp"
#include "SDK/VX_OptionContent_structs.hpp"
#include "SDK/VX_OptionContent_classes.hpp"
#include "SDK/VX_OptionContent_parameters.hpp"
#include "SDK/VX_InvitePartyPopup_structs.hpp"
#include "SDK/VX_InvitePartyPopup_classes.hpp"
#include "SDK/VX_InvitePartyPopup_parameters.hpp"
#include "SDK/VX_CommunityPopup_structs.hpp"
#include "SDK/VX_CommunityPopup_classes.hpp"
#include "SDK/VX_CommunityPopup_parameters.hpp"
#include "SDK/VX_FindPartyPopup_structs.hpp"
#include "SDK/VX_FindPartyPopup_classes.hpp"
#include "SDK/VX_FindPartyPopup_parameters.hpp"
#include "SDK/VX_CustomJoinPopup_structs.hpp"
#include "SDK/VX_CustomJoinPopup_classes.hpp"
#include "SDK/VX_CustomJoinPopup_parameters.hpp"
#include "SDK/VX_KillLogModule_structs.hpp"
#include "SDK/VX_KillLogModule_classes.hpp"
#include "SDK/VX_KillLogModule_parameters.hpp"
#include "SDK/VX_BattleLogModule_structs.hpp"
#include "SDK/VX_BattleLogModule_classes.hpp"
#include "SDK/VX_BattleLogModule_parameters.hpp"
#include "SDK/VX_TutorialQuestListItem_structs.hpp"
#include "SDK/VX_TutorialQuestListItem_classes.hpp"
#include "SDK/VX_TutorialQuestListItem_parameters.hpp"
#include "SDK/VX_NameTagAlly_structs.hpp"
#include "SDK/VX_NameTagAlly_classes.hpp"
#include "SDK/VX_NameTagAlly_parameters.hpp"
#include "SDK/VX_NameTagEnemy_structs.hpp"
#include "SDK/VX_NameTagEnemy_classes.hpp"
#include "SDK/VX_NameTagEnemy_parameters.hpp"
#include "SDK/VX_ObjectTag_structs.hpp"
#include "SDK/VX_ObjectTag_classes.hpp"
#include "SDK/VX_ObjectTag_parameters.hpp"
#include "SDK/VX_ObjectTagSite_structs.hpp"
#include "SDK/VX_ObjectTagSite_classes.hpp"
#include "SDK/VX_ObjectTagSite_parameters.hpp"
#include "SDK/VX_TutorialMarker_structs.hpp"
#include "SDK/VX_TutorialMarker_classes.hpp"
#include "SDK/VX_TutorialMarker_parameters.hpp"
#include "SDK/VX_AttackDamageIndicator_structs.hpp"
#include "SDK/VX_AttackDamageIndicator_classes.hpp"
#include "SDK/VX_AttackDamageIndicator_parameters.hpp"
#include "SDK/VX_ThrownIndicator_structs.hpp"
#include "SDK/VX_ThrownIndicator_classes.hpp"
#include "SDK/VX_ThrownIndicator_parameters.hpp"
#include "SDK/VX_ScreenMarkerLoot_structs.hpp"
#include "SDK/VX_ScreenMarkerLoot_classes.hpp"
#include "SDK/VX_ScreenMarkerLoot_parameters.hpp"
#include "SDK/VX_DamageIndicator_structs.hpp"
#include "SDK/VX_DamageIndicator_classes.hpp"
#include "SDK/VX_DamageIndicator_parameters.hpp"
#include "SDK/VX_PlayerEntryItemEnemy_structs.hpp"
#include "SDK/VX_PlayerEntryItemEnemy_classes.hpp"
#include "SDK/VX_PlayerEntryItemEnemy_parameters.hpp"
#include "SDK/VX_MissionScorePlayerEntryItem_structs.hpp"
#include "SDK/VX_MissionScorePlayerEntryItem_classes.hpp"
#include "SDK/VX_MissionScorePlayerEntryItem_parameters.hpp"
#include "SDK/VX_ResultScoreItem_structs.hpp"
#include "SDK/VX_ResultScoreItem_classes.hpp"
#include "SDK/VX_ResultScoreItem_parameters.hpp"
#include "SDK/VX_ResultScoreEventItem_structs.hpp"
#include "SDK/VX_ResultScoreEventItem_classes.hpp"
#include "SDK/VX_ResultScoreEventItem_parameters.hpp"
#include "SDK/VX_UnKnownMarketPartListItem_structs.hpp"
#include "SDK/VX_UnKnownMarketPartListItem_classes.hpp"
#include "SDK/VX_UnKnownMarketPartListItem_parameters.hpp"
#include "SDK/VX_PersonalMissionModule_structs.hpp"
#include "SDK/VX_PersonalMissionModule_classes.hpp"
#include "SDK/VX_PersonalMissionModule_parameters.hpp"
#include "SDK/VX_PersonalMissionRewardModule_structs.hpp"
#include "SDK/VX_PersonalMissionRewardModule_classes.hpp"
#include "SDK/VX_PersonalMissionRewardModule_parameters.hpp"
#include "SDK/VX_ClanInfoPopup_structs.hpp"
#include "SDK/VX_ClanInfoPopup_classes.hpp"
#include "SDK/VX_ClanInfoPopup_parameters.hpp"
#include "SDK/VX_WebPopup_structs.hpp"
#include "SDK/VX_WebPopup_classes.hpp"
#include "SDK/VX_WebPopup_parameters.hpp"
#include "SDK/VX_MailPopup_structs.hpp"
#include "SDK/VX_MailPopup_classes.hpp"
#include "SDK/VX_MailPopup_parameters.hpp"
#include "SDK/VX_WebTermsOfServicePopup_structs.hpp"
#include "SDK/VX_WebTermsOfServicePopup_classes.hpp"
#include "SDK/VX_WebTermsOfServicePopup_parameters.hpp"
#include "SDK/VX_AgentDefaultLeptonPopup_structs.hpp"
#include "SDK/VX_AgentDefaultLeptonPopup_classes.hpp"
#include "SDK/VX_AgentDefaultLeptonPopup_parameters.hpp"
#include "SDK/VX_StatusBoardRoundResultItem_structs.hpp"
#include "SDK/VX_StatusBoardRoundResultItem_classes.hpp"
#include "SDK/VX_StatusBoardRoundResultItem_parameters.hpp"
#include "SDK/VX_PopupUserInfo_structs.hpp"
#include "SDK/VX_PopupUserInfo_classes.hpp"
#include "SDK/VX_PopupUserInfo_parameters.hpp"
#include "SDK/VX_ObserverJoinPopupUI_structs.hpp"
#include "SDK/VX_ObserverJoinPopupUI_classes.hpp"
#include "SDK/VX_ObserverJoinPopupUI_parameters.hpp"
#include "SDK/VX_TeamDeathMatchStatusBoardPlayerInfo_Ally_structs.hpp"
#include "SDK/VX_TeamDeathMatchStatusBoardPlayerInfo_Ally_classes.hpp"
#include "SDK/VX_TeamDeathMatchStatusBoardPlayerInfo_Ally_parameters.hpp"
#include "SDK/VX_TeamDeathMatchStatusBoardPlayerInfo_Enemy_structs.hpp"
#include "SDK/VX_TeamDeathMatchStatusBoardPlayerInfo_Enemy_classes.hpp"
#include "SDK/VX_TeamDeathMatchStatusBoardPlayerInfo_Enemy_parameters.hpp"
#include "SDK/VX_KillLogAssistPlayerItem_structs.hpp"
#include "SDK/VX_KillLogAssistPlayerItem_classes.hpp"
#include "SDK/VX_KillLogAssistPlayerItem_parameters.hpp"
#include "SDK/VX_PlayerInfoItemAlly_structs.hpp"
#include "SDK/VX_PlayerInfoItemAlly_classes.hpp"
#include "SDK/VX_PlayerInfoItemAlly_parameters.hpp"
#include "SDK/VX_AgentProfilePopup_structs.hpp"
#include "SDK/VX_AgentProfilePopup_classes.hpp"
#include "SDK/VX_AgentProfilePopup_parameters.hpp"
#include "SDK/VX_IngameEscapePlayerPopupUI_structs.hpp"
#include "SDK/VX_IngameEscapePlayerPopupUI_classes.hpp"
#include "SDK/VX_IngameEscapePlayerPopupUI_parameters.hpp"
#include "SDK/VX_OutGameEscapePlayerPopupUI_structs.hpp"
#include "SDK/VX_OutGameEscapePlayerPopupUI_classes.hpp"
#include "SDK/VX_OutGameEscapePlayerPopupUI_parameters.hpp"
#include "SDK/VX_InvalidGameResultPopup_structs.hpp"
#include "SDK/VX_InvalidGameResultPopup_classes.hpp"
#include "SDK/VX_InvalidGameResultPopup_parameters.hpp"
#include "SDK/VX_ResultRoundMenuItem_structs.hpp"
#include "SDK/VX_ResultRoundMenuItem_classes.hpp"
#include "SDK/VX_ResultRoundMenuItem_parameters.hpp"
#include "SDK/VX_NickNamePopup_structs.hpp"
#include "SDK/VX_NickNamePopup_classes.hpp"
#include "SDK/VX_NickNamePopup_parameters.hpp"
#include "SDK/VX_Intro_BaseMap_structs.hpp"
#include "SDK/VX_Intro_BaseMap_classes.hpp"
#include "SDK/VX_Intro_BaseMap_parameters.hpp"
#include "SDK/VX_Intro_Derailed_structs.hpp"
#include "SDK/VX_Intro_Derailed_classes.hpp"
#include "SDK/VX_Intro_Derailed_parameters.hpp"
#include "SDK/VX_Intro_WindFarm_structs.hpp"
#include "SDK/VX_Intro_WindFarm_classes.hpp"
#include "SDK/VX_Intro_WindFarm_parameters.hpp"
#include "SDK/VX_Intro_Shipyard_structs.hpp"
#include "SDK/VX_Intro_Shipyard_classes.hpp"
#include "SDK/VX_Intro_Shipyard_parameters.hpp"
#include "SDK/VX_Intro_Bridge_structs.hpp"
#include "SDK/VX_Intro_Bridge_classes.hpp"
#include "SDK/VX_Intro_Bridge_parameters.hpp"
#include "SDK/VX_Intro_AltaCity_structs.hpp"
#include "SDK/VX_Intro_AltaCity_classes.hpp"
#include "SDK/VX_Intro_AltaCity_parameters.hpp"
#include "SDK/VX_Intro_WheatField_structs.hpp"
#include "SDK/VX_Intro_WheatField_classes.hpp"
#include "SDK/VX_Intro_WheatField_parameters.hpp"
#include "SDK/VX_Intro_VacantHouse_structs.hpp"
#include "SDK/VX_Intro_VacantHouse_classes.hpp"
#include "SDK/VX_Intro_VacantHouse_parameters.hpp"
#include "SDK/VX_Intro_KoreaTown_structs.hpp"
#include "SDK/VX_Intro_KoreaTown_classes.hpp"
#include "SDK/VX_Intro_KoreaTown_parameters.hpp"
#include "SDK/VX_PDIMGButton_structs.hpp"
#include "SDK/VX_PDIMGButton_classes.hpp"
#include "SDK/VX_PDIMGButton_parameters.hpp"
#include "SDK/VX_PDInputKeySelector_structs.hpp"
#include "SDK/VX_PDInputKeySelector_classes.hpp"
#include "SDK/VX_PDInputKeySelector_parameters.hpp"
#include "SDK/VX_ControlOption_structs.hpp"
#include "SDK/VX_ControlOption_classes.hpp"
#include "SDK/VX_ControlOption_parameters.hpp"
#include "SDK/VX_DisplayOption_structs.hpp"
#include "SDK/VX_DisplayOption_classes.hpp"
#include "SDK/VX_DisplayOption_parameters.hpp"
#include "SDK/VX_GamePlayOption_structs.hpp"
#include "SDK/VX_GamePlayOption_classes.hpp"
#include "SDK/VX_GamePlayOption_parameters.hpp"
#include "SDK/VX_SoundOption_structs.hpp"
#include "SDK/VX_SoundOption_classes.hpp"
#include "SDK/VX_SoundOption_parameters.hpp"
#include "SDK/VX_HitReaction_structs.hpp"
#include "SDK/VX_HitReaction_classes.hpp"
#include "SDK/VX_HitReaction_parameters.hpp"
#include "SDK/VX_IK_structs.hpp"
#include "SDK/VX_IK_classes.hpp"
#include "SDK/VX_IK_parameters.hpp"
#include "SDK/VX_GameSetupInformationSlot_structs.hpp"
#include "SDK/VX_GameSetupInformationSlot_classes.hpp"
#include "SDK/VX_GameSetupInformationSlot_parameters.hpp"
#include "SDK/VX_WeaponCategoryListItem_structs.hpp"
#include "SDK/VX_WeaponCategoryListItem_classes.hpp"
#include "SDK/VX_WeaponCategoryListItem_parameters.hpp"
#include "SDK/VX_WeaponStat_structs.hpp"
#include "SDK/VX_WeaponStat_classes.hpp"
#include "SDK/VX_WeaponStat_parameters.hpp"
#include "SDK/VX_CustomizeListItem_structs.hpp"
#include "SDK/VX_CustomizeListItem_classes.hpp"
#include "SDK/VX_CustomizeListItem_parameters.hpp"
#include "SDK/VX_ProfileCategoryListItem_structs.hpp"
#include "SDK/VX_ProfileCategoryListItem_classes.hpp"
#include "SDK/VX_ProfileCategoryListItem_parameters.hpp"
#include "SDK/VX_AgentCreateListItem_structs.hpp"
#include "SDK/VX_AgentCreateListItem_classes.hpp"
#include "SDK/VX_AgentCreateListItem_parameters.hpp"
#include "SDK/VX_AgentSelectListItem_structs.hpp"
#include "SDK/VX_AgentSelectListItem_classes.hpp"
#include "SDK/VX_AgentSelectListItem_parameters.hpp"
#include "SDK/VX_CustomizeLeptonCost_structs.hpp"
#include "SDK/VX_CustomizeLeptonCost_classes.hpp"
#include "SDK/VX_CustomizeLeptonCost_parameters.hpp"
#include "SDK/VX_CustomizeLeptonListItem_structs.hpp"
#include "SDK/VX_CustomizeLeptonListItem_classes.hpp"
#include "SDK/VX_CustomizeLeptonListItem_parameters.hpp"
#include "SDK/VX_PDWebButton_structs.hpp"
#include "SDK/VX_PDWebButton_classes.hpp"
#include "SDK/VX_PDWebButton_parameters.hpp"
#include "SDK/VX_ResultRankScore_structs.hpp"
#include "SDK/VX_ResultRankScore_classes.hpp"
#include "SDK/VX_ResultRankScore_parameters.hpp"
#include "SDK/VX_ResultRankScoreItem_structs.hpp"
#include "SDK/VX_ResultRankScoreItem_classes.hpp"
#include "SDK/VX_ResultRankScoreItem_parameters.hpp"
#include "SDK/VX_ResultRewardItem_structs.hpp"
#include "SDK/VX_ResultRewardItem_classes.hpp"
#include "SDK/VX_ResultRewardItem_parameters.hpp"
#include "SDK/VX_ResultRoundPlayerItem_structs.hpp"
#include "SDK/VX_ResultRoundPlayerItem_classes.hpp"
#include "SDK/VX_ResultRoundPlayerItem_parameters.hpp"
#include "SDK/VX_ResultRoundPlayerList_structs.hpp"
#include "SDK/VX_ResultRoundPlayerList_classes.hpp"
#include "SDK/VX_ResultRoundPlayerList_parameters.hpp"
#include "SDK/VX_ResultTeamDeathMatchScore_structs.hpp"
#include "SDK/VX_ResultTeamDeathMatchScore_classes.hpp"
#include "SDK/VX_ResultTeamDeathMatchScore_parameters.hpp"
#include "SDK/VX_ResultTeamDeathMatchScoreItem_structs.hpp"
#include "SDK/VX_ResultTeamDeathMatchScoreItem_classes.hpp"
#include "SDK/VX_ResultTeamDeathMatchScoreItem_parameters.hpp"
#include "SDK/VX_ResultTeamScore_structs.hpp"
#include "SDK/VX_ResultTeamScore_classes.hpp"
#include "SDK/VX_ResultTeamScore_parameters.hpp"
#include "SDK/VX_ResultTeamScoreItem_structs.hpp"
#include "SDK/VX_ResultTeamScoreItem_classes.hpp"
#include "SDK/VX_ResultTeamScoreItem_parameters.hpp"
#include "SDK/VX_ResultTier_structs.hpp"
#include "SDK/VX_ResultTier_classes.hpp"
#include "SDK/VX_ResultTier_parameters.hpp"
#include "SDK/VX_ResultTierAni_structs.hpp"
#include "SDK/VX_ResultTierAni_classes.hpp"
#include "SDK/VX_ResultTierAni_parameters.hpp"
#include "SDK/VX_ResultTitleAchieveItem_structs.hpp"
#include "SDK/VX_ResultTitleAchieveItem_classes.hpp"
#include "SDK/VX_ResultTitleAchieveItem_parameters.hpp"
#include "SDK/VX_ResultTitleAgentNameItem_structs.hpp"
#include "SDK/VX_ResultTitleAgentNameItem_classes.hpp"
#include "SDK/VX_ResultTitleAgentNameItem_parameters.hpp"
#include "SDK/VX_ResultTitleItem_structs.hpp"
#include "SDK/VX_ResultTitleItem_classes.hpp"
#include "SDK/VX_ResultTitleItem_parameters.hpp"
#include "SDK/VX_TierRoundResultItem_structs.hpp"
#include "SDK/VX_TierRoundResultItem_classes.hpp"
#include "SDK/VX_TierRoundResultItem_parameters.hpp"
#include "SDK/VX_AnimNotify_Slide_structs.hpp"
#include "SDK/VX_AnimNotify_Slide_classes.hpp"
#include "SDK/VX_AnimNotify_Slide_parameters.hpp"
#include "SDK/VX_ShowDownModeUI_Legacy_structs.hpp"
#include "SDK/VX_ShowDownModeUI_Legacy_classes.hpp"
#include "SDK/VX_ShowDownModeUI_Legacy_parameters.hpp"
#include "SDK/VX_ShowDownModeUI_VX_structs.hpp"
#include "SDK/VX_ShowDownModeUI_VX_classes.hpp"
#include "SDK/VX_ShowDownModeUI_VX_parameters.hpp"
#include "SDK/VX_MissionScoreRoundResult_structs.hpp"
#include "SDK/VX_MissionScoreRoundResult_classes.hpp"
#include "SDK/VX_MissionScoreRoundResult_parameters.hpp"
#include "SDK/VX_MissionScoreRoundResultPlayerInfo_structs.hpp"
#include "SDK/VX_MissionScoreRoundResultPlayerInfo_classes.hpp"
#include "SDK/VX_MissionScoreRoundResultPlayerInfo_parameters.hpp"
#include "SDK/VX_MissionScoreRoundResultTopRank_structs.hpp"
#include "SDK/VX_MissionScoreRoundResultTopRank_classes.hpp"
#include "SDK/VX_MissionScoreRoundResultTopRank_parameters.hpp"
#include "SDK/VX_MissionScoreStatusBoard_structs.hpp"
#include "SDK/VX_MissionScoreStatusBoard_classes.hpp"
#include "SDK/VX_MissionScoreStatusBoard_parameters.hpp"
#include "SDK/VX_MissionScoreStatusBoardPlayerInfo_structs.hpp"
#include "SDK/VX_MissionScoreStatusBoardPlayerInfo_classes.hpp"
#include "SDK/VX_MissionScoreStatusBoardPlayerInfo_parameters.hpp"
#include "SDK/VX_MissionScoreStatusBoardRoundItem_structs.hpp"
#include "SDK/VX_MissionScoreStatusBoardRoundItem_classes.hpp"
#include "SDK/VX_MissionScoreStatusBoardRoundItem_parameters.hpp"
#include "SDK/VX_MissionScore_RoundInfo_structs.hpp"
#include "SDK/VX_MissionScore_RoundInfo_classes.hpp"
#include "SDK/VX_MissionScore_RoundInfo_parameters.hpp"
#include "SDK/VX_TeamDeathMatchModeUI_Legacy_structs.hpp"
#include "SDK/VX_TeamDeathMatchModeUI_Legacy_classes.hpp"
#include "SDK/VX_TeamDeathMatchModeUI_Legacy_parameters.hpp"
#include "SDK/VX_TeamDeathMatchModeUI_VX_structs.hpp"
#include "SDK/VX_TeamDeathMatchModeUI_VX_classes.hpp"
#include "SDK/VX_TeamDeathMatchModeUI_VX_parameters.hpp"
#include "SDK/VX_TeamDeathMatch_RoundInfo_structs.hpp"
#include "SDK/VX_TeamDeathMatch_RoundInfo_classes.hpp"
#include "SDK/VX_TeamDeathMatch_RoundInfo_parameters.hpp"
#include "SDK/VX_TeamDeathRoundResult_structs.hpp"
#include "SDK/VX_TeamDeathRoundResult_classes.hpp"
#include "SDK/VX_TeamDeathRoundResult_parameters.hpp"
#include "SDK/VX_TeamDeathRoundResultPlayerInfo_structs.hpp"
#include "SDK/VX_TeamDeathRoundResultPlayerInfo_classes.hpp"
#include "SDK/VX_TeamDeathRoundResultPlayerInfo_parameters.hpp"
#include "SDK/VX_TeamDeathResultTopRank_structs.hpp"
#include "SDK/VX_TeamDeathResultTopRank_classes.hpp"
#include "SDK/VX_TeamDeathResultTopRank_parameters.hpp"
#include "SDK/VX_TeamDeathMatchStatusBoard_structs.hpp"
#include "SDK/VX_TeamDeathMatchStatusBoard_classes.hpp"
#include "SDK/VX_TeamDeathMatchStatusBoard_parameters.hpp"
#include "SDK/VX_DefuseBombModeUI_Legacy_structs.hpp"
#include "SDK/VX_DefuseBombModeUI_Legacy_classes.hpp"
#include "SDK/VX_DefuseBombModeUI_Legacy_parameters.hpp"
#include "SDK/VX_PlayerInfo_Legacy_structs.hpp"
#include "SDK/VX_PlayerInfo_Legacy_classes.hpp"
#include "SDK/VX_PlayerInfo_Legacy_parameters.hpp"
#include "SDK/VX_CallingCard_Legacy_structs.hpp"
#include "SDK/VX_CallingCard_Legacy_classes.hpp"
#include "SDK/VX_CallingCard_Legacy_parameters.hpp"
#include "SDK/VX_IngameMap_Legacy_structs.hpp"
#include "SDK/VX_IngameMap_Legacy_classes.hpp"
#include "SDK/VX_IngameMap_Legacy_parameters.hpp"
#include "SDK/VX_PerkUI_Legacy_structs.hpp"
#include "SDK/VX_PerkUI_Legacy_classes.hpp"
#include "SDK/VX_PerkUI_Legacy_parameters.hpp"
#include "SDK/VX_Spectator_Legacy_structs.hpp"
#include "SDK/VX_Spectator_Legacy_classes.hpp"
#include "SDK/VX_Spectator_Legacy_parameters.hpp"
#include "SDK/VX_SpectatorTarget_Legacy_structs.hpp"
#include "SDK/VX_SpectatorTarget_Legacy_classes.hpp"
#include "SDK/VX_SpectatorTarget_Legacy_parameters.hpp"
#include "SDK/VX_DefuseBombModeUI_VX_structs.hpp"
#include "SDK/VX_DefuseBombModeUI_VX_classes.hpp"
#include "SDK/VX_DefuseBombModeUI_VX_parameters.hpp"
#include "SDK/VX_DamageScreenIndicator_structs.hpp"
#include "SDK/VX_DamageScreenIndicator_classes.hpp"
#include "SDK/VX_DamageScreenIndicator_parameters.hpp"
#include "SDK/VX_ArmorGaugeDetail_structs.hpp"
#include "SDK/VX_ArmorGaugeDetail_classes.hpp"
#include "SDK/VX_ArmorGaugeDetail_parameters.hpp"
#include "SDK/VX_CCTV_structs.hpp"
#include "SDK/VX_CCTV_classes.hpp"
#include "SDK/VX_CCTV_parameters.hpp"
#include "SDK/VX_IngameMap_VX_structs.hpp"
#include "SDK/VX_IngameMap_VX_classes.hpp"
#include "SDK/VX_IngameMap_VX_parameters.hpp"
#include "SDK/VX_RoundResultInfo_structs.hpp"
#include "SDK/VX_RoundResultInfo_classes.hpp"
#include "SDK/VX_RoundResultInfo_parameters.hpp"
#include "SDK/VX_PlayerEntryItemAlly_structs.hpp"
#include "SDK/VX_PlayerEntryItemAlly_classes.hpp"
#include "SDK/VX_PlayerEntryItemAlly_parameters.hpp"
#include "SDK/VX_RingCommand_structs.hpp"
#include "SDK/VX_RingCommand_classes.hpp"
#include "SDK/VX_RingCommand_parameters.hpp"
#include "SDK/VX_RoundInfo_structs.hpp"
#include "SDK/VX_RoundInfo_classes.hpp"
#include "SDK/VX_RoundInfo_parameters.hpp"
#include "SDK/VX_WorldMessage_structs.hpp"
#include "SDK/VX_WorldMessage_classes.hpp"
#include "SDK/VX_WorldMessage_parameters.hpp"
#include "SDK/VX_PerkEntryItem_structs.hpp"
#include "SDK/VX_PerkEntryItem_classes.hpp"
#include "SDK/VX_PerkEntryItem_parameters.hpp"
#include "SDK/VX_RichTextBlockImageDecorator_structs.hpp"
#include "SDK/VX_RichTextBlockImageDecorator_classes.hpp"
#include "SDK/VX_RichTextBlockImageDecorator_parameters.hpp"
#include "SDK/VX_RID_IG_ShopPopup_structs.hpp"
#include "SDK/VX_RID_IG_ShopPopup_classes.hpp"
#include "SDK/VX_RID_IG_ShopPopup_parameters.hpp"
#include "SDK/VX_PerkUI_VX_structs.hpp"
#include "SDK/VX_PerkUI_VX_classes.hpp"
#include "SDK/VX_PerkUI_VX_parameters.hpp"
#include "SDK/VX_PlayerInfo_structs.hpp"
#include "SDK/VX_PlayerInfo_classes.hpp"
#include "SDK/VX_PlayerInfo_parameters.hpp"
#include "SDK/VX_SpectatorTarget_structs.hpp"
#include "SDK/VX_SpectatorTarget_classes.hpp"
#include "SDK/VX_SpectatorTarget_parameters.hpp"
#include "SDK/VX_Spectator_VX_structs.hpp"
#include "SDK/VX_Spectator_VX_classes.hpp"
#include "SDK/VX_Spectator_VX_parameters.hpp"
#include "SDK/VX_UnKnownMarket_structs.hpp"
#include "SDK/VX_UnKnownMarket_classes.hpp"
#include "SDK/VX_UnKnownMarket_parameters.hpp"
#include "SDK/VX_ArmorGauge_structs.hpp"
#include "SDK/VX_ArmorGauge_classes.hpp"
#include "SDK/VX_ArmorGauge_parameters.hpp"
#include "SDK/VX_IngameStatusBoard_structs.hpp"
#include "SDK/VX_IngameStatusBoard_classes.hpp"
#include "SDK/VX_IngameStatusBoard_parameters.hpp"
#include "SDK/VX_Spectator_ProfileCard_structs.hpp"
#include "SDK/VX_Spectator_ProfileCard_classes.hpp"
#include "SDK/VX_Spectator_ProfileCard_parameters.hpp"
#include "SDK/VX_MarkerGuide_structs.hpp"
#include "SDK/VX_MarkerGuide_classes.hpp"
#include "SDK/VX_MarkerGuide_parameters.hpp"
#include "SDK/VX_PingLog_structs.hpp"
#include "SDK/VX_PingLog_classes.hpp"
#include "SDK/VX_PingLog_parameters.hpp"
#include "SDK/VX_PingLogItem_structs.hpp"
#include "SDK/VX_PingLogItem_classes.hpp"
#include "SDK/VX_PingLogItem_parameters.hpp"
#include "SDK/VX_SkyView_structs.hpp"
#include "SDK/VX_SkyView_classes.hpp"
#include "SDK/VX_SkyView_parameters.hpp"
#include "SDK/VX_UnknownMarketPopup_structs.hpp"
#include "SDK/VX_UnknownMarketPopup_classes.hpp"
#include "SDK/VX_UnknownMarketPopup_parameters.hpp"
#include "SDK/VX_GameMapIconCamp_structs.hpp"
#include "SDK/VX_GameMapIconCamp_classes.hpp"
#include "SDK/VX_GameMapIconCamp_parameters.hpp"
#include "SDK/VX_UnKnownMarketTooltip_structs.hpp"
#include "SDK/VX_UnKnownMarketTooltip_classes.hpp"
#include "SDK/VX_UnKnownMarketTooltip_parameters.hpp"
#include "SDK/VX_GameTip_structs.hpp"
#include "SDK/VX_GameTip_classes.hpp"
#include "SDK/VX_GameTip_parameters.hpp"
#include "SDK/VX_PDProgress_structs.hpp"
#include "SDK/VX_PDProgress_classes.hpp"
#include "SDK/VX_PDProgress_parameters.hpp"
#include "SDK/VX_UnKnownMarketUpgradeSlot_structs.hpp"
#include "SDK/VX_UnKnownMarketUpgradeSlot_classes.hpp"
#include "SDK/VX_UnKnownMarketUpgradeSlot_parameters.hpp"
#include "SDK/VX_IngameMapModule_structs.hpp"
#include "SDK/VX_IngameMapModule_classes.hpp"
#include "SDK/VX_IngameMapModule_parameters.hpp"
#include "SDK/VX_GameMapIconGunFire_structs.hpp"
#include "SDK/VX_GameMapIconGunFire_classes.hpp"
#include "SDK/VX_GameMapIconGunFire_parameters.hpp"
#include "SDK/VX_PlayLogMapIconPlayerModule_structs.hpp"
#include "SDK/VX_PlayLogMapIconPlayerModule_classes.hpp"
#include "SDK/VX_PlayLogMapIconPlayerModule_parameters.hpp"
#include "SDK/VX_PlayLogTrackLine_structs.hpp"
#include "SDK/VX_PlayLogTrackLine_classes.hpp"
#include "SDK/VX_PlayLogTrackLine_parameters.hpp"
#include "SDK/VX_3DIndicator_structs.hpp"
#include "SDK/VX_3DIndicator_classes.hpp"
#include "SDK/VX_3DIndicator_parameters.hpp"
#include "SDK/VX_BattleLog_structs.hpp"
#include "SDK/VX_BattleLog_classes.hpp"
#include "SDK/VX_BattleLog_parameters.hpp"
#include "SDK/VX_CallingCard_VX_structs.hpp"
#include "SDK/VX_CallingCard_VX_classes.hpp"
#include "SDK/VX_CallingCard_VX_parameters.hpp"
#include "SDK/VX_CoinInfo_structs.hpp"
#include "SDK/VX_CoinInfo_classes.hpp"
#include "SDK/VX_CoinInfo_parameters.hpp"
#include "SDK/VX_CoinInfoItem_structs.hpp"
#include "SDK/VX_CoinInfoItem_classes.hpp"
#include "SDK/VX_CoinInfoItem_parameters.hpp"
#include "SDK/VX_CoinRequestBtn_structs.hpp"
#include "SDK/VX_CoinRequestBtn_classes.hpp"
#include "SDK/VX_CoinRequestBtn_parameters.hpp"
#include "SDK/VX_CoinRequestCancelBtn_structs.hpp"
#include "SDK/VX_CoinRequestCancelBtn_classes.hpp"
#include "SDK/VX_CoinRequestCancelBtn_parameters.hpp"
#include "SDK/VX_IngameVideo_structs.hpp"
#include "SDK/VX_IngameVideo_classes.hpp"
#include "SDK/VX_IngameVideo_parameters.hpp"
#include "SDK/VX_InteractionInfo_structs.hpp"
#include "SDK/VX_InteractionInfo_classes.hpp"
#include "SDK/VX_InteractionInfo_parameters.hpp"
#include "SDK/VX_InteractionKey_structs.hpp"
#include "SDK/VX_InteractionKey_classes.hpp"
#include "SDK/VX_InteractionKey_parameters.hpp"
#include "SDK/VX_KillNoti_structs.hpp"
#include "SDK/VX_KillNoti_classes.hpp"
#include "SDK/VX_KillNoti_parameters.hpp"
#include "SDK/VX_MatchResult_structs.hpp"
#include "SDK/VX_MatchResult_classes.hpp"
#include "SDK/VX_MatchResult_parameters.hpp"
#include "SDK/VX_MatchStopInfoUI_structs.hpp"
#include "SDK/VX_MatchStopInfoUI_classes.hpp"
#include "SDK/VX_MatchStopInfoUI_parameters.hpp"
#include "SDK/VX_NotificationAlert_structs.hpp"
#include "SDK/VX_NotificationAlert_classes.hpp"
#include "SDK/VX_NotificationAlert_parameters.hpp"
#include "SDK/VX_PDCircleProgress_structs.hpp"
#include "SDK/VX_PDCircleProgress_classes.hpp"
#include "SDK/VX_PDCircleProgress_parameters.hpp"
#include "SDK/VX_RoundResult_Keyplayer_structs.hpp"
#include "SDK/VX_RoundResult_Keyplayer_classes.hpp"
#include "SDK/VX_RoundResult_Keyplayer_parameters.hpp"
#include "SDK/VX_PingIcon_structs.hpp"
#include "SDK/VX_PingIcon_classes.hpp"
#include "SDK/VX_PingIcon_parameters.hpp"
#include "SDK/VX_PlayerGroggy_structs.hpp"
#include "SDK/VX_PlayerGroggy_classes.hpp"
#include "SDK/VX_PlayerGroggy_parameters.hpp"
#include "SDK/VX_PlayerGroggyItem_structs.hpp"
#include "SDK/VX_PlayerGroggyItem_classes.hpp"
#include "SDK/VX_PlayerGroggyItem_parameters.hpp"
#include "SDK/VX_Vote_Surrender_structs.hpp"
#include "SDK/VX_Vote_Surrender_classes.hpp"
#include "SDK/VX_Vote_Surrender_parameters.hpp"
#include "SDK/VX_PingIndicator_structs.hpp"
#include "SDK/VX_PingIndicator_classes.hpp"
#include "SDK/VX_PingIndicator_parameters.hpp"
#include "SDK/VX_Perk_Notice_structs.hpp"
#include "SDK/VX_Perk_Notice_classes.hpp"
#include "SDK/VX_Perk_Notice_parameters.hpp"
#include "SDK/VX_SpectatorPlayerAlly_structs.hpp"
#include "SDK/VX_SpectatorPlayerAlly_classes.hpp"
#include "SDK/VX_SpectatorPlayerAlly_parameters.hpp"
#include "SDK/VX_SpectatorPlayerEnemy_structs.hpp"
#include "SDK/VX_SpectatorPlayerEnemy_classes.hpp"
#include "SDK/VX_SpectatorPlayerEnemy_parameters.hpp"
#include "SDK/VX_UnKnownMarketEquipSlot_structs.hpp"
#include "SDK/VX_UnKnownMarketEquipSlot_classes.hpp"
#include "SDK/VX_UnKnownMarketEquipSlot_parameters.hpp"
#include "SDK/VX_UnKnownMarketInvenListItem_structs.hpp"
#include "SDK/VX_UnKnownMarketInvenListItem_classes.hpp"
#include "SDK/VX_UnKnownMarketInvenListItem_parameters.hpp"
#include "SDK/VX_UnKnownMarketItemSlot_structs.hpp"
#include "SDK/VX_UnKnownMarketItemSlot_classes.hpp"
#include "SDK/VX_UnKnownMarketItemSlot_parameters.hpp"
#include "SDK/VX_UnKnownMarketWeaponListItem_structs.hpp"
#include "SDK/VX_UnKnownMarketWeaponListItem_classes.hpp"
#include "SDK/VX_UnKnownMarketWeaponListItem_parameters.hpp"
#include "SDK/VX_UnKnownMarketWeaponPartSlot_structs.hpp"
#include "SDK/VX_UnKnownMarketWeaponPartSlot_classes.hpp"
#include "SDK/VX_UnKnownMarketWeaponPartSlot_parameters.hpp"
#include "SDK/VX_GameMapIconSiteModule_structs.hpp"
#include "SDK/VX_GameMapIconSiteModule_classes.hpp"
#include "SDK/VX_GameMapIconSiteModule_parameters.hpp"
#include "SDK/VX_SiteVoteMark_structs.hpp"
#include "SDK/VX_SiteVoteMark_classes.hpp"
#include "SDK/VX_SiteVoteMark_parameters.hpp"
#include "SDK/VX_Vote_structs.hpp"
#include "SDK/VX_Vote_classes.hpp"
#include "SDK/VX_Vote_parameters.hpp"
#include "SDK/VX_GameMapIconPing_structs.hpp"
#include "SDK/VX_GameMapIconPing_classes.hpp"
#include "SDK/VX_GameMapIconPing_parameters.hpp"
#include "SDK/VX_GameMapIconPlayerModule_structs.hpp"
#include "SDK/VX_GameMapIconPlayerModule_classes.hpp"
#include "SDK/VX_GameMapIconPlayerModule_parameters.hpp"
#include "SDK/VX_GameMapIconThrownModule_structs.hpp"
#include "SDK/VX_GameMapIconThrownModule_classes.hpp"
#include "SDK/VX_GameMapIconThrownModule_parameters.hpp"
#include "SDK/VX_GameMapIconTutorialMarker_structs.hpp"
#include "SDK/VX_GameMapIconTutorialMarker_classes.hpp"
#include "SDK/VX_GameMapIconTutorialMarker_parameters.hpp"
#include "SDK/VX_PingIconMap_structs.hpp"
#include "SDK/VX_PingIconMap_classes.hpp"
#include "SDK/VX_PingIconMap_parameters.hpp"
#include "SDK/VX_PlayLogMapIconThrownModule_structs.hpp"
#include "SDK/VX_PlayLogMapIconThrownModule_classes.hpp"
#include "SDK/VX_PlayLogMapIconThrownModule_parameters.hpp"
#include "SDK/VX_AutoFarmingLogUI_structs.hpp"
#include "SDK/VX_AutoFarmingLogUI_classes.hpp"
#include "SDK/VX_AutoFarmingLogUI_parameters.hpp"
#include "SDK/VX_Interaction_ItemInfo_structs.hpp"
#include "SDK/VX_Interaction_ItemInfo_classes.hpp"
#include "SDK/VX_Interaction_ItemInfo_parameters.hpp"
#include "SDK/VX_PlayerEquipmentSlot_structs.hpp"
#include "SDK/VX_PlayerEquipmentSlot_classes.hpp"
#include "SDK/VX_PlayerEquipmentSlot_parameters.hpp"
#include "SDK/VX_PlayerEquipSlotContent_structs.hpp"
#include "SDK/VX_PlayerEquipSlotContent_classes.hpp"
#include "SDK/VX_PlayerEquipSlotContent_parameters.hpp"
#include "SDK/VX_PlayerEquipSlotTatic_structs.hpp"
#include "SDK/VX_PlayerEquipSlotTatic_classes.hpp"
#include "SDK/VX_PlayerEquipSlotTatic_parameters.hpp"
#include "SDK/VX_PlayerEquipSlotThrowable_structs.hpp"
#include "SDK/VX_PlayerEquipSlotThrowable_classes.hpp"
#include "SDK/VX_PlayerEquipSlotThrowable_parameters.hpp"
#include "SDK/VX_SpectatorDamageReport_structs.hpp"
#include "SDK/VX_SpectatorDamageReport_classes.hpp"
#include "SDK/VX_SpectatorDamageReport_parameters.hpp"
#include "SDK/VX_WeaponLockerListItem_structs.hpp"
#include "SDK/VX_WeaponLockerListItem_classes.hpp"
#include "SDK/VX_WeaponLockerListItem_parameters.hpp"
#include "SDK/VX_GameMapModule_structs.hpp"
#include "SDK/VX_GameMapModule_classes.hpp"
#include "SDK/VX_GameMapModule_parameters.hpp"
#include "SDK/VX_Minimap_structs.hpp"
#include "SDK/VX_Minimap_classes.hpp"
#include "SDK/VX_Minimap_parameters.hpp"
#include "SDK/VX_ReplayGameMap_structs.hpp"
#include "SDK/VX_ReplayGameMap_classes.hpp"
#include "SDK/VX_ReplayGameMap_parameters.hpp"
#include "SDK/VX_RoundReplayer_structs.hpp"
#include "SDK/VX_RoundReplayer_classes.hpp"
#include "SDK/VX_RoundReplayer_parameters.hpp"
#include "SDK/VX_CoinRequest_structs.hpp"
#include "SDK/VX_CoinRequest_classes.hpp"
#include "SDK/VX_CoinRequest_parameters.hpp"
#include "SDK/VX_FundingPopup_structs.hpp"
#include "SDK/VX_FundingPopup_classes.hpp"
#include "SDK/VX_FundingPopup_parameters.hpp"
#include "SDK/VX_InvenDivide_structs.hpp"
#include "SDK/VX_InvenDivide_classes.hpp"
#include "SDK/VX_InvenDivide_parameters.hpp"
#include "SDK/VX_ObserverReadyAllyInfoItem_structs.hpp"
#include "SDK/VX_ObserverReadyAllyInfoItem_classes.hpp"
#include "SDK/VX_ObserverReadyAllyInfoItem_parameters.hpp"
#include "SDK/VX_ObserverReadyEnemyInfoItem_structs.hpp"
#include "SDK/VX_ObserverReadyEnemyInfoItem_classes.hpp"
#include "SDK/VX_ObserverReadyEnemyInfoItem_parameters.hpp"
#include "SDK/VX_ObserverReadyLeptonItem_structs.hpp"
#include "SDK/VX_ObserverReadyLeptonItem_classes.hpp"
#include "SDK/VX_ObserverReadyLeptonItem_parameters.hpp"
#include "SDK/VX_ObserverReadyUI_structs.hpp"
#include "SDK/VX_ObserverReadyUI_classes.hpp"
#include "SDK/VX_ObserverReadyUI_parameters.hpp"
#include "SDK/VX_UnKnownMarketFundingTooltip_structs.hpp"
#include "SDK/VX_UnKnownMarketFundingTooltip_classes.hpp"
#include "SDK/VX_UnKnownMarketFundingTooltip_parameters.hpp"
#include "SDK/VX_UnknownMarketMouseItem_structs.hpp"
#include "SDK/VX_UnknownMarketMouseItem_classes.hpp"
#include "SDK/VX_UnknownMarketMouseItem_parameters.hpp"
#include "SDK/VX_GameMapIconYoungsikHackingModule_structs.hpp"
#include "SDK/VX_GameMapIconYoungsikHackingModule_classes.hpp"
#include "SDK/VX_GameMapIconYoungsikHackingModule_parameters.hpp"
#include "SDK/VX_Subtitle_structs.hpp"
#include "SDK/VX_Subtitle_classes.hpp"
#include "SDK/VX_Subtitle_parameters.hpp"
#include "SDK/VX_UnKnownMarketFundingProgressUI_structs.hpp"
#include "SDK/VX_UnKnownMarketFundingProgressUI_classes.hpp"
#include "SDK/VX_UnKnownMarketFundingProgressUI_parameters.hpp"
#include "SDK/VX_UnKnownMarketUpgradeItemSlot_structs.hpp"
#include "SDK/VX_UnKnownMarketUpgradeItemSlot_classes.hpp"
#include "SDK/VX_UnKnownMarketUpgradeItemSlot_parameters.hpp"
#include "SDK/VX_UnKnownMarketUpgradeTooltip_structs.hpp"
#include "SDK/VX_UnKnownMarketUpgradeTooltip_classes.hpp"
#include "SDK/VX_UnKnownMarketUpgradeTooltip_parameters.hpp"
#include "SDK/VX_UnKnownMarketWeaponCategory_structs.hpp"
#include "SDK/VX_UnKnownMarketWeaponCategory_classes.hpp"
#include "SDK/VX_UnKnownMarketWeaponCategory_parameters.hpp"
#include "SDK/VX_UnKnownWeaponStatProgress_structs.hpp"
#include "SDK/VX_UnKnownWeaponStatProgress_classes.hpp"
#include "SDK/VX_UnKnownWeaponStatProgress_parameters.hpp"
#include "SDK/VX_UnkonwMarketCoinSlot_structs.hpp"
#include "SDK/VX_UnkonwMarketCoinSlot_classes.hpp"
#include "SDK/VX_UnkonwMarketCoinSlot_parameters.hpp"
#include "SDK/VX_UnkonwMarketModeSlot_structs.hpp"
#include "SDK/VX_UnkonwMarketModeSlot_classes.hpp"
#include "SDK/VX_UnkonwMarketModeSlot_parameters.hpp"
#include "SDK/VX_UseItemTipKey_structs.hpp"
#include "SDK/VX_UseItemTipKey_classes.hpp"
#include "SDK/VX_UseItemTipKey_parameters.hpp"
#include "SDK/VX_UseItemTipUI_structs.hpp"
#include "SDK/VX_UseItemTipUI_classes.hpp"
#include "SDK/VX_UseItemTipUI_parameters.hpp"
#include "SDK/VX_GameMapIconSafeZoneModule_structs.hpp"
#include "SDK/VX_GameMapIconSafeZoneModule_classes.hpp"
#include "SDK/VX_GameMapIconSafeZoneModule_parameters.hpp"
#include "SDK/VX_PlayLogMapIconDroneModule_structs.hpp"
#include "SDK/VX_PlayLogMapIconDroneModule_classes.hpp"
#include "SDK/VX_PlayLogMapIconDroneModule_parameters.hpp"
#include "SDK/VX_PlayLogMapIconSafeZoneModule_structs.hpp"
#include "SDK/VX_PlayLogMapIconSafeZoneModule_classes.hpp"
#include "SDK/VX_PlayLogMapIconSafeZoneModule_parameters.hpp"
#include "SDK/VX_PlayLogMapIconSentryGunModule_structs.hpp"
#include "SDK/VX_PlayLogMapIconSentryGunModule_classes.hpp"
#include "SDK/VX_PlayLogMapIconSentryGunModule_parameters.hpp"
#include "SDK/VX_CoinRequestListItem_structs.hpp"
#include "SDK/VX_CoinRequestListItem_classes.hpp"
#include "SDK/VX_CoinRequestListItem_parameters.hpp"
#include "SDK/VX_TutorialQuestListUI_structs.hpp"
#include "SDK/VX_TutorialQuestListUI_classes.hpp"
#include "SDK/VX_TutorialQuestListUI_parameters.hpp"
#include "SDK/VX_TargetScreen_structs.hpp"
#include "SDK/VX_TargetScreen_classes.hpp"
#include "SDK/VX_TargetScreen_parameters.hpp"
#include "SDK/VX_Timer_structs.hpp"
#include "SDK/VX_Timer_classes.hpp"
#include "SDK/VX_Timer_parameters.hpp"
#include "SDK/VX_TutorialKeyGuideItem_structs.hpp"
#include "SDK/VX_TutorialKeyGuideItem_classes.hpp"
#include "SDK/VX_TutorialKeyGuideItem_parameters.hpp"
#include "SDK/VX_StateGauge_structs.hpp"
#include "SDK/VX_StateGauge_classes.hpp"
#include "SDK/VX_StateGauge_parameters.hpp"
#include "SDK/VX_RoundWait_structs.hpp"
#include "SDK/VX_RoundWait_classes.hpp"
#include "SDK/VX_RoundWait_parameters.hpp"
#include "SDK/VX_Spectator_Help_structs.hpp"
#include "SDK/VX_Spectator_Help_classes.hpp"
#include "SDK/VX_Spectator_Help_parameters.hpp"
#include "SDK/VX_SpectatorHelpKey_structs.hpp"
#include "SDK/VX_SpectatorHelpKey_classes.hpp"
#include "SDK/VX_SpectatorHelpKey_parameters.hpp"
#include "SDK/VX_PlayerEquipmentSlotKey_Active_structs.hpp"
#include "SDK/VX_PlayerEquipmentSlotKey_Active_classes.hpp"
#include "SDK/VX_PlayerEquipmentSlotKey_Active_parameters.hpp"
#include "SDK/VX_PlayerEquipmentSlotKey_Inactive_structs.hpp"
#include "SDK/VX_PlayerEquipmentSlotKey_Inactive_classes.hpp"
#include "SDK/VX_PlayerEquipmentSlotKey_Inactive_parameters.hpp"
#include "SDK/VX_PlayerEquipmentSlotS_structs.hpp"
#include "SDK/VX_PlayerEquipmentSlotS_classes.hpp"
#include "SDK/VX_PlayerEquipmentSlotS_parameters.hpp"
#include "SDK/VX_ReportPopup_structs.hpp"
#include "SDK/VX_ReportPopup_classes.hpp"
#include "SDK/VX_ReportPopup_parameters.hpp"
#include "SDK/VX_SeedSetModule_structs.hpp"
#include "SDK/VX_SeedSetModule_classes.hpp"
#include "SDK/VX_SeedSetModule_parameters.hpp"
#include "SDK/VX_SeedSetModule2_structs.hpp"
#include "SDK/VX_SeedSetModule2_classes.hpp"
#include "SDK/VX_SeedSetModule2_parameters.hpp"
#include "SDK/VX_PerkSlot_structs.hpp"
#include "SDK/VX_PerkSlot_classes.hpp"
#include "SDK/VX_PerkSlot_parameters.hpp"
#include "SDK/VX_GameMapIconBombModule_structs.hpp"
#include "SDK/VX_GameMapIconBombModule_classes.hpp"
#include "SDK/VX_GameMapIconBombModule_parameters.hpp"
#include "SDK/VX_GameMapIconDrawing_structs.hpp"
#include "SDK/VX_GameMapIconDrawing_classes.hpp"
#include "SDK/VX_GameMapIconDrawing_parameters.hpp"
#include "SDK/VX_GameMapIconDrone_structs.hpp"
#include "SDK/VX_GameMapIconDrone_classes.hpp"
#include "SDK/VX_GameMapIconDrone_parameters.hpp"
#include "SDK/VX_GameMapIconCampDrawer_structs.hpp"
#include "SDK/VX_GameMapIconCampDrawer_classes.hpp"
#include "SDK/VX_GameMapIconCampDrawer_parameters.hpp"
#include "SDK/VX_GameMapIconEnemyDamage_structs.hpp"
#include "SDK/VX_GameMapIconEnemyDamage_classes.hpp"
#include "SDK/VX_GameMapIconEnemyDamage_parameters.hpp"
#include "SDK/VX_GameMapIconEnemyDeath_structs.hpp"
#include "SDK/VX_GameMapIconEnemyDeath_classes.hpp"
#include "SDK/VX_GameMapIconEnemyDeath_parameters.hpp"
#include "SDK/VX_GameMapIconModule_structs.hpp"
#include "SDK/VX_GameMapIconModule_classes.hpp"
#include "SDK/VX_GameMapIconModule_parameters.hpp"
#include "SDK/VX_GameMapIconItemBox_structs.hpp"
#include "SDK/VX_GameMapIconItemBox_classes.hpp"
#include "SDK/VX_GameMapIconItemBox_parameters.hpp"
#include "SDK/VX_GameMapIconItemBox_showdown_structs.hpp"
#include "SDK/VX_GameMapIconItemBox_showdown_classes.hpp"
#include "SDK/VX_GameMapIconItemBox_showdown_parameters.hpp"
#include "SDK/VX_GameMapIconLevelRegionModule_structs.hpp"
#include "SDK/VX_GameMapIconLevelRegionModule_classes.hpp"
#include "SDK/VX_GameMapIconLevelRegionModule_parameters.hpp"
#include "SDK/VX_GameMapIconSentryGun_structs.hpp"
#include "SDK/VX_GameMapIconSentryGun_classes.hpp"
#include "SDK/VX_GameMapIconSentryGun_parameters.hpp"
#include "SDK/VX_GameMapIconSpectating_structs.hpp"
#include "SDK/VX_GameMapIconSpectating_classes.hpp"
#include "SDK/VX_GameMapIconSpectating_parameters.hpp"
#include "SDK/VX_GameMapIconSafeZoneDrawer_structs.hpp"
#include "SDK/VX_GameMapIconSafeZoneDrawer_classes.hpp"
#include "SDK/VX_GameMapIconSafeZoneDrawer_parameters.hpp"
#include "SDK/VX_CCTVObjDesc_structs.hpp"
#include "SDK/VX_CCTVObjDesc_classes.hpp"
#include "SDK/VX_CCTVObjDesc_parameters.hpp"
#include "SDK/VX_CrossHair_structs.hpp"
#include "SDK/VX_CrossHair_classes.hpp"
#include "SDK/VX_CrossHair_parameters.hpp"
#include "SDK/VX_HitFeedback_Armor_structs.hpp"
#include "SDK/VX_HitFeedback_Armor_classes.hpp"
#include "SDK/VX_HitFeedback_Armor_parameters.hpp"
#include "SDK/VX_HitFeedback_kill_structs.hpp"
#include "SDK/VX_HitFeedback_kill_classes.hpp"
#include "SDK/VX_HitFeedback_kill_parameters.hpp"
#include "SDK/VX_KeyGuide_Desc_structs.hpp"
#include "SDK/VX_KeyGuide_Desc_classes.hpp"
#include "SDK/VX_KeyGuide_Desc_parameters.hpp"
#include "SDK/VX_KeyGuide_Key_structs.hpp"
#include "SDK/VX_KeyGuide_Key_classes.hpp"
#include "SDK/VX_KeyGuide_Key_parameters.hpp"
#include "SDK/VX_KillLog_structs.hpp"
#include "SDK/VX_KillLog_classes.hpp"
#include "SDK/VX_KillLog_parameters.hpp"
#include "SDK/VX_RoundResultRecordItem_Type03_structs.hpp"
#include "SDK/VX_RoundResultRecordItem_Type03_classes.hpp"
#include "SDK/VX_RoundResultRecordItem_Type03_parameters.hpp"
#include "SDK/VX_RoundResultRecordItem_Type04_structs.hpp"
#include "SDK/VX_RoundResultRecordItem_Type04_classes.hpp"
#include "SDK/VX_RoundResultRecordItem_Type04_parameters.hpp"
#include "SDK/VX_PracticeKeyGuide_structs.hpp"
#include "SDK/VX_PracticeKeyGuide_classes.hpp"
#include "SDK/VX_PracticeKeyGuide_parameters.hpp"
#include "SDK/VX_RoundResultItem_structs.hpp"
#include "SDK/VX_RoundResultItem_classes.hpp"
#include "SDK/VX_RoundResultItem_parameters.hpp"
#include "SDK/VX_AgentRecently_structs.hpp"
#include "SDK/VX_AgentRecently_classes.hpp"
#include "SDK/VX_AgentRecently_parameters.hpp"
#include "SDK/VX_PDMaskedText_structs.hpp"
#include "SDK/VX_PDMaskedText_classes.hpp"
#include "SDK/VX_PDMaskedText_parameters.hpp"
#include "SDK/VX_PDSlider_structs.hpp"
#include "SDK/VX_PDSlider_classes.hpp"
#include "SDK/VX_PDSlider_parameters.hpp"
#include "SDK/VX_PDTabButton_structs.hpp"
#include "SDK/VX_PDTabButton_classes.hpp"
#include "SDK/VX_PDTabButton_parameters.hpp"
#include "SDK/VX_StatusBoardBlockAll_structs.hpp"
#include "SDK/VX_StatusBoardBlockAll_classes.hpp"
#include "SDK/VX_StatusBoardBlockAll_parameters.hpp"
#include "SDK/VX_StatusBoardBlockFriendly_structs.hpp"
#include "SDK/VX_StatusBoardBlockFriendly_classes.hpp"
#include "SDK/VX_StatusBoardBlockFriendly_parameters.hpp"
#include "SDK/VX_StatusBoardPlayerInfo_Ally_structs.hpp"
#include "SDK/VX_StatusBoardPlayerInfo_Ally_classes.hpp"
#include "SDK/VX_StatusBoardPlayerInfo_Ally_parameters.hpp"
#include "SDK/VX_StatusBoardPlayerInfo_Enemy_structs.hpp"
#include "SDK/VX_StatusBoardPlayerInfo_Enemy_classes.hpp"
#include "SDK/VX_StatusBoardPlayerInfo_Enemy_parameters.hpp"
#include "SDK/VX_ReportPopupOutGame_structs.hpp"
#include "SDK/VX_ReportPopupOutGame_classes.hpp"
#include "SDK/VX_ReportPopupOutGame_parameters.hpp"
#include "SDK/VX_RID_OG_Popup_structs.hpp"
#include "SDK/VX_RID_OG_Popup_classes.hpp"
#include "SDK/VX_RID_OG_Popup_parameters.hpp"
#include "SDK/VX_PDComboBox_structs.hpp"
#include "SDK/VX_PDComboBox_classes.hpp"
#include "SDK/VX_PDComboBox_parameters.hpp"
#include "SDK/VX_InvenDrag_structs.hpp"
#include "SDK/VX_InvenDrag_classes.hpp"
#include "SDK/VX_InvenDrag_parameters.hpp"
#include "SDK/VX_ServerMaintenanceNotiPopup_structs.hpp"
#include "SDK/VX_ServerMaintenanceNotiPopup_classes.hpp"
#include "SDK/VX_ServerMaintenanceNotiPopup_parameters.hpp"
#include "SDK/VX_OKCancelPopup_structs.hpp"
#include "SDK/VX_OKCancelPopup_classes.hpp"
#include "SDK/VX_OKCancelPopup_parameters.hpp"
#include "SDK/VX_OKPopup_structs.hpp"
#include "SDK/VX_OKPopup_classes.hpp"
#include "SDK/VX_OKPopup_parameters.hpp"
#include "SDK/VX_SystemMessage_structs.hpp"
#include "SDK/VX_SystemMessage_classes.hpp"
#include "SDK/VX_SystemMessage_parameters.hpp"
#include "SDK/VX_ENiagaraExpansionMode_structs.hpp"
#include "SDK/VX_ENiagaraExpansionMode_classes.hpp"
#include "SDK/VX_ENiagaraExpansionMode_parameters.hpp"
#include "SDK/VX_ENiagaraRandomnessMode_structs.hpp"
#include "SDK/VX_ENiagaraRandomnessMode_classes.hpp"
#include "SDK/VX_ENiagaraRandomnessMode_parameters.hpp"
#include "SDK/VX_ENiagaraBooleanLogicOps_structs.hpp"
#include "SDK/VX_ENiagaraBooleanLogicOps_classes.hpp"
#include "SDK/VX_ENiagaraBooleanLogicOps_parameters.hpp"
#include "SDK/VX_ENiagaraOrientationAxis_structs.hpp"
#include "SDK/VX_ENiagaraOrientationAxis_classes.hpp"
#include "SDK/VX_ENiagaraOrientationAxis_parameters.hpp"
#include "SDK/VX_ENiagaraCoordinateSpace_structs.hpp"
#include "SDK/VX_ENiagaraCoordinateSpace_classes.hpp"
#include "SDK/VX_ENiagaraCoordinateSpace_parameters.hpp"
#include "SDK/VX_Ingame_structs.hpp"
#include "SDK/VX_Ingame_classes.hpp"
#include "SDK/VX_Ingame_parameters.hpp"
#include "SDK/VX_WebBrowser_structs.hpp"
#include "SDK/VX_WebBrowser_classes.hpp"
#include "SDK/VX_WebBrowser_parameters.hpp"
#include "SDK/VX_CircleProgressModule_structs.hpp"
#include "SDK/VX_CircleProgressModule_classes.hpp"
#include "SDK/VX_CircleProgressModule_parameters.hpp"
#include "SDK/VX_SessionMessages_structs.hpp"
#include "SDK/VX_SessionMessages_classes.hpp"
#include "SDK/VX_SessionMessages_parameters.hpp"
#include "SDK/VX_ChaosSolvers_structs.hpp"
#include "SDK/VX_ChaosSolvers_classes.hpp"
#include "SDK/VX_ChaosSolvers_parameters.hpp"
#include "SDK/VX_Serialization_structs.hpp"
#include "SDK/VX_Serialization_classes.hpp"
#include "SDK/VX_Serialization_parameters.hpp"
#include "SDK/VX_IngameGuideUI_structs.hpp"
#include "SDK/VX_IngameGuideUI_classes.hpp"
#include "SDK/VX_IngameGuideUI_parameters.hpp"
#include "SDK/VX_Renderer_structs.hpp"
#include "SDK/VX_Renderer_classes.hpp"
#include "SDK/VX_Renderer_parameters.hpp"
#include "SDK/VX_VectorVM_structs.hpp"
#include "SDK/VX_VectorVM_classes.hpp"
#include "SDK/VX_VectorVM_parameters.hpp"
#include "SDK/VX_EngineMessages_structs.hpp"
#include "SDK/VX_EngineMessages_classes.hpp"
#include "SDK/VX_EngineMessages_parameters.hpp"
#include "SDK/VX_GeometryCollectionSimulationCore_structs.hpp"
#include "SDK/VX_GeometryCollectionSimulationCore_classes.hpp"
#include "SDK/VX_GeometryCollectionSimulationCore_parameters.hpp"
#include "SDK/VX_MediaUtils_structs.hpp"
#include "SDK/VX_MediaUtils_classes.hpp"
#include "SDK/VX_MediaUtils_parameters.hpp"
#include "SDK/VX_PlaySIdePopup_structs.hpp"
#include "SDK/VX_PlaySIdePopup_classes.hpp"
#include "SDK/VX_PlaySIdePopup_parameters.hpp"
#include "SDK/VX_EscMenu_structs.hpp"
#include "SDK/VX_EscMenu_classes.hpp"
#include "SDK/VX_EscMenu_parameters.hpp"
#include "SDK/VX_FieldSystemCore_structs.hpp"
#include "SDK/VX_FieldSystemCore_classes.hpp"
#include "SDK/VX_FieldSystemCore_parameters.hpp"
#include "SDK/VX_ImageWrapper_structs.hpp"
#include "SDK/VX_ImageWrapper_classes.hpp"
#include "SDK/VX_ImageWrapper_parameters.hpp"
#include "SDK/VX_GeometryCollectionCore_structs.hpp"
#include "SDK/VX_GeometryCollectionCore_classes.hpp"
#include "SDK/VX_GeometryCollectionCore_parameters.hpp"
#include "SDK/VX_VivoxCore_structs.hpp"
#include "SDK/VX_VivoxCore_classes.hpp"
#include "SDK/VX_VivoxCore_parameters.hpp"
#include "SDK/VX_ModelingOperators_structs.hpp"
#include "SDK/VX_ModelingOperators_classes.hpp"
#include "SDK/VX_ModelingOperators_parameters.hpp"
#include "SDK/VX_NiagaraShader_structs.hpp"
#include "SDK/VX_NiagaraShader_classes.hpp"
#include "SDK/VX_NiagaraShader_parameters.hpp"
#include "SDK/VX_IngameGuideCoinInfoItem_structs.hpp"
#include "SDK/VX_IngameGuideCoinInfoItem_classes.hpp"
#include "SDK/VX_IngameGuideCoinInfoItem_parameters.hpp"
#include "SDK/VX_PDKeyButton_structs.hpp"
#include "SDK/VX_PDKeyButton_classes.hpp"
#include "SDK/VX_PDKeyButton_parameters.hpp"
#include "SDK/VX_PDKeyText_structs.hpp"
#include "SDK/VX_PDKeyText_classes.hpp"
#include "SDK/VX_PDKeyText_parameters.hpp"
#include "SDK/VX_Match_structs.hpp"
#include "SDK/VX_Match_classes.hpp"
#include "SDK/VX_Match_parameters.hpp"
#include "SDK/VX_Login_structs.hpp"
#include "SDK/VX_Login_classes.hpp"
#include "SDK/VX_Login_parameters.hpp"
#include "SDK/VX_DmgTypeBP_Environmental_structs.hpp"
#include "SDK/VX_DmgTypeBP_Environmental_classes.hpp"
#include "SDK/VX_DmgTypeBP_Environmental_parameters.hpp"
#include "SDK/VX_LuminRuntimeSettings_structs.hpp"
#include "SDK/VX_LuminRuntimeSettings_classes.hpp"
#include "SDK/VX_LuminRuntimeSettings_parameters.hpp"
#include "SDK/VX_ClothingSystemRuntimeInterface_structs.hpp"
#include "SDK/VX_ClothingSystemRuntimeInterface_classes.hpp"
#include "SDK/VX_ClothingSystemRuntimeInterface_parameters.hpp"
#include "SDK/VX_Overlay_structs.hpp"
#include "SDK/VX_Overlay_classes.hpp"
#include "SDK/VX_Overlay_parameters.hpp"
#include "SDK/VX_MoviePlayer_structs.hpp"
#include "SDK/VX_MoviePlayer_classes.hpp"
#include "SDK/VX_MoviePlayer_parameters.hpp"
#include "SDK/VX_ChaosSolverEngine_structs.hpp"
#include "SDK/VX_ChaosSolverEngine_classes.hpp"
#include "SDK/VX_ChaosSolverEngine_parameters.hpp"
#include "SDK/VX_FieldSystemEngine_structs.hpp"
#include "SDK/VX_FieldSystemEngine_classes.hpp"
#include "SDK/VX_FieldSystemEngine_parameters.hpp"
#include "SDK/VX_GeometryCollectionEngine_structs.hpp"
#include "SDK/VX_GeometryCollectionEngine_classes.hpp"
#include "SDK/VX_GeometryCollectionEngine_parameters.hpp"
#include "SDK/VX_JsonUtilities_structs.hpp"
#include "SDK/VX_JsonUtilities_classes.hpp"
#include "SDK/VX_JsonUtilities_parameters.hpp"
#include "SDK/VX_GameplayTags_structs.hpp"
#include "SDK/VX_GameplayTags_classes.hpp"
#include "SDK/VX_GameplayTags_parameters.hpp"
#include "SDK/VX_MeshDescription_structs.hpp"
#include "SDK/VX_MeshDescription_classes.hpp"
#include "SDK/VX_MeshDescription_parameters.hpp"
#include "SDK/VX_StaticMeshDescription_structs.hpp"
#include "SDK/VX_StaticMeshDescription_classes.hpp"
#include "SDK/VX_StaticMeshDescription_parameters.hpp"
#include "SDK/VX_GameplayTasks_structs.hpp"
#include "SDK/VX_GameplayTasks_classes.hpp"
#include "SDK/VX_GameplayTasks_parameters.hpp"
#include "SDK/VX_AssetRegistry_structs.hpp"
#include "SDK/VX_AssetRegistry_classes.hpp"
#include "SDK/VX_AssetRegistry_parameters.hpp"
#include "SDK/VX_NetCore_structs.hpp"
#include "SDK/VX_NetCore_classes.hpp"
#include "SDK/VX_NetCore_parameters.hpp"
#include "SDK/VX_NavigationSystem_structs.hpp"
#include "SDK/VX_NavigationSystem_classes.hpp"
#include "SDK/VX_NavigationSystem_parameters.hpp"
#include "SDK/VX_ImageWriteQueue_structs.hpp"
#include "SDK/VX_ImageWriteQueue_classes.hpp"
#include "SDK/VX_ImageWriteQueue_parameters.hpp"
#include "SDK/VX_Loading_structs.hpp"
#include "SDK/VX_Loading_classes.hpp"
#include "SDK/VX_Loading_parameters.hpp"
#include "SDK/VX_Intro_structs.hpp"
#include "SDK/VX_Intro_classes.hpp"
#include "SDK/VX_Intro_parameters.hpp"
#include "SDK/VX_AudioMixer_structs.hpp"
#include "SDK/VX_AudioMixer_classes.hpp"
#include "SDK/VX_AudioMixer_parameters.hpp"
#include "SDK/VX_EyeTracker_structs.hpp"
#include "SDK/VX_EyeTracker_classes.hpp"
#include "SDK/VX_EyeTracker_parameters.hpp"
#include "SDK/VX_AIModule_structs.hpp"
#include "SDK/VX_AIModule_classes.hpp"
#include "SDK/VX_AIModule_parameters.hpp"
#include "SDK/VX_BuildPatchServices_structs.hpp"
#include "SDK/VX_BuildPatchServices_classes.hpp"
#include "SDK/VX_BuildPatchServices_parameters.hpp"
#include "SDK/VX_CinematicCamera_structs.hpp"
#include "SDK/VX_CinematicCamera_classes.hpp"
#include "SDK/VX_CinematicCamera_parameters.hpp"
#include "SDK/VX_EngineSettings_structs.hpp"
#include "SDK/VX_EngineSettings_classes.hpp"
#include "SDK/VX_EngineSettings_parameters.hpp"
#include "SDK/VX_MaterialShaderQualitySettings_structs.hpp"
#include "SDK/VX_MaterialShaderQualitySettings_classes.hpp"
#include "SDK/VX_MaterialShaderQualitySettings_parameters.hpp"
#include "SDK/VX_Login_structs.hpp"
#include "SDK/VX_Login_classes.hpp"
#include "SDK/VX_Login_parameters.hpp"
#include "SDK/VX_PDCheckBox_structs.hpp"
#include "SDK/VX_PDCheckBox_classes.hpp"
#include "SDK/VX_PDCheckBox_parameters.hpp"
#include "SDK/VX_TimeManagement_structs.hpp"
#include "SDK/VX_TimeManagement_classes.hpp"
#include "SDK/VX_TimeManagement_parameters.hpp"
#include "SDK/VX_Landscape_structs.hpp"
#include "SDK/VX_Landscape_classes.hpp"
#include "SDK/VX_Landscape_parameters.hpp"
#include "SDK/VX_Foliage_structs.hpp"
#include "SDK/VX_Foliage_classes.hpp"
#include "SDK/VX_Foliage_parameters.hpp"
#include "SDK/VX_MRMesh_structs.hpp"
#include "SDK/VX_MRMesh_classes.hpp"
#include "SDK/VX_MRMesh_parameters.hpp"
#include "SDK/VX_MovieSceneCapture_structs.hpp"
#include "SDK/VX_MovieSceneCapture_classes.hpp"
#include "SDK/VX_MovieSceneCapture_parameters.hpp"
#include "SDK/VX_Start_structs.hpp"
#include "SDK/VX_Start_classes.hpp"
#include "SDK/VX_Start_parameters.hpp"
#include "SDK/VX_SoundFields_structs.hpp"
#include "SDK/VX_SoundFields_classes.hpp"
#include "SDK/VX_SoundFields_parameters.hpp"
#include "SDK/VX_PDBaseUI_structs.hpp"
#include "SDK/VX_PDBaseUI_classes.hpp"
#include "SDK/VX_PDBaseUI_parameters.hpp"
#include "SDK/VX_LevelSequence_structs.hpp"
#include "SDK/VX_LevelSequence_classes.hpp"
#include "SDK/VX_LevelSequence_parameters.hpp"
#include "SDK/VX_PhysXVehicles_structs.hpp"
#include "SDK/VX_PhysXVehicles_classes.hpp"
#include "SDK/VX_PhysXVehicles_parameters.hpp"
#include "SDK/VX_MobilePatchingUtils_structs.hpp"
#include "SDK/VX_MobilePatchingUtils_classes.hpp"
#include "SDK/VX_MobilePatchingUtils_parameters.hpp"
#include "SDK/VX_LocationServicesBPLibrary_structs.hpp"
#include "SDK/VX_LocationServicesBPLibrary_classes.hpp"
#include "SDK/VX_LocationServicesBPLibrary_parameters.hpp"
#include "SDK/VX_GooglePAD_structs.hpp"
#include "SDK/VX_GooglePAD_classes.hpp"
#include "SDK/VX_GooglePAD_parameters.hpp"
#include "SDK/VX_CustomMeshComponent_structs.hpp"
#include "SDK/VX_CustomMeshComponent_classes.hpp"
#include "SDK/VX_CustomMeshComponent_parameters.hpp"
#include "SDK/VX_CableComponent_structs.hpp"
#include "SDK/VX_CableComponent_classes.hpp"
#include "SDK/VX_CableComponent_parameters.hpp"
#include "SDK/VX_MediaAssets_structs.hpp"
#include "SDK/VX_MediaAssets_classes.hpp"
#include "SDK/VX_MediaAssets_parameters.hpp"
#include "SDK/VX_AppleImageUtils_structs.hpp"
#include "SDK/VX_AppleImageUtils_classes.hpp"
#include "SDK/VX_AppleImageUtils_parameters.hpp"
#include "SDK/VX_AssetTags_structs.hpp"
#include "SDK/VX_AssetTags_classes.hpp"
#include "SDK/VX_AssetTags_parameters.hpp"
#include "SDK/VX_ArchVisCharacter_structs.hpp"
#include "SDK/VX_ArchVisCharacter_classes.hpp"
#include "SDK/VX_ArchVisCharacter_parameters.hpp"
#include "SDK/VX_AndroidPermission_structs.hpp"
#include "SDK/VX_AndroidPermission_classes.hpp"
#include "SDK/VX_AndroidPermission_parameters.hpp"
#include "SDK/VX_UdpMessaging_structs.hpp"
#include "SDK/VX_UdpMessaging_classes.hpp"
#include "SDK/VX_UdpMessaging_parameters.hpp"
#include "SDK/VX_TcpMessaging_structs.hpp"
#include "SDK/VX_TcpMessaging_classes.hpp"
#include "SDK/VX_TcpMessaging_parameters.hpp"
#include "SDK/VX_Chatting_structs.hpp"
#include "SDK/VX_Chatting_classes.hpp"
#include "SDK/VX_Chatting_parameters.hpp"
#include "SDK/VX_TemplateSequence_structs.hpp"
#include "SDK/VX_TemplateSequence_classes.hpp"
#include "SDK/VX_TemplateSequence_parameters.hpp"
#include "SDK/VX_MagicLeapLightEstimation_structs.hpp"
#include "SDK/VX_MagicLeapLightEstimation_classes.hpp"
#include "SDK/VX_MagicLeapLightEstimation_parameters.hpp"
#include "SDK/VX_MagicLeapHandMeshing_structs.hpp"
#include "SDK/VX_MagicLeapHandMeshing_classes.hpp"
#include "SDK/VX_MagicLeapHandMeshing_parameters.hpp"
#include "SDK/VX_MagicLeapSecureStorage_structs.hpp"
#include "SDK/VX_MagicLeapSecureStorage_classes.hpp"
#include "SDK/VX_MagicLeapSecureStorage_parameters.hpp"
#include "SDK/VX_MagicLeapPrivileges_structs.hpp"
#include "SDK/VX_MagicLeapPrivileges_classes.hpp"
#include "SDK/VX_MagicLeapPrivileges_parameters.hpp"
#include "SDK/VX_MagicLeapIdentity_structs.hpp"
#include "SDK/VX_MagicLeapIdentity_classes.hpp"
#include "SDK/VX_MagicLeapIdentity_parameters.hpp"
#include "SDK/VX_MagicLeapPlanes_structs.hpp"
#include "SDK/VX_MagicLeapPlanes_classes.hpp"
#include "SDK/VX_MagicLeapPlanes_parameters.hpp"
#include "SDK/VX_LiveLinkInterface_structs.hpp"
#include "SDK/VX_LiveLinkInterface_classes.hpp"
#include "SDK/VX_LiveLinkInterface_parameters.hpp"
#include "SDK/VX_MagicLeapImageTracker_structs.hpp"
#include "SDK/VX_MagicLeapImageTracker_classes.hpp"
#include "SDK/VX_MagicLeapImageTracker_parameters.hpp"
#include "SDK/VX_MagicLeapHandTracking_structs.hpp"
#include "SDK/VX_MagicLeapHandTracking_classes.hpp"
#include "SDK/VX_MagicLeapHandTracking_parameters.hpp"
#include "SDK/VX_MagicLeapEyeTracker_structs.hpp"
#include "SDK/VX_MagicLeapEyeTracker_classes.hpp"
#include "SDK/VX_MagicLeapEyeTracker_parameters.hpp"
#include "SDK/VX_MagicLeapController_structs.hpp"
#include "SDK/VX_MagicLeapController_classes.hpp"
#include "SDK/VX_MagicLeapController_parameters.hpp"
#include "SDK/VX_MagicLeapAudio_structs.hpp"
#include "SDK/VX_MagicLeapAudio_classes.hpp"
#include "SDK/VX_MagicLeapAudio_parameters.hpp"
#include "SDK/VX_AugmentedReality_structs.hpp"
#include "SDK/VX_AugmentedReality_classes.hpp"
#include "SDK/VX_AugmentedReality_parameters.hpp"
#include "SDK/VX_MagicLeapAR_structs.hpp"
#include "SDK/VX_MagicLeapAR_classes.hpp"
#include "SDK/VX_MagicLeapAR_parameters.hpp"
#include "SDK/VX_HeadMountedDisplay_structs.hpp"
#include "SDK/VX_HeadMountedDisplay_classes.hpp"
#include "SDK/VX_HeadMountedDisplay_parameters.hpp"
#include "SDK/VX_MagicLeap_structs.hpp"
#include "SDK/VX_MagicLeap_classes.hpp"
#include "SDK/VX_MagicLeap_parameters.hpp"
#include "SDK/VX_MagicLeapARPin_structs.hpp"
#include "SDK/VX_MagicLeapARPin_classes.hpp"
#include "SDK/VX_MagicLeapARPin_parameters.hpp"
#include "SDK/VX_MagicLeapSharedWorld_structs.hpp"
#include "SDK/VX_MagicLeapSharedWorld_classes.hpp"
#include "SDK/VX_MagicLeapSharedWorld_parameters.hpp"
#include "SDK/VX_NiagaraAnimNotifies_structs.hpp"
#include "SDK/VX_NiagaraAnimNotifies_classes.hpp"
#include "SDK/VX_NiagaraAnimNotifies_parameters.hpp"
#include "SDK/VX_NiagaraCore_structs.hpp"
#include "SDK/VX_NiagaraCore_classes.hpp"
#include "SDK/VX_NiagaraCore_parameters.hpp"
#include "SDK/VX_ActorSequence_structs.hpp"
#include "SDK/VX_ActorSequence_classes.hpp"
#include "SDK/VX_ActorSequence_parameters.hpp"
#include "SDK/VX_EditableMesh_structs.hpp"
#include "SDK/VX_EditableMesh_classes.hpp"
#include "SDK/VX_EditableMesh_parameters.hpp"
#include "SDK/VX_Niagara_structs.hpp"
#include "SDK/VX_Niagara_classes.hpp"
#include "SDK/VX_Niagara_parameters.hpp"
#include "SDK/VX_ClothingSystemRuntimeCommon_structs.hpp"
#include "SDK/VX_ClothingSystemRuntimeCommon_classes.hpp"
#include "SDK/VX_ClothingSystemRuntimeCommon_parameters.hpp"
#include "SDK/VX_ClothingSystemRuntimeNv_structs.hpp"
#include "SDK/VX_ClothingSystemRuntimeNv_classes.hpp"
#include "SDK/VX_ClothingSystemRuntimeNv_parameters.hpp"
#include "SDK/VX_ChaosNiagara_structs.hpp"
#include "SDK/VX_ChaosNiagara_classes.hpp"
#include "SDK/VX_ChaosNiagara_parameters.hpp"
#include "SDK/VX_ChaosCloth_structs.hpp"
#include "SDK/VX_ChaosCloth_classes.hpp"
#include "SDK/VX_ChaosCloth_parameters.hpp"
#include "SDK/VX_AutomationUtils_structs.hpp"
#include "SDK/VX_AutomationUtils_classes.hpp"
#include "SDK/VX_AutomationUtils_parameters.hpp"
#include "SDK/VX_GeometryCollectionTracks_structs.hpp"
#include "SDK/VX_GeometryCollectionTracks_classes.hpp"
#include "SDK/VX_GeometryCollectionTracks_parameters.hpp"
#include "SDK/VX_GeometryCache_structs.hpp"
#include "SDK/VX_GeometryCache_classes.hpp"
#include "SDK/VX_GeometryCache_parameters.hpp"
#include "SDK/VX_VariantManagerContent_structs.hpp"
#include "SDK/VX_VariantManagerContent_classes.hpp"
#include "SDK/VX_VariantManagerContent_parameters.hpp"
#include "SDK/VX_UObjectPlugin_structs.hpp"
#include "SDK/VX_UObjectPlugin_classes.hpp"
#include "SDK/VX_UObjectPlugin_parameters.hpp"
#include "SDK/VX_SignificanceManager_structs.hpp"
#include "SDK/VX_SignificanceManager_classes.hpp"
#include "SDK/VX_SignificanceManager_parameters.hpp"
#include "SDK/VX_DatasmithContent_structs.hpp"
#include "SDK/VX_DatasmithContent_classes.hpp"
#include "SDK/VX_DatasmithContent_parameters.hpp"
#include "SDK/VX_LightPropagationVolumeRuntime_structs.hpp"
#include "SDK/VX_LightPropagationVolumeRuntime_classes.hpp"
#include "SDK/VX_LightPropagationVolumeRuntime_parameters.hpp"
#include "SDK/VX_FacialAnimation_structs.hpp"
#include "SDK/VX_FacialAnimation_classes.hpp"
#include "SDK/VX_FacialAnimation_parameters.hpp"
#include "SDK/VX_AnimationSharing_structs.hpp"
#include "SDK/VX_AnimationSharing_classes.hpp"
#include "SDK/VX_AnimationSharing_parameters.hpp"
#include "SDK/VX_Paper2D_structs.hpp"
#include "SDK/VX_Paper2D_classes.hpp"
#include "SDK/VX_Paper2D_parameters.hpp"
#include "SDK/VX_GeometryCacheTracks_structs.hpp"
#include "SDK/VX_GeometryCacheTracks_classes.hpp"
#include "SDK/VX_GeometryCacheTracks_parameters.hpp"
#include "SDK/VX_Synthesis_structs.hpp"
#include "SDK/VX_Synthesis_classes.hpp"
#include "SDK/VX_Synthesis_parameters.hpp"
#include "SDK/VX_BinkMediaPlayer_structs.hpp"
#include "SDK/VX_BinkMediaPlayer_classes.hpp"
#include "SDK/VX_BinkMediaPlayer_parameters.hpp"
#include "SDK/VX_InteractiveToolsFramework_structs.hpp"
#include "SDK/VX_InteractiveToolsFramework_classes.hpp"
#include "SDK/VX_InteractiveToolsFramework_parameters.hpp"
#include "SDK/VX_MeshModelingTools_structs.hpp"
#include "SDK/VX_MeshModelingTools_classes.hpp"
#include "SDK/VX_MeshModelingTools_parameters.hpp"
#include "SDK/VX_ModelingComponents_structs.hpp"
#include "SDK/VX_ModelingComponents_classes.hpp"
#include "SDK/VX_ModelingComponents_parameters.hpp"
#include "SDK/VX_OnlineSubsystem_structs.hpp"
#include "SDK/VX_OnlineSubsystem_classes.hpp"
#include "SDK/VX_OnlineSubsystem_parameters.hpp"
#include "SDK/VX_SkinnedDecalComponent_structs.hpp"
#include "SDK/VX_SkinnedDecalComponent_classes.hpp"
#include "SDK/VX_SkinnedDecalComponent_parameters.hpp"
#include "SDK/VX_AudioCapture_structs.hpp"
#include "SDK/VX_AudioCapture_classes.hpp"
#include "SDK/VX_AudioCapture_parameters.hpp"
#include "SDK/VX_OnlineSubsystemUtils_structs.hpp"
#include "SDK/VX_OnlineSubsystemUtils_classes.hpp"
#include "SDK/VX_OnlineSubsystemUtils_parameters.hpp"
#include "SDK/VX_OnlineSubsystemSteam_structs.hpp"
#include "SDK/VX_OnlineSubsystemSteam_classes.hpp"
#include "SDK/VX_OnlineSubsystemSteam_parameters.hpp"
#include "SDK/VX_VaTexAtlasPlugin_structs.hpp"
#include "SDK/VX_VaTexAtlasPlugin_classes.hpp"
#include "SDK/VX_VaTexAtlasPlugin_parameters.hpp"
#include "SDK/VX_DefaultPlayer_structs.hpp"
#include "SDK/VX_DefaultPlayer_classes.hpp"
#include "SDK/VX_DefaultPlayer_parameters.hpp"
#include "SDK/VX_ProceduralMeshComponent_structs.hpp"
#include "SDK/VX_ProceduralMeshComponent_classes.hpp"
#include "SDK/VX_ProceduralMeshComponent_parameters.hpp"
#include "SDK/VX_MailNotification_structs.hpp"
#include "SDK/VX_MailNotification_classes.hpp"
#include "SDK/VX_MailNotification_parameters.hpp"
#include "SDK/VX_PDButton_structs.hpp"
#include "SDK/VX_PDButton_classes.hpp"
#include "SDK/VX_PDButton_parameters.hpp"
#include "SDK/VX_ApexDestruction_structs.hpp"
#include "SDK/VX_ApexDestruction_classes.hpp"
#include "SDK/VX_ApexDestruction_parameters.hpp"
#include "SDK/VX_ConstructionSystemRuntime_structs.hpp"
#include "SDK/VX_ConstructionSystemRuntime_classes.hpp"
#include "SDK/VX_ConstructionSystemRuntime_parameters.hpp"
#include "SDK/VX_PrefabricatorRuntime_structs.hpp"
#include "SDK/VX_PrefabricatorRuntime_classes.hpp"
#include "SDK/VX_PrefabricatorRuntime_parameters.hpp"
#include "SDK/VX_SubstanceCore_structs.hpp"
#include "SDK/VX_SubstanceCore_classes.hpp"
#include "SDK/VX_SubstanceCore_parameters.hpp"

enum CharacterPlayerBone : int
{
	//Bone Count: 125
	Root = 0,
	bx_bip = 1,
	bx_pelvis = 2,
	bx_L_thigh = 3,
	bx_L_calf = 4,
	bx_L_foot = 5,
	bx_L_toe = 6,
	bx_L_knee = 7,
	bx_L_thighTwist = 8,
	b5th_Equipment_LSide = 9,
	bx_R_thigh = 10,
	bx_R_calf = 11,
	bx_R_foot = 12,
	bx_R_toe = 13,
	bx_R_knee = 14,
	bx_R_thighTwist = 15,
	b3rd_Equipment_Dummy = 16,
	bx_Divisionpoint = 17,
	bx_spine = 18,
	bx_spine_01 = 19,
	backpack_Dummy = 20,
	b1st_Equipment_Dummy = 21,
	bx_spine_02 = 22,
	bx_L_clavicle = 23,
	bx_L_trapezius = 24,
	bx_L_upperArm = 25,
	bx_L_upArmTwist = 26,
	bx_L_forearm = 27,
	bx_L_Elbow = 28,
	bx_L_foreTwist = 29,
	bx_L_foreTwist01 = 30,
	bx_L_hand = 31,
	bx_L_finger_00 = 32,
	bx_L_finger_01 = 33,
	bx_L_finger_02 = 34,
	bx_L_finger3 = 35,
	bx_L_finger4 = 36,
	bx_L_finger5 = 37,
	bx_L_finger6 = 38,
	bx_L_finger7 = 39,
	bx_L_finger8 = 40,
	bx_L_finger9 = 41,
	bx_L_finger10 = 42,
	bx_L_finger11 = 43,
	Weapon_L = 44,
	Palm_L = 45,
	bx_L_finger = 46,
	bx_L_finger1 = 47,
	bx_L_finger2 = 48,
	bx_R_clavicle = 49,
	bx_R_trapezius = 50,
	bx_R_upperArm = 51,
	bx_R_upArmTwist = 52,
	bx_R_forearm = 53,
	bx_R_foreTwist01 = 54,
	bx_R_foreTwist = 55,
	bx_R_Elbow = 56,
	bx_R_hand = 57,
	Weapon_R = 58,
	Palm_R = 59,
	bx_r_finger_00 = 60,
	bx_R_finger_01 = 61,
	bx_R_finger_02 = 62,
	bx_r_finger3 = 63,
	bx_r_finger4 = 64,
	bx_r_finger5 = 65,
	bx_r_finger6 = 66,
	bx_r_finger7 = 67,
	bx_r_finger8 = 68,
	bx_r_finger9 = 69,
	bx_r_finger10 = 70,
	bx_r_finger11 = 71,
	bx_r_finger12 = 72,
	bx_r_finger13 = 73,
	bx_r_finger14 = 74,
	bx_neck_twist = 75,
	b2nd_Equipment_Dummy = 76,
	bx_neck = 77,
	bx_head = 78,
	bx_outgameF = 79,
	bx_Lip_OUT_09 = 80,
	bx_Lip_OUT_00 = 81,
	bx_Lip_OUT_01 = 82,
	bx_Lip_OUT_02 = 83,
	bx_Lip_OUT_03 = 84,
	bx_Lip_OUT_04 = 85,
	bx_Lip_OUT_05 = 86,
	bx_Lip_OUT_06 = 87,
	bx_Lip_OUT_07 = 88,
	bx_Lip_OUT_08 = 89,
	bx_Cheek_OUT_L02 = 90,
	bx_Lip_OUT = 91,
	bx_Cheek_OUT_R03 = 92,
	bx_Cheek_OUT_R01 = 93,
	bx_Nose_OUT_R = 94,
	bx_Cheek_OUT_L01 = 95,
	bx_Cheek_OUT_L03 = 96,
	bx_Cheek_OUT_R02 = 97,
	bx_Nose_OUT_L = 98,
	bx_Jaw_OUT = 99,
	bx_Cheek_OUT_L04 = 100,
	bx_Cheek_OUT_R04 = 101,
	bx_EyelidUp_OUT_L = 102,
	bx_Eyeball_OUT_L = 103,
	bx_Eyeball_OUT_R = 104,
	bx_EyelidDown_OUT_R = 105,
	bx_EyelidUp_OUT_R = 106,
	bx_Glabella_OUT = 107,
	bx_EyelidDown_OUT_L = 108,
	bx_Eyebrow_OUT_R00 = 109,
	bx_Eyebrow_OUT_R01 = 110,
	bx_Eyebrow_OUT_R02 = 111,
	bx_Eyebrow_OUT_L00 = 112,
	bx_Eyebrow_OUT_L01 = 113,
	bx_Eyebrow_OUT_L02 = 114,
	b4th_Equipment_Dummy = 115,
	bx_R_Hip = 116,
	bx_L_Hip = 117,
	Weapon_N = 118,
	Cam01 = 119,
	Cam02 = 120,
	Cam03 = 121,
	Cam04 = 122,
	Cam05 = 123,
	bVBCurves = 124,
};

static inline void memcpy_(void* _Dst, void const* _Src, size_t _Size)
{
	auto csrc = (char*)_Src;
	auto cdest = (char*)_Dst;

	for (int i = 0; i < _Size; i++)
	{
		cdest[i] = csrc[i];
	}
}

static inline void SwapVtable(void* obj, uint32_t index, void* hook) {
	auto currVt = *(void**)(obj);

	auto vtable = *(void***)(obj);
	int i = 0;

	for (; vtable[i]; i++)
		__noop();

	auto newVt = new uintptr_t[i];

	memcpy_(newVt, currVt, i * 0x8);

	newVt[index] = (uintptr_t)hook;

	*(uintptr_t**)(obj) = newVt;
}

/// <summary>
/// Searches for the first pattern in the module.
/// </summary>
/// <param name="module">The module to scan.</param>
/// <param name="pattern">The pattern (Example: "\x12\xAB\x34")</param>
/// <param name="mask">The mask (Example: "x?x")</param>
/// <returns>The address of the found pattern or -1 if the pattern was not found.</returns>
uintptr_t FindPattern(HMODULE module, const unsigned char* pattern, const char* mask);

/// <summary>
/// Searches for the first pattern in the memory region.
/// </summary>
/// <param name="start">The start address of the memory region to scan.</param>
/// <param name="length">The length of the memory region.</param>
/// <param name="pattern">The pattern (Example: "\x12\xAB\x34")</param>
/// <param name="mask">The mask (Example: "x?x")</param>
/// <returns>The address of the found pattern or -1 if the pattern was not found.</returns>
uintptr_t FindPattern(uintptr_t start, size_t length, const unsigned char* pattern, const char* mask);


class unrealengine {
public:
	static inline SDK::UWorld** GWorld = NULL;
	static inline PBYTE GObjects = NULL;
	static inline SDK::UWorld* World = NULL;
	static inline SDK::FMinimalViewInfo* Camera;
	static inline SDK::APlayerController* PlayerController = NULL;
	static inline SDK::ULocalPlayer* LocalPlayer = NULL;
	static inline SDK::UKismetMathLibrary* MathLib = NULL;
	static inline SDK::UKismetSystemLibrary* KismetSystemLib = NULL;
	static inline SDK::UGameplayStatics* GPStatics = NULL;
	static inline SDK::UFont* Font = NULL;
	static inline SDK::FMatrix* myMatrix = new SDK::FMatrix();
	static inline PBYTE pGetBoneMatrix;

	static bool SetObjects()
	{
		//set Font
		if (!Font) Font = SDK::UObject::FindObject<SDK::UFont>(("Font Roboto.Roboto"));

		//set MathLib for math functions
		if (!MathLib) MathLib = (SDK::UKismetMathLibrary*)SDK::UKismetMathLibrary::StaticClass();

		//set SystemLib for math functions
		if (!KismetSystemLib) KismetSystemLib = (SDK::UKismetSystemLibrary*)SDK::UKismetSystemLibrary::StaticClass();

		//Set GPStatics for game functions
		if (!GPStatics) GPStatics = (SDK::UGameplayStatics*)SDK::UGameplayStatics::StaticClass();
		if (!GPStatics) return false;

		//set world
		World = *GWorld;

		//check world
		if (!World) return false;

		//Set local player 
		if (World->OwningGameInstance && World->OwningGameInstance->LocalPlayers.IsValidIndex(0)) LocalPlayer = World->OwningGameInstance->LocalPlayers[0];
		if (!LocalPlayer) return false;

		//Set player contoller
		if (LocalPlayer) PlayerController = LocalPlayer->PlayerController;
		if (!PlayerController) return false;

		//Everything went well
		return true;
	}

	static inline SDK::FVector RotateCorner(SDK::FVector origin, SDK::FVector corner, float theta)
	{
		float x = corner.X - origin.X;
		float y = corner.Y - origin.Y;

		return {
			origin.X + (x * MathLib->STATIC_Cos(theta) - y * MathLib->STATIC_Sin(theta)),
			origin.Y + (x * MathLib->STATIC_Sin(theta) + y * MathLib->STATIC_Cos(theta)),
			corner.Z
		};
	}

	inline SDK::FVector GetBoneLocByIdx(PVOID mesh, int id)
	{
		if (!mesh) return { 0,0,0 };
		auto fGetBoneMatrix = ((SDK::FMatrix * (__fastcall*)(PVOID, SDK::FMatrix*, int))(pGetBoneMatrix));
		fGetBoneMatrix(mesh, myMatrix, id);

		return SDK::FVector(myMatrix->M[3][0], myMatrix->M[3][1], myMatrix->M[3][2]);
	}

	static inline bool WorldToScreen(SDK::FVector location, SDK::FVector2D* screen)
	{
		SDK::UWorld* World = *GWorld;
		SDK::APlayerController* playerController = World->OwningGameInstance->LocalPlayers[0]->PlayerController;

		if (playerController)
		{
			return playerController->ProjectWorldLocationToScreen(location, false, screen);
		}

		return FALSE;
	}

	void drawRect(SDK::UCanvas* canvas, const SDK::FVector2D& min, const SDK::FVector2D& max, SDK::FLinearColor& color, float thickness)
	{
		canvas->K2_DrawLine(min, SDK::FVector2D(max.X, min.Y), thickness, color);
		canvas->K2_DrawLine(min, SDK::FVector2D(min.X, max.Y), thickness, color);
		canvas->K2_DrawLine(SDK::FVector2D(min.X, max.Y), max, thickness, color);
		canvas->K2_DrawLine(SDK::FVector2D(max.X, min.Y), max, thickness, color);
	}

	inline void SetAim(SDK::APlayerCameraManager* MyCamera, SDK::ABP_PlayerCharacter_C* Target)
	{
		SDK::FVector CamLocation = MyCamera->GetCameraLocation();
		SDK::FRotator CamRotation = MyCamera->GetCameraRotation();
		SDK::FVector AimLocation;
		SDK::FRotator AimRotation, CurrentRotation;

		AimLocation = Target->Mesh->GetSocketLocation(Target->Mesh->GetBoneName(bx_head));

		//get aim rotation
		AimRotation = MathLib->STATIC_FindLookAtRotation(CamLocation, AimLocation);

		//set aim
		PlayerController->SetControlRotation(AimRotation);
	}

	void DrawLine(SDK::UCanvas* Canvas, SDK::FVector2D position1, SDK::FVector2D position2, SDK::FLinearColor color, int thickness = 1)
	{
			Canvas->K2_DrawLine(position1, position2, thickness, color);
	}


	void DrawCorneredBox(SDK::UCanvas* Canvas, SDK::FVector2D position, SDK::FVector2D size, int thickness, SDK::FLinearColor color) {
		float lineW = (size.X / 5);
		float lineH = (size.Y / 4);

		//corners
		DrawLine(Canvas, SDK::FVector2D(position.X, position.Y), SDK::FVector2D(position.X, position.Y + lineH), color, thickness);
		DrawLine(Canvas, SDK::FVector2D(position.X, position.Y), SDK::FVector2D(position.X + lineW, position.Y), color, thickness);
		DrawLine(Canvas, SDK::FVector2D(position.X + size.X - lineW, position.Y), SDK::FVector2D(position.X + size.X, position.Y), color, thickness);
		DrawLine(Canvas, SDK::FVector2D(position.X + size.X, position.Y), SDK::FVector2D(position.X + size.X, position.Y + lineH), color, thickness);
		DrawLine(Canvas, SDK::FVector2D(position.X, position.Y + size.Y - lineH), SDK::FVector2D(position.X, position.Y + size.Y), color, thickness);
		DrawLine(Canvas, SDK::FVector2D(position.X, position.Y + size.Y), SDK::FVector2D(position.X + lineW, position.Y + size.Y), color, thickness);
		DrawLine(Canvas, SDK::FVector2D(position.X + size.X - lineW, position.Y + size.Y), SDK::FVector2D(position.X + size.X, position.Y + size.Y), color, thickness);
		DrawLine(Canvas, SDK::FVector2D(position.X + size.X, position.Y + size.Y - lineH), SDK::FVector2D(position.X + size.X, position.Y + size.Y), color, thickness);
	}

	inline void Box2D(SDK::UCanvas* Canvas, SDK::ABP_PlayerCharacter_C* actor, SDK::FVector2D Bottom, SDK::FVector2D Top, SDK::FLinearColor col)
	{
		SDK::FVector WorldOrigin, WorldBoxExtent;
		actor->GetActorBounds(bool(PlayerController->AcknowledgedPawn), false, &WorldOrigin, &WorldBoxExtent);

		WorldBoxExtent.X *= 2.f;
		WorldBoxExtent.Y *= 2.f;
		WorldBoxExtent.Z *= 2.f;

		WorldOrigin.X -= WorldBoxExtent.X / 2.f;
		WorldOrigin.Y -= WorldBoxExtent.Y / 2.f;
		WorldOrigin.Z -= WorldBoxExtent.Z / 2.f;

		SDK::FVector one = WorldOrigin;
		SDK::FVector two = WorldOrigin; two.X += WorldBoxExtent.X;
		SDK::FVector three = WorldOrigin; three.X += WorldBoxExtent.X; three.Y += WorldBoxExtent.Y;
		SDK::FVector four = WorldOrigin; four.Y += WorldBoxExtent.Y;

		SDK::FVector five = one; five.Z += WorldBoxExtent.Z;
		SDK::FVector six = two; six.Z += WorldBoxExtent.Z;
		SDK::FVector seven = three; seven.Z += WorldBoxExtent.Z;
		SDK::FVector eight = four; eight.Z += WorldBoxExtent.Z;

		SDK::FVector2D s1, s2, s3, s4, s5, s6, s7, s8;
		PlayerController->ProjectWorldLocationToScreen(one, false, &s1);
		PlayerController->ProjectWorldLocationToScreen(two, false, &s2);
		PlayerController->ProjectWorldLocationToScreen(three, false, &s3);
		PlayerController->ProjectWorldLocationToScreen(four, false, &s4);
		PlayerController->ProjectWorldLocationToScreen(five, false, &s5);
		PlayerController->ProjectWorldLocationToScreen(six, false, &s6);
		PlayerController->ProjectWorldLocationToScreen(seven, false, &s7);
		PlayerController->ProjectWorldLocationToScreen(eight, false, &s8);

		int x_array[8] = { s1.X, s2.X, s3.X, s4.X, s5.X, s6.X, s7.X, s8.X };
		int right = x_array[0], left = x_array[0];

		for (int right_idx = 0; right_idx < 8; right_idx++)
		{
			if (x_array[right_idx] > right)
				right = x_array[right_idx];
		}

		for (int left_idx = 0; left_idx < 8; left_idx++)
		{
			if (x_array[left_idx] < left)
				left = x_array[left_idx];
		}

		float Width = right - left;
		float Height = Bottom.Y - Top.Y;

		SDK::FVector2D min, max, size;
		min.X = left;
		min.Y = Bottom.Y;

		max.X = right;
		max.Y = Top.Y;

		size.X = min.X - max.X;
		size.Y = min.Y - max.Y;

		DrawCorneredBox(Canvas, max, size, 1.5, col);
	}
};

inline unrealengine* ue = new unrealengine;

typedef void (*PostRender_t)(SDK::UObject* pObject, SDK::UCanvas* pCanvas);
static inline PostRender_t origin_renderer;