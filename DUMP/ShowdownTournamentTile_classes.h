// WidgetBlueprintGeneratedClass ShowdownTournamentTile.ShowdownTournamentTile_C
// Size: 0x10c9 (Inherited: 0x10a0)
struct UShowdownTournamentTile_C : UFortShowdownTournamentTile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10a0(0x08)
	struct UWidgetAnimation* sizeUp; // 0x10a8(0x08)
	struct UWidgetAnimation* changeFocus; // 0x10b0(0x08)
	struct UImage* Image_TileFade; // 0x10b8(0x08)
	struct USizeBox* PosterSizeBox; // 0x10c0(0x08)
	bool isFaded; // 0x10c8(0x01)

	void BP_OnSelected(); // Function ShowdownTournamentTile.ShowdownTournamentTile_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnDeselected(); // Function ShowdownTournamentTile.ShowdownTournamentTile_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void EventFade(bool FadeOut); // Function ShowdownTournamentTile.ShowdownTournamentTile_C.EventFade // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_ShowdownTournamentTile(int32_t EntryPoint); // Function ShowdownTournamentTile.ShowdownTournamentTile_C.ExecuteUbergraph_ShowdownTournamentTile // (Final|UbergraphFunction) // @ game+0xda05cc
};

