// WidgetBlueprintGeneratedClass LeavePlatformPartyButton.LeavePlatformPartyButton_C
// Size: 0x1088 (Inherited: 0x1070)
struct ULeavePlatformPartyButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1070(0x08)
	struct UWidgetAnimation* OnHover; // 0x1078(0x08)
	struct UCommonTextBlock* ; // 0x1080(0x08)

	void SetText(struct FText New Text); // Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_LeavePlatformPartyButton(int32_t EntryPoint); // Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.ExecuteUbergraph_LeavePlatformPartyButton // (Final|UbergraphFunction) // @ game+0xda05cc
};

