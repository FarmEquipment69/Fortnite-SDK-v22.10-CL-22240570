// WidgetBlueprintGeneratedClass TopBarTabButton.TopBarTabButton_C
// Size: 0x11a8 (Inherited: 0x10d0)
struct UTopBarTabButton_C : UFortTopBarTabTextIconButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10d0(0x08)
	struct UWidgetAnimation* Hovered; // 0x10d8(0x08)
	struct UWidgetAnimation* Selected; // 0x10e0(0x08)
	struct USizeBox* ; // 0x10e8(0x08)
	struct USizeBox* ; // 0x10f0(0x08)
	struct USizeBox* ; // 0x10f8(0x08)
	struct UVerticalBox* ; // 0x1100(0x08)
	struct UMaterialInstanceDynamic* MID_ButtonBorder; // 0x1108(0x08)
	bool PreviewMobileStyle; // 0x1110(0x01)
	char pad_1111[0x3]; // 0x1111(0x03)
	struct FFloatSpringState SpringState_ShapeChange; // 0x1114(0x0c)
	struct FFloatSpringState SpringState_Scale; // 0x1120(0x0c)
	char pad_112C[0x4]; // 0x112c(0x04)
	double Spring_Scale_Target; // 0x1130(0x08)
	double MassMultiply; // 0x1138(0x08)
	double DampenMultiply; // 0x1140(0x08)
	double StiffnessMultiply; // 0x1148(0x08)
	bool VisualSelectionState; // 0x1150(0x01)
	char pad_1151[0x7]; // 0x1151(0x07)
	double RandomFloat_Top; // 0x1158(0x08)
	double RandomFloat_Left; // 0x1160(0x08)
	double RandomFloat_Right; // 0x1168(0x08)
	double RandomFloat_Bottom; // 0x1170(0x08)
	double ShapeChange_New; // 0x1178(0x08)
	double ShapeChange_Target; // 0x1180(0x08)
	bool UpdateSpring; // 0x1188(0x01)
	char pad_1189[0x7]; // 0x1189(0x07)
	struct FText ButtonText; // 0x1190(0x18)

	void OverrideIcon(bool Show, struct FSlateBrush inSlateBrush); // Function TopBarTabButton.TopBarTabButton_C.OverrideIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetText(struct FText ButtonText); // Function TopBarTabButton.TopBarTabButton_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateMIDWithRandomValues(); // Function TopBarTabButton.TopBarTabButton_C.UpdateMIDWithRandomValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SeedRandomValues(); // Function TopBarTabButton.TopBarTabButton_C.SeedRandomValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void InitializeButtonBorderMID(); // Function TopBarTabButton.TopBarTabButton_C.InitializeButtonBorderMID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void HandleSelectionChangedVisuals(bool bIsSelected); // Function TopBarTabButton.TopBarTabButton_C.HandleSelectionChangedVisuals // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnCurrentTextStyleChanged(); // Function TopBarTabButton.TopBarTabButton_C.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function TopBarTabButton.TopBarTabButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function TopBarTabButton.TopBarTabButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnSelectedChangedEvent(struct UCommonButtonLegacy* Button, bool Selected); // Function TopBarTabButton.TopBarTabButton_C.OnSelectedChangedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnInitialized(); // Function TopBarTabButton.TopBarTabButton_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function TopBarTabButton.TopBarTabButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function TopBarTabButton.TopBarTabButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_TopBarTabButton(int32_t EntryPoint); // Function TopBarTabButton.TopBarTabButton_C.ExecuteUbergraph_TopBarTabButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

