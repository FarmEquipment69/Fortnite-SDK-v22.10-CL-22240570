// WidgetBlueprintGeneratedClass AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C
// Size: 0x10d0 (Inherited: 0x1070)
struct UAthenaMatchmakingModeButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1070(0x08)
	struct UWidgetAnimation* OnHover; // 0x1078(0x08)
	struct UWidgetAnimation* ConfirmSelection; // 0x1080(0x08)
	struct UImage* ConfirmSelectionFlash; // 0x1088(0x08)
	struct UImage* ConfirmSelectionShine; // 0x1090(0x08)
	struct UImage* GameModeIcon; // 0x1098(0x08)
	struct UCommonTextBlock* GameModeName; // 0x10a0(0x08)
	struct UImage* LTMModeSubIcon; // 0x10a8(0x08)
	struct UCommonTextBlock* SubGameModeName; // 0x10b0(0x08)
	struct UHorizontalBox* SubGameModeNameHB; // 0x10b8(0x08)
	bool FillSquad; // 0x10c0(0x01)
	char pad_10C1[0x7]; // 0x10c1(0x07)
	struct UFortPlaylistAthena* PlaylistData; // 0x10c8(0x08)

	void RefreshLimitedPoolWarning(bool IsCrossplayEnabled); // Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.RefreshLimitedPoolWarning // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void RefreshFillText(); // Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.RefreshFillText // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetSquadFillText(bool bFill); // Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.SetSquadFillText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void PlaylistChanged(struct UFortPlaylistAthena* NewPlaylist, struct FText OverrideName); // Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.PlaylistChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo); // Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.SetTabLabelInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_AthenaMatchmakingModeButton(int32_t EntryPoint); // Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.ExecuteUbergraph_AthenaMatchmakingModeButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

