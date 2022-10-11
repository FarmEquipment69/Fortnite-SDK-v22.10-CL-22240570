// WidgetBlueprintGeneratedClass WBP_ExpressYourSupportFavoriteButton.WBP_ExpressYourSupportFavoriteButton_C
// Size: 0x10f8 (Inherited: 0x1090)
struct UWBP_ExpressYourSupportFavoriteButton_C : UFortExpressYourSupportFavoriteButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1090(0x08)
	struct UWidgetAnimation* UnhoveredToggleOff; // 0x1098(0x08)
	struct UWidgetAnimation* UnhoveredToggleOn; // 0x10a0(0x08)
	struct UWidgetAnimation* UnhoverToggledOff; // 0x10a8(0x08)
	struct UWidgetAnimation* HoverToggledOff; // 0x10b0(0x08)
	struct UWidgetAnimation* UnhoverToggledOn; // 0x10b8(0x08)
	struct UWidgetAnimation* HoverToggledOn; // 0x10c0(0x08)
	struct UWidgetAnimation* HoveredToggleOff; // 0x10c8(0x08)
	struct UWidgetAnimation* HoveredToggleOn; // 0x10d0(0x08)
	struct UBorder* Border_Background; // 0x10d8(0x08)
	struct UImage* Image_FavoriteIcon; // 0x10e0(0x08)
	struct UImage* Image_Pulse; // 0x10e8(0x08)
	struct USizeBox* ; // 0x10f0(0x08)

	void StopTogglingAnimations(); // Function WBP_ExpressYourSupportFavoriteButton.WBP_ExpressYourSupportFavoriteButton_C.StopTogglingAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void StopHoveringAnimations(); // Function WBP_ExpressYourSupportFavoriteButton.WBP_ExpressYourSupportFavoriteButton_C.StopHoveringAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetButtonHeight(bool IsTouch); // Function WBP_ExpressYourSupportFavoriteButton.WBP_ExpressYourSupportFavoriteButton_C.SetButtonHeight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function WBP_ExpressYourSupportFavoriteButton.WBP_ExpressYourSupportFavoriteButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function WBP_ExpressYourSupportFavoriteButton.WBP_ExpressYourSupportFavoriteButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnSelected(); // Function WBP_ExpressYourSupportFavoriteButton.WBP_ExpressYourSupportFavoriteButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnDeselected(); // Function WBP_ExpressYourSupportFavoriteButton.WBP_ExpressYourSupportFavoriteButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function WBP_ExpressYourSupportFavoriteButton.WBP_ExpressYourSupportFavoriteButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_WBP_ExpressYourSupportFavoriteButton(int32_t EntryPoint); // Function WBP_ExpressYourSupportFavoriteButton.WBP_ExpressYourSupportFavoriteButton_C.ExecuteUbergraph_WBP_ExpressYourSupportFavoriteButton // (Final|UbergraphFunction) // @ game+0xda05cc
};

