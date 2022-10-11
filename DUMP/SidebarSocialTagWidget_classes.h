// WidgetBlueprintGeneratedClass SidebarSocialTagWidget.SidebarSocialTagWidget_C
// Size: 0x12bc (Inherited: 0x1080)
struct USidebarSocialTagWidget_C : USocialTagWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1080(0x08)
	struct UWidgetAnimation* StateChange; // 0x1088(0x08)
	struct UBorder* Border_TagBorder; // 0x1090(0x08)
	struct UBP_SidebarCollectionScreenContainerTabButtonEditTags_C* BP_SidebarCollectionScreenContainerTabButtonEditTags; // 0x1098(0x08)
	struct UGridPanel* GridPanel_TagWidget; // 0x10a0(0x08)
	struct UScaleBox* ScaleBox_TagCategoryIcon; // 0x10a8(0x08)
	struct USidebarSocialAddingTagWidget_C* SidebarSocialAddingTagWidget; // 0x10b0(0x08)
	struct USpacer* Spacer_TagCategoryIcon; // 0x10b8(0x08)
	struct UCommonVisibilitySwitcher* Switcher_SelectedState; // 0x10c0(0x08)
	struct UCommonTextBlock* Text_TagName; // 0x10c8(0x08)
	struct FName Name_InnerColor; // 0x10d0(0x04)
	struct FName Name_OuterColor; // 0x10d4(0x04)
	struct FName Name_TagOpacity; // 0x10d8(0x04)
	char pad_10DC[0x4]; // 0x10dc(0x04)
	struct FString TagCategory_Disabled; // 0x10e0(0x10)
	struct FTimerHandle StateChangeLerpTimerHandle; // 0x10f0(0x08)
	double StateChangeLerpAlpha; // 0x10f8(0x08)
	struct FSidebarSocialTagCategoryStructure TagCategoryStructureReference; // 0x1100(0x70)
	struct FSidebarSocialTagCategoryStructure DisabledTagCategoryStructureReference; // 0x1170(0x70)
	double StateChangeLerpTimeStep; // 0x11e0(0x08)
	struct UMaterialInstanceDynamic* TagBorderMaterialReference; // 0x11e8(0x08)
	struct FLinearColor CurrentInnerColorReference; // 0x11f0(0x10)
	struct FLinearColor CurrentOuterColorReference; // 0x1200(0x10)
	struct FLinearColor TargetInnerColorReference; // 0x1210(0x10)
	struct FLinearColor TargetOuterColorReference; // 0x1220(0x10)
	struct FLinearColor TagContentColorWhite; // 0x1230(0x10)
	struct FLinearColor TagContentColorWhiteDisabled; // 0x1240(0x10)
	struct FLinearColor TagContentColorBlack; // 0x1250(0x10)
	struct FLinearColor CurrentTagContentColorReference; // 0x1260(0x10)
	struct FLinearColor TargetTagContentColorReference; // 0x1270(0x10)
	struct FLinearColor TagContentColorBlackDisabled; // 0x1280(0x10)
	double EnabledTagOpacity; // 0x1290(0x08)
	double DisabledTagOpacity; // 0x1298(0x08)
	bool Highlighted; // 0x12a0(0x01)
	char pad_12A1[0x7]; // 0x12a1(0x07)
	struct UMaterialInstanceDynamic* TagCategoryIconMaterialReference; // 0x12a8(0x08)
	struct FName Name_GradientStartColor; // 0x12b0(0x04)
	struct FName Name_GradientEndColor; // 0x12b4(0x04)
	struct FName Name_IconColor; // 0x12b8(0x04)

	void FunctionSetTagBorderColors(struct FLinearColor InnerColor, struct FLinearColor OuterColor); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.FunctionSetTagBorderColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnTagListEntryUnhovered(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.OnTagListEntryUnhovered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnTagListEntryHovered(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.OnTagListEntryHovered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void GetCurrentTagBorderColors(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.GetCurrentTagBorderColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void FunctionOnUnhovered(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.FunctionOnUnhovered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void FunctionOnHovered(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.FunctionOnHovered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void FunctionSetCategoryCustomizationVisibility(enum class ESlateVisibility CategoryCustomizationVisibility); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.FunctionSetCategoryCustomizationVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void FunctionSetTag(struct FText InTagName, enum class ESocialTagCategory InTagCategory, bool InIsSystemTag); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.FunctionSetTag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetCategoryCustomizationVisibility(enum class ESlateVisibility CategoryCustomizationVisibility); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.SetCategoryCustomizationVisibility // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnDeselected(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnSelected(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void SetTag(struct FText& InTagName, enum class ESocialTagCategory InTagCategory, bool bInIsSystemTag); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.SetTag // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void InterpolateTagColors(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.InterpolateTagColors // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void SetHighlightState(bool bHighlighted); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.SetHighlightState // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void SetFullColor(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.SetFullColor // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_SidebarSocialTagWidget(int32_t EntryPoint); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.ExecuteUbergraph_SidebarSocialTagWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

