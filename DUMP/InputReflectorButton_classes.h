// WidgetBlueprintGeneratedClass InputReflectorButton.InputReflectorButton_C
// Size: 0x11b9 (Inherited: 0x1080)
struct UInputReflectorButton_C : UCommonPopupButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1080(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0x1088(0x08)
	struct UBorder* ContentBorder; // 0x1090(0x08)
	struct UImage* LeftSideImage; // 0x1098(0x08)
	struct UNamedSlot* RightExtraContentSlot; // 0x10a0(0x08)
	struct FText ButtonText; // 0x10a8(0x18)
	struct FSlateBrush IconBrush; // 0x10c0(0xc0)
	struct UCommonButtonStyle* ControllerInputStyle; // 0x1180(0x08)
	struct UCommonButtonStyle* MouseKeyboardStyle; // 0x1188(0x08)
	struct UCommonButtonStyle* MobileInputStyle; // 0x1190(0x08)
	enum class EHorizontalAlignment ContentAlignment; // 0x1198(0x01)
	bool bMouseKeyboardStyleSet; // 0x1199(0x01)
	char pad_119A[0x6]; // 0x119a(0x06)
	struct FText OverrideButtonText; // 0x11a0(0x18)
	bool bDisplayAllCaps; // 0x11b8(0x01)

	void SetMobileStyle(struct UCommonButtonStyle* MobileInputStyle); // Function InputReflectorButton.InputReflectorButton_C.SetMobileStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ShowIcon(bool bShouldShow); // Function InputReflectorButton.InputReflectorButton_C.ShowIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetTextInternal(struct FText InButtonText); // Function InputReflectorButton.InputReflectorButton_C.SetTextInternal // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetInitialMouseKeyboardStyle(); // Function InputReflectorButton.InputReflectorButton_C.SetInitialMouseKeyboardStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateTextStyle(); // Function InputReflectorButton.InputReflectorButton_C.UpdateTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetContentAlignment(enum class EHorizontalAlignment ContentAlignment); // Function InputReflectorButton.InputReflectorButton_C.SetContentAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateContentAlignment(); // Function InputReflectorButton.InputReflectorButton_C.UpdateContentAlignment // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetMouseKeyboardStyle(struct UCommonButtonStyle* ControllerInputStyle); // Function InputReflectorButton.InputReflectorButton_C.SetMouseKeyboardStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateStyle(enum class ECommonInputType UsingGamepad); // Function InputReflectorButton.InputReflectorButton_C.UpdateStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateText(); // Function InputReflectorButton.InputReflectorButton_C.UpdateText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetControllerStyle(struct UCommonButtonStyle* ControllerInputStyle); // Function InputReflectorButton.InputReflectorButton_C.SetControllerStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateTextAndStyle(enum class ECommonInputType CommonInputType); // Function InputReflectorButton.InputReflectorButton_C.UpdateTextAndStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void InitializeButton(); // Function InputReflectorButton.InputReflectorButton_C.InitializeButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Set Icon(struct FSlateBrush IconBrush); // Function InputReflectorButton.InputReflectorButton_C.Set Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Set Text(struct FText ButtonText); // Function InputReflectorButton.InputReflectorButton_C.Set Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnCurrentTextStyleChanged(); // Function InputReflectorButton.InputReflectorButton_C.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function InputReflectorButton.InputReflectorButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // Function InputReflectorButton.InputReflectorButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature // (BlueprintEvent) // @ game+0xda05cc
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // Function InputReflectorButton.InputReflectorButton_C.OnTriggeredInputActionChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnActionProgress(float HeldPercent); // Function InputReflectorButton.InputReflectorButton_C.OnActionProgress // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnActionComplete(); // Function InputReflectorButton.InputReflectorButton_C.OnActionComplete // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function InputReflectorButton.InputReflectorButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void Destruct(); // Function InputReflectorButton.InputReflectorButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_InputReflectorButton(int32_t EntryPoint); // Function InputReflectorButton.InputReflectorButton_C.ExecuteUbergraph_InputReflectorButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

