// WidgetBlueprintGeneratedClass SidebarSettingsRotator_Narrow.SidebarSettingsRotator_Narrow_C
// Size: 0x1098 (Inherited: 0x1080)
struct USidebarSettingsRotator_Narrow_C : UFortSettingsRotator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1080(0x08)
	struct UWidgetAnimation* RotatorHover; // 0x1088(0x08)
	struct UBorder* Background; // 0x1090(0x08)

	void BP_OnOptionsPopulated(int32_t Count); // Function SidebarSettingsRotator_Narrow.SidebarSettingsRotator_Narrow_C.BP_OnOptionsPopulated // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnOptionSelected(int32_t Index); // Function SidebarSettingsRotator_Narrow.SidebarSettingsRotator_Narrow_C.BP_OnOptionSelected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnDefaultOptionSpecified(int32_t DefaultOptionIndex); // Function SidebarSettingsRotator_Narrow.SidebarSettingsRotator_Narrow_C.BP_OnDefaultOptionSpecified // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnHover Animation(); // Function SidebarSettingsRotator_Narrow.SidebarSettingsRotator_Narrow_C.OnHover Animation // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnUnHover Animation(); // Function SidebarSettingsRotator_Narrow.SidebarSettingsRotator_Narrow_C.OnUnHover Animation // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_SidebarSettingsRotator_Narrow(int32_t EntryPoint); // Function SidebarSettingsRotator_Narrow.SidebarSettingsRotator_Narrow_C.ExecuteUbergraph_SidebarSettingsRotator_Narrow // (Final|UbergraphFunction) // @ game+0xda05cc
};

