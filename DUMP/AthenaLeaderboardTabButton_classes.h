// WidgetBlueprintGeneratedClass AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C
// Size: 0x11a4 (Inherited: 0x1070)
struct UAthenaLeaderboardTabButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1070(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0x1078(0x08)
	struct UHorizontalBox* ContentHB; // 0x1080(0x08)
	struct UImage* LeftSideImage; // 0x1088(0x08)
	struct FText ButtonText; // 0x1090(0x18)
	char pad_10A8[0x8]; // 0x10a8(0x08)
	struct FSlateBrush IconBrush; // 0x10b0(0xc0)
	bool UseText; // 0x1170(0x01)
	char pad_1171[0x3]; // 0x1171(0x03)
	struct FLinearColor SelectedIconTint; // 0x1174(0x10)
	struct FLinearColor DeselectedIconTint; // 0x1184(0x10)
	struct FLinearColor HoveredIconTint; // 0x1194(0x10)

	void ShowText(); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.ShowText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Set Icon(struct FSlateBrush IconBrush); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.Set Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Set Text(struct FText ButtonText); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.Set Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnCurrentTextStyleChanged(); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.SetTabLabelInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnSelected(); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnDeselected(); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_AthenaLeaderboardTabButton(int32_t EntryPoint); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.ExecuteUbergraph_AthenaLeaderboardTabButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

