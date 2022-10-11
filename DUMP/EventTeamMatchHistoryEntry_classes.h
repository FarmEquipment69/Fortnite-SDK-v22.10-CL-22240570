// WidgetBlueprintGeneratedClass EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C
// Size: 0x1120 (Inherited: 0x10d0)
struct UEventTeamMatchHistoryEntry_C : UFortEventTeamMatchHistoryEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10d0(0x08)
	struct UWidgetAnimation* Selected; // 0x10d8(0x08)
	struct UCommonBorder* Border_Zebra; // 0x10e0(0x08)
	struct UImage* Image_OnlineStatus; // 0x10e8(0x08)
	struct UImage* Image_SelectedBG; // 0x10f0(0x08)
	struct UCommonTextBlock* Text_ReplayInteraction; // 0x10f8(0x08)
	struct FMulticastInlineDelegate Hovered; // 0x1100(0x10)
	struct FMulticastInlineDelegate Unhovered; // 0x1110(0x10)

	void BP_OnHovered(); // Function EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_EventTeamMatchHistoryEntry(int32_t EntryPoint); // Function EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C.ExecuteUbergraph_EventTeamMatchHistoryEntry // (Final|UbergraphFunction) // @ game+0xda05cc
	void Unhovered__DelegateSignature(); // Function EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C.Unhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Hovered__DelegateSignature(); // Function EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C.Hovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
};

