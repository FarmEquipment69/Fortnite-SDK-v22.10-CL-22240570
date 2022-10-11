// WidgetBlueprintGeneratedClass Sidebar_FriendSearchBar.Sidebar_FriendSearchBar_C
// Size: 0x1165 (Inherited: 0x1110)
struct USidebar_FriendSearchBar_C : UFortFriendSearchButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1110(0x08)
	struct UWidgetAnimation* OnHovered; // 0x1118(0x08)
	struct UImage* AddFriendBanIcon; // 0x1120(0x08)
	struct USizeBox* ClearButtonSB; // 0x1128(0x08)
	struct UBorder* ClickCapture; // 0x1130(0x08)
	struct UCommonRichTextBlock* RichText_CannotAddFriends; // 0x1138(0x08)
	struct UCommonRichTextBlock* RichText_SocialBan; // 0x1140(0x08)
	struct UFortMobileImage* SharingIcon; // 0x1148(0x08)
	struct UFortSimpleWidgetAnimationsPanel* SimpleWidgetAnimationsPanel; // 0x1150(0x08)
	struct USizeBox* SizeBox_FriendSearch; // 0x1158(0x08)
	struct FName ShakeAnimation; // 0x1160(0x04)
	bool bShakeAnimationIsPlaying; // 0x1164(0x01)

	struct FEventReply (struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function Sidebar_FriendSearchBar.Sidebar_FriendSearchBar_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function Sidebar_FriendSearchBar.Sidebar_FriendSearchBar_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function Sidebar_FriendSearchBar.Sidebar_FriendSearchBar_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BndEvt__EditableText_AddFriend_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // Function Sidebar_FriendSearchBar.Sidebar_FriendSearchBar_C.BndEvt__EditableText_AddFriend_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnInitialized(); // Function Sidebar_FriendSearchBar.Sidebar_FriendSearchBar_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_Sidebar_FriendSearchBar(int32_t EntryPoint); // Function Sidebar_FriendSearchBar.Sidebar_FriendSearchBar_C.ExecuteUbergraph_Sidebar_FriendSearchBar // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

