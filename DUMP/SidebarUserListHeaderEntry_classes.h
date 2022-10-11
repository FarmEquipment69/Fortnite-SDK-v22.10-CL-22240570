// WidgetBlueprintGeneratedClass SidebarUserListHeaderEntry.SidebarUserListHeaderEntry_C
// Size: 0x10d0 (Inherited: 0x10a0)
struct USidebarUserListHeaderEntry_C : USocialUserListHeaderEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10a0(0x08)
	struct UWidgetAnimation* OnExpansion; // 0x10a8(0x08)
	struct UWidgetAnimation* OnHover; // 0x10b0(0x08)
	struct UFortMobileImage* ExpandDirectionTick; // 0x10b8(0x08)
	struct UImage* Image_Meeple; // 0x10c0(0x08)
	struct USizeBox* SB_EntryContent; // 0x10c8(0x08)

	void BP_OnUnhovered(); // Function SidebarUserListHeaderEntry.SidebarUserListHeaderEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function SidebarUserListHeaderEntry.SidebarUserListHeaderEntry_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function SidebarUserListHeaderEntry.SidebarUserListHeaderEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void (struct UObject* ListItemObject); // Function SidebarUserListHeaderEntry.SidebarUserListHeaderEntry_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function SidebarUserListHeaderEntry.SidebarUserListHeaderEntry_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_SidebarUserListHeaderEntry(int32_t EntryPoint); // Function SidebarUserListHeaderEntry.SidebarUserListHeaderEntry_C.ExecuteUbergraph_SidebarUserListHeaderEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

