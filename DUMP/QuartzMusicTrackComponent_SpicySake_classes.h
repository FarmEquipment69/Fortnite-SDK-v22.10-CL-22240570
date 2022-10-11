// BlueprintGeneratedClass QuartzMusicTrackComponent_SpicySake.QuartzMusicTrackComponent_SpicySake_C
// Size: 0x228 (Inherited: 0x210)
struct UQuartzMusicTrackComponent_SpicySake_C : UQuartzMusicTrackComponent_DataTracker_C {
	double InterpFloat_Circling; // 0x210(0x08)
	double InterpFloat_Attacking; // 0x218(0x08)
	struct FGameplayTag EventTag_Circling; // 0x220(0x04)
	struct FGameplayTag EventTag_Attacking; // 0x224(0x04)

	void HandleMixState(); // Function QuartzMusicTrackComponent_SpicySake.QuartzMusicTrackComponent_SpicySake_C.HandleMixState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	double UpdateInterpValue(double InterpValue, struct FGameplayTag& EventTag, double Attack Speed, double Release Speed); // Function QuartzMusicTrackComponent_SpicySake.QuartzMusicTrackComponent_SpicySake_C.UpdateInterpValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda05cc
	void OnDataTrackerUpdate(); // Function QuartzMusicTrackComponent_SpicySake.QuartzMusicTrackComponent_SpicySake_C.OnDataTrackerUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
};

