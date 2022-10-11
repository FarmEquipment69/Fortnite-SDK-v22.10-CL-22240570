// WidgetBlueprintGeneratedClass BacchusItemShopScreen.BacchusItemShopScreen_C
// Size: 0x750 (Inherited: 0x708)
struct UBacchusItemShopScreen_C : UAthenaItemShopScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x708(0x08)
	struct UCommonBorder* NoOffersBox; // 0x710(0x08)
	struct UImage* ProgressSpinner; // 0x718(0x08)
	struct USafeZone* ; // 0x720(0x08)
	struct USafeZone* ; // 0x728(0x08)
	struct USafeZone* ; // 0x730(0x08)
	struct USafeZone* ; // 0x738(0x08)
	struct UWidgetSwitcher* Switcher_Sections; // 0x740(0x08)
	struct UVerticalBox* VerticalBox_Sections; // 0x748(0x08)

	void Construct(); // Function BacchusItemShopScreen.BacchusItemShopScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnSectionsEstablished(bool bEmpty); // Function BacchusItemShopScreen.BacchusItemShopScreen_C.OnSectionsEstablished // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnEstablishingSections(); // Function BacchusItemShopScreen.BacchusItemShopScreen_C.OnEstablishingSections // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_BacchusItemShopScreen(int32_t EntryPoint); // Function BacchusItemShopScreen.BacchusItemShopScreen_C.ExecuteUbergraph_BacchusItemShopScreen // (Final|UbergraphFunction) // @ game+0xda05cc
};

