// WidgetBlueprintGeneratedClass PageNavigatorPipButton.PageNavigatorPipButton_C
// Size: 0x1148 (Inherited: 0x1110)
struct UPageNavigatorPipButton_C : UFortTextButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1110(0x08)
	struct UWidgetAnimation* Hover; // 0x1118(0x08)
	struct UWidgetAnimation* Selected; // 0x1120(0x08)
	struct UImage* BacchusMobileShadow; // 0x1128(0x08)
	struct UCommonActionWidget* CommonActionWidget_RightStick; // 0x1130(0x08)
	struct UImage* PIP; // 0x1138(0x08)
	struct UOverlay* RSContainer; // 0x1140(0x08)

	void BP_OnDeselected(); // Function PageNavigatorPipButton.PageNavigatorPipButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnSelected(); // Function PageNavigatorPipButton.PageNavigatorPipButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function PageNavigatorPipButton.PageNavigatorPipButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function PageNavigatorPipButton.PageNavigatorPipButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void Set Pip Colors(struct FLinearColor Base Color, struct FLinearColor Hover Color, struct FLinearColor Select Color); // Function PageNavigatorPipButton.PageNavigatorPipButton_C.Set Pip Colors // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetRightStickIconAllowed(bool Allowed); // Function PageNavigatorPipButton.PageNavigatorPipButton_C.SetRightStickIconAllowed // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_PageNavigatorPipButton(int32_t EntryPoint); // Function PageNavigatorPipButton.PageNavigatorPipButton_C.ExecuteUbergraph_PageNavigatorPipButton // (Final|UbergraphFunction) // @ game+0xda05cc
};

