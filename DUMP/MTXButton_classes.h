// WidgetBlueprintGeneratedClass MTXButton.MTXButton_C
// Size: 0x10c0 (Inherited: 0x1080)
struct UMTXButton_C : UFortMTXButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1080(0x08)
	struct UWidgetAnimation* Hover_Grow; // 0x1088(0x08)
	struct UWidgetAnimation* Hover_Bounce; // 0x1090(0x08)
	struct UWidgetAnimation* Hover; // 0x1098(0x08)
	struct UBorder* AmountColor; // 0x10a0(0x08)
	struct UImage* ButtonBacking; // 0x10a8(0x08)
	struct UImage* Image_Vbucks; // 0x10b0(0x08)
	struct USizeBox* VariableSize; // 0x10b8(0x08)

	void Construct(); // Function MTXButton.MTXButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function MTXButton.MTXButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function MTXButton.MTXButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_MTXButton(int32_t EntryPoint); // Function MTXButton.MTXButton_C.ExecuteUbergraph_MTXButton // (Final|UbergraphFunction) // @ game+0xda05cc
};

