// WidgetBlueprintGeneratedClass ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C
// Size: 0x1103 (Inherited: 0x1040)
struct UActivityBrowserModeSetListEntry_C : UFortActivityBrowserModeSetListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1040(0x08)
	struct UWidgetAnimation* SetDisabledColoration; // 0x1048(0x08)
	struct UWidgetAnimation* OnHoverUnhoverRehover; // 0x1050(0x08)
	struct UWidgetAnimation* OnImageLoaded; // 0x1058(0x08)
	struct UCategoryButton_C* CategoryButton; // 0x1060(0x08)
	struct UCommonTextBlock* DisabledWarningMessage; // 0x1068(0x08)
	struct UImage* Image_KeyArt; // 0x1070(0x08)
	struct UOverlay* Ovr_Primary; // 0x1078(0x08)
	struct UOverlay* OvrDisabledWarning; // 0x1080(0x08)
	struct USizeBox* SizeBox_Primary; // 0x1088(0x08)
	struct FName KeyArtParameter; // 0x1090(0x04)
	struct FName MissingArtParameter; // 0x1094(0x04)
	struct FName ImageScaleAddParameter; // 0x1098(0x04)
	struct FName HasFavoriteButtonParameter; // 0x109c(0x04)
	struct FName HasDetailsButtonParameter; // 0x10a0(0x04)
	struct FName IsFavoritedParameter; // 0x10a4(0x04)
	bool IsKeyArtValid; // 0x10a8(0x01)
	char pad_10A9[0x7]; // 0x10a9(0x07)
	struct UTexture* DefaultImage; // 0x10b0(0x08)
	double DisabledClickDuration; // 0x10b8(0x08)
	bool IsActivityValid; // 0x10c0(0x01)
	char pad_10C1[0x7]; // 0x10c1(0x07)
	struct FVector2D TileSize; // 0x10c8(0x10)
	struct UMaterialInstance* DefaultMaterial; // 0x10d8(0x08)
	struct UMaterialInstance* RequiresPurchaseMaterial; // 0x10e0(0x08)
	struct FName TextHoverParameter; // 0x10e8(0x04)
	struct FName FrameBorderBrightParameter; // 0x10ec(0x04)
	struct FName FrameBorderMidParameter; // 0x10f0(0x04)
	struct FName TopBannerParameter; // 0x10f4(0x04)
	struct FName DesaturateAndDarkenParam; // 0x10f8(0x04)
	struct FName IsDisabledFrameParam; // 0x10fc(0x04)
	bool IsInHoveredState; // 0x1100(0x01)
	bool Pad Left; // 0x1101(0x01)
	bool Pad Right; // 0x1102(0x01)

	void ResetSetDisabledColorationAnimation(); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.ResetSetDisabledColorationAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void RefreshDisabledState(); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.RefreshDisabledState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnPreviewImageChanged(bool bIsLoading, struct UTexture* Texture); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.OnPreviewImageChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnActivityNameSet(struct FText& ActivityName); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.OnActivityNameSet // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnSavedActivitySet(bool IsSaved); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.OnSavedActivitySet // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void SetHoveredState(bool IsHovered); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.SetHoveredState // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnClicked(); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnPartySizeChanged(int32_t PartySize); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.OnPartySizeChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_ActivityBrowserModeSetListEntry(int32_t EntryPoint); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.ExecuteUbergraph_ActivityBrowserModeSetListEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

