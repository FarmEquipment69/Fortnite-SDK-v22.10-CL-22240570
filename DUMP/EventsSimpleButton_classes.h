// WidgetBlueprintGeneratedClass EventsSimpleButton.EventsSimpleButton_C
// Size: 0x1150 (Inherited: 0x1070)
struct UEventsSimpleButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1070(0x08)
	struct UWidgetAnimation* Pressed; // 0x1078(0x08)
	struct UWidgetAnimation* Hover; // 0x1080(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0x1088(0x08)
	struct UCommonBorder* CommonBorder_VariablePadding; // 0x1090(0x08)
	struct UImage* Image_ButtonTop; // 0x1098(0x08)
	struct UImage* Image_Shadow; // 0x10a0(0x08)
	struct UOverlay* Overlay_ButtonBG; // 0x10a8(0x08)
	bool ToUpper; // 0x10b0(0x01)
	bool XL; // 0x10b1(0x01)
	char pad_10B2[0x6]; // 0x10b2(0x06)
	struct FText ButtonNameText; // 0x10b8(0x18)
	struct TMap<struct FString, struct FLinearColor> Color; // 0x10d0(0x50)
	struct FLinearColor GamepadButtonTextColor; // 0x1120(0x10)
	struct FLinearColor DefaultTextColor; // 0x1130(0x10)
	struct FVector2D ButtonPadding; // 0x1140(0x10)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function EventsSimpleButton.EventsSimpleButton_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function EventsSimpleButton.EventsSimpleButton_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function EventsSimpleButton.EventsSimpleButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function EventsSimpleButton.EventsSimpleButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function EventsSimpleButton.EventsSimpleButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnClicked(); // Function EventsSimpleButton.EventsSimpleButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // Function EventsSimpleButton.EventsSimpleButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature // (BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function EventsSimpleButton.EventsSimpleButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void InputTypeChanged(bool bUsingGamepad); // Function EventsSimpleButton.EventsSimpleButton_C.InputTypeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateColor(struct FString ParameterName, struct FLinearColor New Color); // Function EventsSimpleButton.EventsSimpleButton_C.UpdateColor // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_EventsSimpleButton(int32_t EntryPoint); // Function EventsSimpleButton.EventsSimpleButton_C.ExecuteUbergraph_EventsSimpleButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

