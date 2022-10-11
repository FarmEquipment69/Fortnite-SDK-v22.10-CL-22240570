// WidgetBlueprintGeneratedClass BPS22_BattlePassTile.BPS22_BattlePassTile_C
// Size: 0x1283 (Inherited: 0x1180)
struct UBPS22_BattlePassTile_C : UFortBattlePassTile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1180(0x08)
	struct UWidgetAnimation* Hold_Completed; // 0x1188(0x08)
	struct UWidgetAnimation* Secondary_Hold_Progress; // 0x1190(0x08)
	struct UWidgetAnimation* Hold_Progress; // 0x1198(0x08)
	struct UWidgetAnimation* GrowTile; // 0x11a0(0x08)
	struct UWidgetAnimation* Hover_Burst; // 0x11a8(0x08)
	struct UWidgetAnimation* Reveal_Hide; // 0x11b0(0x08)
	struct UWidgetAnimation* Reveal; // 0x11b8(0x08)
	struct UWidgetAnimation* TintOnpeek; // 0x11c0(0x08)
	struct UWidgetAnimation* Select; // 0x11c8(0x08)
	struct UWidgetAnimation* Item_Hover; // 0x11d0(0x08)
	struct UCommonVisibilitySwitcher* Availability_Switcher; // 0x11d8(0x08)
	struct UOverlay* Available_State; // 0x11e0(0x08)
	struct UBorder* Border_FreeViolator; // 0x11e8(0x08)
	struct UImage* EmptyBackground; // 0x11f0(0x08)
	struct UHorizontalBox* HB_PriceInfo; // 0x11f8(0x08)
	struct UHorizontalBox* HBox_locks; // 0x1200(0x08)
	struct UImage* Image; // 0x1208(0x08)
	struct UImage* ; // 0x1210(0x08)
	struct UImage* Image_Lock_Purple; // 0x1218(0x08)
	struct UImage* Image_Lock_Red; // 0x1220(0x08)
	struct UImage* Image_Owned; // 0x1228(0x08)
	struct UImage* Image_Preview; // 0x1230(0x08)
	struct UImage* Image_Progress; // 0x1238(0x08)
	struct UImage* Image_selected_LR; // 0x1240(0x08)
	struct UImage* Image_selected_TB; // 0x1248(0x08)
	struct UImage* Locked_Overlay; // 0x1250(0x08)
	struct UImage* OffscreenOverlay; // 0x1258(0x08)
	struct UOverlay* Overlay_Delayed; // 0x1260(0x08)
	struct UOverlay* Overlay_Input; // 0x1268(0x08)
	struct UCommonTextBlock* Text_Price; // 0x1270(0x08)
	struct UCommonVisibilitySwitcher* VisibilitySwitcher_Included; // 0x1278(0x08)
	bool has prerequisite; // 0x1280(0x01)
	bool Selected; // 0x1281(0x01)
	bool Hovered; // 0x1282(0x01)

	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnRevealed(); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.OnRevealed // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnPeeked(); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.OnPeeked // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnSetCurrencyAndPrice(enum class EBattlePassCurrencyType Currency, int32_t Price); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.OnSetCurrencyAndPrice // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnAffordabilityChanged(bool bHasEnougCurrency); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.OnAffordabilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnSetTrack(bool bIsFreeTrack, bool bOwnsBattlePass); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.OnSetTrack // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnLockedProgressUpdated(float Progress, int32_t CurrentlyOwnedRewards, int32_t NeededRewards); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.OnLockedProgressUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnPreviewed(); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.OnPreviewed // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnStateChanged(enum class BattlePassTileAvailabilityStates NewState); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.OnStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnUnpreviewed(); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.OnUnpreviewed // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHoldStarted(float HoldPercentage, bool bInUseSecondaryHoldAnimation); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.BP_OnHoldStarted // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHoldEnded(float HoldPercentage, bool bInUseSecondaryHoldAnimation); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.BP_OnHoldEnded // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnHighlighted(); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.OnHighlighted // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnUnhighlighted(); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.OnUnhighlighted // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnLockedStateUpdated(bool OwnsBattlePass, bool ParentUnlocked, bool HasRemainingPrerequisites, bool bIsDelayed); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.OnLockedStateUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHoldReset(); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.BP_OnHoldReset // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHoldCompleted(); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.BP_OnHoldCompleted // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_BPS22_BattlePassTile(int32_t EntryPoint); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.ExecuteUbergraph_BPS22_BattlePassTile // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

