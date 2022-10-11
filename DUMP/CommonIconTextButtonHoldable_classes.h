// WidgetBlueprintGeneratedClass CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C
// Size: 0x1518 (Inherited: 0x10b0)
struct UCommonIconTextButtonHoldable_C : UFortHoldableButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10b0(0x08)
	struct UWidgetAnimation* HoldProgress; // 0x10b8(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0x10c0(0x08)
	struct UBorder* ContentBorder; // 0x10c8(0x08)
	struct UHorizontalBox* HorizontalBox_ButtonContent; // 0x10d0(0x08)
	struct UImage* LeftSideImage; // 0x10d8(0x08)
	struct UOverlay* Overlay_Input_Keybind; // 0x10e0(0x08)
	struct UFortMobileImage* PressOrClickIcon; // 0x10e8(0x08)
	struct UImage* ProgressCircle; // 0x10f0(0x08)
	struct UNamedSlot* RightExtraContentSlot; // 0x10f8(0x08)
	struct USpacer* Spacer_EvenSize; // 0x1100(0x08)
	struct USpacer* Spacer_InputAction; // 0x1108(0x08)
	struct UCommonTextBlock* TextBlock_HoldPrompt; // 0x1110(0x08)
	struct UVerticalBox* VerticalBox_Text; // 0x1118(0x08)
	struct FText ButtonText; // 0x1120(0x18)
	char pad_1138[0x8]; // 0x1138(0x08)
	struct FSlateBrush IconBrush; // 0x1140(0xc0)
	struct UCommonButtonStyle* ControllerInputStyle; // 0x1200(0x08)
	struct UCommonButtonStyle* MouseKeyboardStyle; // 0x1208(0x08)
	enum class EHorizontalAlignment ContentAlignment; // 0x1210(0x01)
	bool bMouseKeyboardStyleSet; // 0x1211(0x01)
	char pad_1212[0x6]; // 0x1212(0x06)
	struct FText OverrideButtonText; // 0x1218(0x18)
	enum class ETextJustify ButtonTextJustification; // 0x1230(0x01)
	bool bDisplayAllCaps; // 0x1231(0x01)
	char pad_1232[0x6]; // 0x1232(0x06)
	double PressProgress; // 0x1238(0x08)
	bool bIgnoreInputActionWidgetText; // 0x1240(0x01)
	char pad_1241[0x7]; // 0x1241(0x07)
	struct FMulticastInlineDelegate FocusChangedEvent; // 0x1248(0x10)
	char pad_1258[0x8]; // 0x1258(0x08)
	struct FProgressBarStyle ProgressBarStyle; // 0x1260(0x260)
	struct FMulticastInlineDelegate Hold Completed; // 0x14c0(0x10)
	double HoldPromptPadding; // 0x14d0(0x08)
	bool NewInputActionLayout; // 0x14d8(0x01)
	char pad_14D9[0x7]; // 0x14d9(0x07)
	struct UMaterialInterface* EmptyProgressMat; // 0x14e0(0x08)
	bool NewInputActionLayoutForMouse; // 0x14e8(0x01)
	bool ForceDefaultInputActionGamepadAnim; // 0x14e9(0x01)
	char pad_14EA[0x6]; // 0x14ea(0x06)
	struct USoundBase* HoldCompleteSound; // 0x14f0(0x08)
	struct USoundBase* HoldReleasedSound; // 0x14f8(0x08)
	struct USoundBase* HoldSound; // 0x1500(0x08)
	struct UAudioComponent* HoldSoundRef; // 0x1508(0x08)
	struct UCommonTextStyle* SubTextHoverStyle; // 0x1510(0x08)

	void Update Input Hint Visibility(bool ForceVisible); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.Update Input Hint Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Update Input Type(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.Update Input Type // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void GetUseNewInputActionLayout(bool& UseNewLayout); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.GetUseNewInputActionLayout // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda05cc
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void GetPressProgress(double& Progress); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.GetPressProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Get Dynamic Material(struct UMaterialInstanceDynamic*& Ret Material); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.Get Dynamic Material // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ShowIcon(bool bShouldShow); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.ShowIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetTextInternal(struct FText InButtonText); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.SetTextInternal // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetInitialMouseKeyboardStyle(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.SetInitialMouseKeyboardStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateTextStyle(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.UpdateTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetContentAlignment(enum class EHorizontalAlignment ContentAlignment); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.SetContentAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateContentAlignment(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.UpdateContentAlignment // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetMouseKeyboardStyle(struct UCommonButtonStyle* ControllerInputStyle); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.SetMouseKeyboardStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateStyle(bool UsingGamepad); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.UpdateStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateText(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.UpdateText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetControllerStyle(struct UCommonButtonStyle* ControllerInputStyle); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.SetControllerStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateTextAndStyle(enum class ECommonInputType InputType); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.UpdateTextAndStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void InitializeButton(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.InitializeButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Set Icon(struct FSlateBrush IconBrush); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.Set Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Set Text(struct FText ButtonText); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.Set Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.SetTabLabelInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.OnTriggeredInputActionChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnActionProgress(float HeldPercent); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.OnActionProgress // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnActionComplete(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.OnActionComplete // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnCurrentTextStyleChanged(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void Destruct(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnTriggeringInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.OnTriggeringInputActionChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHoldStarted(float HoldPercentage, bool bInUseSecondaryHoldAnimation); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.BP_OnHoldStarted // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHoldEnded(float HoldPercentage, bool bInUseSecondaryHoldAnimation); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.BP_OnHoldEnded // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHoldReset(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.BP_OnHoldReset // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHoldCompleted(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.BP_OnHoldCompleted // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnHoldRequiredChanged(bool bHoldRequired); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.OnHoldRequiredChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnSelected(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnDisabled(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void Event On Input Type Updated(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.Event On Input Type Updated // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnProgressAnimationFinished(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.OnProgressAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnProgressAnimationStarted(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.OnProgressAnimationStarted // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnEnabled(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.BP_OnEnabled // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_CommonIconTextButtonHoldable(int32_t EntryPoint); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.ExecuteUbergraph_CommonIconTextButtonHoldable // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
	void Hold Completed__DelegateSignature(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.Hold Completed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void FocusChangedEvent__DelegateSignature(bool HasFocus); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.FocusChangedEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
};

