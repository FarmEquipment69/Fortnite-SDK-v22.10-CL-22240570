// WidgetBlueprintGeneratedClass PrimarySkewButton.PrimarySkewButton_C
// Size: 0x10c0 (Inherited: 0x1070)
struct UPrimarySkewButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1070(0x08)
	struct UWidgetAnimation* Pressed; // 0x1078(0x08)
	struct UWidgetAnimation* Hover; // 0x1080(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0x1088(0x08)
	struct UImage* Image_ButtonTop; // 0x1090(0x08)
	struct UImage* Image_Shadow; // 0x1098(0x08)
	bool ToUpper; // 0x10a0(0x01)
	bool XL; // 0x10a1(0x01)
	char pad_10A2[0x6]; // 0x10a2(0x06)
	struct FText ButtonNameText; // 0x10a8(0x18)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function PrimarySkewButton.PrimarySkewButton_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function PrimarySkewButton.PrimarySkewButton_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function PrimarySkewButton.PrimarySkewButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function PrimarySkewButton.PrimarySkewButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function PrimarySkewButton.PrimarySkewButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnClicked(); // Function PrimarySkewButton.PrimarySkewButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // Function PrimarySkewButton.PrimarySkewButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature // (BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function PrimarySkewButton.PrimarySkewButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_PrimarySkewButton(int32_t EntryPoint); // Function PrimarySkewButton.PrimarySkewButton_C.ExecuteUbergraph_PrimarySkewButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

