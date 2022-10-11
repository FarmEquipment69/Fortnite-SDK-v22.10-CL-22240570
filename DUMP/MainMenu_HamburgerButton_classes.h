// WidgetBlueprintGeneratedClass MainMenu_HamburgerButton.MainMenu_HamburgerButton_C
// Size: 0x10b0 (Inherited: 0x1070)
struct UMainMenu_HamburgerButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1070(0x08)
	struct UWidgetAnimation* Hover_Grow; // 0x1078(0x08)
	struct UWidgetAnimation* Hover_Bounce; // 0x1080(0x08)
	struct UWidgetAnimation* Hover; // 0x1088(0x08)
	struct UImage* ButtonBacking; // 0x1090(0x08)
	struct UFortMobileImage* Icon; // 0x1098(0x08)
	struct UBorder* IconColor; // 0x10a0(0x08)
	struct USizeBox* VariableSize; // 0x10a8(0x08)

	void BP_OnHovered(); // Function MainMenu_HamburgerButton.MainMenu_HamburgerButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function MainMenu_HamburgerButton.MainMenu_HamburgerButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function MainMenu_HamburgerButton.MainMenu_HamburgerButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_MainMenu_HamburgerButton(int32_t EntryPoint); // Function MainMenu_HamburgerButton.MainMenu_HamburgerButton_C.ExecuteUbergraph_MainMenu_HamburgerButton // (Final|UbergraphFunction) // @ game+0xda05cc
};

