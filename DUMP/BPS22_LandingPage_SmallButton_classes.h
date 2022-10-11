// WidgetBlueprintGeneratedClass BPS22_LandingPage_SmallButton.BPS22_LandingPage_SmallButton_C
// Size: 0x1308 (Inherited: 0x1220)
struct UBPS22_LandingPage_SmallButton_C : UBattlePassLandingPageButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1220(0x08)
	struct UWidgetAnimation* Intro; // 0x1228(0x08)
	struct UWidgetAnimation* burst; // 0x1230(0x08)
	struct UWidgetAnimation* Selected_large; // 0x1238(0x08)
	struct UImage* ; // 0x1240(0x08)
	struct UImage* Image_material; // 0x1248(0x08)
	struct UImage* Image_selected_LR; // 0x1250(0x08)
	struct UImage* Image_selected_TB; // 0x1258(0x08)
	struct UImage* Image_Shine; // 0x1260(0x08)
	struct USizeBox* SizeBox_BP; // 0x1268(0x08)
	struct UCommonTextBlock* Text_Subtitle; // 0x1270(0x08)
	struct UCommonTextBlock* Text_Title; // 0x1278(0x08)
	struct FText In Text; // 0x1280(0x18)
	struct FSlateColor In Color and Opacity; // 0x1298(0x14)
	char pad_12AC[0x4]; // 0x12ac(0x04)
	struct UMaterialInterface* Material; // 0x12b0(0x08)
	bool Show BP icon; // 0x12b8(0x01)
	char pad_12B9[0x7]; // 0x12b9(0x07)
	struct FText In SubText; // 0x12c0(0x18)
	struct FText Empty; // 0x12d8(0x18)
	int32_t Title Font Size; // 0x12f0(0x04)
	char pad_12F4[0x4]; // 0x12f4(0x04)
	struct FMulticastInlineDelegate OnShowButtonDetails; // 0x12f8(0x10)

	void Play intro(); // Function BPS22_LandingPage_SmallButton.BPS22_LandingPage_SmallButton_C.Play intro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function BPS22_LandingPage_SmallButton.BPS22_LandingPage_SmallButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function BPS22_LandingPage_SmallButton.BPS22_LandingPage_SmallButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function BPS22_LandingPage_SmallButton.BPS22_LandingPage_SmallButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnInitialized(); // Function BPS22_LandingPage_SmallButton.BPS22_LandingPage_SmallButton_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_BPS22_LandingPage_SmallButton(int32_t EntryPoint); // Function BPS22_LandingPage_SmallButton.BPS22_LandingPage_SmallButton_C.ExecuteUbergraph_BPS22_LandingPage_SmallButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
	void OnShowButtonDetails__DelegateSignature(struct FBattlePassLandingPageButtonDisplayDetails DisplayInfo); // Function BPS22_LandingPage_SmallButton.BPS22_LandingPage_SmallButton_C.OnShowButtonDetails__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
};

