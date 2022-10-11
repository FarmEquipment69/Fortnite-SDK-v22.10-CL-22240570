// WidgetBlueprintGeneratedClass SidebarSuggestedFriendListEntry.SidebarSuggestedFriendListEntry_C
// Size: 0x1170 (Inherited: 0x1100)
struct USidebarSuggestedFriendListEntry_C : UFortConnectionsUserListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1100(0x08)
	struct UWidgetAnimation* Unhovered; // 0x1108(0x08)
	struct UWidgetAnimation* Selected; // 0x1110(0x08)
	struct UWidgetAnimation* Hovered; // 0x1118(0x08)
	struct UBorder* Border_Background; // 0x1120(0x08)
	struct UBorder* Border_Highlight; // 0x1128(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x1130(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_MutualFriends; // 0x1138(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_SocialName; // 0x1140(0x08)
	struct UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0x1148(0x08)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0x1150(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0x1160(0x10)

	void BP_OnUnhovered(); // Function SidebarSuggestedFriendListEntry.SidebarSuggestedFriendListEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function SidebarSuggestedFriendListEntry.SidebarSuggestedFriendListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function SidebarSuggestedFriendListEntry.SidebarSuggestedFriendListEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function SidebarSuggestedFriendListEntry.SidebarSuggestedFriendListEntry_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_SidebarSuggestedFriendListEntry(int32_t EntryPoint); // Function SidebarSuggestedFriendListEntry.SidebarSuggestedFriendListEntry_C.ExecuteUbergraph_SidebarSuggestedFriendListEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

