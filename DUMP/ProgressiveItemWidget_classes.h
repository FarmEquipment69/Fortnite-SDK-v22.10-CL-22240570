// WidgetBlueprintGeneratedClass ProgressiveItemWidget.ProgressiveItemWidget_C
// Size: 0x113a (Inherited: 0x10b0)
struct UProgressiveItemWidget_C : UFortProgressiveItemWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10b0(0x08)
	struct UWidgetAnimation* Item_Hover; // 0x10b8(0x08)
	struct UWidgetAnimation* Hover_Burst; // 0x10c0(0x08)
	struct UWidgetAnimation* Select; // 0x10c8(0x08)
	struct UWidgetAnimation* NotCurrentRow; // 0x10d0(0x08)
	struct UWidgetAnimation* Reveal_Hide; // 0x10d8(0x08)
	struct UWidgetAnimation* GrowTile; // 0x10e0(0x08)
	struct UImage* DisableTintOverlay; // 0x10e8(0x08)
	struct UHorizontalBox* HBox_locks; // 0x10f0(0x08)
	struct UImage* Image; // 0x10f8(0x08)
	struct UImage* ; // 0x1100(0x08)
	struct UImage* Image_RarityStripe; // 0x1108(0x08)
	struct UFortLazyImage* ItemCardImage; // 0x1110(0x08)
	struct UImage* OffscreenOverlay; // 0x1118(0x08)
	struct UOverlay* Overlay_Delayed; // 0x1120(0x08)
	struct UFortMobileImage* Widget_ClaimedImage; // 0x1128(0x08)
	struct UFortMobileImage* Widget_LockedImage; // 0x1130(0x08)
	bool Selected; // 0x1138(0x01)
	bool Hovered; // 0x1139(0x01)

	void Update Subscribed Visuals(bool IsSubscribed); // Function ProgressiveItemWidget.ProgressiveItemWidget_C.Update Subscribed Visuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnStageItemChanged(struct FProgressiveStageItemInfo& InStageItemInfo); // Function ProgressiveItemWidget.ProgressiveItemWidget_C.OnStageItemChanged // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnHighlighted(); // Function ProgressiveItemWidget.ProgressiveItemWidget_C.OnHighlighted // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnUnhighlighted(); // Function ProgressiveItemWidget.ProgressiveItemWidget_C.OnUnhighlighted // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnPeekStateChanged(bool bIsInPeekState); // Function ProgressiveItemWidget.ProgressiveItemWidget_C.OnPeekStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function ProgressiveItemWidget.ProgressiveItemWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function ProgressiveItemWidget.ProgressiveItemWidget_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnInitialized(); // Function ProgressiveItemWidget.ProgressiveItemWidget_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function ProgressiveItemWidget.ProgressiveItemWidget_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnTileMaterialLoaded(bool bSubscribed); // Function ProgressiveItemWidget.ProgressiveItemWidget_C.OnTileMaterialLoaded // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_ProgressiveItemWidget(int32_t EntryPoint); // Function ProgressiveItemWidget.ProgressiveItemWidget_C.ExecuteUbergraph_ProgressiveItemWidget // (Final|UbergraphFunction) // @ game+0xda05cc
};

