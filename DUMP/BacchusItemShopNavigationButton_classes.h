// WidgetBlueprintGeneratedClass BacchusItemShopNavigationButton.BacchusItemShopNavigationButton_C
// Size: 0x10ca (Inherited: 0x1080)
struct UBacchusItemShopNavigationButton_C : UAthenaItemShopNavigationButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1080(0x08)
	struct UWidgetAnimation* FadeOutBacking; // 0x1088(0x08)
	struct UWidgetAnimation* Translate_Bottom; // 0x1090(0x08)
	struct UWidgetAnimation* Translate_Top; // 0x1098(0x08)
	struct UWidgetAnimation* InitialState; // 0x10a0(0x08)
	struct UImage* Backing; // 0x10a8(0x08)
	struct UBorder* BorderButton; // 0x10b0(0x08)
	struct UBorder* GridBoundBorder; // 0x10b8(0x08)
	struct UImage* IMG_Arrow; // 0x10c0(0x08)
	bool bFlipArrow; // 0x10c8(0x01)
	bool bIsTop; // 0x10c9(0x01)

	void PreConstruct(bool IsDesignTime); // Function BacchusItemShopNavigationButton.BacchusItemShopNavigationButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function BacchusItemShopNavigationButton.BacchusItemShopNavigationButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function BacchusItemShopNavigationButton.BacchusItemShopNavigationButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_BacchusItemShopNavigationButton(int32_t EntryPoint); // Function BacchusItemShopNavigationButton.BacchusItemShopNavigationButton_C.ExecuteUbergraph_BacchusItemShopNavigationButton // (Final|UbergraphFunction) // @ game+0xda05cc
};

