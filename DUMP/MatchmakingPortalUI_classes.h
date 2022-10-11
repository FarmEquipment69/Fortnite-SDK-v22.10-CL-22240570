// Class MatchmakingPortalUI.FortMatchmakingPortalModal
// Size: 0x4f0 (Inherited: 0x448)
struct UFortMatchmakingPortalModal : UFortActivityView {
	char pad_448[0x48]; // 0x448(0x48)
	struct TArray<struct FString> XpTagMnemonicWhitelist; // 0x490(0x10)
	struct UCommonRichTextBlock* Text_ActivityOrigin; // 0x4a0(0x08)
	struct UCommonRichTextBlock* Text_LinkCode; // 0x4a8(0x08)
	struct UCommonTextBlock* Text_ActivityName; // 0x4b0(0x08)
	struct UCommonTextBlock* Text_ActivityDescription; // 0x4b8(0x08)
	struct UScrollBox* ScrollBox_ActivityDescription; // 0x4c0(0x08)
	struct UDynamicEntryBox* EntryBox_ActivityTags; // 0x4c8(0x08)
	struct UCommonButtonBase* Button_AcceptPublic; // 0x4d0(0x08)
	struct UCommonButtonBase* Button_AcceptPrivate; // 0x4d8(0x08)
	struct UCommonButtonBase* Button_Favorite; // 0x4e0(0x08)
	struct UFortModalBackground* ModalBackground; // 0x4e8(0x08)

	bool IsDownloadRequired(); // Function MatchmakingPortalUI.FortMatchmakingPortalModal.IsDownloadRequired // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6916404
	enum class EFortInvalidActivityReason GetInvalidActivityReason(); // Function MatchmakingPortalUI.FortMatchmakingPortalModal.GetInvalidActivityReason // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x69162b0
	struct FText GetCreatorTextFormat(struct FText& CreatorName); // Function MatchmakingPortalUI.FortMatchmakingPortalModal.GetCreatorTextFormat // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	struct TArray<struct FString> GetContentWarningStrings(); // Function MatchmakingPortalUI.FortMatchmakingPortalModal.GetContentWarningStrings // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x691622c
	struct FText GetCodeTextFormat(struct FText& IslandCode); // Function MatchmakingPortalUI.FortMatchmakingPortalModal.GetCodeTextFormat // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
};

// Class MatchmakingPortalUI.FortMatchmakingPortalPopup
// Size: 0x4c8 (Inherited: 0x3f8)
struct UFortMatchmakingPortalPopup : UFortPortalHUDDetails {
	char pad_3F8[0x10]; // 0x3f8(0x10)
	struct UFortGameActivity* CachedGameActivity; // 0x408(0x08)
	struct FMatchmakingPortalPopupData CachedIslandData; // 0x410(0x60)
	struct FVector WorldPointerLocation; // 0x470(0x18)
	struct FText CreatorNameTextFormat; // 0x488(0x18)
	struct TWeakObjectPtr<struct UHeaderDescriptionHUDComponent> CachedHUDComponent; // 0x4a0(0x08)
	struct UFortMatchmakingPortalModal* IslandModal; // 0x4a8(0x08)
	struct UCommonRichTextBlock* RichText_CreatorName; // 0x4b0(0x08)
	struct UCommonTextBlock* Text_IslandName; // 0x4b8(0x08)
	struct UDynamicEntryBox* EntryBox_ActivityTags; // 0x4c0(0x08)

	void OnShowPortalPopup(bool bShow, bool bAnimate); // Function MatchmakingPortalUI.FortMatchmakingPortalPopup.OnShowPortalPopup // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnPlayerCanInteractChanged(bool bPlayerCanInteract); // Function MatchmakingPortalUI.FortMatchmakingPortalPopup.OnPlayerCanInteractChanged // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void HandleWidgetUpdate(); // Function MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleWidgetUpdate // (Final|Native|Private) // @ game+0x4c7df00
	void HandleStartedRespawn(struct AFortPlayerControllerZone* PlayerController); // Function MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleStartedRespawn // (Final|Native|Private) // @ game+0x4c7de60
	void HandlePortalInteract(); // Function MatchmakingPortalUI.FortMatchmakingPortalPopup.HandlePortalInteract // (Final|Native|Public|BlueprintCallable) // @ game+0x4c7de40
	void HandleLoadScreenChanged(struct AFortPlayerControllerAthena* PlayerController, bool bLoadScreenEnabled, struct FText HUDReason); // Function MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleLoadScreenChanged // (Final|Native|Private) // @ game+0x69162dc
	void HandleHUDShow(bool bShow, bool bShouldAnimate); // Function MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleHUDShow // (Final|Native|Private) // @ game+0x4c7dd30
	bool GetIslandData(struct FMatchmakingPortalPopupData& OutIslandData, struct UHeaderDescriptionHUDComponent* HUDComponent); // Function MatchmakingPortalUI.FortMatchmakingPortalPopup.GetIslandData // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
};

// Class MatchmakingPortalUI.FortModalBackground
// Size: 0x430 (Inherited: 0x3f8)
struct UFortModalBackground : UCommonActivatableWidget {
	char pad_3F8[0x20]; // 0x3f8(0x20)
	struct UCommonButtonBase* Button_Back; // 0x418(0x08)
	struct UCommonButtonBase* Button_BackBoard; // 0x420(0x08)
	struct UCommonButtonBase* Button_MobileClose; // 0x428(0x08)

	void OnPreviewImageChanged(bool bIsLoading, struct UTexture* InTexture); // Function MatchmakingPortalUI.FortModalBackground.OnPreviewImageChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
};

