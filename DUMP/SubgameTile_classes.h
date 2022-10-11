// WidgetBlueprintGeneratedClass SubgameTile.SubgameTile_C
// Size: 0x11d8 (Inherited: 0x11a0)
struct USubgameTile_C : UFortSubgameTile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x11a0(0x08)
	struct UWidgetAnimation* RevealCMSKeyArt; // 0x11a8(0x08)
	struct UWidgetAnimation* UnFocused; // 0x11b0(0x08)
	struct UWidgetAnimation* FocusedSecondary; // 0x11b8(0x08)
	struct UWidgetAnimation* Focused; // 0x11c0(0x08)
	struct UImage* FocusPulse; // 0x11c8(0x08)
	struct UMaterialInstanceDynamic* PulseMID; // 0x11d0(0x08)

	void PreConstruct(bool IsDesignTime); // Function SubgameTile.SubgameTile_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function SubgameTile.SubgameTile_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BndEvt__Image_KeyArt_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature(); // Function SubgameTile.SubgameTile_C.BndEvt__Image_KeyArt_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature // (BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function SubgameTile.SubgameTile_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function SubgameTile.SubgameTile_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_SubgameTile(int32_t EntryPoint); // Function SubgameTile.SubgameTile_C.ExecuteUbergraph_SubgameTile // (Final|UbergraphFunction) // @ game+0xda05cc
};

