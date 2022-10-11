// WidgetBlueprintGeneratedClass CrewPurchase_RewardTile.CrewPurchase_RewardTile_C
// Size: 0x10d0 (Inherited: 0x1080)
struct UCrewPurchase_RewardTile_C : UCrewRewardTile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1080(0x08)
	struct UWidgetAnimation* HoverScale; // 0x1088(0x08)
	struct UWidgetAnimation* Hover; // 0x1090(0x08)
	struct UImage* Image_Calendar; // 0x1098(0x08)
	struct UImage* Image_Check; // 0x10a0(0x08)
	struct UImage* Image_EdgeSlant; // 0x10a8(0x08)
	struct UImage* Image_Frame; // 0x10b0(0x08)
	struct UImage* Image_Pulse; // 0x10b8(0x08)
	struct UImage* Image_Shadow; // 0x10c0(0x08)
	struct UWidgetSwitcher* Switcher_OwnIcon; // 0x10c8(0x08)

	void Construct(); // Function CrewPurchase_RewardTile.CrewPurchase_RewardTile_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnUpdateOwnedState(bool bOwned); // Function CrewPurchase_RewardTile.CrewPurchase_RewardTile_C.OnUpdateOwnedState // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnStartingDownloadTileImage(); // Function CrewPurchase_RewardTile.CrewPurchase_RewardTile_C.OnStartingDownloadTileImage // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnDownloadTileImageComplete(struct UTexture2D* Texture); // Function CrewPurchase_RewardTile.CrewPurchase_RewardTile_C.OnDownloadTileImageComplete // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnSelected(); // Function CrewPurchase_RewardTile.CrewPurchase_RewardTile_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnDeselected(); // Function CrewPurchase_RewardTile.CrewPurchase_RewardTile_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_CrewPurchase_RewardTile(int32_t EntryPoint); // Function CrewPurchase_RewardTile.CrewPurchase_RewardTile_C.ExecuteUbergraph_CrewPurchase_RewardTile // (Final|UbergraphFunction) // @ game+0xda05cc
};

