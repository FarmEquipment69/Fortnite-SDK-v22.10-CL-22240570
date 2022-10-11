// WidgetBlueprintGeneratedClass IconTextButtonHold.IconTextButtonHold_C
// Size: 0x1200 (Inherited: 0x1070)
struct UIconTextButtonHold_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1070(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0x1078(0x08)
	struct UBorder* ContentBorder; // 0x1080(0x08)
	struct UHorizontalBox* HorizontalBox_ButtonContent; // 0x1088(0x08)
	struct UImage* LeftSideImage; // 0x1090(0x08)
	struct UNamedSlot* RightExtraContentSlot; // 0x1098(0x08)
	struct FText ButtonText; // 0x10a0(0x18)
	char pad_10B8[0x8]; // 0x10b8(0x08)
	struct FSlateBrush IconBrush; // 0x10c0(0xc0)
	struct UCommonButtonStyle* ControllerInputStyle; // 0x1180(0x08)
	struct UCommonButtonStyle* MouseKeyboardStyle; // 0x1188(0x08)
	enum class EHorizontalAlignment ContentAlignment; // 0x1190(0x01)
	bool bMouseKeyboardStyleSet; // 0x1191(0x01)
	char pad_1192[0x6]; // 0x1192(0x06)
	struct FText OverrideButtonText; // 0x1198(0x18)
	enum class ETextJustify ButtonTextJustification; // 0x11b0(0x01)
	bool bDisplayAllCaps; // 0x11b1(0x01)
	char pad_11B2[0x6]; // 0x11b2(0x06)
	double PressProgress; // 0x11b8(0x08)
	bool bIgnoreInputActionWidgetText; // 0x11c0(0x01)
	char pad_11C1[0x7]; // 0x11c1(0x07)
	struct FMulticastInlineDelegate HoldActionStarted; // 0x11c8(0x10)
	bool bHolding; // 0x11d8(0x01)
	char pad_11D9[0x7]; // 0x11d9(0x07)
	struct FMulticastInlineDelegate HoldActionEnded; // 0x11e0(0x10)
	struct FMulticastInlineDelegate HoldActionCompleted; // 0x11f0(0x10)

	void GetPressProgress(double& Progress); // Function IconTextButtonHold.IconTextButtonHold_C.GetPressProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Get Dynamic Material(struct UMaterialInstanceDynamic*& Ret Material); // Function IconTextButtonHold.IconTextButtonHold_C.Get Dynamic Material // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ShowIcon(bool bShouldShow); // Function IconTextButtonHold.IconTextButtonHold_C.ShowIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetTextInternal(struct FText InButtonText); // Function IconTextButtonHold.IconTextButtonHold_C.SetTextInternal // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetInitialMouseKeyboardStyle(); // Function IconTextButtonHold.IconTextButtonHold_C.SetInitialMouseKeyboardStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateTextStyle(); // Function IconTextButtonHold.IconTextButtonHold_C.UpdateTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetContentAlignment(enum class EHorizontalAlignment ContentAlignment); // Function IconTextButtonHold.IconTextButtonHold_C.SetContentAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateContentAlignment(); // Function IconTextButtonHold.IconTextButtonHold_C.UpdateContentAlignment // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetMouseKeyboardStyle(struct UCommonButtonStyle* ControllerInputStyle); // Function IconTextButtonHold.IconTextButtonHold_C.SetMouseKeyboardStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateStyle(bool UsingGamepad); // Function IconTextButtonHold.IconTextButtonHold_C.UpdateStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateText(); // Function IconTextButtonHold.IconTextButtonHold_C.UpdateText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetControllerStyle(struct UCommonButtonStyle* ControllerInputStyle); // Function IconTextButtonHold.IconTextButtonHold_C.SetControllerStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateTextAndStyle(enum class ECommonInputType InputType); // Function IconTextButtonHold.IconTextButtonHold_C.UpdateTextAndStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void InitializeButton(); // Function IconTextButtonHold.IconTextButtonHold_C.InitializeButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Set Icon(struct FSlateBrush IconBrush); // Function IconTextButtonHold.IconTextButtonHold_C.Set Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Set Text(struct FText ButtonText); // Function IconTextButtonHold.IconTextButtonHold_C.Set Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnCurrentTextStyleChanged(); // Function IconTextButtonHold.IconTextButtonHold_C.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function IconTextButtonHold.IconTextButtonHold_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo); // Function IconTextButtonHold.IconTextButtonHold_C.SetTabLabelInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // Function IconTextButtonHold.IconTextButtonHold_C.OnTriggeredInputActionChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnActionProgress(float HeldPercent); // Function IconTextButtonHold.IconTextButtonHold_C.OnActionProgress // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnActionComplete(); // Function IconTextButtonHold.IconTextButtonHold_C.OnActionComplete // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function IconTextButtonHold.IconTextButtonHold_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void Destruct(); // Function IconTextButtonHold.IconTextButtonHold_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_IconTextButtonHold(int32_t EntryPoint); // Function IconTextButtonHold.IconTextButtonHold_C.ExecuteUbergraph_IconTextButtonHold // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
	void HoldActionCompleted__DelegateSignature(); // Function IconTextButtonHold.IconTextButtonHold_C.HoldActionCompleted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void HoldActionEnded__DelegateSignature(); // Function IconTextButtonHold.IconTextButtonHold_C.HoldActionEnded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void HoldActionStarted__DelegateSignature(); // Function IconTextButtonHold.IconTextButtonHold_C.HoldActionStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
};

