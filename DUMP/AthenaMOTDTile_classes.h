// WidgetBlueprintGeneratedClass AthenaMOTDTile.AthenaMOTDTile_C
// Size: 0x1148 (Inherited: 0x10c0)
struct UAthenaMOTDTile_C : UFortAthenaMOTDTile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10c0(0x08)
	struct UWidgetAnimation* OnHovered; // 0x10c8(0x08)
	struct UWidgetAnimation* Intro; // 0x10d0(0x08)
	struct UBorder* Border_Details; // 0x10d8(0x08)
	struct UBorder* Border_PipDisplay; // 0x10e0(0x08)
	struct UCommonLoadGuard* ; // 0x10e8(0x08)
	struct UImage* Fill; // 0x10f0(0x08)
	struct UImage* ; // 0x10f8(0x08)
	struct UImage* Image_ClickCatcher; // 0x1100(0x08)
	struct UImage* LoadingImage; // 0x1108(0x08)
	struct UOverlay* LoadingImageOvr; // 0x1110(0x08)
	struct UCommonWidgetSwitcherLegacy* LoadSwitcher; // 0x1118(0x08)
	struct UScaleBox* NewsItemScale; // 0x1120(0x08)
	struct USizeBox* SizeBox_Tile; // 0x1128(0x08)
	bool bShowImageOnly; // 0x1130(0x01)
	char pad_1131[0x7]; // 0x1131(0x07)
	struct FMulticastInlineDelegate OnHoveredChanged; // 0x1138(0x10)

	void UpdateDisplay(); // Function AthenaMOTDTile.AthenaMOTDTile_C.UpdateDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ShowImageOnly(); // Function AthenaMOTDTile.AthenaMOTDTile_C.ShowImageOnly // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function AthenaMOTDTile.AthenaMOTDTile_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function AthenaMOTDTile.AthenaMOTDTile_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function AthenaMOTDTile.AthenaMOTDTile_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_AthenaMOTDTile(int32_t EntryPoint); // Function AthenaMOTDTile.AthenaMOTDTile_C.ExecuteUbergraph_AthenaMOTDTile // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
	void OnHoveredChanged__DelegateSignature(bool NewIsHovered); // Function AthenaMOTDTile.AthenaMOTDTile_C.OnHoveredChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
};

