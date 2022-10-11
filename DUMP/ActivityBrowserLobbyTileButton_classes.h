// WidgetBlueprintGeneratedClass ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C
// Size: 0x1178 (Inherited: 0x10e0)
struct UActivityBrowserLobbyTileButton_C : UFortActivityLobbyTile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10e0(0x08)
	struct UWidgetAnimation* SelectedMatchmaking; // 0x10e8(0x08)
	struct UWidgetAnimation* Hover; // 0x10f0(0x08)
	struct UHorizontalBox* ButtonPromptHB; // 0x10f8(0x08)
	struct UImage* Image_KeyArt; // 0x1100(0x08)
	struct UBorder* Panel_ChangeMode; // 0x1108(0x08)
	struct UScaleBox* ; // 0x1110(0x08)
	struct UCommonTextBlock* Text_ChangeModeLabel; // 0x1118(0x08)
	struct USizeBox* TileSize; // 0x1120(0x08)
	bool IsDisabled; // 0x1128(0x01)
	char pad_1129[0x3]; // 0x1129(0x03)
	struct FName KeyArtParameter; // 0x112c(0x04)
	struct FName MissingArtParameter; // 0x1130(0x04)
	char pad_1134[0x4]; // 0x1134(0x04)
	struct FMulticastInlineDelegate OnActivityChanged; // 0x1138(0x10)
	struct FMulticastInlineDelegate OnShowChildModeChangedNotification; // 0x1148(0x10)
	struct FMulticastInlineDelegate OnShowChildModeFirstTimeNotification; // 0x1158(0x10)
	struct FMulticastInlineDelegate OnHideChildModeFirstTimeNotification; // 0x1168(0x10)

	void OnUnSelectedMatchmakingCanceled(); // Function ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C.OnUnSelectedMatchmakingCanceled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Finished_839C1612477AFCFDCF8BB89840A6FFE3(); // Function ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C.Finished_839C1612477AFCFDCF8BB89840A6FFE3 // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnPreviewImageChanged(bool bIsLoading, struct UTexture* Texture); // Function ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C.OnPreviewImageChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnSelectedMatchmaking(); // Function ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C.OnSelectedMatchmaking // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnDetailsUpdated(); // Function ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C.OnDetailsUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnShowChildActivityChangedNotification(struct FText& DisplayName); // Function ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C.OnShowChildActivityChangedNotification // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnShowChildActivityFirstTimeNotification(); // Function ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C.OnShowChildActivityFirstTimeNotification // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnHideChildActivityFirstTimeNotification(); // Function ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C.OnHideChildActivityFirstTimeNotification // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_ActivityBrowserLobbyTileButton(int32_t EntryPoint); // Function ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C.ExecuteUbergraph_ActivityBrowserLobbyTileButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
	void OnHideChildModeFirstTimeNotification__DelegateSignature(); // Function ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C.OnHideChildModeFirstTimeNotification__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnShowChildModeFirstTimeNotification__DelegateSignature(); // Function ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C.OnShowChildModeFirstTimeNotification__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnShowChildModeChangedNotification__DelegateSignature(struct FText DisplayName); // Function ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C.OnShowChildModeChangedNotification__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnActivityChanged__DelegateSignature(); // Function ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C.OnActivityChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
};

