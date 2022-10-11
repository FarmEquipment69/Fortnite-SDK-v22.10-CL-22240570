// WidgetBlueprintGeneratedClass TournamentLiveGamesEntry.TournamentLiveGamesEntry_C
// Size: 0x10b8 (Inherited: 0x1090)
struct UTournamentLiveGamesEntry_C : UFortTournamentLiveGameSessionEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1090(0x08)
	struct UWidgetAnimation* Selected; // 0x1098(0x08)
	struct UCommonBorder* CommonBorder_IsPlayer; // 0x10a0(0x08)
	struct UCommonBorder* CommonBorder_Selected; // 0x10a8(0x08)
	struct UCommonBorder* CommonBorder_Zebra; // 0x10b0(0x08)

	void OnEntrySet(int32_t EntryIndex); // Function TournamentLiveGamesEntry.TournamentLiveGamesEntry_C.OnEntrySet // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnSelected(); // Function TournamentLiveGamesEntry.TournamentLiveGamesEntry_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnDeselected(); // Function TournamentLiveGamesEntry.TournamentLiveGamesEntry_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_TournamentLiveGamesEntry(int32_t EntryPoint); // Function TournamentLiveGamesEntry.TournamentLiveGamesEntry_C.ExecuteUbergraph_TournamentLiveGamesEntry // (Final|UbergraphFunction) // @ game+0xda05cc
};

