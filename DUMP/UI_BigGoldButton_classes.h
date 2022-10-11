// WidgetBlueprintGeneratedClass UI_BigGoldButton.UI_BigGoldButton_C
// Size: 0x11e0 (Inherited: 0x10e0)
struct UUI_BigGoldButton_C : UBattlePassCrewPurchaseButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10e0(0x08)
	struct UWidgetAnimation* HoldProgress; // 0x10e8(0x08)
	struct UWidgetAnimation* Hover; // 0x10f0(0x08)
	struct UHorizontalBox* HBox_Empty; // 0x10f8(0x08)
	struct UImage* Image; // 0x1100(0x08)
	struct UImage* ; // 0x1108(0x08)
	struct UImage* ; // 0x1110(0x08)
	struct UImage* Image_Button; // 0x1118(0x08)
	struct UImage* Image_Button_Inner; // 0x1120(0x08)
	struct UImage* Image_CurrencyVBuck; // 0x1128(0x08)
	struct UImage* Image_Shadow; // 0x1130(0x08)
	struct UOverlay* Overlay_Hover; // 0x1138(0x08)
	struct UOverlay* Overlay_Input_Keybind; // 0x1140(0x08)
	struct UImage* PlayStationStoreLogo; // 0x1148(0x08)
	struct UFortMobileImage* PressOrClickIcon; // 0x1150(0x08)
	struct UImage* ProgressCircle; // 0x1158(0x08)
	struct USpacer* Spacer_Even; // 0x1160(0x08)
	struct USpacer* Spacer_InputAction; // 0x1168(0x08)
	struct UWidgetSwitcher* Switcher_Currency; // 0x1170(0x08)
	struct UCommonTextBlock* TextBlock_HoldPrompt; // 0x1178(0x08)
	struct UCommonVisibilityWidgetLegacy* Visibility_PlatformImage; // 0x1180(0x08)
	struct UCommonVisualAttachment* Visuals_Glows; // 0x1188(0x08)
	struct FText ButtonText; // 0x1190(0x18)
	bool Unskew; // 0x11a8(0x01)
	bool GlowsOff; // 0x11a9(0x01)
	bool HoverLightning; // 0x11aa(0x01)
	char pad_11AB[0x5]; // 0x11ab(0x05)
	struct USoundBase* PurchaseButtonHover; // 0x11b0(0x08)
	struct USoundBase* PurchaseButtonUnHover; // 0x11b8(0x08)
	struct USoundBase* PurchaseButtonHoldSound; // 0x11c0(0x08)
	struct USoundBase* PurchaseButtonReleaseSound; // 0x11c8(0x08)
	struct USoundBase* PurchaseButtonHoldComplete; // 0x11d0(0x08)
	struct UAudioComponent* PurchaseHoldComponent; // 0x11d8(0x08)

	void PlayHoldProgressAnimation(double HoldPercent); // Function UI_BigGoldButton.UI_BigGoldButton_C.PlayHoldProgressAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateAnimationBindings(); // Function UI_BigGoldButton.UI_BigGoldButton_C.UpdateAnimationBindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void EventHover(bool In); // Function UI_BigGoldButton.UI_BigGoldButton_C.EventHover // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function UI_BigGoldButton.UI_BigGoldButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function UI_BigGoldButton.UI_BigGoldButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnCurrencyUpdated(); // Function UI_BigGoldButton.UI_BigGoldButton_C.OnCurrencyUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function UI_BigGoldButton.UI_BigGoldButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHoldStarted(float HoldPercentage, bool bInUseSecondaryHoldAnimation); // Function UI_BigGoldButton.UI_BigGoldButton_C.BP_OnHoldStarted // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHoldEnded(float HoldPercentage, bool bInUseSecondaryHoldAnimation); // Function UI_BigGoldButton.UI_BigGoldButton_C.BP_OnHoldEnded // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function UI_BigGoldButton.UI_BigGoldButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHoldCompleted(); // Function UI_BigGoldButton.UI_BigGoldButton_C.BP_OnHoldCompleted // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHoldReset(); // Function UI_BigGoldButton.UI_BigGoldButton_C.BP_OnHoldReset // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnHoldRequiredChanged(bool bHoldRequired); // Function UI_BigGoldButton.UI_BigGoldButton_C.OnHoldRequiredChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void InputChanged(enum class ECommonInputType bNewInputType); // Function UI_BigGoldButton.UI_BigGoldButton_C.InputChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Destruct(); // Function UI_BigGoldButton.UI_BigGoldButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BindInputChanged(); // Function UI_BigGoldButton.UI_BigGoldButton_C.BindInputChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnDisabled(); // Function UI_BigGoldButton.UI_BigGoldButton_C.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnSelected(); // Function UI_BigGoldButton.UI_BigGoldButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnProgressAnimationStarted(); // Function UI_BigGoldButton.UI_BigGoldButton_C.OnProgressAnimationStarted // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnProgressAnimationFinished(); // Function UI_BigGoldButton.UI_BigGoldButton_C.OnProgressAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnActionProgressIncreased(float HoldPercentage); // Function UI_BigGoldButton.UI_BigGoldButton_C.BP_OnActionProgressIncreased // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnActionProgressDecreased(float HoldPercentage); // Function UI_BigGoldButton.UI_BigGoldButton_C.BP_OnActionProgressDecreased // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_UI_BigGoldButton(int32_t EntryPoint); // Function UI_BigGoldButton.UI_BigGoldButton_C.ExecuteUbergraph_UI_BigGoldButton // (Final|UbergraphFunction) // @ game+0xda05cc
};

