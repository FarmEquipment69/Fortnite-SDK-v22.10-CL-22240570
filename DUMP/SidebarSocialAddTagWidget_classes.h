// WidgetBlueprintGeneratedClass SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C
// Size: 0x1210 (Inherited: 0x1020)
struct USidebarSocialAddTagWidget_C : UCommonButtonBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1020(0x08)
	struct UWidgetAnimation* Hovered; // 0x1028(0x08)
	struct UBorder* Border_AddTagBorder; // 0x1030(0x08)
	struct USidebarSocialAddingTagWidget_C* SidebarSocialAddingTagWidget; // 0x1038(0x08)
	struct UCommonVisibilitySwitcher* Switcher_Tag; // 0x1040(0x08)
	struct UCommonTextBlock* Text_AddTagName; // 0x1048(0x08)
	struct FTimerHandle StateChangeLerpTimerHandle; // 0x1050(0x08)
	double StateChangeLerpAlpha; // 0x1058(0x08)
	double StateChangeLerpTimeStep; // 0x1060(0x08)
	struct FLinearColor TagContentColorWhite; // 0x1068(0x10)
	struct FLinearColor TagContentColorBlack; // 0x1078(0x10)
	double EnabledTagOpacity; // 0x1088(0x08)
	double DisabledTagOpacity; // 0x1090(0x08)
	struct FName Name_InnerColor; // 0x1098(0x04)
	struct FName Name_OuterColor; // 0x109c(0x04)
	struct FName Name_TagOpacity; // 0x10a0(0x04)
	char pad_10A4[0x4]; // 0x10a4(0x04)
	struct FString TagCategory_AddTag; // 0x10a8(0x10)
	struct FString TagCategory_Disabled; // 0x10b8(0x10)
	struct FLinearColor CurrentInnerColorReference; // 0x10c8(0x10)
	struct FLinearColor CurrentOuterColorReference; // 0x10d8(0x10)
	struct FLinearColor TargetInnerColorReference; // 0x10e8(0x10)
	struct FLinearColor TargetOuterColorReference; // 0x10f8(0x10)
	struct FLinearColor CurrentTagContentColorReference; // 0x1108(0x10)
	struct FLinearColor TargetTagContentColorReference; // 0x1118(0x10)
	struct FSidebarSocialTagCategoryStructure TagCategoryStructureReference; // 0x1128(0x70)
	struct FSidebarSocialTagCategoryStructure DisabledTagCategoryStructureReference; // 0x1198(0x70)
	struct UMaterialInstanceDynamic* TagBorderMaterialReference; // 0x1208(0x08)

	void GetCurrentTagBorderColors(); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.GetCurrentTagBorderColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void FunctionOnUnhovered(); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.FunctionOnUnhovered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void FunctionOnHovered(); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.FunctionOnHovered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void FunctionSetCategoryCustomizationVisibility(enum class ESlateVisibility CategoryCustomizationVisibility); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.FunctionSetCategoryCustomizationVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void EventSetTag(); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.EventSetTag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnSelected(); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnDeselected(); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void InterpolateTagColors(); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.InterpolateTagColors // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_SidebarSocialAddTagWidget(int32_t EntryPoint); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.ExecuteUbergraph_SidebarSocialAddTagWidget // (Final|UbergraphFunction) // @ game+0xda05cc
};

