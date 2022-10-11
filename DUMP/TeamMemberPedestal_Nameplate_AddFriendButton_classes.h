// WidgetBlueprintGeneratedClass TeamMemberPedestal_Nameplate_AddFriendButton.TeamMemberPedestal_Nameplate_AddFriendButton_C
// Size: 0x10b8 (Inherited: 0x1070)
struct UTeamMemberPedestal_Nameplate_AddFriendButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1070(0x08)
	struct UWidgetAnimation* OnUnhovered; // 0x1078(0x08)
	struct UWidgetAnimation* Reset; // 0x1080(0x08)
	struct UWidgetAnimation* Disabled; // 0x1088(0x08)
	struct UWidgetAnimation* PlayShine; // 0x1090(0x08)
	struct UWidgetAnimation* OnHovered; // 0x1098(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0x10a0(0x08)
	struct UImage* Image_ButtonTop; // 0x10a8(0x08)
	struct USizeBox* SB_InputAction; // 0x10b0(0x08)

	void SetButtonText(struct FText InText); // Function TeamMemberPedestal_Nameplate_AddFriendButton.TeamMemberPedestal_Nameplate_AddFriendButton_C.SetButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnClicked(); // Function TeamMemberPedestal_Nameplate_AddFriendButton.TeamMemberPedestal_Nameplate_AddFriendButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function TeamMemberPedestal_Nameplate_AddFriendButton.TeamMemberPedestal_Nameplate_AddFriendButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function TeamMemberPedestal_Nameplate_AddFriendButton.TeamMemberPedestal_Nameplate_AddFriendButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void SetInputActionVisibility(enum class ESlateVisibility InVisibility); // Function TeamMemberPedestal_Nameplate_AddFriendButton.TeamMemberPedestal_Nameplate_AddFriendButton_C.SetInputActionVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton(int32_t EntryPoint); // Function TeamMemberPedestal_Nameplate_AddFriendButton.TeamMemberPedestal_Nameplate_AddFriendButton_C.ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton // (Final|UbergraphFunction) // @ game+0xda05cc
};

