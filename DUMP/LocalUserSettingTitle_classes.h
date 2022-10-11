// WidgetBlueprintGeneratedClass LocalUserSettingTitle.LocalUserSettingTitle_C
// Size: 0x10a8 (Inherited: 0x1080)
struct ULocalUserSettingTitle_C : UFortLocalUserSettingTitleButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1080(0x08)
	struct UWidgetAnimation* OnExpansion; // 0x1088(0x08)
	struct UWidgetAnimation* OnHover; // 0x1090(0x08)
	struct UImage* ExpandDirectionTick; // 0x1098(0x08)
	struct USizeBox* SB_EntryContent; // 0x10a0(0x08)

	void Construct(); // Function LocalUserSettingTitle.LocalUserSettingTitle_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function LocalUserSettingTitle.LocalUserSettingTitle_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function LocalUserSettingTitle.LocalUserSettingTitle_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnExpansionChanged(bool bIsExpanded); // Function LocalUserSettingTitle.LocalUserSettingTitle_C.OnExpansionChanged // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_LocalUserSettingTitle(int32_t EntryPoint); // Function LocalUserSettingTitle.LocalUserSettingTitle_C.ExecuteUbergraph_LocalUserSettingTitle // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

