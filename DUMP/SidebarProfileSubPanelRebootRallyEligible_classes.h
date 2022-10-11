// WidgetBlueprintGeneratedClass SidebarProfileSubPanelRebootRallyEligible.SidebarProfileSubPanelRebootRallyEligible_C
// Size: 0x370 (Inherited: 0x330)
struct USidebarProfileSubPanelRebootRallyEligible_C : UFortSocialProfileRebootRallyText {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UCommonRichTextBlock* RebootRallyEligibleText; // 0x338(0x08)
	struct FText SocialUserText; // 0x340(0x18)
	struct FText LocalUserText; // 0x358(0x18)

	void OnStartProfileLoading(); // Function SidebarProfileSubPanelRebootRallyEligible.SidebarProfileSubPanelRebootRallyEligible_C.OnStartProfileLoading // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void DisplayText(bool bCanRally); // Function SidebarProfileSubPanelRebootRallyEligible.SidebarProfileSubPanelRebootRallyEligible_C.DisplayText // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnFinishedProfileLoading(); // Function SidebarProfileSubPanelRebootRallyEligible.SidebarProfileSubPanelRebootRallyEligible_C.OnFinishedProfileLoading // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_SidebarProfileSubPanelRebootRallyEligible(int32_t EntryPoint); // Function SidebarProfileSubPanelRebootRallyEligible.SidebarProfileSubPanelRebootRallyEligible_C.ExecuteUbergraph_SidebarProfileSubPanelRebootRallyEligible // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

