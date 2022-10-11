// WidgetBlueprintGeneratedClass TeamMemberBanner.TeamMemberBanner_C
// Size: 0x10f0 (Inherited: 0x10b0)
struct UTeamMemberBanner_C : UFortCampaignTeamMemberBanner {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10b0(0x08)
	struct UIconTextButton_C* ButtonPartyFinder; // 0x10b8(0x08)
	struct UOverlay* Connected; // 0x10c0(0x08)
	struct USizeBox* Connecting; // 0x10c8(0x08)
	struct UImage* ; // 0x10d0(0x08)
	struct UOverlay* Open; // 0x10d8(0x08)
	struct UImage* OpenImage; // 0x10e0(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_MemberState; // 0x10e8(0x08)

	void OpenPartyFinder(); // Function TeamMemberBanner.TeamMemberBanner_C.OpenPartyFinder // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void HandleMouseHoverVisualState(bool Hover); // Function TeamMemberBanner.TeamMemberBanner_C.HandleMouseHoverVisualState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TeamMemberBanner.TeamMemberBanner_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda05cc
	void BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TeamMemberBanner.TeamMemberBanner_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda05cc
	void BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TeamMemberBanner.TeamMemberBanner_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda05cc
	void OnTeamMemberConnectionStateChanged(enum class EFortMemberConnectionState NewConnectionState); // Function TeamMemberBanner.TeamMemberBanner_C.OnTeamMemberConnectionStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_TeamMemberBanner(int32_t EntryPoint); // Function TeamMemberBanner.TeamMemberBanner_C.ExecuteUbergraph_TeamMemberBanner // (Final|UbergraphFunction) // @ game+0xda05cc
};

