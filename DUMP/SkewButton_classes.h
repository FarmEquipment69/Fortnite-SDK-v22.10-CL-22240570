// WidgetBlueprintGeneratedClass SkewButton.SkewButton_C
// Size: 0x10d3 (Inherited: 0x1070)
struct USkewButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1070(0x08)
	struct UWidgetAnimation* Released; // 0x1078(0x08)
	struct UWidgetAnimation* Pressed; // 0x1080(0x08)
	struct UWidgetAnimation* Hover; // 0x1088(0x08)
	struct UImage* ImageButtonFill; // 0x1090(0x08)
	struct UImage* ImageShadow; // 0x1098(0x08)
	struct UNamedSlot* NamedSlot_ButtonContent; // 0x10a0(0x08)
	struct UOverlay* Overlay_SkewBrushes; // 0x10a8(0x08)
	struct FLinearColor ButtonColor; // 0x10b0(0x10)
	struct FLinearColor HoverColor; // 0x10c0(0x10)
	bool Chip; // 0x10d0(0x01)
	bool Skew; // 0x10d1(0x01)
	bool NoHoverColor; // 0x10d2(0x01)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SkewButton.SkewButton_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SkewButton.SkewButton_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function SkewButton.SkewButton_C.OnTouchEnded // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function SkewButton.SkewButton_C.OnTouchStarted // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function SkewButton.SkewButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SkewButton.SkewButton_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function SkewButton.SkewButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function SkewButton.SkewButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function SkewButton.SkewButton_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void BP_OnClicked(); // Function SkewButton.SkewButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function SkewButton.SkewButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_SkewButton(int32_t EntryPoint); // Function SkewButton.SkewButton_C.ExecuteUbergraph_SkewButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

