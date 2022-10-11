// WidgetBlueprintGeneratedClass QualityModeSelectTile.QualityModeSelectTile_C
// Size: 0x1121 (Inherited: 0x1090)
struct UQualityModeSelectTile_C : UFortQualityModeTile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1090(0x08)
	struct UWidgetAnimation* InAnOutro; // 0x1098(0x08)
	struct UWidgetAnimation* ConfirmSeleccion; // 0x10a0(0x08)
	struct UWidgetAnimation* GameModeSelection; // 0x10a8(0x08)
	struct UCommonBorder* Border_Recommended; // 0x10b0(0x08)
	struct UImage* ConfirmSelectionFlash; // 0x10b8(0x08)
	struct UImage* ConfirmSelectionShine; // 0x10c0(0x08)
	struct UImage* DisabledGray; // 0x10c8(0x08)
	struct UImage* ; // 0x10d0(0x08)
	struct UImage* SelectedIcon; // 0x10d8(0x08)
	struct UCommonTextBlock* T_Recommended; // 0x10e0(0x08)
	struct UBorder* Tag_Selected; // 0x10e8(0x08)
	struct UCommonTextBlock* TextBlock_AdditionalDownloadSize; // 0x10f0(0x08)
	struct UCommonTextBlock* TextBlock_QualityDescription; // 0x10f8(0x08)
	struct UCommonTextBlock* TextBlock_QualityLevelName; // 0x1100(0x08)
	struct UCommonTextBlock* TextBlock_TotalBuildSize; // 0x1108(0x08)
	struct UImage* TileArt; // 0x1110(0x08)
	struct UImage* UnhoveredVignette; // 0x1118(0x08)
	bool bIsRecommendedLevel; // 0x1120(0x01)

	void Setup(); // Function QualityModeSelectTile.QualityModeSelectTile_C.Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function QualityModeSelectTile.QualityModeSelectTile_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnSelectedStateChanged(bool bIsSelected); // Function QualityModeSelectTile.QualityModeSelectTile_C.OnSelectedStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnSizeInfoReceived(); // Function QualityModeSelectTile.QualityModeSelectTile_C.OnSizeInfoReceived // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function QualityModeSelectTile.QualityModeSelectTile_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_QualityModeSelectTile(int32_t EntryPoint); // Function QualityModeSelectTile.QualityModeSelectTile_C.ExecuteUbergraph_QualityModeSelectTile // (Final|UbergraphFunction) // @ game+0xda05cc
};

