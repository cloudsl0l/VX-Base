#pragma once

// Veiled Experts (idk bro) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function VeiledExperts.ExportTeamModeSpawnSystem.CreateShopBlockArea
struct AExportTeamModeSpawnSystem_CreateShopBlockArea_Params
{
};

// Function VeiledExperts.ExportTutorialModeSpawnSystem.CreateTutorialArea
struct AExportTutorialModeSpawnSystem_CreateTutorialArea_Params
{
};

// Function VeiledExperts.PDActionClimbEnterBase.PlayClimbEnter
struct UPDActionClimbEnterBase_PlayClimbEnter_Params
{
};

// Function VeiledExperts.PDActionClimbEnterBase.ClimbMoveEnd
struct UPDActionClimbEnterBase_ClimbMoveEnd_Params
{
};

// Function VeiledExperts.PDActionRoll.OnPerchRadiusRestore
struct UPDActionRoll_OnPerchRadiusRestore_Params
{
};

// Function VeiledExperts.PDAgentCreateListItem.OnUnHoverAgent
struct UPDAgentCreateListItem_OnUnHoverAgent_Params
{
};

// Function VeiledExperts.PDAgentCreateListItem.OnHoverAgent
struct UPDAgentCreateListItem_OnHoverAgent_Params
{
};

// Function VeiledExperts.PDAgentCreateListItem.OnClickAgent
struct UPDAgentCreateListItem_OnClickAgent_Params
{
};

// Function VeiledExperts.PDAgentCreateUI.OnCreateAgentClicked
struct UPDAgentCreateUI_OnCreateAgentClicked_Params
{
};

// Function VeiledExperts.PDAgentCreateUI.OnBackClicked
struct UPDAgentCreateUI_OnBackClicked_Params
{
};

// Function VeiledExperts.PDAgentCreateUI.ConfirmCreate
struct UPDAgentCreateUI_ConfirmCreate_Params
{
};

// Function VeiledExperts.PDAgentCreateUI.CancelContract
struct UPDAgentCreateUI_CancelContract_Params
{
};

// Function VeiledExperts.PDPopupBaseUI.OnClickOKBtn
struct UPDPopupBaseUI_OnClickOKBtn_Params
{
};

// Function VeiledExperts.PDPopupBaseUI.OnClickCancelBtn
struct UPDPopupBaseUI_OnClickCancelBtn_Params
{
};

// Function VeiledExperts.PDAgentProfilePopupUI.OnContractAgentClicked
struct UPDAgentProfilePopupUI_OnContractAgentClicked_Params
{
};

// Function VeiledExperts.PDAgentProfilePopupUI.OnCancelAgentClicked
struct UPDAgentProfilePopupUI_OnCancelAgentClicked_Params
{
};

// Function VeiledExperts.PDAgentProfileUI.OnUnHoverBtn
struct UPDAgentProfileUI_OnUnHoverBtn_Params
{
};

// Function VeiledExperts.PDAgentProfileUI.OnHoverSignatureBtn
struct UPDAgentProfileUI_OnHoverSignatureBtn_Params
{
};

// Function VeiledExperts.PDAgentProfileUI.OnHoverPassive2Btn
struct UPDAgentProfileUI_OnHoverPassive2Btn_Params
{
};

// Function VeiledExperts.PDAgentProfileUI.OnHoverPassive1Btn
struct UPDAgentProfileUI_OnHoverPassive1Btn_Params
{
};

// Function VeiledExperts.PDAgentSelectListItem.OnTabSelected
struct UPDAgentSelectListItem_OnTabSelected_Params
{
};

// Function VeiledExperts.PDAgentSelectListItem.OnTabDblClicked
struct UPDAgentSelectListItem_OnTabDblClicked_Params
{
};

// Function VeiledExperts.PDAgentSelectListItem.OnClickCreateAgent
struct UPDAgentSelectListItem_OnClickCreateAgent_Params
{
};

// Function VeiledExperts.PDAgentSelectUI.OnBackClicked
struct UPDAgentSelectUI_OnBackClicked_Params
{
};

// Function VeiledExperts.PDAgentSelectUI.GotoCharacterDeco
struct UPDAgentSelectUI_GotoCharacterDeco_Params
{
};

// Function VeiledExperts.PDAniButton.OnUnHovered
struct UPDAniButton_OnUnHovered_Params
{
};

// Function VeiledExperts.PDAniButton.OnReleased
struct UPDAniButton_OnReleased_Params
{
};

// Function VeiledExperts.PDAniButton.OnPressed
struct UPDAniButton_OnPressed_Params
{
};

// Function VeiledExperts.PDAniButton.OnHovered
struct UPDAniButton_OnHovered_Params
{
};

// Function VeiledExperts.PDAsyncObjectComponent.OnBeginOverlapEvent
struct UPDAsyncObjectComponent_OnBeginOverlapEvent_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function VeiledExperts.PDBaseUI.OnMovieOpened
struct UPDBaseUI_OnMovieOpened_Params
{
};

// Function VeiledExperts.PDBaseUI.OnMovieClosed
struct UPDBaseUI_OnMovieClosed_Params
{
};

// Function VeiledExperts.PDBaseUI.OnInitMediaPlayer
struct UPDBaseUI_OnInitMediaPlayer_Params
{
};

// Function VeiledExperts.PDButton.OnUnHovered
struct UPDButton_OnUnHovered_Params
{
};

// Function VeiledExperts.PDButton.OnReleased
struct UPDButton_OnReleased_Params
{
};

// Function VeiledExperts.PDButton.OnPressed
struct UPDButton_OnPressed_Params
{
};

// Function VeiledExperts.PDButton.OnHovered
struct UPDButton_OnHovered_Params
{
};

// Function VeiledExperts.PDButton.OnClicked
struct UPDButton_OnClicked_Params
{
};

// Function VeiledExperts.PDCharacterEntity.PlayHitAnim
struct APDCharacterEntity_PlayHitAnim_Params
{
};

// Function VeiledExperts.PDChattingUI.SendChatMessage
struct UPDChattingUI_SendChatMessage_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDChattingUI.OnValueChanged
struct UPDChattingUI_OnValueChanged_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDChattingUI.OnClickWhisperChatBtn
struct UPDChattingUI_OnClickWhisperChatBtn_Params
{
};

// Function VeiledExperts.PDChattingUI.OnClickTeamChatBtn
struct UPDChattingUI_OnClickTeamChatBtn_Params
{
};

// Function VeiledExperts.PDChattingUI.OnClickSquadChatBtn
struct UPDChattingUI_OnClickSquadChatBtn_Params
{
};

// Function VeiledExperts.PDChattingUI.OnClickReplyChatBtn
struct UPDChattingUI_OnClickReplyChatBtn_Params
{
};

// Function VeiledExperts.PDChattingUI.OnClickHideBtn
struct UPDChattingUI_OnClickHideBtn_Params
{
};

// Function VeiledExperts.PDChattingUI.OnClickClanChatBtn
struct UPDChattingUI_OnClickClanChatBtn_Params
{
};

// Function VeiledExperts.PDChattingUI.ChangeText
struct UPDChattingUI_ChangeText_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VeiledExperts.PDCheatManager.WeaponSocketTest
struct UPDCheatManager_WeaponSocketTest_Params
{
};

// Function VeiledExperts.PDCheatManager.TogglePPEffect
struct UPDCheatManager_TogglePPEffect_Params
{
	int                                                EffectType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnOff;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.ToggleMyWeaponSkinBox
struct UPDCheatManager_ToggleMyWeaponSkinBox_Params
{
};

// Function VeiledExperts.PDCheatManager.ToggleDrillDamageArea
struct UPDCheatManager_ToggleDrillDamageArea_Params
{
};

// Function VeiledExperts.PDCheatManager.ToggleAimDebugLine
struct UPDCheatManager_ToggleAimDebugLine_Params
{
};

// Function VeiledExperts.PDCheatManager.TestVisualObject
struct UPDCheatManager_TestVisualObject_Params
{
	uint32_t                                           DBIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.TestExplodeEffect
struct UPDCheatManager_TestExplodeEffect_Params
{
	int                                                EffectType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnOff;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.TestCameraShakeAnim
struct UPDCheatManager_TestCameraShakeAnim_Params
{
	int                                                ShakeIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ShakeScale;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.TestCameraShake
struct UPDCheatManager_TestCameraShake_Params
{
	int                                                ShakeIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ShakeScale;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimerValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.TestAnimSynObject
struct UPDCheatManager_TestAnimSynObject_Params
{
	uint32_t                                           ObjIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AnimIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLooping;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.TeleportCharacter
struct UPDCheatManager_TeleportCharacter_Params
{
	float                                              fPosY;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.SunFlower
struct UPDCheatManager_SunFlower_Params
{
};

// Function VeiledExperts.PDCheatManager.SuicideHit
struct UPDCheatManager_SuicideHit_Params
{
};

// Function VeiledExperts.PDCheatManager.StopLoopSound
struct UPDCheatManager_StopLoopSound_Params
{
};

// Function VeiledExperts.PDCheatManager.SpawnItemAll
struct UPDCheatManager_SpawnItemAll_Params
{
};

// Function VeiledExperts.PDCheatManager.SpawnItem
struct UPDCheatManager_SpawnItem_Params
{
	uint32_t                                           ItemDBIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.ShowSlopeAngle
struct UPDCheatManager_ShowSlopeAngle_Params
{
};

// Function VeiledExperts.PDCheatManager.ShowRoundCoinRewardBoard
struct UPDCheatManager_ShowRoundCoinRewardBoard_Params
{
	int                                                AddCoinValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.ShowRecoilDeadZoneMOA
struct UPDCheatManager_ShowRecoilDeadZoneMOA_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.ShowOcclusionDebugLine
struct UPDCheatManager_ShowOcclusionDebugLine_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.ShowMOA
struct UPDCheatManager_ShowMOA_Params
{
	EDebugFlagsMOA                                     Flags;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.ShowIngameWidget
struct UPDCheatManager_ShowIngameWidget_Params
{
	int                                                WidgetCode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.ShowEffect
struct UPDCheatManager_ShowEffect_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.ShowDecal
struct UPDCheatManager_ShowDecal_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.ShowDebugNavFlag
struct UPDCheatManager_ShowDebugNavFlag_Params
{
};

// Function VeiledExperts.PDCheatManager.ShowDebugClimb
struct UPDCheatManager_ShowDebugClimb_Params
{
};

// Function VeiledExperts.PDCheatManager.ShowDebugAudio
struct UPDCheatManager_ShowDebugAudio_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.ShowAllIngameWidget
struct UPDCheatManager_ShowAllIngameWidget_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.SetWebMessageTickMax
struct UPDCheatManager_SetWebMessageTickMax_Params
{
	int                                                TickMax;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.SetIngameUIScale
struct UPDCheatManager_SetIngameUIScale_Params
{
	float                                              InScale;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.SetCharacterURONonRender
struct UPDCheatManager_SetCharacterURONonRender_Params
{
	int                                                UpdateRateValue;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.SetCharacterURODists
struct UPDCheatManager_SetCharacterURODists_Params
{
	float                                              D1;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              D2;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              D3;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.SetAiming
struct UPDCheatManager_SetAiming_Params
{
	struct FString                                     AimingType;                                               // (Parm, ZeroConstructor)
};

// Function VeiledExperts.PDCheatManager.RoundInitExplode
struct UPDCheatManager_RoundInitExplode_Params
{
};

// Function VeiledExperts.PDCheatManager.RoundInitBreakInto
struct UPDCheatManager_RoundInitBreakInto_Params
{
};

// Function VeiledExperts.PDCheatManager.RoundInit
struct UPDCheatManager_RoundInit_Params
{
	int                                                SeedAreaId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.ResetCamera
struct UPDCheatManager_ResetCamera_Params
{
};

// Function VeiledExperts.PDCheatManager.RequestPing
struct UPDCheatManager_RequestPing_Params
{
};

// Function VeiledExperts.PDCheatManager.ReloadScript
struct UPDCheatManager_ReloadScript_Params
{
};

// Function VeiledExperts.PDCheatManager.ReloadCameraSettings
struct UPDCheatManager_ReloadCameraSettings_Params
{
};

// Function VeiledExperts.PDCheatManager.ProjectileCollisionCheck
struct UPDCheatManager_ProjectileCollisionCheck_Params
{
};

// Function VeiledExperts.PDCheatManager.ProfileClient10Sec
struct UPDCheatManager_ProfileClient10Sec_Params
{
};

// Function VeiledExperts.PDCheatManager.PlaySound
struct UPDCheatManager_PlaySound_Params
{
	struct FString                                     soundText;                                                // (Parm, ZeroConstructor)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.PlayLoopSound
struct UPDCheatManager_PlayLoopSound_Params
{
	struct FString                                     soundText;                                                // (Parm, ZeroConstructor)
};

// Function VeiledExperts.PDCheatManager.PlayIntro
struct UPDCheatManager_PlayIntro_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InSpawnIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.PlayDestroy
struct UPDCheatManager_PlayDestroy_Params
{
};

// Function VeiledExperts.PDCheatManager.PlayCharacterSound
struct UPDCheatManager_PlayCharacterSound_Params
{
	struct FString                                     soundText;                                                // (Parm, ZeroConstructor)
};

// Function VeiledExperts.PDCheatManager.PDUnloadSubLevel
struct UPDCheatManager_PDUnloadSubLevel_Params
{
	struct FString                                     SubLevelName;                                             // (Parm, ZeroConstructor)
};

// Function VeiledExperts.PDCheatManager.PDNextViewTarget
struct UPDCheatManager_PDNextViewTarget_Params
{
};

// Function VeiledExperts.PDCheatManager.PDLoadSubLevel
struct UPDCheatManager_PDLoadSubLevel_Params
{
	struct FString                                     SubLevelName;                                             // (Parm, ZeroConstructor)
};

// Function VeiledExperts.PDCheatManager.PDDrawLine
struct UPDCheatManager_PDDrawLine_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.OnDeathMyPlayer
struct UPDCheatManager_OnDeathMyPlayer_Params
{
};

// Function VeiledExperts.PDCheatManager.OccDebugLine
struct UPDCheatManager_OccDebugLine_Params
{
	bool                                               bOn;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.MsgTest
struct UPDCheatManager_MsgTest_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.MakeCrash
struct UPDCheatManager_MakeCrash_Params
{
};

// Function VeiledExperts.PDCheatManager.LoadWeaponSkin
struct UPDCheatManager_LoadWeaponSkin_Params
{
	int                                                DecalItemIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.LoadWeaponEntireSkin
struct UPDCheatManager_LoadWeaponEntireSkin_Params
{
	int                                                DecalItemIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkinSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.KillNPC
struct UPDCheatManager_KillNPC_Params
{
};

// Function VeiledExperts.PDCheatManager.IndefiniteStamina
struct UPDCheatManager_IndefiniteStamina_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.HitTest
struct UPDCheatManager_HitTest_Params
{
	struct FString                                     Hit;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Type;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Direction;                                                // (Parm, ZeroConstructor)
};

// Function VeiledExperts.PDCheatManager.GrazeTest
struct UPDCheatManager_GrazeTest_Params
{
	struct FString                                     GrazeType;                                                // (Parm, ZeroConstructor)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.GetHitParts
struct UPDCheatManager_GetHitParts_Params
{
};

// Function VeiledExperts.PDCheatManager.GetCollider
struct UPDCheatManager_GetCollider_Params
{
};

// Function VeiledExperts.PDCheatManager.FenceShow
struct UPDCheatManager_FenceShow_Params
{
};

// Function VeiledExperts.PDCheatManager.EscapeTest
struct UPDCheatManager_EscapeTest_Params
{
};

// Function VeiledExperts.PDCheatManager.EnableOccSound
struct UPDCheatManager_EnableOccSound_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.DropItem
struct UPDCheatManager_DropItem_Params
{
	uint32_t                                           ItemDBIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.DrawDebugHitCharacter
struct UPDCheatManager_DrawDebugHitCharacter_Params
{
	bool                                               bDraw;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.DebugParkour
struct UPDCheatManager_DebugParkour_Params
{
	struct FString                                     ParkourType;                                              // (Parm, ZeroConstructor)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.DebugMeleeDraw
struct UPDCheatManager_DebugMeleeDraw_Params
{
	int                                                DrawMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.DebugMeleeClear
struct UPDCheatManager_DebugMeleeClear_Params
{
};

// Function VeiledExperts.PDCheatManager.DebugMeleeAttack
struct UPDCheatManager_DebugMeleeAttack_Params
{
	int                                                AttackType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.DebugExec
struct UPDCheatManager_DebugExec_Params
{
	int                                                AnimIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.DebugCameraEvent
struct UPDCheatManager_DebugCameraEvent_Params
{
	bool                                               bControllerRecoil;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimRecoil;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCameraShake;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCameraFOV;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.CompleteUnloadSubLevel
struct UPDCheatManager_CompleteUnloadSubLevel_Params
{
	int                                                LinkID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.CompleteLoadSubLevel
struct UPDCheatManager_CompleteLoadSubLevel_Params
{
	int                                                LinkID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.ChangeMuzzleEffect
struct UPDCheatManager_ChangeMuzzleEffect_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FireRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.ChangeListener
struct UPDCheatManager_ChangeListener_Params
{
};

// Function VeiledExperts.PDCheatManager.ChamberBullet
struct UPDCheatManager_ChamberBullet_Params
{
};

// Function VeiledExperts.PDCheatManager.CamTest_SEED
struct UPDCheatManager_CamTest_SEED_Params
{
};

// Function VeiledExperts.PDCheatManager.CamTest_SectorToTarget
struct UPDCheatManager_CamTest_SectorToTarget_Params
{
};

// Function VeiledExperts.PDCheatManager.CamTest_ObserveSector
struct UPDCheatManager_CamTest_ObserveSector_Params
{
	int                                                camIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.CamTest_HelmetCam
struct UPDCheatManager_CamTest_HelmetCam_Params
{
};

// Function VeiledExperts.PDCheatManager.CamTest_BP
struct UPDCheatManager_CamTest_BP_Params
{
};

// Function VeiledExperts.PDCheatManager.CamTest_Attach
struct UPDCheatManager_CamTest_Attach_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.CamTest_Anim
struct UPDCheatManager_CamTest_Anim_Params
{
};

// Function VeiledExperts.PDCheatManager.CamTest
struct UPDCheatManager_CamTest_Params
{
};

// Function VeiledExperts.PDCheatManager.BuyJuggernaut
struct UPDCheatManager_BuyJuggernaut_Params
{
};

// Function VeiledExperts.PDCheatManager.BomRightNow
struct UPDCheatManager_BomRightNow_Params
{
};

// Function VeiledExperts.PDCheatManager.BombInstallStart
struct UPDCheatManager_BombInstallStart_Params
{
};

// Function VeiledExperts.PDCheatManager.BombInstallFail
struct UPDCheatManager_BombInstallFail_Params
{
};

// Function VeiledExperts.PDCheatManager.BombInstallEndSuccess
struct UPDCheatManager_BombInstallEndSuccess_Params
{
};

// Function VeiledExperts.PDCheatManager.BombDeActiveStart
struct UPDCheatManager_BombDeActiveStart_Params
{
};

// Function VeiledExperts.PDCheatManager.BombDeActiveFail
struct UPDCheatManager_BombDeActiveFail_Params
{
};

// Function VeiledExperts.PDCheatManager.BombDeActiveEndSuccess
struct UPDCheatManager_BombDeActiveEndSuccess_Params
{
};

// Function VeiledExperts.PDCheatManager.AutoMove
struct UPDCheatManager_AutoMove_Params
{
	struct FString                                     MoveType;                                                 // (Parm, ZeroConstructor)
	bool                                               bMove;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.ArrowShot
struct UPDCheatManager_ArrowShot_Params
{
};

// Function VeiledExperts.PDCheatManager.AllPlayerSuicideHit
struct UPDCheatManager_AllPlayerSuicideHit_Params
{
	int                                                weaponEntityId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.AddKillLog
struct UPDCheatManager_AddKillLog_Params
{
};

// Function VeiledExperts.PDCheatManager.AddCoinList
struct UPDCheatManager_AddCoinList_Params
{
	int                                                ChangeType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ChagneValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCheatManager.AddAttack
struct UPDCheatManager_AddAttack_Params
{
};

// Function VeiledExperts.PDCircleProgressModule.OnSynchronizeProperties
struct UPDCircleProgressModule_OnSynchronizeProperties_Params
{
};

// Function VeiledExperts.PDClanApplicantListItemUI.OnClickDecline
struct UPDClanApplicantListItemUI_OnClickDecline_Params
{
};

// Function VeiledExperts.PDClanApplicantListItemUI.OnClickCancelReqJoin
struct UPDClanApplicantListItemUI_OnClickCancelReqJoin_Params
{
};

// Function VeiledExperts.PDClanApplicantListItemUI.OnClickAccept
struct UPDClanApplicantListItemUI_OnClickAccept_Params
{
};

// Function VeiledExperts.PDClanCreateUI.OnTextChangedClanTag3
struct UPDClanCreateUI_OnTextChangedClanTag3_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VeiledExperts.PDClanCreateUI.OnTextChangedClanTag2
struct UPDClanCreateUI_OnTextChangedClanTag2_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VeiledExperts.PDClanCreateUI.OnTextChangedClanTag1
struct UPDClanCreateUI_OnTextChangedClanTag1_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VeiledExperts.PDClanCreateUI.OnTextChangedClanDesc
struct UPDClanCreateUI_OnTextChangedClanDesc_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VeiledExperts.PDClanCreateUI.OnCreateConfirm
struct UPDClanCreateUI_OnCreateConfirm_Params
{
};

// Function VeiledExperts.PDClanCreateUI.OnClickSocialTab
struct UPDClanCreateUI_OnClickSocialTab_Params
{
};

// Function VeiledExperts.PDClanCreateUI.OnClickSingUpTab
struct UPDClanCreateUI_OnClickSingUpTab_Params
{
};

// Function VeiledExperts.PDClanCreateUI.OnClickRandomMark
struct UPDClanCreateUI_OnClickRandomMark_Params
{
};

// Function VeiledExperts.PDClanCreateUI.OnClickNormalTab
struct UPDClanCreateUI_OnClickNormalTab_Params
{
};

// Function VeiledExperts.PDClanCreateUI.OnClickFreeJoinTab
struct UPDClanCreateUI_OnClickFreeJoinTab_Params
{
};

// Function VeiledExperts.PDClanCreateUI.OnClickCreateClan
struct UPDClanCreateUI_OnClickCreateClan_Params
{
};

// Function VeiledExperts.PDClanCreateUI.OnClickCompetitionTab
struct UPDClanCreateUI_OnClickCompetitionTab_Params
{
};

// Function VeiledExperts.PDClanCreateUI.OnClickCheckInUse
struct UPDClanCreateUI_OnClickCheckInUse_Params
{
};

// Function VeiledExperts.PDClanCreateUI.OnClanNameTextChanged
struct UPDClanCreateUI_OnClanNameTextChanged_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VeiledExperts.PDClanInfoUI.OnUnhoveredShowClanInfo
struct UPDClanInfoUI_OnUnhoveredShowClanInfo_Params
{
};

// Function VeiledExperts.PDClanInfoUI.OnTextChangedClanTag3
struct UPDClanInfoUI_OnTextChangedClanTag3_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VeiledExperts.PDClanInfoUI.OnTextChangedClanTag2
struct UPDClanInfoUI_OnTextChangedClanTag2_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VeiledExperts.PDClanInfoUI.OnTextChangedClanTag1
struct UPDClanInfoUI_OnTextChangedClanTag1_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VeiledExperts.PDClanInfoUI.OnTextChangedClanDesc
struct UPDClanInfoUI_OnTextChangedClanDesc_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VeiledExperts.PDClanInfoUI.OnLeaveConfirm
struct UPDClanInfoUI_OnLeaveConfirm_Params
{
};

// Function VeiledExperts.PDClanInfoUI.OnHoveredShowClanInfo
struct UPDClanInfoUI_OnHoveredShowClanInfo_Params
{
};

// Function VeiledExperts.PDClanInfoUI.OnForceClanBreakButton
struct UPDClanInfoUI_OnForceClanBreakButton_Params
{
};

// Function VeiledExperts.PDClanInfoUI.OnClickSocialTab
struct UPDClanInfoUI_OnClickSocialTab_Params
{
};

// Function VeiledExperts.PDClanInfoUI.OnClickSingUpTab
struct UPDClanInfoUI_OnClickSingUpTab_Params
{
};

// Function VeiledExperts.PDClanInfoUI.OnClickShowClanInfo
struct UPDClanInfoUI_OnClickShowClanInfo_Params
{
};

// Function VeiledExperts.PDClanInfoUI.OnClickSearch
struct UPDClanInfoUI_OnClickSearch_Params
{
};

// Function VeiledExperts.PDClanInfoUI.OnClickNormalTab
struct UPDClanInfoUI_OnClickNormalTab_Params
{
};

// Function VeiledExperts.PDClanInfoUI.OnClickMemberTab
struct UPDClanInfoUI_OnClickMemberTab_Params
{
};

// Function VeiledExperts.PDClanInfoUI.OnClickManageChange
struct UPDClanInfoUI_OnClickManageChange_Params
{
};

// Function VeiledExperts.PDClanInfoUI.OnClickLeave
struct UPDClanInfoUI_OnClickLeave_Params
{
};

// Function VeiledExperts.PDClanInfoUI.OnClickFreeJoinTab
struct UPDClanInfoUI_OnClickFreeJoinTab_Params
{
};

// Function VeiledExperts.PDClanInfoUI.OnClickDisband
struct UPDClanInfoUI_OnClickDisband_Params
{
};

// Function VeiledExperts.PDClanInfoUI.OnClickCreate
struct UPDClanInfoUI_OnClickCreate_Params
{
};

// Function VeiledExperts.PDClanInfoUI.OnClickCompetitionTab
struct UPDClanInfoUI_OnClickCompetitionTab_Params
{
};

// Function VeiledExperts.PDClanInfoUI.OnClickClanManageTab
struct UPDClanInfoUI_OnClickClanManageTab_Params
{
};

// Function VeiledExperts.PDClanInfoUI.OnClickCheckInUse
struct UPDClanInfoUI_OnClickCheckInUse_Params
{
};

// Function VeiledExperts.PDClanInfoUI.OnClickChangeMark
struct UPDClanInfoUI_OnClickChangeMark_Params
{
};

// Function VeiledExperts.PDClanInfoUI.OnClickApplicantTab
struct UPDClanInfoUI_OnClickApplicantTab_Params
{
};

// Function VeiledExperts.PDClanInfoUI.OnBreakClanConfirmButton
struct UPDClanInfoUI_OnBreakClanConfirmButton_Params
{
};

// Function VeiledExperts.PDClanInfoUI.OnBreakClanCancelButton
struct UPDClanInfoUI_OnBreakClanCancelButton_Params
{
};

// Function VeiledExperts.PDClanInfoUI.OnBreakClanButton
struct UPDClanInfoUI_OnBreakClanButton_Params
{
};

// Function VeiledExperts.PDClanListUI.OnScrolledClanListItem
struct UPDClanListUI_OnScrolledClanListItem_Params
{
	float                                              ItemOffset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DistanceRemaining;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDClanListUI.OnEnterSearch
struct UPDClanListUI_OnEnterSearch_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDClanListUI.OnClickSeach
struct UPDClanListUI_OnClickSeach_Params
{
};

// Function VeiledExperts.PDClanListUI.OnClickClanInfo
struct UPDClanListUI_OnClickClanInfo_Params
{
};

// Function VeiledExperts.PDClanListUI.OnClanStyleSelectionChanged
struct UPDClanListUI_OnClanStyleSelectionChanged_Params
{
	struct FString                                     SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDClanListUI.OnChangeSearchText
struct UPDClanListUI_OnChangeSearchText_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VeiledExperts.PDClanMemberListItemUI.OnKickConfirm
struct UPDClanMemberListItemUI_OnKickConfirm_Params
{
};

// Function VeiledExperts.PDClanMemberListItemUI.OnClickKick
struct UPDClanMemberListItemUI_OnClickKick_Params
{
};

// Function VeiledExperts.PDClanOtherListItemUI.OnDblClicked
struct UPDClanOtherListItemUI_OnDblClicked_Params
{
};

// Function VeiledExperts.PDClanOtherListItemUI.OnClickJoin
struct UPDClanOtherListItemUI_OnClickJoin_Params
{
};

// Function VeiledExperts.PDClanUI.OnClickTabClanList
struct UPDClanUI_OnClickTabClanList_Params
{
};

// Function VeiledExperts.PDClanUI.OnClickTabClanInfo
struct UPDClanUI_OnClickTabClanInfo_Params
{
};

// Function VeiledExperts.PDClanUI.OnClickTabClanCreate
struct UPDClanUI_OnClickTabClanCreate_Params
{
};

// Function VeiledExperts.PDClanUI.OnClickBtnGotoLobby
struct UPDClanUI_OnClickBtnGotoLobby_Params
{
};

// Function VeiledExperts.PDCoinRequestListItem.OnUnHoveredGiveCoin
struct UPDCoinRequestListItem_OnUnHoveredGiveCoin_Params
{
};

// Function VeiledExperts.PDCoinRequestListItem.OnLeftClickGiveCoin
struct UPDCoinRequestListItem_OnLeftClickGiveCoin_Params
{
};

// Function VeiledExperts.PDCoinRequestListItem.OnHoveredGiveCoin
struct UPDCoinRequestListItem_OnHoveredGiveCoin_Params
{
};

// Function VeiledExperts.PDComboBox.OnComboxBoxSelectionChanged
struct UPDComboBox_OnComboxBoxSelectionChanged_Params
{
	struct FString                                     sItem;                                                    // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           selType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDComboBox.OnComboxBoxOpening
struct UPDComboBox_OnComboxBoxOpening_Params
{
};

// Function VeiledExperts.PDComboBox.OnComboBoxGenerateWidget
struct UPDComboBox_OnComboBoxGenerateWidget_Params
{
	struct FString                                     Item;                                                     // (Parm, ZeroConstructor)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function VeiledExperts.PDCommunityPopupUI.OnWICClicked
struct UPDCommunityPopupUI_OnWICClicked_Params
{
};

// Function VeiledExperts.PDCommunityPopupUI.OnWhisperClicked
struct UPDCommunityPopupUI_OnWhisperClicked_Params
{
};

// Function VeiledExperts.PDCommunityPopupUI.OnUnFavoriteClicked
struct UPDCommunityPopupUI_OnUnFavoriteClicked_Params
{
};

// Function VeiledExperts.PDCommunityPopupUI.OnPartyInviteClicked
struct UPDCommunityPopupUI_OnPartyInviteClicked_Params
{
};

// Function VeiledExperts.PDCommunityPopupUI.OnFriendTabClicked
struct UPDCommunityPopupUI_OnFriendTabClicked_Params
{
};

// Function VeiledExperts.PDCommunityPopupUI.OnFriendRemoveClicked
struct UPDCommunityPopupUI_OnFriendRemoveClicked_Params
{
};

// Function VeiledExperts.PDCommunityPopupUI.OnFriendAddTabClicked
struct UPDCommunityPopupUI_OnFriendAddTabClicked_Params
{
};

// Function VeiledExperts.PDCommunityPopupUI.OnFriendAddClicked
struct UPDCommunityPopupUI_OnFriendAddClicked_Params
{
};

// Function VeiledExperts.PDCommunityPopupUI.OnFavoriteAddClicked
struct UPDCommunityPopupUI_OnFavoriteAddClicked_Params
{
};

// Function VeiledExperts.PDCommunityPopupUI.OnCustomInviteClicked
struct UPDCommunityPopupUI_OnCustomInviteClicked_Params
{
};

// Function VeiledExperts.PDCommunityPopupUI.OnClanTabClicked
struct UPDCommunityPopupUI_OnClanTabClicked_Params
{
};

// Function VeiledExperts.PDCommunityPopupUI.OnClanInfoClicked
struct UPDCommunityPopupUI_OnClanInfoClicked_Params
{
};

// Function VeiledExperts.PDControlOptionUI.OnInputKeySelected
struct UPDControlOptionUI_OnInputKeySelected_Params
{
	class UPDOptionContent*                            Content;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function VeiledExperts.PDControlOptionUI.OnClickZoom2ToggleButton
struct UPDControlOptionUI_OnClickZoom2ToggleButton_Params
{
};

// Function VeiledExperts.PDControlOptionUI.OnClickZoom2DefaultButton
struct UPDControlOptionUI_OnClickZoom2DefaultButton_Params
{
};

// Function VeiledExperts.PDControlOptionUI.OnClickZoom1ToggleButton
struct UPDControlOptionUI_OnClickZoom1ToggleButton_Params
{
};

// Function VeiledExperts.PDControlOptionUI.OnClickZoom1DefaultButton
struct UPDControlOptionUI_OnClickZoom1DefaultButton_Params
{
};

// Function VeiledExperts.PDControlOptionUI.OnClickThrowRecentUseSlotButton
struct UPDControlOptionUI_OnClickThrowRecentUseSlotButton_Params
{
};

// Function VeiledExperts.PDControlOptionUI.OnClickThrowFirstSlotButton
struct UPDControlOptionUI_OnClickThrowFirstSlotButton_Params
{
};

// Function VeiledExperts.PDControlOptionUI.OnClickShootingRightButton
struct UPDControlOptionUI_OnClickShootingRightButton_Params
{
};

// Function VeiledExperts.PDControlOptionUI.OnClickShootingLeftButton
struct UPDControlOptionUI_OnClickShootingLeftButton_Params
{
};

// Function VeiledExperts.PDControlOptionUI.OnClickSetToggleButton
struct UPDControlOptionUI_OnClickSetToggleButton_Params
{
};

// Function VeiledExperts.PDControlOptionUI.OnClickSetDefaultButton
struct UPDControlOptionUI_OnClickSetDefaultButton_Params
{
};

// Function VeiledExperts.PDControlOptionUI.OnClickScoreBoardToggleButton
struct UPDControlOptionUI_OnClickScoreBoardToggleButton_Params
{
};

// Function VeiledExperts.PDControlOptionUI.OnClickScoreBoardHoldeButton
struct UPDControlOptionUI_OnClickScoreBoardHoldeButton_Params
{
};

// Function VeiledExperts.PDControlOptionUI.OnClickScope2ToggleButton
struct UPDControlOptionUI_OnClickScope2ToggleButton_Params
{
};

// Function VeiledExperts.PDControlOptionUI.OnClickScope2DefaultButton
struct UPDControlOptionUI_OnClickScope2DefaultButton_Params
{
};

// Function VeiledExperts.PDControlOptionUI.OnClickRightShoulderViewModeButton
struct UPDControlOptionUI_OnClickRightShoulderViewModeButton_Params
{
};

// Function VeiledExperts.PDControlOptionUI.OnClickMoveNActionSettingButton
struct UPDControlOptionUI_OnClickMoveNActionSettingButton_Params
{
};

// Function VeiledExperts.PDControlOptionUI.OnClickLeftShoulderViewModeButton
struct UPDControlOptionUI_OnClickLeftShoulderViewModeButton_Params
{
};

// Function VeiledExperts.PDControlOptionUI.OnClickLeanToggleButton
struct UPDControlOptionUI_OnClickLeanToggleButton_Params
{
};

// Function VeiledExperts.PDControlOptionUI.OnClickLeanHoldButton
struct UPDControlOptionUI_OnClickLeanHoldButton_Params
{
};

// Function VeiledExperts.PDControlOptionUI.OnClickIngameMapSizeToggleButton
struct UPDControlOptionUI_OnClickIngameMapSizeToggleButton_Params
{
};

// Function VeiledExperts.PDControlOptionUI.OnClickIngameMapSizeHoldeButton
struct UPDControlOptionUI_OnClickIngameMapSizeHoldeButton_Params
{
};

// Function VeiledExperts.PDControlOptionUI.OnClickETCActionSettingButton
struct UPDControlOptionUI_OnClickETCActionSettingButton_Params
{
};

// Function VeiledExperts.PDControlOptionUI.OnClickEnableWeaponChange2Button
struct UPDControlOptionUI_OnClickEnableWeaponChange2Button_Params
{
};

// Function VeiledExperts.PDControlOptionUI.OnClickEnableWeaponChange1Button
struct UPDControlOptionUI_OnClickEnableWeaponChange1Button_Params
{
};

// Function VeiledExperts.PDControlOptionUI.OnClickDisableWeaponChange2Button
struct UPDControlOptionUI_OnClickDisableWeaponChange2Button_Params
{
};

// Function VeiledExperts.PDControlOptionUI.OnClickDisableWeaponChange1Button
struct UPDControlOptionUI_OnClickDisableWeaponChange1Button_Params
{
};

// Function VeiledExperts.PDControlOptionUI.OnClickCrouchToggleButton
struct UPDControlOptionUI_OnClickCrouchToggleButton_Params
{
};

// Function VeiledExperts.PDControlOptionUI.OnClickCrouchHoldButton
struct UPDControlOptionUI_OnClickCrouchHoldButton_Params
{
};

// Function VeiledExperts.PDControlOptionUI.OnChangePing1DblClickType
struct UPDControlOptionUI_OnChangePing1DblClickType_Params
{
	struct FString                                     Item;                                                     // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           selType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDControlOptionUI.OnChangePing1ClickType
struct UPDControlOptionUI_OnChangePing1ClickType_Params
{
	struct FString                                     Item;                                                     // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           selType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDControlOptionUI.OnAutoReloadEnabled
struct UPDControlOptionUI_OnAutoReloadEnabled_Params
{
};

// Function VeiledExperts.PDControlOptionUI.OnAutoReloadDisabled
struct UPDControlOptionUI_OnAutoReloadDisabled_Params
{
};

// Function VeiledExperts.PDControlOptionUI.OnAutoHoldBreathChanged
struct UPDControlOptionUI_OnAutoHoldBreathChanged_Params
{
	bool                                               bIsChecked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCursorWidget.SetSize
struct UPDCursorWidget_SetSize_Params
{
};

// Function VeiledExperts.PDCustomizeLeptonCost.OnSynchronizeProperties
struct UPDCustomizeLeptonCost_OnSynchronizeProperties_Params
{
};

// Function VeiledExperts.PDCustomizeUI.OnHoveredContent
struct UPDCustomizeUI_OnHoveredContent_Params
{
	class UObject*                                     InObject;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHovered;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCustomizeUI.OnDoubleClickContent
struct UPDCustomizeUI_OnDoubleClickContent_Params
{
	class UObject*                                     InObject;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCustomizeUI.OnClickSubCategory
struct UPDCustomizeUI_OnClickSubCategory_Params
{
};

// Function VeiledExperts.PDCustomizeUI.OnClickedResetLepton
struct UPDCustomizeUI_OnClickedResetLepton_Params
{
};

// Function VeiledExperts.PDCustomizeUI.OnClickedEquipLepton
struct UPDCustomizeUI_OnClickedEquipLepton_Params
{
};

// Function VeiledExperts.PDCustomizeUI.OnClickedBtnUnlock
struct UPDCustomizeUI_OnClickedBtnUnlock_Params
{
};

// Function VeiledExperts.PDCustomizeUI.OnClickedBtnRecommendedParts
struct UPDCustomizeUI_OnClickedBtnRecommendedParts_Params
{
};

// Function VeiledExperts.PDCustomizeUI.OnClickedBtnEquip
struct UPDCustomizeUI_OnClickedBtnEquip_Params
{
};

// Function VeiledExperts.PDCustomizeUI.OnClickedBtnDefault
struct UPDCustomizeUI_OnClickedBtnDefault_Params
{
};

// Function VeiledExperts.PDCustomizeUI.OnClickCustomCategory
struct UPDCustomizeUI_OnClickCustomCategory_Params
{
};

// Function VeiledExperts.PDCustomizeUI.OnClickContent
struct UPDCustomizeUI_OnClickContent_Params
{
};

// Function VeiledExperts.PDCustomizeUI.OnClickCategorySlot
struct UPDCustomizeUI_OnClickCategorySlot_Params
{
};

// Function VeiledExperts.PDCustomizeUI.OnClickBtnBack
struct UPDCustomizeUI_OnClickBtnBack_Params
{
};

// Function VeiledExperts.PDCustomizeUI.OnChangedWeaponLoadoutIndex
struct UPDCustomizeUI_OnChangedWeaponLoadoutIndex_Params
{
	int                                                LoadoutIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCustomizeUI.OnChangedSubCategory
struct UPDCustomizeUI_OnChangedSubCategory_Params
{
	class UObject*                                     InObject;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCustomizeUI.OnChangedMenu
struct UPDCustomizeUI_OnChangedMenu_Params
{
	int                                                MenuIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCustomizeUI.OnChangedMainCategory
struct UPDCustomizeUI_OnChangedMainCategory_Params
{
	int                                                InMainCategoryIndex;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCustomizeUI.OnChangedContent
struct UPDCustomizeUI_OnChangedContent_Params
{
	class UObject*                                     InObject;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCustomJoinPopupUI.OnClickShowBtn
struct UPDCustomJoinPopupUI_OnClickShowBtn_Params
{
};

// Function VeiledExperts.PDCustomJoinPopupUI.OnClickHideBtn
struct UPDCustomJoinPopupUI_OnClickHideBtn_Params
{
};

// Function VeiledExperts.PDCustomJoinPopupUI.OnChangeText
struct UPDCustomJoinPopupUI_OnChangeText_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VeiledExperts.PDCustomMatchListItem.OnPerkUnHovered
struct UPDCustomMatchListItem_OnPerkUnHovered_Params
{
};

// Function VeiledExperts.PDCustomMatchListItem.OnPerkHovered
struct UPDCustomMatchListItem_OnPerkHovered_Params
{
};

// Function VeiledExperts.PDCustomMatchListItem.OnJoinClicked
struct UPDCustomMatchListItem_OnJoinClicked_Params
{
};

// Function VeiledExperts.PDCustomMatchOptionUI.OnTargetScoreSelectedChanged
struct UPDCustomMatchOptionUI_OnTargetScoreSelectedChanged_Params
{
	struct FString                                     sItem;                                                    // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           selType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCustomMatchOptionUI.OnPlayTimeSelectedChanged
struct UPDCustomMatchOptionUI_OnPlayTimeSelectedChanged_Params
{
	struct FString                                     sItem;                                                    // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           selType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCustomMatchOptionUI.OnPlayTimeSecSelectedChanged
struct UPDCustomMatchOptionUI_OnPlayTimeSecSelectedChanged_Params
{
	struct FString                                     sItem;                                                    // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           selType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCustomMatchOptionUI.OnMapSettingSelectedChanged
struct UPDCustomMatchOptionUI_OnMapSettingSelectedChanged_Params
{
	struct FString                                     sItem;                                                    // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           selType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCustomMatchOptionUI.OnMapSelectedChanged
struct UPDCustomMatchOptionUI_OnMapSelectedChanged_Params
{
	struct FString                                     sItem;                                                    // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           selType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCustomMatchUI.OnWhisperUserClicked
struct UPDCustomMatchUI_OnWhisperUserClicked_Params
{
};

// Function VeiledExperts.PDCustomMatchUI.OnTransferMasterClicked
struct UPDCustomMatchUI_OnTransferMasterClicked_Params
{
};

// Function VeiledExperts.PDCustomMatchUI.OnStartClicked
struct UPDCustomMatchUI_OnStartClicked_Params
{
};

// Function VeiledExperts.PDCustomMatchUI.OnResetClicked
struct UPDCustomMatchUI_OnResetClicked_Params
{
};

// Function VeiledExperts.PDCustomMatchUI.OnOptionClicked
struct UPDCustomMatchUI_OnOptionClicked_Params
{
};

// Function VeiledExperts.PDCustomMatchUI.OnModeSelectedChanged
struct UPDCustomMatchUI_OnModeSelectedChanged_Params
{
	struct FString                                     sItem;                                                    // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           selType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDCustomMatchUI.OnModeDisableUpdated
struct UPDCustomMatchUI_OnModeDisableUpdated_Params
{
};

// Function VeiledExperts.PDCustomMatchUI.OnKickUserClicked
struct UPDCustomMatchUI_OnKickUserClicked_Params
{
};

// Function VeiledExperts.PDCustomMatchUI.OnHideClicked
struct UPDCustomMatchUI_OnHideClicked_Params
{
};

// Function VeiledExperts.PDCustomMatchUI.OnCopyClicked
struct UPDCustomMatchUI_OnCopyClicked_Params
{
};

// Function VeiledExperts.PDCustomMatchUI.OnCommClicked
struct UPDCustomMatchUI_OnCommClicked_Params
{
};

// Function VeiledExperts.PDCustomMatchUI.OnClickObserver
struct UPDCustomMatchUI_OnClickObserver_Params
{
};

// Function VeiledExperts.PDCustomMatchUI.OnBackClicked
struct UPDCustomMatchUI_OnBackClicked_Params
{
};

// Function VeiledExperts.PDCustomMatchUI.OnApplyClicked
struct UPDCustomMatchUI_OnApplyClicked_Params
{
};

// Function VeiledExperts.PDCustomMatchUI.OnAddFriendClicked
struct UPDCustomMatchUI_OnAddFriendClicked_Params
{
};

// Function VeiledExperts.PDDisplayOptionUI.OnWhisperBlockChanged
struct UPDDisplayOptionUI_OnWhisperBlockChanged_Params
{
	struct FString                                     sItem;                                                    // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           selType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDDisplayOptionUI.OnViewDistanceQualityChanged
struct UPDDisplayOptionUI_OnViewDistanceQualityChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDDisplayOptionUI.OnUseVSyncChanged
struct UPDDisplayOptionUI_OnUseVSyncChanged_Params
{
	bool                                               bIsChecked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDDisplayOptionUI.OnUseAdditionalPostProcessesChanged
struct UPDDisplayOptionUI_OnUseAdditionalPostProcessesChanged_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDDisplayOptionUI.OnTextureQualityChanged
struct UPDDisplayOptionUI_OnTextureQualityChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDDisplayOptionUI.OnStabilityThreadChanged
struct UPDDisplayOptionUI_OnStabilityThreadChanged_Params
{
	struct FString                                     sItem;                                                    // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           selType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDDisplayOptionUI.OnShadowQualityChanged
struct UPDDisplayOptionUI_OnShadowQualityChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDDisplayOptionUI.OnScreenPercentageChanged
struct UPDDisplayOptionUI_OnScreenPercentageChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDDisplayOptionUI.OnScreenInfoVisibilityChanged
struct UPDDisplayOptionUI_OnScreenInfoVisibilityChanged_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDDisplayOptionUI.OnResolutionChanged
struct UPDDisplayOptionUI_OnResolutionChanged_Params
{
	struct FString                                     sItem;                                                    // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           selType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDDisplayOptionUI.OnPostProcessQualityChanged
struct UPDDisplayOptionUI_OnPostProcessQualityChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDDisplayOptionUI.OnPostProcessAAQualityChanged
struct UPDDisplayOptionUI_OnPostProcessAAQualityChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDDisplayOptionUI.OnPartyInviteBlockChanged
struct UPDDisplayOptionUI_OnPartyInviteBlockChanged_Params
{
	struct FString                                     sItem;                                                    // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           selType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDDisplayOptionUI.OnOutGameBrightnessVolumeChanged
struct UPDDisplayOptionUI_OnOutGameBrightnessVolumeChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDDisplayOptionUI.OnMaxAnisotropyChanged
struct UPDDisplayOptionUI_OnMaxAnisotropyChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDDisplayOptionUI.OnLightShaftChanged
struct UPDDisplayOptionUI_OnLightShaftChanged_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDDisplayOptionUI.OnLanguageChanged
struct UPDDisplayOptionUI_OnLanguageChanged_Params
{
	struct FString                                     sItem;                                                    // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           selType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDDisplayOptionUI.OnInGameBrightnessVolumeChanged
struct UPDDisplayOptionUI_OnInGameBrightnessVolumeChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDDisplayOptionUI.OnHitEffectLightChanged
struct UPDDisplayOptionUI_OnHitEffectLightChanged_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDDisplayOptionUI.OnFullScreenModeChanged
struct UPDDisplayOptionUI_OnFullScreenModeChanged_Params
{
	struct FString                                     sItem;                                                    // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           selType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDDisplayOptionUI.OnFrameRateModeChanged
struct UPDDisplayOptionUI_OnFrameRateModeChanged_Params
{
	struct FString                                     sItem;                                                    // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           selType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDDisplayOptionUI.OnFrameRateLimitChanged
struct UPDDisplayOptionUI_OnFrameRateLimitChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDDisplayOptionUI.OnFoliageQualityChanged
struct UPDDisplayOptionUI_OnFoliageQualityChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDDisplayOptionUI.OnEnemyRimLightChanged
struct UPDDisplayOptionUI_OnEnemyRimLightChanged_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDDisplayOptionUI.OnEffectsQualityChanged
struct UPDDisplayOptionUI_OnEffectsQualityChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDDisplayOptionUI.OnDefaultFOVChanged
struct UPDDisplayOptionUI_OnDefaultFOVChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDDisplayOptionUI.OnClickVideoSettingButton
struct UPDDisplayOptionUI_OnClickVideoSettingButton_Params
{
};

// Function VeiledExperts.PDDisplayOptionUI.OnClickSystemSettingButton
struct UPDDisplayOptionUI_OnClickSystemSettingButton_Params
{
};

// Function VeiledExperts.PDDisplayOptionUI.OnClickMidiumGraphicButton
struct UPDDisplayOptionUI_OnClickMidiumGraphicButton_Params
{
};

// Function VeiledExperts.PDDisplayOptionUI.OnClickLowGraphicButton
struct UPDDisplayOptionUI_OnClickLowGraphicButton_Params
{
};

// Function VeiledExperts.PDDisplayOptionUI.OnClickHighGraphicButton
struct UPDDisplayOptionUI_OnClickHighGraphicButton_Params
{
};

// Function VeiledExperts.PDDisplayOptionUI.OnClickEpicGraphicButton
struct UPDDisplayOptionUI_OnClickEpicGraphicButton_Params
{
};

// Function VeiledExperts.PDDisplayOptionUI.OnClickCustomGraphicButton
struct UPDDisplayOptionUI_OnClickCustomGraphicButton_Params
{
};

// Function VeiledExperts.PDDisplayOptionUI.OnBackGroundQualityChanged
struct UPDDisplayOptionUI_OnBackGroundQualityChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDDisplayOptionUI.OnAddFriendBlockChanged
struct UPDDisplayOptionUI_OnAddFriendBlockChanged_Params
{
	struct FString                                     sItem;                                                    // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           selType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDDivideBase.OnDividTextInput
struct UPDDivideBase_OnDividTextInput_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VeiledExperts.PDDivideBase.OnDividTextChanged
struct UPDDivideBase_OnDividTextChanged_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDDivideBase.OnClickSplitBtn
struct UPDDivideBase_OnClickSplitBtn_Params
{
};

// Function VeiledExperts.PDDivideBase.OnClickCancelBtn
struct UPDDivideBase_OnClickCancelBtn_Params
{
};

// Function VeiledExperts.PDDivideBase.ChangeValue
struct UPDDivideBase_ChangeValue_Params
{
	float                                              InVolume;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDDynamicObjectEvent.OnActorEndOverlapEvent
struct APDDynamicObjectEvent_OnActorEndOverlapEvent_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDDynamicObjectEvent.OnActorBeginOverlapEvent
struct APDDynamicObjectEvent_OnActorBeginOverlapEvent_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDDynamicObjectSwitchComponent.OnEndTriggerOverlap
struct UPDDynamicObjectSwitchComponent_OnEndTriggerOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDDynamicObjectSwitchComponent.OnBeginTriggerOverlap
struct UPDDynamicObjectSwitchComponent_OnBeginTriggerOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function VeiledExperts.PDEquipLeptonSlot.OnUnHoveredSlotBtn
struct UPDEquipLeptonSlot_OnUnHoveredSlotBtn_Params
{
};

// Function VeiledExperts.PDEquipLeptonSlot.OnHoveredSlotBtn
struct UPDEquipLeptonSlot_OnHoveredSlotBtn_Params
{
};

// Function VeiledExperts.PDEquipLeptonSlot.OnClickSlotBtn
struct UPDEquipLeptonSlot_OnClickSlotBtn_Params
{
};

// Function VeiledExperts.PDEscMenuUI.OnClickSurrenderBtn
struct UPDEscMenuUI_OnClickSurrenderBtn_Params
{
};

// Function VeiledExperts.PDEscMenuUI.OnClickResumeBtn
struct UPDEscMenuUI_OnClickResumeBtn_Params
{
};

// Function VeiledExperts.PDEscMenuUI.OnClickOptionBtn
struct UPDEscMenuUI_OnClickOptionBtn_Params
{
};

// Function VeiledExperts.PDEscMenuUI.OnClickLeaveGameBtn
struct UPDEscMenuUI_OnClickLeaveGameBtn_Params
{
};

// Function VeiledExperts.PDExportSafeZoneInitialVertices.CreateSafeZonePhase
struct APDExportSafeZoneInitialVertices_CreateSafeZonePhase_Params
{
};

// Function VeiledExperts.PDFindPartyListItem.OnDoubleClickItem
struct UPDFindPartyListItem_OnDoubleClickItem_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VeiledExperts.PDFindPartyListItem.OnClickRecruitButton
struct UPDFindPartyListItem_OnClickRecruitButton_Params
{
};

// Function VeiledExperts.PDFindPartyPageUI.OnSelectedTeamBrick
struct UPDFindPartyPageUI_OnSelectedTeamBrick_Params
{
	class UPDBrickListItemData*                        InListItemData;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDFindPartyPageUI.OnSelectedPersonBrick
struct UPDFindPartyPageUI_OnSelectedPersonBrick_Params
{
	class UPDBrickListItemData*                        InListItemData;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDFindPartyPageUI.OnResetBrickClicked
struct UPDFindPartyPageUI_OnResetBrickClicked_Params
{
};

// Function VeiledExperts.PDFindPartyPageUI.OnClickRegisterMercenaryButton
struct UPDFindPartyPageUI_OnClickRegisterMercenaryButton_Params
{
};

// Function VeiledExperts.PDFindPartyPageUI.OnClickFindPartyHomeButton
struct UPDFindPartyPageUI_OnClickFindPartyHomeButton_Params
{
};

// Function VeiledExperts.PDFindPartyPageUI.OnClickFindPartyButton
struct UPDFindPartyPageUI_OnClickFindPartyButton_Params
{
};

// Function VeiledExperts.PDFriendAddItem.OnDeclineClicked
struct UPDFriendAddItem_OnDeclineClicked_Params
{
};

// Function VeiledExperts.PDFriendAddItem.OnAcceptClicked
struct UPDFriendAddItem_OnAcceptClicked_Params
{
};

// Function VeiledExperts.PDFriendAddPage.OnSearchNickClicked
struct UPDFriendAddPage_OnSearchNickClicked_Params
{
};

// Function VeiledExperts.PDFriendAddPage.OnCommitSearchNick
struct UPDFriendAddPage_OnCommitSearchNick_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDFriendAddPage.OnChangeText
struct UPDFriendAddPage_OnChangeText_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VeiledExperts.PDFriendClanItem.OnUnHoveredGradeNoneBtn
struct UPDFriendClanItem_OnUnHoveredGradeNoneBtn_Params
{
};

// Function VeiledExperts.PDFriendClanItem.OnHoveredGradeNoneBtn
struct UPDFriendClanItem_OnHoveredGradeNoneBtn_Params
{
};

// Function VeiledExperts.PDFriendListItem.OnUnHoveredGradeNoneBtn
struct UPDFriendListItem_OnUnHoveredGradeNoneBtn_Params
{
};

// Function VeiledExperts.PDFriendListItem.OnHoveredGradeNoneBtn
struct UPDFriendListItem_OnHoveredGradeNoneBtn_Params
{
};

// Function VeiledExperts.PDGameBlueprintLibrary.GetPDGameInstance
struct UPDGameBlueprintLibrary_GetPDGameInstance_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UPDGameInstance*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VeiledExperts.PDGameBlueprintLibrary.GetLocalPlayerController
struct UPDGameBlueprintLibrary_GetLocalPlayerController_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VeiledExperts.PDGameBlueprintLibrary.GetCoreGameState
struct UPDGameBlueprintLibrary_GetCoreGameState_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AGameStateBase*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VeiledExperts.PDGameBlueprintLibrary.GetCoreGameMode
struct UPDGameBlueprintLibrary_GetCoreGameMode_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AGameModeBase*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VeiledExperts.PDGameModeSelectItemUI.OnClick
struct UPDGameModeSelectItemUI_OnClick_Params
{
};

// Function VeiledExperts.PDGameModeSelectUI.GotoLobby
struct UPDGameModeSelectUI_GotoLobby_Params
{
};

// Function VeiledExperts.PDGameModeSelectUI.GameModeSelect
struct UPDGameModeSelectUI_GameModeSelect_Params
{
	int                                                SelectModeID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDGameplayOptionUI.Onx80ZoomScopeChanged
struct UPDGameplayOptionUI_Onx80ZoomScopeChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDGameplayOptionUI.Onx40ZoomScopeChanged
struct UPDGameplayOptionUI_Onx40ZoomScopeChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDGameplayOptionUI.Onx20ZoomScopeChanged
struct UPDGameplayOptionUI_Onx20ZoomScopeChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDGameplayOptionUI.Onx160ZoomScopeChanged
struct UPDGameplayOptionUI_Onx160ZoomScopeChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDGameplayOptionUI.OnUnitedAimSensitivityChanged
struct UPDGameplayOptionUI_OnUnitedAimSensitivityChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDGameplayOptionUI.OnSubtitleUseChanged
struct UPDGameplayOptionUI_OnSubtitleUseChanged_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDGameplayOptionUI.OnSubtitleBGAlphaChanged
struct UPDGameplayOptionUI_OnSubtitleBGAlphaChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDGameplayOptionUI.OnStatusBoardMapRotationEnabled
struct UPDGameplayOptionUI_OnStatusBoardMapRotationEnabled_Params
{
};

// Function VeiledExperts.PDGameplayOptionUI.OnStatusBoardMapRotationDisabled
struct UPDGameplayOptionUI_OnStatusBoardMapRotationDisabled_Params
{
};

// Function VeiledExperts.PDGameplayOptionUI.OnShowSellPagePopupSettingChanged
struct UPDGameplayOptionUI_OnShowSellPagePopupSettingChanged_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDGameplayOptionUI.OnShowNickNameEnabled
struct UPDGameplayOptionUI_OnShowNickNameEnabled_Params
{
};

// Function VeiledExperts.PDGameplayOptionUI.OnShowNickNameDisabled
struct UPDGameplayOptionUI_OnShowNickNameDisabled_Params
{
};

// Function VeiledExperts.PDGameplayOptionUI.OnShowGameTipChanged
struct UPDGameplayOptionUI_OnShowGameTipChanged_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDGameplayOptionUI.OnShowBloodMarkSettingEnabled
struct UPDGameplayOptionUI_OnShowBloodMarkSettingEnabled_Params
{
};

// Function VeiledExperts.PDGameplayOptionUI.OnShowBloodMarkSettingDisabled
struct UPDGameplayOptionUI_OnShowBloodMarkSettingDisabled_Params
{
};

// Function VeiledExperts.PDGameplayOptionUI.OnSetUnitedAimSensitivity
struct UPDGameplayOptionUI_OnSetUnitedAimSensitivity_Params
{
};

// Function VeiledExperts.PDGameplayOptionUI.OnSetSingleAimSensitivity
struct UPDGameplayOptionUI_OnSetSingleAimSensitivity_Params
{
};

// Function VeiledExperts.PDGameplayOptionUI.OnSetHudTypeVX
struct UPDGameplayOptionUI_OnSetHudTypeVX_Params
{
};

// Function VeiledExperts.PDGameplayOptionUI.OnSetHudTypeLegacy
struct UPDGameplayOptionUI_OnSetHudTypeLegacy_Params
{
};

// Function VeiledExperts.PDGameplayOptionUI.OnPingPlayerColorEnabled
struct UPDGameplayOptionUI_OnPingPlayerColorEnabled_Params
{
};

// Function VeiledExperts.PDGameplayOptionUI.OnPingPlayerColorDisabled
struct UPDGameplayOptionUI_OnPingPlayerColorDisabled_Params
{
};

// Function VeiledExperts.PDGameplayOptionUI.OnPingAutoHipFire
struct UPDGameplayOptionUI_OnPingAutoHipFire_Params
{
};

// Function VeiledExperts.PDGameplayOptionUI.OnPingAutoEnabled
struct UPDGameplayOptionUI_OnPingAutoEnabled_Params
{
};

// Function VeiledExperts.PDGameplayOptionUI.OnPingAutoDisabled
struct UPDGameplayOptionUI_OnPingAutoDisabled_Params
{
};

// Function VeiledExperts.PDGameplayOptionUI.OnPingAutoAll
struct UPDGameplayOptionUI_OnPingAutoAll_Params
{
};

// Function VeiledExperts.PDGameplayOptionUI.OnPingAutoAim
struct UPDGameplayOptionUI_OnPingAutoAim_Params
{
};

// Function VeiledExperts.PDGameplayOptionUI.OnParkourVisibilityChanged
struct UPDGameplayOptionUI_OnParkourVisibilityChanged_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDGameplayOptionUI.OnNormalSensitivityChanged
struct UPDGameplayOptionUI_OnNormalSensitivityChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDGameplayOptionUI.OnMouseSmoothingChanged
struct UPDGameplayOptionUI_OnMouseSmoothingChanged_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDGameplayOptionUI.OnMouseSensitivityYChanged
struct UPDGameplayOptionUI_OnMouseSensitivityYChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDGameplayOptionUI.OnMouseSensitivityXChanged
struct UPDGameplayOptionUI_OnMouseSensitivityXChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDGameplayOptionUI.OnMinimapRotationEnabled
struct UPDGameplayOptionUI_OnMinimapRotationEnabled_Params
{
};

// Function VeiledExperts.PDGameplayOptionUI.OnMinimapRotationDisabled
struct UPDGameplayOptionUI_OnMinimapRotationDisabled_Params
{
};

// Function VeiledExperts.PDGameplayOptionUI.OnIronsightSensitivityChanged
struct UPDGameplayOptionUI_OnIronsightSensitivityChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDGameplayOptionUI.OnInvertYChanged
struct UPDGameplayOptionUI_OnInvertYChanged_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDGameplayOptionUI.OnInvertXChanged
struct UPDGameplayOptionUI_OnInvertXChanged_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDGameplayOptionUI.OnIngameMapScaleChanged
struct UPDGameplayOptionUI_OnIngameMapScaleChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDGameplayOptionUI.OnIngameMapBGAlphaChanged
struct UPDGameplayOptionUI_OnIngameMapBGAlphaChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDGameplayOptionUI.OnHUDScaleChanged
struct UPDGameplayOptionUI_OnHUDScaleChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDGameplayOptionUI.OnHitIndicatorChangedBoth
struct UPDGameplayOptionUI_OnHitIndicatorChangedBoth_Params
{
};

// Function VeiledExperts.PDGameplayOptionUI.OnHitIndicatorChanged3D
struct UPDGameplayOptionUI_OnHitIndicatorChanged3D_Params
{
};

// Function VeiledExperts.PDGameplayOptionUI.OnHitIndicatorChanged2D
struct UPDGameplayOptionUI_OnHitIndicatorChanged2D_Params
{
};

// Function VeiledExperts.PDGameplayOptionUI.OnHideChatChanged
struct UPDGameplayOptionUI_OnHideChatChanged_Params
{
	struct FString                                     sItem;                                                    // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           selType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDGameplayOptionUI.OnGameUsabilityChanged
struct UPDGameplayOptionUI_OnGameUsabilityChanged_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDGameplayOptionUI.OnDefaultLoadoutSettingEnabled
struct UPDGameplayOptionUI_OnDefaultLoadoutSettingEnabled_Params
{
};

// Function VeiledExperts.PDGameplayOptionUI.OnDefaultLoadoutSettingDisabled
struct UPDGameplayOptionUI_OnDefaultLoadoutSettingDisabled_Params
{
};

// Function VeiledExperts.PDGameplayOptionUI.OnDamageSumView
struct UPDGameplayOptionUI_OnDamageSumView_Params
{
};

// Function VeiledExperts.PDGameplayOptionUI.OnDamageIndividualView
struct UPDGameplayOptionUI_OnDamageIndividualView_Params
{
};

// Function VeiledExperts.PDGameplayOptionUI.OnCrossHairColorChanged
struct UPDGameplayOptionUI_OnCrossHairColorChanged_Params
{
	struct FString                                     sItem;                                                    // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           selType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDGameplayOptionUI.OnClickUISettingButton
struct UPDGameplayOptionUI_OnClickUISettingButton_Params
{
};

// Function VeiledExperts.PDGameplayOptionUI.OnClickPlaySettingButton
struct UPDGameplayOptionUI_OnClickPlaySettingButton_Params
{
};

// Function VeiledExperts.PDGameplayOptionUI.OnClickMouseSettingButton
struct UPDGameplayOptionUI_OnClickMouseSettingButton_Params
{
};

// Function VeiledExperts.PDGameplayOptionUI.OnAimingSensitivityChanged
struct UPDGameplayOptionUI_OnAimingSensitivityChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDGameResultUI.OnMenuItemClicked
struct UPDGameResultUI_OnMenuItemClicked_Params
{
	int                                                InMenuIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDGameResultUI.OnClickTitle
struct UPDGameResultUI_OnClickTitle_Params
{
};

// Function VeiledExperts.PDGameResultUI.OnClickScoreBoard
struct UPDGameResultUI_OnClickScoreBoard_Params
{
};

// Function VeiledExperts.PDGameResultUI.OnClickProgress
struct UPDGameResultUI_OnClickProgress_Params
{
};

// Function VeiledExperts.PDGameResultUI.OnChangeNextStep
struct UPDGameResultUI_OnChangeNextStep_Params
{
};

// Function VeiledExperts.PDGameSetupInformationPopupUI.OnViewAdvancedSet
struct UPDGameSetupInformationPopupUI_OnViewAdvancedSet_Params
{
};

// Function VeiledExperts.PDGameSetupInformationPopupUI.OnSaveAndClose
struct UPDGameSetupInformationPopupUI_OnSaveAndClose_Params
{
};

// Function VeiledExperts.PDGameSetupInformationSlot.OnOptionChanged
struct UPDGameSetupInformationSlot_OnOptionChanged_Params
{
	struct FString                                     sItem;                                                    // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           selType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDGameSetupInformationSlot.OnInputKeySelected
struct UPDGameSetupInformationSlot_OnInputKeySelected_Params
{
	struct FInputChord                                 InInputChord;                                             // (Parm)
};

// Function VeiledExperts.PDGameSetupInformationSlot.OnInputKeySelect
struct UPDGameSetupInformationSlot_OnInputKeySelect_Params
{
};

// Function VeiledExperts.PDGameSetupInformationSlot.OnButtonOnUnHover
struct UPDGameSetupInformationSlot_OnButtonOnUnHover_Params
{
};

// Function VeiledExperts.PDGameSetupInformationSlot.OnButtonOnHover
struct UPDGameSetupInformationSlot_OnButtonOnHover_Params
{
};

// Function VeiledExperts.PDGameSetupInformationSlot.OnButtonOn
struct UPDGameSetupInformationSlot_OnButtonOn_Params
{
};

// Function VeiledExperts.PDGameSetupInformationSlot.OnButtonOffUnHover
struct UPDGameSetupInformationSlot_OnButtonOffUnHover_Params
{
};

// Function VeiledExperts.PDGameSetupInformationSlot.OnButtonOffHover
struct UPDGameSetupInformationSlot_OnButtonOffHover_Params
{
};

// Function VeiledExperts.PDGameSetupInformationSlot.OnButtonOff
struct UPDGameSetupInformationSlot_OnButtonOff_Params
{
};

// Function VeiledExperts.PDImage.SetPixelSnapping
struct UPDImage_SetPixelSnapping_Params
{
	bool                                               bInPixelSnapping;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDIngameMapUI.OnToggleBoardCheckBoxChanged
struct UPDIngameMapUI_OnToggleBoardCheckBoxChanged_Params
{
	bool                                               Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDIngameMapUI.OnClickDeleteAllLines
struct UPDIngameMapUI_OnClickDeleteAllLines_Params
{
};

// Function VeiledExperts.PDIngameStatusBoardUI.OnClickCloseBtn
struct UPDIngameStatusBoardUI_OnClickCloseBtn_Params
{
};

// Function VeiledExperts.PDIngameUI.OnTimerRingCommand
struct UPDIngameUI_OnTimerRingCommand_Params
{
};

// Function VeiledExperts.PDInputKeySelector.OnInputSelectingKeyChanged
struct UPDInputKeySelector_OnInputSelectingKeyChanged_Params
{
};

// Function VeiledExperts.PDInputKeySelector.OnInputKeySelected
struct UPDInputKeySelector_OnInputKeySelected_Params
{
	struct FInputChord                                 InInputChord;                                             // (Parm)
};

// Function VeiledExperts.PDInvenListItem.RefundItem
struct UPDInvenListItem_RefundItem_Params
{
};

// Function VeiledExperts.PDKillLogModule.AdjustCauseRatio
struct UPDKillLogModule_AdjustCauseRatio_Params
{
};

// Function VeiledExperts.PDKillLogUI.HideLogModule
struct UPDKillLogUI_HideLogModule_Params
{
	class UPDKillLogModule*                            TargetModule;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function VeiledExperts.PDLinkPopupUI.OnClickLinkBtn
struct UPDLinkPopupUI_OnClickLinkBtn_Params
{
};

// Function VeiledExperts.PDLobbyInfoUI.TransferPartyMaster
struct UPDLobbyInfoUI_TransferPartyMaster_Params
{
	int64_t                                            InPartyUSN;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDLobbyInfoUI.OnUnHoverLeavePartyBtn
struct UPDLobbyInfoUI_OnUnHoverLeavePartyBtn_Params
{
};

// Function VeiledExperts.PDLobbyInfoUI.OnUnHoverGoToFindPartyBtn
struct UPDLobbyInfoUI_OnUnHoverGoToFindPartyBtn_Params
{
};

// Function VeiledExperts.PDLobbyInfoUI.OnUnHoverCommunityBtn
struct UPDLobbyInfoUI_OnUnHoverCommunityBtn_Params
{
};

// Function VeiledExperts.PDLobbyInfoUI.OnPartyLeaveOk
struct UPDLobbyInfoUI_OnPartyLeaveOk_Params
{
};

// Function VeiledExperts.PDLobbyInfoUI.OnPartyLeaveCancel
struct UPDLobbyInfoUI_OnPartyLeaveCancel_Params
{
};

// Function VeiledExperts.PDLobbyInfoUI.OnLevelImgClick
struct UPDLobbyInfoUI_OnLevelImgClick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VeiledExperts.PDLobbyInfoUI.OnHoverLeavePartyBtn
struct UPDLobbyInfoUI_OnHoverLeavePartyBtn_Params
{
};

// Function VeiledExperts.PDLobbyInfoUI.OnHoverGoToFindPartyBtn
struct UPDLobbyInfoUI_OnHoverGoToFindPartyBtn_Params
{
};

// Function VeiledExperts.PDLobbyInfoUI.OnHoverCommunityBtn
struct UPDLobbyInfoUI_OnHoverCommunityBtn_Params
{
};

// Function VeiledExperts.PDLobbyInfoUI.OnClickTransferPartyMasterBtn
struct UPDLobbyInfoUI_OnClickTransferPartyMasterBtn_Params
{
};

// Function VeiledExperts.PDLobbyInfoUI.OnClickLeavePartyBtn
struct UPDLobbyInfoUI_OnClickLeavePartyBtn_Params
{
};

// Function VeiledExperts.PDLobbyInfoUI.OnClickKickMemberBtn
struct UPDLobbyInfoUI_OnClickKickMemberBtn_Params
{
};

// Function VeiledExperts.PDLobbyInfoUI.OnClickGoToFindPartyPageButton
struct UPDLobbyInfoUI_OnClickGoToFindPartyPageButton_Params
{
};

// Function VeiledExperts.PDLobbyInfoUI.OnClickCommunityBtn
struct UPDLobbyInfoUI_OnClickCommunityBtn_Params
{
};

// Function VeiledExperts.PDLobbyInfoUI.KickPartyMember
struct UPDLobbyInfoUI_KickPartyMember_Params
{
	int64_t                                            InPartyUSN;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDLobbyUI.OnClickVoiceBtn
struct UPDLobbyUI_OnClickVoiceBtn_Params
{
};

// Function VeiledExperts.PDLobbyUI.OnClickDebugLogBtn
struct UPDLobbyUI_OnClickDebugLogBtn_Params
{
};

// Function VeiledExperts.PDLoginUI.OnClickGameLoginBtn
struct UPDLoginUI_OnClickGameLoginBtn_Params
{
};

// Function VeiledExperts.PDMailNotificationSlotUI.OnClickNotificationSlot
struct UPDMailNotificationSlotUI_OnClickNotificationSlot_Params
{
};

// Function VeiledExperts.PDMailPopupUI.OnSelectedMailListItem
struct UPDMailPopupUI_OnSelectedMailListItem_Params
{
	class UPDMailBoxListItemData*                      InListDataData;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDMailPopupUI.OnScrolledMailListItem
struct UPDMailPopupUI_OnScrolledMailListItem_Params
{
	float                                              ItemOffset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DistanceRemaining;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDMailPopupUI.OnClickMailBoxCloseBtn
struct UPDMailPopupUI_OnClickMailBoxCloseBtn_Params
{
};

// Function VeiledExperts.PDMailPopupUI.OnChangedSortCheckBox
struct UPDMailPopupUI_OnChangedSortCheckBox_Params
{
	bool                                               bIsChecked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDMailUI.OnClickReceiveItemBtn
struct UPDMailUI_OnClickReceiveItemBtn_Params
{
};

// Function VeiledExperts.PDMailUI.OnClickDeleteMailBtn
struct UPDMailUI_OnClickDeleteMailBtn_Params
{
};

// Function VeiledExperts.PDMailUI.OnClickCloseMailBtn
struct UPDMailUI_OnClickCloseMailBtn_Params
{
};

// Function VeiledExperts.PDMailUI.DeleteMail
struct UPDMailUI_DeleteMail_Params
{
};

// Function VeiledExperts.PDMainPlayerActionComponent.TryCanActivateAction
struct UPDMainPlayerActionComponent_TryCanActivateAction_Params
{
	EPDCharacterActionType                             Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Param;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EActionReserveOption                               ReserveOption;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VeiledExperts.PDMainPlayerActionComponent.TryAction
struct UPDMainPlayerActionComponent_TryAction_Params
{
	EPDCharacterActionType                             Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Param;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EActionReserveOption                               ReserveOption;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VeiledExperts.PDMainPlayerActionComponent.ReserveAction
struct UPDMainPlayerActionComponent_ReserveAction_Params
{
	struct FPDActionExecutionInfo                      ExecutionInfo;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VeiledExperts.PDMainPlayerActionComponent.EndAction
struct UPDMainPlayerActionComponent_EndAction_Params
{
	EPDCharacterActionType                             Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDMainPlayerActionComponent.CancelAction
struct UPDMainPlayerActionComponent_CancelAction_Params
{
	EPDCharacterActionType                             Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CancelContext;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDMainPlayerActionComponent.CanActivateAction
struct UPDMainPlayerActionComponent_CanActivateAction_Params
{
	EPDCharacterActionType                             Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Param;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBlokingCheck;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VeiledExperts.PDMainPlayerCharacter.HandMeshLoadingComplete
struct APDMainPlayerCharacter_HandMeshLoadingComplete_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDMatchCategoryListItem.OnClickCategory
struct UPDMatchCategoryListItem_OnClickCategory_Params
{
};

// Function VeiledExperts.PDMatchExtendUI.OnClickMatchExtend
struct UPDMatchExtendUI_OnClickMatchExtend_Params
{
};

// Function VeiledExperts.PDMatchExtendUI.OnClickClose
struct UPDMatchExtendUI_OnClickClose_Params
{
};

// Function VeiledExperts.PDMatchListItem.OnClickMatch
struct UPDMatchListItem_OnClickMatch_Params
{
};

// Function VeiledExperts.PDMatchModeListItem.OnHoverMatchBtn
struct UPDMatchModeListItem_OnHoverMatchBtn_Params
{
};

// Function VeiledExperts.PDMatchModeListItem.OnClickMatchBtn
struct UPDMatchModeListItem_OnClickMatchBtn_Params
{
};

// Function VeiledExperts.PDMatchModeListItem.OnCheckChanged
struct UPDMatchModeListItem_OnCheckChanged_Params
{
	bool                                               Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDMatchPlayerLaptonPresetTab.OnSelectPreset
struct UPDMatchPlayerLaptonPresetTab_OnSelectPreset_Params
{
};

// Function VeiledExperts.PDMatchPlayerMyCharListItem.OnSelectChar
struct UPDMatchPlayerMyCharListItem_OnSelectChar_Params
{
};

// Function VeiledExperts.PDMatchPlayerSettingUI.OnSelectLeptonPreset
struct UPDMatchPlayerSettingUI_OnSelectLeptonPreset_Params
{
	int                                                SelectIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDMatchPlayerSettingUI.OnSelectChar
struct UPDMatchPlayerSettingUI_OnSelectChar_Params
{
	int                                                SelectAgentIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDMatchStartUI.OnUnHoveredStartPlayBtn
struct UPDMatchStartUI_OnUnHoveredStartPlayBtn_Params
{
};

// Function VeiledExperts.PDMatchStartUI.OnUnHoveredDecrRPBtn
struct UPDMatchStartUI_OnUnHoveredDecrRPBtn_Params
{
};

// Function VeiledExperts.PDMatchStartUI.OnSelectModeChange
struct UPDMatchStartUI_OnSelectModeChange_Params
{
};

// Function VeiledExperts.PDMatchStartUI.OnReleaseModeChange
struct UPDMatchStartUI_OnReleaseModeChange_Params
{
};

// Function VeiledExperts.PDMatchStartUI.OnHoveredStartPlayBtn
struct UPDMatchStartUI_OnHoveredStartPlayBtn_Params
{
};

// Function VeiledExperts.PDMatchStartUI.OnHoveredDecrRPBtn
struct UPDMatchStartUI_OnHoveredDecrRPBtn_Params
{
};

// Function VeiledExperts.PDMatchStartUI.OnClickStartPlayBtn
struct UPDMatchStartUI_OnClickStartPlayBtn_Params
{
};

// Function VeiledExperts.PDMatchStartUI.OnClickRankMatchTab
struct UPDMatchStartUI_OnClickRankMatchTab_Params
{
};

// Function VeiledExperts.PDMatchStartUI.OnClickRankInfo
struct UPDMatchStartUI_OnClickRankInfo_Params
{
};

// Function VeiledExperts.PDMatchStartUI.OnClickObserverBtn
struct UPDMatchStartUI_OnClickObserverBtn_Params
{
};

// Function VeiledExperts.PDMatchStartUI.OnClickNormalMatchTab
struct UPDMatchStartUI_OnClickNormalMatchTab_Params
{
};

// Function VeiledExperts.PDMatchStartUI.OnClickMachingCancel
struct UPDMatchStartUI_OnClickMachingCancel_Params
{
};

// Function VeiledExperts.PDMathFunctionLibrary.NormalizeAngle
struct UPDMathFunctionLibrary_NormalizeAngle_Params
{
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VeiledExperts.PDMathFunctionLibrary.BP_CalcVectorAngle
struct UPDMathFunctionLibrary_BP_CalcVectorAngle_Params
{
	struct FVector                                     Vector;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    BaseRotation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VeiledExperts.PDMathFunctionLibrary.AngleDistance
struct UPDMathFunctionLibrary_AngleDistance_Params
{
	float                                              Angle1;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle2;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VeiledExperts.PDStatusBoardPlayerInfoBase.OnToggleVoiceBlockChanged
struct UPDStatusBoardPlayerInfoBase_OnToggleVoiceBlockChanged_Params
{
	bool                                               Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDStatusBoardPlayerInfoBase.OnTogglePingBlockChanged
struct UPDStatusBoardPlayerInfoBase_OnTogglePingBlockChanged_Params
{
	bool                                               Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDStatusBoardPlayerInfoBase.OnToggleChatBlockChanged
struct UPDStatusBoardPlayerInfoBase_OnToggleChatBlockChanged_Params
{
	bool                                               Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDStatusBoardPlayerInfoBase.OnClicked_BTN_Report
struct UPDStatusBoardPlayerInfoBase_OnClicked_BTN_Report_Params
{
};

// Function VeiledExperts.PDStatusBoardPlayerInfoBase.OnClickAddFriendBtn
struct UPDStatusBoardPlayerInfoBase_OnClickAddFriendBtn_Params
{
};

// Function VeiledExperts.PDNameTagAllyUI.AdjustStateImageRatio
struct UPDNameTagAllyUI_AdjustStateImageRatio_Params
{
};

// Function VeiledExperts.PDNicknamePopupUI.OnChangeText
struct UPDNicknamePopupUI_OnChangeText_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VeiledExperts.PDObserverJoinPopupUI.OnClickUSNBtn
struct UPDObserverJoinPopupUI_OnClickUSNBtn_Params
{
};

// Function VeiledExperts.PDObserverJoinPopupUI.OnClickRSNBtn
struct UPDObserverJoinPopupUI_OnClickRSNBtn_Params
{
};

// Function VeiledExperts.PDObserverJoinPopupUI.OnClickNicknameBtn
struct UPDObserverJoinPopupUI_OnClickNicknameBtn_Params
{
};

// Function VeiledExperts.PDObserverJoinPopupUI.OnClickCustomCustomRoomBtn
struct UPDObserverJoinPopupUI_OnClickCustomCustomRoomBtn_Params
{
};

// Function VeiledExperts.PDObserverJoinPopupUI.OnClickCustomBtn
struct UPDObserverJoinPopupUI_OnClickCustomBtn_Params
{
};

// Function VeiledExperts.PDObserverJoinPopupUI.OnChangeText
struct UPDObserverJoinPopupUI_OnChangeText_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VeiledExperts.PDOptionContent.OnInputKeySelected
struct UPDOptionContent_OnInputKeySelected_Params
{
	struct FInputChord                                 InInputChord;                                             // (Parm)
};

// Function VeiledExperts.PDOptionPopupUI.OnClickTabDefaultButton
struct UPDOptionPopupUI_OnClickTabDefaultButton_Params
{
};

// Function VeiledExperts.PDOptionPopupUI.OnClickSoundButton
struct UPDOptionPopupUI_OnClickSoundButton_Params
{
};

// Function VeiledExperts.PDOptionPopupUI.OnClickGameplayButton
struct UPDOptionPopupUI_OnClickGameplayButton_Params
{
};

// Function VeiledExperts.PDOptionPopupUI.OnClickDisplayButton
struct UPDOptionPopupUI_OnClickDisplayButton_Params
{
};

// Function VeiledExperts.PDOptionPopupUI.OnClickDefaultButton
struct UPDOptionPopupUI_OnClickDefaultButton_Params
{
};

// Function VeiledExperts.PDOptionPopupUI.OnClickControlsButton
struct UPDOptionPopupUI_OnClickControlsButton_Params
{
};

// Function VeiledExperts.PDOptionPopupUI.OnClickConfirmButton
struct UPDOptionPopupUI_OnClickConfirmButton_Params
{
};

// Function VeiledExperts.PDOptionPopupUI.OnClickCancelButton
struct UPDOptionPopupUI_OnClickCancelButton_Params
{
};

// Function VeiledExperts.PDOutCheatManager.UnlockPerk
struct UPDOutCheatManager_UnlockPerk_Params
{
	int                                                ItemIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDOutCheatManager.MakeRankPenalty
struct UPDOutCheatManager_MakeRankPenalty_Params
{
};

// Function VeiledExperts.PDOutCheatManager.MakePenalty
struct UPDOutCheatManager_MakePenalty_Params
{
};

// Function VeiledExperts.PDOutCheatManager.MakeOut
struct UPDOutCheatManager_MakeOut_Params
{
};

// Function VeiledExperts.PDOutCheatManager.GameResultTest
struct UPDOutCheatManager_GameResultTest_Params
{
};

// Function VeiledExperts.PDOutCheatManager.EquipPerk
struct UPDOutCheatManager_EquipPerk_Params
{
	int                                                ItemIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDOutCheatManager.BuyItem
struct UPDOutCheatManager_BuyItem_Params
{
	int                                                ProdIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDOutCheatManager.AddMailNotificationTest
struct UPDOutCheatManager_AddMailNotificationTest_Params
{
	int                                                MailNotiType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDOutgameUI.OnUnHoverOptionBtn
struct UPDOutgameUI_OnUnHoverOptionBtn_Params
{
};

// Function VeiledExperts.PDOutgameUI.OnUnHoverNewsBtn
struct UPDOutgameUI_OnUnHoverNewsBtn_Params
{
};

// Function VeiledExperts.PDOutgameUI.OnUnHoverMailboxBtn
struct UPDOutgameUI_OnUnHoverMailboxBtn_Params
{
};

// Function VeiledExperts.PDOutgameUI.OnSendPartyInviteInfo
struct UPDOutgameUI_OnSendPartyInviteInfo_Params
{
	bool                                               bAccept;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PartyID;                                                  // (Parm, ZeroConstructor)
	int64_t                                            USN;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Nickname;                                                 // (Parm, ZeroConstructor)
};

// Function VeiledExperts.PDOutgameUI.OnSendCustomRoomInviteInfo
struct UPDOutgameUI_OnSendCustomRoomInviteInfo_Params
{
	struct FString                                     RoomCode;                                                 // (Parm, ZeroConstructor)
};

// Function VeiledExperts.PDOutgameUI.OnMoveFindPartyPage
struct UPDOutgameUI_OnMoveFindPartyPage_Params
{
};

// Function VeiledExperts.PDOutgameUI.OnHoverOptionBtn
struct UPDOutgameUI_OnHoverOptionBtn_Params
{
};

// Function VeiledExperts.PDOutgameUI.OnHoverNewsBtn
struct UPDOutgameUI_OnHoverNewsBtn_Params
{
};

// Function VeiledExperts.PDOutgameUI.OnHoverMailboxBtn
struct UPDOutgameUI_OnHoverMailboxBtn_Params
{
};

// Function VeiledExperts.PDOutgameUI.OnClickTrainingBtn
struct UPDOutgameUI_OnClickTrainingBtn_Params
{
};

// Function VeiledExperts.PDOutgameUI.OnClickSettingBtn
struct UPDOutgameUI_OnClickSettingBtn_Params
{
};

// Function VeiledExperts.PDOutgameUI.OnClickProfileBtn
struct UPDOutgameUI_OnClickProfileBtn_Params
{
};

// Function VeiledExperts.PDOutgameUI.OnClickOptionBtn
struct UPDOutgameUI_OnClickOptionBtn_Params
{
};

// Function VeiledExperts.PDOutgameUI.OnClickNewsBtn
struct UPDOutgameUI_OnClickNewsBtn_Params
{
};

// Function VeiledExperts.PDOutgameUI.OnClickMainLobbyBtn
struct UPDOutgameUI_OnClickMainLobbyBtn_Params
{
};

// Function VeiledExperts.PDOutgameUI.OnClickMailboxsBtn
struct UPDOutgameUI_OnClickMailboxsBtn_Params
{
};

// Function VeiledExperts.PDOutgameUI.OnClickLoadoutBtn
struct UPDOutgameUI_OnClickLoadoutBtn_Params
{
};

// Function VeiledExperts.PDOutgameUI.OnClickExitBtn
struct UPDOutgameUI_OnClickExitBtn_Params
{
};

// Function VeiledExperts.PDOutgameUI.OnClickClanBtn
struct UPDOutgameUI_OnClickClanBtn_Params
{
};

// Function VeiledExperts.PDOutgameUI.OnClickBgBtn
struct UPDOutgameUI_OnClickBgBtn_Params
{
};

// Function VeiledExperts.PDOutgameUI.OnClickAgentBtn
struct UPDOutgameUI_OnClickAgentBtn_Params
{
};

// Function VeiledExperts.PDOutgameUI.HideContextMenu
struct UPDOutgameUI_HideContextMenu_Params
{
};

// Function VeiledExperts.PDPartySlotListItemUI.OnClickSlot
struct UPDPartySlotListItemUI_OnClickSlot_Params
{
};

// Function VeiledExperts.PDProfileUI.OnSelectedProfileItem
struct UPDProfileUI_OnSelectedProfileItem_Params
{
	class UPDProfileCategoryListItemData*              InListDataData;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDProfileUI.OnClickSound
struct UPDProfileUI_OnClickSound_Params
{
};

// Function VeiledExperts.PDProfileUI.OnClickRecommendBtn
struct UPDProfileUI_OnClickRecommendBtn_Params
{
};

// Function VeiledExperts.PDProfileUI.OnClickEquipBtn
struct UPDProfileUI_OnClickEquipBtn_Params
{
};

// Function VeiledExperts.PDProfileUI.OnClickDefaultBtn
struct UPDProfileUI_OnClickDefaultBtn_Params
{
};

// Function VeiledExperts.PDProfileUI.OnClickBtnCustomizing
struct UPDProfileUI_OnClickBtnCustomizing_Params
{
};

// Function VeiledExperts.PDProfileUI.OnClickBtnBack
struct UPDProfileUI_OnClickBtnBack_Params
{
};

// Function VeiledExperts.PDProfileUI.OnChangedSubCategory
struct UPDProfileUI_OnChangedSubCategory_Params
{
	class UObject*                                     InObject;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDProfileUI.OnChangedProfileCategory
struct UPDProfileUI_OnChangedProfileCategory_Params
{
	EProfileCategory                                   InWeaponCategory;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDProfileUI.OnChangedContent
struct UPDProfileUI_OnChangedContent_Params
{
	class UObject*                                     InObject;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDRecentlyUI.OnLevelImgClick
struct UPDRecentlyUI_OnLevelImgClick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VeiledExperts.PDRecruitListItem.OnOKClicked
struct UPDRecruitListItem_OnOKClicked_Params
{
};

// Function VeiledExperts.PDRecruitListItem.OnCancelClicked
struct UPDRecruitListItem_OnCancelClicked_Params
{
};

// Function VeiledExperts.PDReportPopupUI.OnTextChanged_MET_Opinion
struct UPDReportPopupUI_OnTextChanged_MET_Opinion_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VeiledExperts.PDReportPopupUI.OnSelectionChanged_CB_SubCategory
struct UPDReportPopupUI_OnSelectionChanged_CB_SubCategory_Params
{
	struct FString                                     sItem;                                                    // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           selType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDReportPopupUI.OnSelectionChanged_CB_Category
struct UPDReportPopupUI_OnSelectionChanged_CB_Category_Params
{
	struct FString                                     sItem;                                                    // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           selType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDReportPopupUI.OnReportConfirmed
struct UPDReportPopupUI_OnReportConfirmed_Params
{
};

// Function VeiledExperts.PDReportPopupUI.OnClick_ConfirmBtn
struct UPDReportPopupUI_OnClick_ConfirmBtn_Params
{
};

// Function VeiledExperts.PDReportPopupUI.OnClick_CancelBtn
struct UPDReportPopupUI_OnClick_CancelBtn_Params
{
};

// Function VeiledExperts.PDReportPopupUIOutGame.OnTextChanged_MET_Opinion
struct UPDReportPopupUIOutGame_OnTextChanged_MET_Opinion_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VeiledExperts.PDReportPopupUIOutGame.OnSelectionChanged_CB_SubCategory
struct UPDReportPopupUIOutGame_OnSelectionChanged_CB_SubCategory_Params
{
	struct FString                                     sItem;                                                    // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           selType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDReportPopupUIOutGame.OnSelectionChanged_CB_Category
struct UPDReportPopupUIOutGame_OnSelectionChanged_CB_Category_Params
{
	struct FString                                     sItem;                                                    // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           selType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDReportPopupUIOutGame.OnClick_ConfirmBtn
struct UPDReportPopupUIOutGame_OnClick_ConfirmBtn_Params
{
};

// Function VeiledExperts.PDReportPopupUIOutGame.OnClick_CancelBtn
struct UPDReportPopupUIOutGame_OnClick_CancelBtn_Params
{
};

// Function VeiledExperts.PDResultTeamScoreItem.OnClickReportBtn
struct UPDResultTeamScoreItem_OnClickReportBtn_Params
{
};

// Function VeiledExperts.PDResultTeamScoreItem.OnClickAddFriendBtn
struct UPDResultTeamScoreItem_OnClickAddFriendBtn_Params
{
};

// Function VeiledExperts.PDResultRankScoreItem.OnClickReportBtn
struct UPDResultRankScoreItem_OnClickReportBtn_Params
{
};

// Function VeiledExperts.PDResultRankScoreItem.OnClickAddFriendBtn
struct UPDResultRankScoreItem_OnClickAddFriendBtn_Params
{
};

// Function VeiledExperts.PDResultRoundMenuItem.OnClickMenu
struct UPDResultRoundMenuItem_OnClickMenu_Params
{
};

// Function VeiledExperts.PDRoundReplayer.OnValueChangedTime
struct UPDRoundReplayer_OnValueChangedTime_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDRoundReplayer.OnMouseCaptureEndTime
struct UPDRoundReplayer_OnMouseCaptureEndTime_Params
{
};

// Function VeiledExperts.PDRoundReplayer.OnMouseCaptureBeginTime
struct UPDRoundReplayer_OnMouseCaptureBeginTime_Params
{
};

// Function VeiledExperts.PDRoundReplayer.OnClickQuadrupleSpeed
struct UPDRoundReplayer_OnClickQuadrupleSpeed_Params
{
};

// Function VeiledExperts.PDRoundReplayer.OnClickPlayLogStop
struct UPDRoundReplayer_OnClickPlayLogStop_Params
{
};

// Function VeiledExperts.PDRoundReplayer.OnClickPlayLogPlay
struct UPDRoundReplayer_OnClickPlayLogPlay_Params
{
};

// Function VeiledExperts.PDRoundReplayer.OnClickPlayLogPause
struct UPDRoundReplayer_OnClickPlayLogPause_Params
{
};

// Function VeiledExperts.PDRoundReplayer.OnClickNormalSpeed
struct UPDRoundReplayer_OnClickNormalSpeed_Params
{
};

// Function VeiledExperts.PDRoundReplayer.OnClickDoubleSpeed
struct UPDRoundReplayer_OnClickDoubleSpeed_Params
{
};

// Function VeiledExperts.PDExportSafeZoneActor.CreateSafeZoneArea
struct APDExportSafeZoneActor_CreateSafeZoneArea_Params
{
};

// Function VeiledExperts.PDSkeletalMeshLibrary.MergeMeshes
struct UPDSkeletalMeshLibrary_MergeMeshes_Params
{
	struct FSkeletalMeshMergeParams                    Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class USkeletalMesh*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VeiledExperts.PDSlider.OnSliderTextCommitted
struct UPDSlider_OnSliderTextCommitted_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDSlider.OnSliderTextChanged
struct UPDSlider_OnSliderTextChanged_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VeiledExperts.PDSoundOptionUI.OnVoiceChatTeamPushToTalk
struct UPDSoundOptionUI_OnVoiceChatTeamPushToTalk_Params
{
};

// Function VeiledExperts.PDSoundOptionUI.OnVoiceChatTeamOpenMic
struct UPDSoundOptionUI_OnVoiceChatTeamOpenMic_Params
{
};

// Function VeiledExperts.PDSoundOptionUI.OnVoiceChatSensitiveChanged
struct UPDSoundOptionUI_OnVoiceChatSensitiveChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDSoundOptionUI.OnVoiceChatOutputVolumeChanged
struct UPDSoundOptionUI_OnVoiceChatOutputVolumeChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDSoundOptionUI.OnVoiceChatNoiseFloorChanged
struct UPDSoundOptionUI_OnVoiceChatNoiseFloorChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDSoundOptionUI.OnVoiceChatInputVolumeChanged
struct UPDSoundOptionUI_OnVoiceChatInputVolumeChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDSoundOptionUI.OnVoiceChatEnableChanged
struct UPDSoundOptionUI_OnVoiceChatEnableChanged_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDSoundOptionUI.OnSpatialChanged
struct UPDSoundOptionUI_OnSpatialChanged_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDSoundOptionUI.OnSoundPresetChanged
struct UPDSoundOptionUI_OnSoundPresetChanged_Params
{
	struct FString                                     sItem;                                                    // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           selType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDSoundOptionUI.OnSfxVolumeChanged
struct UPDSoundOptionUI_OnSfxVolumeChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDSoundOptionUI.OnOperatorVolumeChanged
struct UPDSoundOptionUI_OnOperatorVolumeChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDSoundOptionUI.OnMasterVolumeChanged
struct UPDSoundOptionUI_OnMasterVolumeChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDSoundOptionUI.OnLobbySfxVolumeChanged
struct UPDSoundOptionUI_OnLobbySfxVolumeChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDSoundOptionUI.OnLobbyBgmVolumeChanged
struct UPDSoundOptionUI_OnLobbyBgmVolumeChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDSoundOptionUI.OnInputKeySelected
struct UPDSoundOptionUI_OnInputKeySelected_Params
{
	class UPDOptionContent*                            Content;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function VeiledExperts.PDSoundOptionUI.OnHRTFChanged
struct UPDSoundOptionUI_OnHRTFChanged_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDSoundOptionUI.OnClickVoiceSettingButton
struct UPDSoundOptionUI_OnClickVoiceSettingButton_Params
{
};

// Function VeiledExperts.PDSoundOptionUI.OnClickSoundSettingButton
struct UPDSoundOptionUI_OnClickSoundSettingButton_Params
{
};

// Function VeiledExperts.PDSoundOptionUI.OnCharacterVoiceVolumeChanged
struct UPDSoundOptionUI_OnCharacterVoiceVolumeChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDSoundOptionUI.OnBgmVolumeChanged
struct UPDSoundOptionUI_OnBgmVolumeChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDSoundOptionUI.OnBackGroundVolumePlayChanged
struct UPDSoundOptionUI_OnBackGroundVolumePlayChanged_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDStaticMeshEffect.UpdateEffect
struct APDStaticMeshEffect_UpdateEffect_Params
{
	struct FLinearColor                                Param;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDStaticMeshEffect.OnMouseLeave
struct APDStaticMeshEffect_OnMouseLeave_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDStaticMeshEffect.OnMouseHover
struct APDStaticMeshEffect_OnMouseHover_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDStaticMeshEffect.OnMouseClick
struct APDStaticMeshEffect_OnMouseClick_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // (Parm)
};

// Function VeiledExperts.PDStaticMeshEffect.EffectEvent
struct APDStaticMeshEffect_EffectEvent_Params
{
};

// Function VeiledExperts.PDTrainingListItem.EnterTrainingMode
struct UPDTrainingListItem_EnterTrainingMode_Params
{
};

// Function VeiledExperts.PDTrainingUI.OnUnSelectTrainingMatch
struct UPDTrainingUI_OnUnSelectTrainingMatch_Params
{
};

// Function VeiledExperts.PDTrainingUI.OnUnSelectCustomMatch
struct UPDTrainingUI_OnUnSelectCustomMatch_Params
{
};

// Function VeiledExperts.PDTrainingUI.OnSelectTrainingMatch
struct UPDTrainingUI_OnSelectTrainingMatch_Params
{
};

// Function VeiledExperts.PDTrainingUI.OnSelectCustomMatch
struct UPDTrainingUI_OnSelectCustomMatch_Params
{
};

// Function VeiledExperts.PDTrainingUI.OnClickCustomMatchJoin
struct UPDTrainingUI_OnClickCustomMatchJoin_Params
{
};

// Function VeiledExperts.PDTrainingUI.OnClickCustomMatchCreate
struct UPDTrainingUI_OnClickCustomMatchCreate_Params
{
};

// Function VeiledExperts.PDTrainingUI.OnClickBtnTutorial
struct UPDTrainingUI_OnClickBtnTutorial_Params
{
};

// Function VeiledExperts.PDTrainingUI.OnClickBtnGotoLobby
struct UPDTrainingUI_OnClickBtnGotoLobby_Params
{
};

// Function VeiledExperts.PDTrainingUI.OnClickBtnFirePractice
struct UPDTrainingUI_OnClickBtnFirePractice_Params
{
};

// Function VeiledExperts.PDTransformationBaseActor.OnDeactivateStart
struct APDTransformationBaseActor_OnDeactivateStart_Params
{
};

// Function VeiledExperts.PDTransformationBaseActor.OnBlinkEffect
struct APDTransformationBaseActor_OnBlinkEffect_Params
{
};

// Function VeiledExperts.PDTransformationBaseActor.OnActivateStart
struct APDTransformationBaseActor_OnActivateStart_Params
{
};

// Function VeiledExperts.PDUnKnowMarketCoinSlot.OnSynchronizeProperties
struct UPDUnKnowMarketCoinSlot_OnSynchronizeProperties_Params
{
};

// Function VeiledExperts.PDUnKnowMarketModeSlot.OnSynchronizeProperties
struct UPDUnKnowMarketModeSlot_OnSynchronizeProperties_Params
{
};

// Function VeiledExperts.PDUnKnownMarket.SelectWeaponCategory
struct UPDUnKnownMarket_SelectWeaponCategory_Params
{
	int                                                WeaponCategory;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDUnKnownMarket.OnClickRespawnBtn
struct UPDUnKnownMarket_OnClickRespawnBtn_Params
{
};

// Function VeiledExperts.PDUnKnownMarket.OnClickCoinRequest
struct UPDUnKnownMarket_OnClickCoinRequest_Params
{
};

// Function VeiledExperts.PDUnKnownMarket.OnClickCloseBtn
struct UPDUnKnownMarket_OnClickCloseBtn_Params
{
};

// Function VeiledExperts.PDUnKnownMarket.OnClickCancelCoinRequest
struct UPDUnKnownMarket_OnClickCancelCoinRequest_Params
{
};

// Function VeiledExperts.PDUnKnownMarketCoinRequestUI.RequestCoin
struct UPDUnKnownMarketCoinRequestUI_RequestCoin_Params
{
};

// Function VeiledExperts.PDUnKnownMarketCoinRequestUI.OnCountTextInput
struct UPDUnKnownMarketCoinRequestUI_OnCountTextInput_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VeiledExperts.PDUnKnownMarketCoinRequestUI.OnCountTextChanged
struct UPDUnKnownMarketCoinRequestUI_OnCountTextChanged_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDUnKnownMarketCoinRequestUI.ChangedCoinAmount
struct UPDUnKnownMarketCoinRequestUI_ChangedCoinAmount_Params
{
	float                                              InCoinAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDUnKnownMarketCoinRequestUI.CancelRequest
struct UPDUnKnownMarketCoinRequestUI_CancelRequest_Params
{
};

// Function VeiledExperts.PDUnKnownMarketEquipSlot.ResellItem
struct UPDUnKnownMarketEquipSlot_ResellItem_Params
{
};

// Function VeiledExperts.PDUnKnownMarketEquipSlot.RefundItem
struct UPDUnKnownMarketEquipSlot_RefundItem_Params
{
};

// Function VeiledExperts.PDUnKnownMarketEquipSlot.OnUnHoverLoadout
struct UPDUnKnownMarketEquipSlot_OnUnHoverLoadout_Params
{
};

// Function VeiledExperts.PDUnKnownMarketEquipSlot.OnHoverLoadoutB
struct UPDUnKnownMarketEquipSlot_OnHoverLoadoutB_Params
{
};

// Function VeiledExperts.PDUnKnownMarketEquipSlot.OnHoverLoadoutA
struct UPDUnKnownMarketEquipSlot_OnHoverLoadoutA_Params
{
};

// Function VeiledExperts.PDUnKnownMarketEquipSlot.OnClickLoadoutB
struct UPDUnKnownMarketEquipSlot_OnClickLoadoutB_Params
{
};

// Function VeiledExperts.PDUnKnownMarketEquipSlot.OnClickLoadoutA
struct UPDUnKnownMarketEquipSlot_OnClickLoadoutA_Params
{
};

// Function VeiledExperts.PDUnKnownMarketItemSlot.RefundItem
struct UPDUnKnownMarketItemSlot_RefundItem_Params
{
};

// Function VeiledExperts.PDUnKnownMarketListItem.OnClickBuy
struct UPDUnKnownMarketListItem_OnClickBuy_Params
{
	bool                                               bForceDrop;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDUnKnownMarketPartListItem.OnClickPart
struct UPDUnKnownMarketPartListItem_OnClickPart_Params
{
};

// Function VeiledExperts.PDUnknownMarketPopupUI.SellItem
struct UPDUnknownMarketPopupUI_SellItem_Params
{
};

// Function VeiledExperts.PDUnknownMarketPopupUI.SellAndSaveOption
struct UPDUnknownMarketPopupUI_SellAndSaveOption_Params
{
};

// Function VeiledExperts.PDUnknownMarketPopupUI.HidePopup
struct UPDUnknownMarketPopupUI_HidePopup_Params
{
};

// Function VeiledExperts.PDUnknownMarketPopupUI.BuyItem
struct UPDUnknownMarketPopupUI_BuyItem_Params
{
};

// Function VeiledExperts.PDUnKnownMarketUpgradeSlot.OnClickRequest
struct UPDUnKnownMarketUpgradeSlot_OnClickRequest_Params
{
};

// Function VeiledExperts.PDUnKnownMarketWeaponCategory.OnSelectCategory
struct UPDUnKnownMarketWeaponCategory_OnSelectCategory_Params
{
};

// Function VeiledExperts.PDUtilFunctionLibrary.GetHitReactionDirName
struct UPDUtilFunctionLibrary_GetHitReactionDirName_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitDir;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TMap<EPDDirectionType, struct FName>               DirNames;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	EPDDirCalcMethodType                               Method;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForIncoming;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VeiledExperts.PDUtilFunctionLibrary.GetDirectionalPortion_4Way
struct UPDUtilFunctionLibrary_GetDirectionalPortion_4Way_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitDir;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ForwardPortion;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RightPortion;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bForIncoming;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDUtilFunctionLibrary.GetDirectionalPortion
struct UPDUtilFunctionLibrary_GetDirectionalPortion_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitDir;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ForwardPortion;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RightPortion;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bForIncoming;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDUtilFunctionLibrary.GetDirection_Simple
struct UPDUtilFunctionLibrary_GetDirection_Simple_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitDir;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EPDDirCalcMethodType                               Method;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForIncoming;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EPDDirectionType                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VeiledExperts.PDWeaponSelectUI.OnSelectedWeaponItem
struct UPDWeaponSelectUI_OnSelectedWeaponItem_Params
{
	class UPDWeaponCategoryListItemData*               InListDataData;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDWeaponSelectUI.OnClickWeaponItem
struct UPDWeaponSelectUI_OnClickWeaponItem_Params
{
};

// Function VeiledExperts.PDWeaponSelectUI.OnClickPresetTab
struct UPDWeaponSelectUI_OnClickPresetTab_Params
{
	int                                                InLoadoutIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDWeaponSelectUI.OnClickBtnCustomizing
struct UPDWeaponSelectUI_OnClickBtnCustomizing_Params
{
};

// Function VeiledExperts.PDWeaponSelectUI.OnClickBtnBack
struct UPDWeaponSelectUI_OnClickBtnBack_Params
{
};

// Function VeiledExperts.PDWeaponSelectUI.OnChangedWeaponCategory
struct UPDWeaponSelectUI_OnChangedWeaponCategory_Params
{
	EWeaponCategory                                    InWeaponCategory;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDWebBrowser.ReleaseWebBrowser
struct UPDWebBrowser_ReleaseWebBrowser_Params
{
};

// Function VeiledExperts.PDWebBrowser.RefreshInputMethod
struct UPDWebBrowser_RefreshInputMethod_Params
{
};

// Function VeiledExperts.PDWebBrowser.OnWICEvent
struct UPDWebBrowser_OnWICEvent_Params
{
	struct FString                                     InType;                                                   // (Parm, ZeroConstructor)
	struct FString                                     InValue;                                                  // (Parm, ZeroConstructor)
};

// Function VeiledExperts.PDWebPopupUI.OpenWebPage
struct UPDWebPopupUI_OpenWebPage_Params
{
};

// Function VeiledExperts.PDWebPopupUI.CloseWebPage
struct UPDWebPopupUI_CloseWebPage_Params
{
};

// Function VeiledExperts.PDWebTermsOfServicePopupUI.OpenTermsWebPage
struct UPDWebTermsOfServicePopupUI_OpenTermsWebPage_Params
{
};

// Function VeiledExperts.PDWebTermsOfServicePopupUI.OnToggleTermsOfServiceChanged
struct UPDWebTermsOfServicePopupUI_OnToggleTermsOfServiceChanged_Params
{
	bool                                               Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDWebTermsOfServicePopupUI.OnTermsOfServiceBtn
struct UPDWebTermsOfServicePopupUI_OnTermsOfServiceBtn_Params
{
};

// Function VeiledExperts.PDWebTermsOfServicePopupUI.CloseTermaWebPage
struct UPDWebTermsOfServicePopupUI_CloseTermaWebPage_Params
{
};

// Function VeiledExperts.PDZipLine.OnExitTriggerEndOverlap
struct APDZipLine_OnExitTriggerEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDZipLine.OnExitTriggerBeginOverlap
struct APDZipLine_OnExitTriggerBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function VeiledExperts.PDZipLine.OnEntryTriggerEndOverlap
struct APDZipLine_OnEntryTriggerEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VeiledExperts.PDZipLine.OnEntryTriggerBeginOverlap
struct APDZipLine_OnEntryTriggerBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
