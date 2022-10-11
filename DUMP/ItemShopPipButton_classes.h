// WidgetBlueprintGeneratedClass ItemShopPipButton.ItemShopPipButton_C
// Size: 0x1138 (Inherited: 0x1110)
struct UItemShopPipButton_C : UFortTextButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1110(0x08)
	struct UWidgetAnimation* Hover; // 0x1118(0x08)
	struct UWidgetAnimation* Selected; // 0x1120(0x08)
	struct UImage* BacchusMobileShadow; // 0x1128(0x08)
	struct UImage* PIP; // 0x1130(0x08)

	void PreConstruct(bool IsDesignTime); // Function ItemShopPipButton.ItemShopPipButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function ItemShopPipButton.ItemShopPipButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnSelected(); // Function ItemShopPipButton.ItemShopPipButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnDeselected(); // Function ItemShopPipButton.ItemShopPipButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_ItemShopPipButton(int32_t EntryPoint); // Function ItemShopPipButton.ItemShopPipButton_C.ExecuteUbergraph_ItemShopPipButton // (Final|UbergraphFunction) // @ game+0xda05cc
};

