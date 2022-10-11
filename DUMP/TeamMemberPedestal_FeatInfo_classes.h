// WidgetBlueprintGeneratedClass TeamMemberPedestal_FeatInfo.TeamMemberPedestal_FeatInfo_C
// Size: 0x10c0 (Inherited: 0x10b0)
struct UTeamMemberPedestal_FeatInfo_C : UFortTeamMemberPedestalFeatInfo {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10b0(0x08)
	struct UWidgetAnimation* FeatInfoSet; // 0x10b8(0x08)

	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function TeamMemberPedestal_FeatInfo.TeamMemberPedestal_FeatInfo_C.OnAnimationFinished // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnFeatDefinitionSet(); // Function TeamMemberPedestal_FeatInfo.TeamMemberPedestal_FeatInfo_C.OnFeatDefinitionSet // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_TeamMemberPedestal_FeatInfo(int32_t EntryPoint); // Function TeamMemberPedestal_FeatInfo.TeamMemberPedestal_FeatInfo_C.ExecuteUbergraph_TeamMemberPedestal_FeatInfo // (Final|UbergraphFunction) // @ game+0xda05cc
};

