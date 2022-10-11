// WidgetBlueprintGeneratedClass LobbyPlayerAddPlayer.LobbyPlayerAddPlayer_C
// Size: 0x10f8 (Inherited: 0x10c0)
struct ULobbyPlayerAddPlayer_C : UFortLobbyAddPlayer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10c0(0x08)
	struct UWidgetAnimation* ShowPartyFinderText; // 0x10c8(0x08)
	struct UWidgetAnimation* OnHovered; // 0x10d0(0x08)
	struct UCommonTextBlock* ; // 0x10d8(0x08)
	struct UFortHUDElementWrapper_C* FortHUDElementWrapper; // 0x10e0(0x08)
	struct UOverlay* OverlayInputAction; // 0x10e8(0x08)
	struct UVerticalBox* VB_ControlLegend; // 0x10f0(0x08)

	void BP_OnHovered(); // Function LobbyPlayerAddPlayer.LobbyPlayerAddPlayer_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function LobbyPlayerAddPlayer.LobbyPlayerAddPlayer_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_LobbyPlayerAddPlayer(int32_t EntryPoint); // Function LobbyPlayerAddPlayer.LobbyPlayerAddPlayer_C.ExecuteUbergraph_LobbyPlayerAddPlayer // (Final|UbergraphFunction) // @ game+0xda05cc
};

