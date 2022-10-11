// WidgetBlueprintGeneratedClass BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C
// Size: 0x1169 (Inherited: 0x10c0)
struct UBP_SidebarCollectionScreenContainerTabButtonEditTags_C : UFortSidebarCollectionScreenContainerTabButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10c0(0x08)
	struct UWidgetAnimation* Selected_Touch; // 0x10c8(0x08)
	struct UWidgetAnimation* Unselected_Touch; // 0x10d0(0x08)
	struct UWidgetAnimation* Tag_DisabledUnhover; // 0x10d8(0x08)
	struct UWidgetAnimation* Tag_DisabledHover; // 0x10e0(0x08)
	struct UWidgetAnimation* Tag_DisabledUnhovered; // 0x10e8(0x08)
	struct UWidgetAnimation* Tag_DisabledHovered; // 0x10f0(0x08)
	struct UWidgetAnimation* Tag_Enabled; // 0x10f8(0x08)
	struct UWidgetAnimation* Tag_Unhovered; // 0x1100(0x08)
	struct UWidgetAnimation* Tag_Hovered; // 0x1108(0x08)
	struct UWidgetAnimation* Tag_Reset; // 0x1110(0x08)
	struct UWidgetAnimation* Reset; // 0x1118(0x08)
	struct UWidgetAnimation* Unhovered; // 0x1120(0x08)
	struct UWidgetAnimation* Hovered; // 0x1128(0x08)
	struct UWidgetAnimation* Unselected; // 0x1130(0x08)
	struct UWidgetAnimation* Selected; // 0x1138(0x08)
	struct UHorizontalBox* ; // 0x1140(0x08)
	struct USpacer* Mobile_Spacer; // 0x1148(0x08)
	struct UCommonBorder* NewBang; // 0x1150(0x08)
	struct UOverlay* ; // 0x1158(0x08)
	struct UScaleBox* ScaleBox_MobileMultiplier; // 0x1160(0x08)
	bool isTab; // 0x1168(0x01)

	void HandleInputMethodChanged(enum class ECommonInputType NewInputType); // Function BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.HandleInputMethodChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Finished_D3AB39584598BB6DA7EE7C98805576AC(); // Function BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.Finished_D3AB39584598BB6DA7EE7C98805576AC // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnSelected(); // Function BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnDeselected(); // Function BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_ShowBang(bool bShow); // Function BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.BP_ShowBang // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnTagCategoryChange(enum class ESocialTagCategory InTagCategory); // Function BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.BP_OnTagCategoryChange // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnInitialized(); // Function BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags(int32_t EntryPoint); // Function BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

