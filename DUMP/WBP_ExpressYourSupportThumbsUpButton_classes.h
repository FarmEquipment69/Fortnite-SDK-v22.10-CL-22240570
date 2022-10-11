// WidgetBlueprintGeneratedClass WBP_ExpressYourSupportThumbsUpButton.WBP_ExpressYourSupportThumbsUpButton_C
// Size: 0x1110 (Inherited: 0x10a0)
struct UWBP_ExpressYourSupportThumbsUpButton_C : UFortExpressYourSupportThumbsUpButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10a0(0x08)
	struct UWidgetAnimation* UnhoveredToggleOff; // 0x10a8(0x08)
	struct UWidgetAnimation* UnhoveredToggleOn; // 0x10b0(0x08)
	struct UWidgetAnimation* UnhoverToggledOff; // 0x10b8(0x08)
	struct UWidgetAnimation* HoverToggledOff; // 0x10c0(0x08)
	struct UWidgetAnimation* UnhoverToggledOn; // 0x10c8(0x08)
	struct UWidgetAnimation* HoverToggledOn; // 0x10d0(0x08)
	struct UWidgetAnimation* HoveredToggleOff; // 0x10d8(0x08)
	struct UWidgetAnimation* HoveredToggleOn; // 0x10e0(0x08)
	struct UBorder* Border_Background; // 0x10e8(0x08)
	struct UImage* Image_FavoriteIcon; // 0x10f0(0x08)
	struct UImage* Image_Pulse; // 0x10f8(0x08)
	struct USizeBox* ; // 0x1100(0x08)
	struct UWidgetSwitcher* TextSwitcher; // 0x1108(0x08)

	void StopTogglingAnimations(); // Function WBP_ExpressYourSupportThumbsUpButton.WBP_ExpressYourSupportThumbsUpButton_C.StopTogglingAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void StopHoveringAnimations(); // Function WBP_ExpressYourSupportThumbsUpButton.WBP_ExpressYourSupportThumbsUpButton_C.StopHoveringAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetButtonHeight(bool IsTouch); // Function WBP_ExpressYourSupportThumbsUpButton.WBP_ExpressYourSupportThumbsUpButton_C.SetButtonHeight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function WBP_ExpressYourSupportThumbsUpButton.WBP_ExpressYourSupportThumbsUpButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function WBP_ExpressYourSupportThumbsUpButton.WBP_ExpressYourSupportThumbsUpButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnSelected(); // Function WBP_ExpressYourSupportThumbsUpButton.WBP_ExpressYourSupportThumbsUpButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnDeselected(); // Function WBP_ExpressYourSupportThumbsUpButton.WBP_ExpressYourSupportThumbsUpButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function WBP_ExpressYourSupportThumbsUpButton.WBP_ExpressYourSupportThumbsUpButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_WBP_ExpressYourSupportThumbsUpButton(int32_t EntryPoint); // Function WBP_ExpressYourSupportThumbsUpButton.WBP_ExpressYourSupportThumbsUpButton_C.ExecuteUbergraph_WBP_ExpressYourSupportThumbsUpButton // (Final|UbergraphFunction) // @ game+0xda05cc
};

