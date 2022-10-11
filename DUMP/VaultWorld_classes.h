// BlueprintGeneratedClass VaultWorld.VaultWorld_C
// Size: 0x341 (Inherited: 0x338)
struct AVaultWorld_C : AFortItemPreviewWorld {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	bool bIsPrimaryBackgroundActive; // 0x340(0x01)

	void GetVaultRotator(struct AVaultRotator_C*& VaultRotator); // Function VaultWorld.VaultWorld_C.GetVaultRotator // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnSetupBackground(struct UTexture2D* LoadedBackgroundTexture, struct FTrackDynamicBackground& BackgroundInfo); // Function VaultWorld.VaultWorld_C.OnSetupBackground // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnTransitionBackground(bool bPlayForward); // Function VaultWorld.VaultWorld_C.OnTransitionBackground // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ReceiveBeginPlay(); // Function VaultWorld.VaultWorld_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnUpdateDisplay(bool bShowFloor, bool bShowEffects); // Function VaultWorld.VaultWorld_C.OnUpdateDisplay // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnTransitionItemDetails(bool bShowItemDetails); // Function VaultWorld.VaultWorld_C.OnTransitionItemDetails // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_VaultWorld(int32_t EntryPoint); // Function VaultWorld.VaultWorld_C.ExecuteUbergraph_VaultWorld // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

