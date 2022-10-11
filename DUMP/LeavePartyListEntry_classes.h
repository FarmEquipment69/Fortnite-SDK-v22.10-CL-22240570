// WidgetBlueprintGeneratedClass LeavePartyListEntry.LeavePartyListEntry_C
// Size: 0x10e8 (Inherited: 0x10a0)
struct ULeavePartyListEntry_C : UFortLeavePartyListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10a0(0x08)
	struct UWidgetAnimation* Selected; // 0x10a8(0x08)
	struct UWidgetAnimation* Hovered; // 0x10b0(0x08)
	struct UBorder* AnimatedInputBorder; // 0x10b8(0x08)
	struct UImage* Arrow; // 0x10c0(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x10c8(0x08)
	struct UBorder* EntryBorder; // 0x10d0(0x08)
	struct UCommonRichTextBlock* Text_LeavePartyText; // 0x10d8(0x08)
	struct UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0x10e0(0x08)

	void BP_OnUnhovered(); // Function LeavePartyListEntry.LeavePartyListEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function LeavePartyListEntry.LeavePartyListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function LeavePartyListEntry.LeavePartyListEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_LeavePartyListEntry(int32_t EntryPoint); // Function LeavePartyListEntry.LeavePartyListEntry_C.ExecuteUbergraph_LeavePartyListEntry // (Final|UbergraphFunction) // @ game+0xda05cc
};

