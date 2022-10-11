// WidgetBlueprintGeneratedClass BacchusItemShopCreatorButton.BacchusItemShopCreatorButton_C
// Size: 0x1132 (Inherited: 0x1110)
struct UBacchusItemShopCreatorButton_C : UFortTextButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1110(0x08)
	struct UWidgetAnimation* Hover; // 0x1118(0x08)
	struct UImage* Backing; // 0x1120(0x08)
	struct UImage* IMG_Arrow; // 0x1128(0x08)
	bool bFlipArrow; // 0x1130(0x01)
	bool bIsTop; // 0x1131(0x01)

	void BP_OnHovered(); // Function BacchusItemShopCreatorButton.BacchusItemShopCreatorButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function BacchusItemShopCreatorButton.BacchusItemShopCreatorButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_BacchusItemShopCreatorButton(int32_t EntryPoint); // Function BacchusItemShopCreatorButton.BacchusItemShopCreatorButton_C.ExecuteUbergraph_BacchusItemShopCreatorButton // (Final|UbergraphFunction) // @ game+0xda05cc
};

