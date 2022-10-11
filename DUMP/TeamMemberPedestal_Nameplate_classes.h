// WidgetBlueprintGeneratedClass TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C
// Size: 0x147a (Inherited: 0x1140)
struct UTeamMemberPedestal_Nameplate_C : UFortTeamMemberPedestalNameplate {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1140(0x08)
	struct UWidgetAnimation* NotReadyTextColor; // 0x1148(0x08)
	struct UWidgetAnimation* ReadyTextColor; // 0x1150(0x08)
	struct UWidgetAnimation* On Ready Change Text; // 0x1158(0x08)
	struct UFortHUDElementWrapper_C* FortHUDElementWrapper; // 0x1160(0x08)
	struct USizeBox* SB_InputAction; // 0x1168(0x08)
	struct UScaleBox* ; // 0x1170(0x08)
	struct UTeamMemberPedestal_ActivatableContainer_C* TeamMemberPedestal_ActivatableContainer; // 0x1178(0x08)
	struct USizeBox* Widget_PlayerLevel; // 0x1180(0x08)
	char pad_1188[0x8]; // 0x1188(0x08)
	struct FFortTeamMemberInfo TeamMemberInfo; // 0x1190(0x250)
	bool bHovered; // 0x13e0(0x01)
	char pad_13E1[0x3]; // 0x13e1(0x03)
	struct FLinearColor ReadyColor; // 0x13e4(0x10)
	struct FLinearColor NotReadyColor; // 0x13f4(0x10)
	char pad_1404[0x4]; // 0x1404(0x04)
	struct USoundBase* UnReadySound; // 0x1408(0x08)
	struct USoundBase* ReadySound; // 0x1410(0x08)
	struct FText AddFriendText; // 0x1418(0x18)
	struct FText AcceptedInviteText; // 0x1430(0x18)
	struct FText AcceptFriendRequestText; // 0x1448(0x18)
	struct FText SentInviteText; // 0x1460(0x18)
	enum class ESlateVisibility FALSE; // 0x1478(0x01)
	enum class EFrontEndCamera DefaultOldCameraValue; // 0x1479(0x01)

	void UpdateInputActionVisibility(); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.UpdateInputActionVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	enum class ESlateVisibility GetInputActionVisibility(); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.GetInputActionVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda05cc
	void OnReadyStatusChanged(enum class EGameReadiness GameReadiness, bool bIsDownloading); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnReadyStatusChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnTeamMemberEstablished(bool bHasValidMember); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.BP_OnTeamMemberEstablished // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnFrontEndCameraChanged(enum class EFrontEndCamera NewCamera, enum class EFrontEndCamera OldCamera); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnFrontEndCameraChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnPlayReadyAudio(bool bIsReadyForMatchmaking); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnPlayReadyAudio // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnCurrentSubGameChanged(enum class ESubGame NewSubGame); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnCurrentSubGameChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnFriendStatusUpdated(enum class EFortFriendRequestStatus FriendRequestStatus); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnFriendStatusUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void HandleInputMethodChanged(enum class ECommonInputType bNewInputType); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.HandleInputMethodChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Destruct(); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_TeamMemberPedestal_Nameplate(int32_t EntryPoint); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.ExecuteUbergraph_TeamMemberPedestal_Nameplate // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

