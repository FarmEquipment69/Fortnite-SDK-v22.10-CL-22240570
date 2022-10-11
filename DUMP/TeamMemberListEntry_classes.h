// WidgetBlueprintGeneratedClass TeamMemberListEntry.TeamMemberListEntry_C
// Size: 0x1180 (Inherited: 0x1130)
struct UTeamMemberListEntry_C : UFortTeamMemberListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1130(0x08)
	struct UWidgetAnimation* Selected; // 0x1138(0x08)
	struct UWidgetAnimation* Hovered; // 0x1140(0x08)
	struct UImage* Arrow; // 0x1148(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x1150(0x08)
	struct UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0x1158(0x08)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0x1160(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0x1170(0x10)

	void BP_OnUnhovered(); // Function TeamMemberListEntry.TeamMemberListEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function TeamMemberListEntry.TeamMemberListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function TeamMemberListEntry.TeamMemberListEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_TeamMemberListEntry(int32_t EntryPoint); // Function TeamMemberListEntry.TeamMemberListEntry_C.ExecuteUbergraph_TeamMemberListEntry // (Final|UbergraphFunction) // @ game+0xda05cc
};

