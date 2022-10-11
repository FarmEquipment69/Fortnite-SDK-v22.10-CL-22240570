// WidgetBlueprintGeneratedClass UserListHeaderEntry.UserListHeaderEntry_C
// Size: 0x10c8 (Inherited: 0x10a0)
struct UUserListHeaderEntry_C : USocialUserListHeaderEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10a0(0x08)
	struct UWidgetAnimation* OnExpansion; // 0x10a8(0x08)
	struct UWidgetAnimation* OnHover; // 0x10b0(0x08)
	struct UFortMobileImage* ExpandDirectionTick; // 0x10b8(0x08)
	struct USizeBox* SB_EntryContent; // 0x10c0(0x08)

	void BP_OnUnhovered(); // Function UserListHeaderEntry.UserListHeaderEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UserListHeaderEntry.UserListHeaderEntry_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function UserListHeaderEntry.UserListHeaderEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void (struct UObject* ListItemObject); // Function UserListHeaderEntry.UserListHeaderEntry_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function UserListHeaderEntry.UserListHeaderEntry_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_UserListHeaderEntry(int32_t EntryPoint); // Function UserListHeaderEntry.UserListHeaderEntry_C.ExecuteUbergraph_UserListHeaderEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

