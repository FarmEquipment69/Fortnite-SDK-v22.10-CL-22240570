// WidgetBlueprintGeneratedClass SquadMemberTile.SquadMemberTile_C
// Size: 0x1158 (Inherited: 0x10e0)
struct USquadMemberTile_C : UAthenaSquadMemberDetailedEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10e0(0x08)
	struct UWidgetAnimation* OnIntro; // 0x10e8(0x08)
	struct UWidgetAnimation* OnLocalUserDefined; // 0x10f0(0x08)
	struct UWidgetAnimation* OnSelected; // 0x10f8(0x08)
	struct UWidgetAnimation* SetRibbonRotation; // 0x1100(0x08)
	struct UWidgetAnimation* StyleEmpty; // 0x1108(0x08)
	struct UWidgetAnimation* StyleNotReady; // 0x1110(0x08)
	struct UWidgetAnimation* StyleReady; // 0x1118(0x08)
	struct UWidgetAnimation* StyleSitOut; // 0x1120(0x08)
	struct UWidgetAnimation* OnHovered; // 0x1128(0x08)
	struct UBorder* EntryBorder; // 0x1130(0x08)
	struct UImage* LoadingThrobberBacking; // 0x1138(0x08)
	struct UImage* LocalUserIcon; // 0x1140(0x08)
	struct UImage* SquadOverlay; // 0x1148(0x08)
	struct UImage* SquadRibbon; // 0x1150(0x08)

	void SetVisuals(enum class EGameReadiness Member Readiness, bool Is In Frontend); // Function SquadMemberTile.SquadMemberTile_C.SetVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetEmptyVisuals(); // Function SquadMemberTile.SquadMemberTile_C.SetEmptyVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetSitOutVisuals(); // Function SquadMemberTile.SquadMemberTile_C.SetSitOutVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetReadyVisuals(); // Function SquadMemberTile.SquadMemberTile_C.SetReadyVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetNotReadyVisuals(); // Function SquadMemberTile.SquadMemberTile_C.SetNotReadyVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnLoaded_A3B69DDA4214DBAA66546FAB9F43D5E7(struct UObject* Loaded); // Function SquadMemberTile.SquadMemberTile_C.OnLoaded_A3B69DDA4214DBAA66546FAB9F43D5E7 // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function SquadMemberTile.SquadMemberTile_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function SquadMemberTile.SquadMemberTile_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnSquadAssigned(); // Function SquadMemberTile.SquadMemberTile_C.OnSquadAssigned // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function SquadMemberTile.SquadMemberTile_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function SquadMemberTile.SquadMemberTile_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnMemberGameReadinessChanged(enum class EGameReadiness ReadyStatus); // Function SquadMemberTile.SquadMemberTile_C.OnMemberGameReadinessChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnSelected(); // Function SquadMemberTile.SquadMemberTile_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnDeselected(); // Function SquadMemberTile.SquadMemberTile_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnTeamMemberEstablished(bool bHasValidMember); // Function SquadMemberTile.SquadMemberTile_C.BP_OnTeamMemberEstablished // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnMemberIsInFrontendChanged(bool bIsInFrontEnd); // Function SquadMemberTile.SquadMemberTile_C.OnMemberIsInFrontendChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_SquadMemberTile(int32_t EntryPoint); // Function SquadMemberTile.SquadMemberTile_C.ExecuteUbergraph_SquadMemberTile // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

