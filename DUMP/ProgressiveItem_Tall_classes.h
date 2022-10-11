// WidgetBlueprintGeneratedClass ProgressiveItem_Tall.ProgressiveItem_Tall_C
// Size: 0x120e (Inherited: 0x10d0)
struct UProgressiveItem_Tall_C : UFortProgressiveSetTile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10d0(0x08)
	struct UWidgetAnimation* HoverBurst; // 0x10d8(0x08)
	struct UWidgetAnimation* Deselected; // 0x10e0(0x08)
	struct UWidgetAnimation* Selected; // 0x10e8(0x08)
	struct UImage* Image; // 0x10f0(0x08)
	struct UImage* ; // 0x10f8(0x08)
	struct UImage* ; // 0x1100(0x08)
	struct UImage* Image_CompletedCheck; // 0x1108(0x08)
	struct UImage* Image_Dimmer; // 0x1110(0x08)
	struct UImage* Image_Gradient; // 0x1118(0x08)
	struct UFortLazyImage* Image_Item; // 0x1120(0x08)
	struct UImage* Image_PriceBg; // 0x1128(0x08)
	struct UOverlay* Overlay_InspectionText; // 0x1130(0x08)
	struct UCommonVisibilitySwitcher* Switcher_CheckDelay; // 0x1138(0x08)
	struct UAthenaItemShopReactiveTileText* Text_Stages; // 0x1140(0x08)
	struct UCommonRichTextBlock* Text_Subtitle; // 0x1148(0x08)
	struct UAthenaItemShopReactiveTileText* TileText_ItemName; // 0x1150(0x08)
	enum class ETextJustify TileTextJustification; // 0x1158(0x01)
	char pad_1159[0x7]; // 0x1159(0x07)
	struct UMaterialInterface* Material; // 0x1160(0x08)
	struct FVector2D In Size; // 0x1168(0x10)
	double Extra Space; // 0x1178(0x08)
	struct FText Empty text; // 0x1180(0x18)
	bool IsDisabled; // 0x1198(0x01)
	bool HasExtraLock; // 0x1199(0x01)
	char pad_119A[0x6]; // 0x119a(0x06)
	struct FProgressiveSetInfo SetInfo; // 0x11a0(0x68)
	bool Subscribed; // 0x1208(0x01)
	bool IsCompleted; // 0x1209(0x01)
	bool Hovered_DesignTime; // 0x120a(0x01)
	bool Subbed_DesignTime; // 0x120b(0x01)
	bool Completed_DesignTime; // 0x120c(0x01)
	bool Hovered; // 0x120d(0x01)

	void UpdateSubscribedState(bool bInSubscribed); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.UpdateSubscribedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateCompletedState(); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.UpdateCompletedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateVisualState(bool Selected, bool Subbed, bool Completed, bool Hovered); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.UpdateVisualState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Play intro(); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.Play intro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnInitializeSetInfo(struct FProgressiveSetInfo& InSetInfo, struct FText& BottomText, struct FText& BottomSubtext, bool bSubscribed); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.BP_OnInitializeSetInfo // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void BP_OnSelected(); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnDeselected(); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnTileMaterialLoaded(bool bSubscribed); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.BP_OnTileMaterialLoaded // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_ProgressiveItem_Tall(int32_t EntryPoint); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.ExecuteUbergraph_ProgressiveItem_Tall // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

