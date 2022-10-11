// WidgetBlueprintGeneratedClass SidebarSocialTagFilterCheckboxListEntry.SidebarSocialTagFilterCheckboxListEntry_C
// Size: 0x1100 (Inherited: 0x10b0)
struct USidebarSocialTagFilterCheckboxListEntry_C : UFortLFGFilterCheckboxEntryWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10b0(0x08)
	struct UWidgetAnimation* Unhovered; // 0x10b8(0x08)
	struct UWidgetAnimation* Hovered; // 0x10c0(0x08)
	struct UBorder* Border_Background; // 0x10c8(0x08)
	struct USizeBox* SBox_Checkbox; // 0x10d0(0x08)
	struct USizeBox* ; // 0x10d8(0x08)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0x10e0(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0x10f0(0x10)

	void Construct(); // Function SidebarSocialTagFilterCheckboxListEntry.SidebarSocialTagFilterCheckboxListEntry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function SidebarSocialTagFilterCheckboxListEntry.SidebarSocialTagFilterCheckboxListEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function SidebarSocialTagFilterCheckboxListEntry.SidebarSocialTagFilterCheckboxListEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_SidebarSocialTagFilterCheckboxListEntry(int32_t EntryPoint); // Function SidebarSocialTagFilterCheckboxListEntry.SidebarSocialTagFilterCheckboxListEntry_C.ExecuteUbergraph_SidebarSocialTagFilterCheckboxListEntry // (Final|UbergraphFunction) // @ game+0xda05cc
};

