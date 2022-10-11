// WidgetBlueprintGeneratedClass JoinablePartyEntry.JoinablePartyEntry_C
// Size: 0x11a8 (Inherited: 0x1130)
struct UJoinablePartyEntry_C : UFortJoinablePartyListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1130(0x08)
	struct UWidgetAnimation* Selected; // 0x1138(0x08)
	struct UWidgetAnimation* Hovered; // 0x1140(0x08)
	struct UBorder* AnimatedInputBorder; // 0x1148(0x08)
	struct UImage* Arrow; // 0x1150(0x08)
	struct UBorder* Border_OnlineStatusIndicator; // 0x1158(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x1160(0x08)
	struct UBorder* EntryBorder; // 0x1168(0x08)
	struct USizeBox* Exclamation; // 0x1170(0x08)
	struct UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0x1178(0x08)
	struct FSlateColor InviteFontColor; // 0x1180(0x14)
	struct FSlateColor DefaultFontColor; // 0x1194(0x14)

	void BP_OnUnhovered(); // Function JoinablePartyEntry.JoinablePartyEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function JoinablePartyEntry.JoinablePartyEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function JoinablePartyEntry.JoinablePartyEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnInviteStatusUpdated(bool bIsInvited); // Function JoinablePartyEntry.JoinablePartyEntry_C.OnInviteStatusUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_JoinablePartyEntry(int32_t EntryPoint); // Function JoinablePartyEntry.JoinablePartyEntry_C.ExecuteUbergraph_JoinablePartyEntry // (Final|UbergraphFunction) // @ game+0xda05cc
};

