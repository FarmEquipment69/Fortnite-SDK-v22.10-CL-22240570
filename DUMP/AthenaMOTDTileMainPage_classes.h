// WidgetBlueprintGeneratedClass AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C
// Size: 0x1168 (Inherited: 0x10c0)
struct UAthenaMOTDTileMainPage_C : UFortAthenaMOTDTile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10c0(0x08)
	struct UWidgetAnimation* OnHover; // 0x10c8(0x08)
	struct UWidgetAnimation* OnSelected; // 0x10d0(0x08)
	struct UWidgetAnimation* Intro; // 0x10d8(0x08)
	struct UBorder* Border_Details; // 0x10e0(0x08)
	struct UBorder* Border_PipDisplay; // 0x10e8(0x08)
	struct UCommonLoadGuard* ; // 0x10f0(0x08)
	struct UImage* Fill; // 0x10f8(0x08)
	struct UImage* Image_SelectedPointer; // 0x1100(0x08)
	struct UImage* Image_SelectedPointer_Shadow; // 0x1108(0x08)
	struct UImage* LoadingImage; // 0x1110(0x08)
	struct UOverlay* LoadingImageOvr; // 0x1118(0x08)
	struct UCommonWidgetSwitcherLegacy* LoadSwitcher; // 0x1120(0x08)
	struct UScaleBox* NewsItemScale; // 0x1128(0x08)
	struct USizeBox* SizeBox_Tile; // 0x1130(0x08)
	bool bShowImageOnly; // 0x1138(0x01)
	char pad_1139[0x3]; // 0x1139(0x03)
	int32_t PreviewPipCount; // 0x113c(0x04)
	struct FMulticastInlineDelegate OnHoveredChanged; // 0x1140(0x10)
	struct FLinearColor DefaultColor; // 0x1150(0x10)
	struct UMaterialInstanceDynamic* MID_Font; // 0x1160(0x08)

	void UpdateDisplay(); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.UpdateDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ShowImageOnly(); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.ShowImageOnly // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnPopulateNews(struct FAthenaMOTDBase& NewsEntry); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.OnPopulateNews // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void BP_OnSelected(); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnDeselected(); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnInitialized(); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_AthenaMOTDTileMainPage(int32_t EntryPoint); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.ExecuteUbergraph_AthenaMOTDTileMainPage // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
	void OnHoveredChanged__DelegateSignature(bool NewIsHovered); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.OnHoveredChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
};

