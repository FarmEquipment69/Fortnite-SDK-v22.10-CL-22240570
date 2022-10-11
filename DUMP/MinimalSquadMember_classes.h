// WidgetBlueprintGeneratedClass MinimalSquadMember.MinimalSquadMember_C
// Size: 0x10e8 (Inherited: 0x10a0)
struct UMinimalSquadMember_C : UAthenaMinimalSquadMemberEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10a0(0x08)
	struct UWidgetAnimation* StyleNotReady; // 0x10a8(0x08)
	struct UWidgetAnimation* StyleSitOut; // 0x10b0(0x08)
	struct UWidgetAnimation* StyleEmpty; // 0x10b8(0x08)
	struct UWidgetAnimation* OnReady; // 0x10c0(0x08)
	struct UImage* Image_Meeple; // 0x10c8(0x08)
	struct UImage* LocalUserIndicator; // 0x10d0(0x08)
	struct UOverlay* MeepleContainer; // 0x10d8(0x08)
	struct UImage* ReadyFlash; // 0x10e0(0x08)

	void SetEmptyVisuals(); // Function MinimalSquadMember.MinimalSquadMember_C.SetEmptyVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetSitOutVisuals(); // Function MinimalSquadMember.MinimalSquadMember_C.SetSitOutVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetNotReadyVisuals(); // Function MinimalSquadMember.MinimalSquadMember_C.SetNotReadyVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetReadyVisuals(); // Function MinimalSquadMember.MinimalSquadMember_C.SetReadyVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnMemberGameReadinessChanged(enum class EGameReadiness ReadyStatus); // Function MinimalSquadMember.MinimalSquadMember_C.OnMemberGameReadinessChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnTeamMemberEstablished(bool bHasValidMember); // Function MinimalSquadMember.MinimalSquadMember_C.BP_OnTeamMemberEstablished // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_MinimalSquadMember(int32_t EntryPoint); // Function MinimalSquadMember.MinimalSquadMember_C.ExecuteUbergraph_MinimalSquadMember // (Final|UbergraphFunction) // @ game+0xda05cc
};

