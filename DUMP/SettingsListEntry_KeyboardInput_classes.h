// WidgetBlueprintGeneratedClass SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C
// Size: 0x360 (Inherited: 0x350)
struct USettingsListEntry_KeyboardInput_C : UFortSettingsListEntrySetting_KeyboardInput {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct UWidgetAnimation* OnHover; // 0x358(0x08)

	void OnUpdateKeyText(struct FText& PrimaryKeyText, struct FText& SecondaryKeyText); // Function SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C.OnUpdateKeyText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_SettingsListEntry_KeyboardInput(int32_t EntryPoint); // Function SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C.ExecuteUbergraph_SettingsListEntry_KeyboardInput // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

