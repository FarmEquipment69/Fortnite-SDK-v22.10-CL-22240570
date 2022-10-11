// WidgetBlueprintGeneratedClass ActivityBrowserSoloButton.ActivityBrowserSoloButton_C
// Size: 0x1218 (Inherited: 0x1160)
struct UActivityBrowserSoloButton_C : UFortActivityBrowserSoloButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1160(0x08)
	struct UWidgetAnimation* Pressed; // 0x1168(0x08)
	struct UWidgetAnimation* Hover; // 0x1170(0x08)
	struct UBorder* ButtonMaterialBorder; // 0x1178(0x08)
	struct UBorder* DynamicPaddingBorder; // 0x1180(0x08)
	struct USizeBox* MinSizesSB; // 0x1188(0x08)
	double TextShearX; // 0x1190(0x08)
	double TextShearY; // 0x1198(0x08)
	struct FMargin TextPadding; // 0x11a0(0x10)
	bool IsDisabled; // 0x11b0(0x01)
	char pad_11B1[0x7]; // 0x11b1(0x07)
	struct UMaterialInterface* ButtonMaterial; // 0x11b8(0x08)
	double ButtonSharpnessX; // 0x11c0(0x08)
	double ButtonSharpnessY; // 0x11c8(0x08)
	double UseBoxScalingX; // 0x11d0(0x08)
	double UseBoxScalingY; // 0x11d8(0x08)
	double ButtonBoxScaleSizeX; // 0x11e0(0x08)
	double ButtonBoxScaleSizeY; // 0x11e8(0x08)
	struct FName DisabledParamName; // 0x11f0(0x04)
	struct FName SharpnessVParamName; // 0x11f4(0x04)
	struct FName SharpnessUParamName; // 0x11f8(0x04)
	struct FName UseBoxScaleUParamName; // 0x11fc(0x04)
	struct FName UseBoxScaleVParamName; // 0x1200(0x04)
	bool HideButtonBackingOnGamepad; // 0x1204(0x01)
	bool ShouldPlayReversed; // 0x1205(0x01)
	char pad_1206[0x2]; // 0x1206(0x02)
	double HoverAnimateVar; // 0x1208(0x08)
	double PressedAnimateVar; // 0x1210(0x08)

	void SetPressedAnimateVar(double NewValue); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.SetPressedAnimateVar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetHoverAnimateVar(double NewValue); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.SetHoverAnimateVar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void MakeButtonBrush(struct UObject* ResourceObject, struct FSlateBrush& SlateBrush); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.MakeButtonBrush // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Toggle Mobile Overrides(bool bApplyMobileOverrides); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.Toggle Mobile Overrides // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateStylingOnInputType(enum class ECommonInputType Index); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.UpdateStylingOnInputType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ResetMaterials(); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.ResetMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ResetFontMaterial(); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.ResetFontMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetButtonMaterial(); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.SetButtonMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetText(struct FText Text); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetTextStyle(); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.SetTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Finished_3B04A1D04A2128E7C8B3D5BC22792871(); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.Finished_3B04A1D04A2128E7C8B3D5BC22792871 // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnClicked(); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnDisabled(); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnEnabled(); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.BP_OnEnabled // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnSelected(); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnDeselected(); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void EventOnInputMethodChanged(enum class ECommonInputType bNewInputType); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.EventOnInputMethodChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void Destruct(); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnVisibilityChange(enum class ESlateVisibility InVisibility); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.OnVisibilityChange // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_ActivityBrowserSoloButton(int32_t EntryPoint); // Function ActivityBrowserSoloButton.ActivityBrowserSoloButton_C.ExecuteUbergraph_ActivityBrowserSoloButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

