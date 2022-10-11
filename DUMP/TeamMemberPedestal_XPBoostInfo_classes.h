// WidgetBlueprintGeneratedClass TeamMemberPedestal_XPBoostInfo.TeamMemberPedestal_XPBoostInfo_C
// Size: 0x10c0 (Inherited: 0x10b0)
struct UTeamMemberPedestal_XPBoostInfo_C : UFortTeamMemberXPBoostInfo {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10b0(0x08)
	struct UOverlay* PrimaryOvr; // 0x10b8(0x08)

	void Construct(); // Function TeamMemberPedestal_XPBoostInfo.TeamMemberPedestal_XPBoostInfo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnCameraChanged(enum class EFrontEndCamera NewCamera, enum class EFrontEndCamera OldCamera); // Function TeamMemberPedestal_XPBoostInfo.TeamMemberPedestal_XPBoostInfo_C.OnCameraChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo(int32_t EntryPoint); // Function TeamMemberPedestal_XPBoostInfo.TeamMemberPedestal_XPBoostInfo_C.ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo // (Final|UbergraphFunction) // @ game+0xda05cc
};

