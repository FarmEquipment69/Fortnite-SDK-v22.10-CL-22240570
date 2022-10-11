// WidgetBlueprintGeneratedClass SuggestedFriendListEntry.SuggestedFriendListEntry_C
// Size: 0x1160 (Inherited: 0x1100)
struct USuggestedFriendListEntry_C : UFortConnectionsUserListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1100(0x08)
	struct UWidgetAnimation* Selected; // 0x1108(0x08)
	struct UWidgetAnimation* Hovered; // 0x1110(0x08)
	struct UImage* Arrow; // 0x1118(0x08)
	struct UBorder* Border_Background; // 0x1120(0x08)
	struct UBorder* Border_Highlight; // 0x1128(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x1130(0x08)
	struct UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0x1138(0x08)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0x1140(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0x1150(0x10)

	void BP_OnUnhovered(); // Function SuggestedFriendListEntry.SuggestedFriendListEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function SuggestedFriendListEntry.SuggestedFriendListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function SuggestedFriendListEntry.SuggestedFriendListEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_SuggestedFriendListEntry(int32_t EntryPoint); // Function SuggestedFriendListEntry.SuggestedFriendListEntry_C.ExecuteUbergraph_SuggestedFriendListEntry // (Final|UbergraphFunction) // @ game+0xda05cc
};

