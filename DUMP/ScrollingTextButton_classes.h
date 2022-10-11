// WidgetBlueprintGeneratedClass ScrollingTextButton.ScrollingTextButton_C
// Size: 0x1182 (Inherited: 0x1070)
struct UScrollingTextButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1070(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0x1078(0x08)
	struct UBorder* ContentBorder; // 0x1080(0x08)
	struct UImage* LeftSideImage; // 0x1088(0x08)
	struct FText ButtonText; // 0x1090(0x18)
	char pad_10A8[0x8]; // 0x10a8(0x08)
	struct FSlateBrush IconBrush; // 0x10b0(0xc0)
	struct UCommonButtonStyle* ControllerInputStyle; // 0x1170(0x08)
	struct UCommonButtonStyle* MouseKeyboardStyle; // 0x1178(0x08)
	enum class EHorizontalAlignment ContentAlignment; // 0x1180(0x01)
	bool bMouseKeyboardStyleSet; // 0x1181(0x01)

	void SetInitialMouseKeyboardStyle(); // Function ScrollingTextButton.ScrollingTextButton_C.SetInitialMouseKeyboardStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateTextStyle(); // Function ScrollingTextButton.ScrollingTextButton_C.UpdateTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetContentAlignment(enum class EHorizontalAlignment ContentAlignment); // Function ScrollingTextButton.ScrollingTextButton_C.SetContentAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateContentAlignment(); // Function ScrollingTextButton.ScrollingTextButton_C.UpdateContentAlignment // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetMouseKeyboardStyle(struct UCommonButtonStyle* ControllerInputStyle); // Function ScrollingTextButton.ScrollingTextButton_C.SetMouseKeyboardStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateStyle(bool UsingGamepad); // Function ScrollingTextButton.ScrollingTextButton_C.UpdateStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateText(); // Function ScrollingTextButton.ScrollingTextButton_C.UpdateText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetControllerStyle(struct UCommonButtonStyle* ControllerInputStyle); // Function ScrollingTextButton.ScrollingTextButton_C.SetControllerStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateTextAndStyle(bool bUsingGamepad); // Function ScrollingTextButton.ScrollingTextButton_C.UpdateTextAndStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void InitializeButton(); // Function ScrollingTextButton.ScrollingTextButton_C.InitializeButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Set Icon(struct FSlateBrush IconBrush); // Function ScrollingTextButton.ScrollingTextButton_C.Set Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Set Text(struct FText ButtonText); // Function ScrollingTextButton.ScrollingTextButton_C.Set Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnCurrentTextStyleChanged(); // Function ScrollingTextButton.ScrollingTextButton_C.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function ScrollingTextButton.ScrollingTextButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo); // Function ScrollingTextButton.ScrollingTextButton_C.SetTabLabelInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // Function ScrollingTextButton.ScrollingTextButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature // (BlueprintEvent) // @ game+0xda05cc
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // Function ScrollingTextButton.ScrollingTextButton_C.OnTriggeredInputActionChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnActionProgress(float HeldPercent); // Function ScrollingTextButton.ScrollingTextButton_C.OnActionProgress // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnActionComplete(); // Function ScrollingTextButton.ScrollingTextButton_C.OnActionComplete // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function ScrollingTextButton.ScrollingTextButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_ScrollingTextButton(int32_t EntryPoint); // Function ScrollingTextButton.ScrollingTextButton_C.ExecuteUbergraph_ScrollingTextButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

