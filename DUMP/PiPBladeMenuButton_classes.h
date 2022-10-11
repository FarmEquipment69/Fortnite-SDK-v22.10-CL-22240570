// WidgetBlueprintGeneratedClass PiPBladeMenuButton.PiPBladeMenuButton_C
// Size: 0x10c8 (Inherited: 0x1070)
struct UPiPBladeMenuButton_C : UPictureInPictureBladeMenuButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1070(0x08)
	struct UWidgetAnimation* FlipSwitch; // 0x1078(0x08)
	struct UWidgetAnimation* StatusGrow; // 0x1080(0x08)
	struct UWidgetAnimation* Hover; // 0x1088(0x08)
	struct UCommonTextBlock* ButtonText; // 0x1090(0x08)
	struct UImage* IconOff; // 0x1098(0x08)
	struct UVerticalBox* IconTextContent; // 0x10a0(0x08)
	struct UCommonTextBlock* IconTextOff; // 0x10a8(0x08)
	struct UCommonTextBlock* IconTextOn; // 0x10b0(0x08)
	struct UCommonTextBlock* Text_Feedback; // 0x10b8(0x08)
	struct UWidgetSwitcher* TextSwitcher; // 0x10c0(0x08)

	void UpdateStatus(bool IsEnabled, bool IsLoggedIn, bool IsParentalControlsEnabled); // Function PiPBladeMenuButton.PiPBladeMenuButton_C.UpdateStatus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function PiPBladeMenuButton.PiPBladeMenuButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function PiPBladeMenuButton.PiPBladeMenuButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void UpdatePiPStatusBP(bool LoggedIn, bool Enabled, bool ParentalControlsEnabled); // Function PiPBladeMenuButton.PiPBladeMenuButton_C.UpdatePiPStatusBP // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_PiPBladeMenuButton(int32_t EntryPoint); // Function PiPBladeMenuButton.PiPBladeMenuButton_C.ExecuteUbergraph_PiPBladeMenuButton // (Final|UbergraphFunction) // @ game+0xda05cc
};

