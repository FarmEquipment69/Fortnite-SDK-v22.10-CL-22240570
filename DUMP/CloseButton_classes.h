// WidgetBlueprintGeneratedClass CloseButton.CloseButton_C
// Size: 0x10f9 (Inherited: 0x1080)
struct UCloseButton_C : UBacchusCloseButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1080(0x08)
	struct UWidgetAnimation* Unhover; // 0x1088(0x08)
	struct UWidgetAnimation* Pressed; // 0x1090(0x08)
	struct UWidgetAnimation* Hover; // 0x1098(0x08)
	struct UBorder* Border_Container; // 0x10a0(0x08)
	struct UImage* ButtonBacking; // 0x10a8(0x08)
	struct UImage* CloseIcon; // 0x10b0(0x08)
	struct USizeBox* SizeBox_Control; // 0x10b8(0x08)
	struct UCommonTextBlock* Text_ButtonAction; // 0x10c0(0x08)
	struct FText Button Description; // 0x10c8(0x18)
	bool FontSizeOveride; // 0x10e0(0x01)
	char pad_10E1[0x3]; // 0x10e1(0x03)
	int32_t FontSize; // 0x10e4(0x04)
	struct FMargin Padding Overide; // 0x10e8(0x10)
	bool PaddingOveride; // 0x10f8(0x01)

	void SetText(struct FText Text); // Function CloseButton.CloseButton_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void HandleSize(); // Function CloseButton.CloseButton_C.HandleSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function CloseButton.CloseButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function CloseButton.CloseButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_CloseButton(int32_t EntryPoint); // Function CloseButton.CloseButton_C.ExecuteUbergraph_CloseButton // (Final|UbergraphFunction) // @ game+0xda05cc
};

