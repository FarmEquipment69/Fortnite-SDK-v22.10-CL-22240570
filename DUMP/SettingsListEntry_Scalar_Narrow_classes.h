// WidgetBlueprintGeneratedClass SettingsListEntry_Scalar_Narrow.SettingsListEntry_Scalar_Narrow_C
// Size: 0x360 (Inherited: 0x340)
struct USettingsListEntry_Scalar_Narrow_C : UFortSettingsListEntrySetting_Scalar {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UWidgetAnimation* OnHover; // 0x348(0x08)
	struct UImage* DefaultValueLayer; // 0x350(0x08)
	struct USimpleMaterialProgressBar_C* Progress; // 0x358(0x08)

	struct UWidget* GetPrimaryGamepadFocusWidget(); // Function SettingsListEntry_Scalar_Narrow.SettingsListEntry_Scalar_Narrow_C.GetPrimaryGamepadFocusWidget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnValueChanged(float Value); // Function SettingsListEntry_Scalar_Narrow.SettingsListEntry_Scalar_Narrow_C.OnValueChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnDefaultValueChanged(float DefaultValue); // Function SettingsListEntry_Scalar_Narrow.SettingsListEntry_Scalar_Narrow_C.OnDefaultValueChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SettingsListEntry_Scalar_Narrow.SettingsListEntry_Scalar_Narrow_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function SettingsListEntry_Scalar_Narrow.SettingsListEntry_Scalar_Narrow_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_SettingsListEntry_Scalar_Narrow(int32_t EntryPoint); // Function SettingsListEntry_Scalar_Narrow.SettingsListEntry_Scalar_Narrow_C.ExecuteUbergraph_SettingsListEntry_Scalar_Narrow // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

