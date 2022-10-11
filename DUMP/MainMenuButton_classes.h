// WidgetBlueprintGeneratedClass MainMenuButton.MainMenuButton_C
// Size: 0x11b1 (Inherited: 0x11a0)
struct UMainMenuButton_C : UFortMainMenuButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x11a0(0x08)
	struct UImage* Image_Icon_RightSide; // 0x11a8(0x08)
	bool ShowExternalLinkIcon; // 0x11b0(0x01)

	void UpdateRightSideIcon(struct TSoftObjectPtr<UMaterialInterface> SoftMaterial); // Function MainMenuButton.MainMenuButton_C.UpdateRightSideIcon // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function MainMenuButton.MainMenuButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void UpdateRightSideIconColor(struct FLinearColor Color); // Function MainMenuButton.MainMenuButton_C.UpdateRightSideIconColor // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function MainMenuButton.MainMenuButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnSelected(); // Function MainMenuButton.MainMenuButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function MainMenuButton.MainMenuButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_MainMenuButton(int32_t EntryPoint); // Function MainMenuButton.MainMenuButton_C.ExecuteUbergraph_MainMenuButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

