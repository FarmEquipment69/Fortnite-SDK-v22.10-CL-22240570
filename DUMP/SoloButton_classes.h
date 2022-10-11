// WidgetBlueprintGeneratedClass SoloButton.SoloButton_C
// Size: 0x10da (Inherited: 0x1070)
struct USoloButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1070(0x08)
	struct UWidgetAnimation* Pressed; // 0x1078(0x08)
	struct UWidgetAnimation* Hover; // 0x1080(0x08)
	struct UBorder* Border_Container; // 0x1088(0x08)
	struct UImage* ButtonBacking; // 0x1090(0x08)
	struct USizeBox* SizeBox_Control; // 0x1098(0x08)
	struct UCommonTextBlock* Text_ButtonAction; // 0x10a0(0x08)
	struct FText Button Description; // 0x10a8(0x18)
	bool FontSizeOveride; // 0x10c0(0x01)
	char pad_10C1[0x3]; // 0x10c1(0x03)
	int32_t FontSize; // 0x10c4(0x04)
	struct FMargin Padding Overide; // 0x10c8(0x10)
	bool PaddingOveride; // 0x10d8(0x01)
	bool IsDisabled; // 0x10d9(0x01)

	void SetText(struct FText Text); // Function SoloButton.SoloButton_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void HandleSize(); // Function SoloButton.SoloButton_C.HandleSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function SoloButton.SoloButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function SoloButton.SoloButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function SoloButton.SoloButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function SoloButton.SoloButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnClicked(); // Function SoloButton.SoloButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnDisabled(); // Function SoloButton.SoloButton_C.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnEnabled(); // Function SoloButton.SoloButton_C.BP_OnEnabled // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_SoloButton(int32_t EntryPoint); // Function SoloButton.SoloButton_C.ExecuteUbergraph_SoloButton // (Final|UbergraphFunction) // @ game+0xda05cc
};

