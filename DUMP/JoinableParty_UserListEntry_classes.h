// WidgetBlueprintGeneratedClass JoinableParty_UserListEntry.JoinableParty_UserListEntry_C
// Size: 0x1200 (Inherited: 0x1130)
struct UJoinableParty_UserListEntry_C : UFortJoinablePartyListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1130(0x08)
	struct UWidgetAnimation* Unhovered_WithTrim; // 0x1138(0x08)
	struct UWidgetAnimation* Unhovered; // 0x1140(0x08)
	struct UWidgetAnimation* Hovered_WithTrim; // 0x1148(0x08)
	struct UWidgetAnimation* Selected; // 0x1150(0x08)
	struct UWidgetAnimation* Hovered; // 0x1158(0x08)
	struct UFortSocialAvatarIcon* Avatar_MemberIcon; // 0x1160(0x08)
	struct UBorder* Border_Background; // 0x1168(0x08)
	struct UBorder* Border_Highlight; // 0x1170(0x08)
	struct UBorder* Border_OnlineStatusIndicator; // 0x1178(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x1180(0x08)
	struct UImage* Image_Lock; // 0x1188(0x08)
	struct UOverlay* Overlay_Avatar; // 0x1190(0x08)
	struct UScaleBox* ; // 0x1198(0x08)
	struct USizeBox* SizeBox_MultiParty; // 0x11a0(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_DisplayNamesText; // 0x11a8(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_JoinablePartyText; // 0x11b0(0x08)
	struct UCommonRichTextBlock* Text_DisplayName; // 0x11b8(0x08)
	struct UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0x11c0(0x08)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0x11c8(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0x11d8(0x10)
	bool AlwaysShowTrim; // 0x11e8(0x01)
	char pad_11E9[0x7]; // 0x11e9(0x07)
	struct TArray<struct USocialTagWidget*> SidebarSocialTagWidgetArray; // 0x11f0(0x10)

	void BP_OnHovered(); // Function JoinableParty_UserListEntry.JoinableParty_UserListEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function JoinableParty_UserListEntry.JoinableParty_UserListEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function JoinableParty_UserListEntry.JoinableParty_UserListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda05cc
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function JoinableParty_UserListEntry.JoinableParty_UserListEntry_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function JoinableParty_UserListEntry.JoinableParty_UserListEntry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnInviteStatusUpdated(bool bIsInvited); // Function JoinableParty_UserListEntry.JoinableParty_UserListEntry_C.OnInviteStatusUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_JoinableParty_UserListEntry(int32_t EntryPoint); // Function JoinableParty_UserListEntry.JoinableParty_UserListEntry_C.ExecuteUbergraph_JoinableParty_UserListEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

