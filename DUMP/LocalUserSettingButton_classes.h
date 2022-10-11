// WidgetBlueprintGeneratedClass LocalUserSettingButton.LocalUserSettingButton_C
// Size: 0x10b0 (Inherited: 0x1090)
struct ULocalUserSettingButton_C : UFortLocalUserSettingButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1090(0x08)
	struct UWidgetAnimation* OnHover; // 0x1098(0x08)
	struct UBorder* Border_InteractionIndicator; // 0x10a0(0x08)
	struct UImage* Image_AnimatedArrow; // 0x10a8(0x08)

	void BP_OnHovered(); // Function LocalUserSettingButton.LocalUserSettingButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function LocalUserSettingButton.LocalUserSettingButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_LocalUserSettingButton(int32_t EntryPoint); // Function LocalUserSettingButton.LocalUserSettingButton_C.ExecuteUbergraph_LocalUserSettingButton // (Final|UbergraphFunction) // @ game+0xda05cc
};

