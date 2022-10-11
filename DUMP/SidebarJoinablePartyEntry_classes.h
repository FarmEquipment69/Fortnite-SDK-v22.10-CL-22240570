// WidgetBlueprintGeneratedClass SidebarJoinablePartyEntry.SidebarJoinablePartyEntry_C
// Size: 0x11b0 (Inherited: 0x1130)
struct USidebarJoinablePartyEntry_C : UFortJoinablePartyListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1130(0x08)
	struct UWidgetAnimation* Selected; // 0x1138(0x08)
	struct UWidgetAnimation* Hovered; // 0x1140(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x1148(0x08)
	struct UBorder* EntryBorder; // 0x1150(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_DisplayNames; // 0x1158(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_PartyPresence; // 0x1160(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_PartyPresence_Hover; // 0x1168(0x08)
	struct UCommonRichTextBlock* Text_PartyPresence_Hover_Marquee; // 0x1170(0x08)
	struct UCommonRichTextBlock* Text_PartyPresence_Marquee; // 0x1178(0x08)
	struct UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0x1180(0x08)
	struct FSlateColor InviteFontColor; // 0x1188(0x14)
	struct FSlateColor DefaultFontColor; // 0x119c(0x14)

	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function SidebarJoinablePartyEntry.SidebarJoinablePartyEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function SidebarJoinablePartyEntry.SidebarJoinablePartyEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function SidebarJoinablePartyEntry.SidebarJoinablePartyEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnPartyPresenceTextUpdated(); // Function SidebarJoinablePartyEntry.SidebarJoinablePartyEntry_C.OnPartyPresenceTextUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_SidebarJoinablePartyEntry(int32_t EntryPoint); // Function SidebarJoinablePartyEntry.SidebarJoinablePartyEntry_C.ExecuteUbergraph_SidebarJoinablePartyEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

