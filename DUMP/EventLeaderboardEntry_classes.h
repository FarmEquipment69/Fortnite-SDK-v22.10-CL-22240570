// WidgetBlueprintGeneratedClass EventLeaderboardEntry.EventLeaderboardEntry_C
// Size: 0x1139 (Inherited: 0x1080)
struct UEventLeaderboardEntry_C : UFortEventLeaderboardEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1080(0x08)
	struct UWidgetAnimation* Selected; // 0x1088(0x08)
	struct UCommonBorder* CommonBorder_IsPlayer; // 0x1090(0x08)
	struct UCommonBorder* CommonBorder_Zebra; // 0x1098(0x08)
	struct UCommonTextBlock* CommonTextBlock_TeamLine1; // 0x10a0(0x08)
	struct UCommonTextBlock* CommonTextBlock_TeamLine2; // 0x10a8(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_Rank; // 0x10b0(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_TeamSize; // 0x10b8(0x08)
	struct UImage* Image_OnlineStatus; // 0x10c0(0x08)
	struct UImage* Image_Qualified; // 0x10c8(0x08)
	struct UImage* Image_SelectedBG; // 0x10d0(0x08)
	struct UOverlay* Overlay_OnlineStatus; // 0x10d8(0x08)
	struct UOverlay* Overlay_QualifiedContent; // 0x10e0(0x08)
	struct UCommonTextBlock* Text_Rank; // 0x10e8(0x08)
	struct UCommonTextBlock* Text_Rank_First; // 0x10f0(0x08)
	struct UCommonTextBlock* Text_Score; // 0x10f8(0x08)
	struct UCommonTextBlock* Text_Team; // 0x1100(0x08)
	bool isZebra; // 0x1108(0x01)
	bool isPlayer; // 0x1109(0x01)
	char pad_110A[0x6]; // 0x110a(0x06)
	struct TSoftObjectPtr<UDataTable> TEMPDatatableIdentities; // 0x1110(0x28)
	bool isMatchPoint; // 0x1138(0x01)

	void SetTeamDisplayNames(struct UFortEventLeaderboardEntryData* Entry Data); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.SetTeamDisplayNames // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetEntryDetails(struct UFortEventLeaderboardEntryData* EntryData); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.SetEntryDetails // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnSelected(); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnDeselected(); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void EventStyleEntry(); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.EventStyleEntry // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void EventColorize(); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.EventColorize // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnTeammateDisplayNameAdded(struct UFortEventLeaderboardEntryData* LeaderboardEntryData); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.OnTeammateDisplayNameAdded // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_EventLeaderboardEntry(int32_t EntryPoint); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.ExecuteUbergraph_EventLeaderboardEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

