// WidgetBlueprintGeneratedClass PlusMinusButton.PlusMinusButton_C
// Size: 0x1067 (Inherited: 0x1020)
struct UPlusMinusButton_C : UCommonButtonBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1020(0x08)
	struct UWidgetAnimation* HoverAnim; // 0x1028(0x08)
	struct UImage* BackgroundColor; // 0x1030(0x08)
	struct UCommonTextBlock* ButtonText; // 0x1038(0x08)
	struct UOverlay* Overlay_ButtonPrompt; // 0x1040(0x08)
	struct FText In Text; // 0x1048(0x18)
	int32_t Font Size; // 0x1060(0x04)
	bool isLeft; // 0x1064(0x01)
	bool IsBottom; // 0x1065(0x01)
	bool AllowDisabledAnimation; // 0x1066(0x01)

	void PreConstruct(bool IsDesignTime); // Function PlusMinusButton.PlusMinusButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function PlusMinusButton.PlusMinusButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function PlusMinusButton.PlusMinusButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnDisabled(); // Function PlusMinusButton.PlusMinusButton_C.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_PlusMinusButton(int32_t EntryPoint); // Function PlusMinusButton.PlusMinusButton_C.ExecuteUbergraph_PlusMinusButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

