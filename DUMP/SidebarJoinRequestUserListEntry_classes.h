// WidgetBlueprintGeneratedClass SidebarJoinRequestUserListEntry.SidebarJoinRequestUserListEntry_C
// Size: 0x1198 (Inherited: 0x1130)
struct USidebarJoinRequestUserListEntry_C : UFortSocialUserListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1130(0x08)
	struct UWidgetAnimation* Unhovered; // 0x1138(0x08)
	struct UWidgetAnimation* Selected; // 0x1140(0x08)
	struct UWidgetAnimation* Hovered; // 0x1148(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x1150(0x08)
	struct UCommonRichTextBlock* JoinRequest; // 0x1158(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_SocialName; // 0x1160(0x08)
	struct UCommonRichTextBlock* Text_DisplayName; // 0x1168(0x08)
	struct UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0x1170(0x08)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0x1178(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0x1188(0x10)

	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function SidebarJoinRequestUserListEntry.SidebarJoinRequestUserListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function SidebarJoinRequestUserListEntry.SidebarJoinRequestUserListEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function SidebarJoinRequestUserListEntry.SidebarJoinRequestUserListEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function SidebarJoinRequestUserListEntry.SidebarJoinRequestUserListEntry_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_SidebarJoinRequestUserListEntry(int32_t EntryPoint); // Function SidebarJoinRequestUserListEntry.SidebarJoinRequestUserListEntry_C.ExecuteUbergraph_SidebarJoinRequestUserListEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

