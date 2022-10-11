// WidgetBlueprintGeneratedClass SortAndFilterButton.SortAndFilterButton_C
// Size: 0x10c3 (Inherited: 0x1070)
struct USortAndFilterButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1070(0x08)
	struct UWidgetAnimation* ShowPipOutline; // 0x1078(0x08)
	struct UWidgetAnimation* Deselected; // 0x1080(0x08)
	struct UWidgetAnimation* Selected; // 0x1088(0x08)
	struct UWidgetAnimation* Hover; // 0x1090(0x08)
	struct UBorder* Border_Highlight; // 0x1098(0x08)
	struct UCommonTextBlock* Text_ButtonAction; // 0x10a0(0x08)
	struct FText Button Description; // 0x10a8(0x18)
	bool IsSelected; // 0x10c0(0x01)
	bool bLastVisibleSelectedValue; // 0x10c1(0x01)
	bool bIsBladeIsOpen; // 0x10c2(0x01)

	void SetHighlightBorderVisibility(bool bVisible); // Function SortAndFilterButton.SortAndFilterButton_C.SetHighlightBorderVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SnapToEndOfAnimation(struct UWidgetAnimation* Animation, enum class EUMGSequencePlayMode PlayMode); // Function SortAndFilterButton.SortAndFilterButton_C.SnapToEndOfAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ResetAnimations(); // Function SortAndFilterButton.SortAndFilterButton_C.ResetAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetText(struct FText Text); // Function SortAndFilterButton.SortAndFilterButton_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function SortAndFilterButton.SortAndFilterButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function SortAndFilterButton.SortAndFilterButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnSelected(); // Function SortAndFilterButton.SortAndFilterButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnDeselected(); // Function SortAndFilterButton.SortAndFilterButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SortAndFilterButton.SortAndFilterButton_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function SortAndFilterButton.SortAndFilterButton_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void HandleBladeOpenChanged(bool bBladeOpen); // Function SortAndFilterButton.SortAndFilterButton_C.HandleBladeOpenChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_SortAndFilterButton(int32_t EntryPoint); // Function SortAndFilterButton.SortAndFilterButton_C.ExecuteUbergraph_SortAndFilterButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

