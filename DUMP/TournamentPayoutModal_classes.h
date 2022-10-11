// WidgetBlueprintGeneratedClass TournamentPayoutModal.TournamentPayoutModal_C
// Size: 0x4d0 (Inherited: 0x428)
struct UTournamentPayoutModal_C : UFortTournamentPayoutModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x428(0x08)
	struct UWidgetAnimation* Intro; // 0x430(0x08)
	struct UEventsSimpleButton_C* BackButton; // 0x438(0x08)
	struct UCloseButton_C* CloseButton; // 0x440(0x08)
	struct UCommonBorder* CommonBorder_ContainerBG; // 0x448(0x08)
	struct UCommonBorder* CommonBorder_OptionsBarBG; // 0x450(0x08)
	struct UCommonHierarchicalScrollBox* ; // 0x458(0x08)
	struct UCommonTextBlock* ; // 0x460(0x08)
	struct UCommonWidgetSwitcherLegacy* ; // 0x468(0x08)
	struct UVerticalBox* Content_LeaderboardEntries; // 0x470(0x08)
	struct UCommonBorder* Content_NoLeaderboardEntries; // 0x478(0x08)
	struct UEventLeaderboardEventDetails_C* EventLeaderboardEventDetails; // 0x480(0x08)
	struct UEventLeaderboardHeader_C* EventLeaderboardHeaderDetails; // 0x488(0x08)
	struct USafeZone* ; // 0x490(0x08)
	struct USizeBox* SizeBox_TopContainer; // 0x498(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_LeaderboardEntries; // 0x4a0(0x08)
	struct UCommonTextBlock* Text_NoLeaderboardEntries; // 0x4a8(0x08)
	struct FMulticastInlineDelegate CallEventBack; // 0x4b0(0x10)
	struct FMulticastInlineDelegate NoPayout; // 0x4c0(0x10)

	void EmptyFunction(bool& Handled); // Function TournamentPayoutModal.TournamentPayoutModal_C.EmptyFunction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void NotifyNoPayouts(); // Function TournamentPayoutModal.TournamentPayoutModal_C.NotifyNoPayouts // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TournamentPayoutModal.TournamentPayoutModal_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda05cc
	void Init(struct FString EventWindowId, struct FString TournamentId); // Function TournamentPayoutModal.TournamentPayoutModal_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void EventIntro(); // Function TournamentPayoutModal.TournamentPayoutModal_C.EventIntro // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void EventColorize(struct FFortTournamentDisplayInfo TournamentDisplayInfo); // Function TournamentPayoutModal.TournamentPayoutModal_C.EventColorize // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TournamentPayoutModal.TournamentPayoutModal_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_TournamentPayoutModal(int32_t EntryPoint); // Function TournamentPayoutModal.TournamentPayoutModal_C.ExecuteUbergraph_TournamentPayoutModal // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
	void NoPayout__DelegateSignature(); // Function TournamentPayoutModal.TournamentPayoutModal_C.NoPayout__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void CallEventBack__DelegateSignature(); // Function TournamentPayoutModal.TournamentPayoutModal_C.CallEventBack__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
};

