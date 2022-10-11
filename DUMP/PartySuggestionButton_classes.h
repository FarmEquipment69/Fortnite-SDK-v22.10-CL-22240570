// WidgetBlueprintGeneratedClass PartySuggestionButton.PartySuggestionButton_C
// Size: 0x11d3 (Inherited: 0x10b0)
struct UPartySuggestionButton_C : UFortPartySuggestionButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10b0(0x08)
	struct UWidgetAnimation* RequestAccepted; // 0x10b8(0x08)
	struct UWidgetAnimation* MouseHovered; // 0x10c0(0x08)
	struct UWidgetAnimation* Outro; // 0x10c8(0x08)
	struct UWidgetAnimation* Hovered; // 0x10d0(0x08)
	struct UWidgetAnimation* Intro; // 0x10d8(0x08)
	struct UBorder* ; // 0x10e0(0x08)
	struct UBorder* BorderOfDarkenedText; // 0x10e8(0x08)
	struct UHorizontalBox* HB_ActionPrompt; // 0x10f0(0x08)
	struct UImage* I_SquiglyTail; // 0x10f8(0x08)
	struct UImage* SparklyTraingles; // 0x1100(0x08)
	struct UMaterialInstanceDynamic* MID_MainBorder_Normal; // 0x1108(0x08)
	struct UMaterialInstanceDynamic* MID_MainBorder_Normal_Tail; // 0x1110(0x08)
	struct FFloatSpringState SpringState_ShapeChange; // 0x1118(0x0c)
	char pad_1124[0x4]; // 0x1124(0x04)
	double SS_0_Stiffness; // 0x1128(0x08)
	double SS_0_Damping; // 0x1130(0x08)
	double SS_0_Mass; // 0x1138(0x08)
	double Spring_ShapeChange_NewVal; // 0x1140(0x08)
	double Spring_ShapeChange_Target; // 0x1148(0x08)
	struct FName MID_ShapeParam; // 0x1150(0x04)
	char pad_1154[0x4]; // 0x1154(0x04)
	struct UMaterialInterface* M_MainBorder_Normal; // 0x1158(0x08)
	struct UMaterialInterface* M_MainBorder_Normal_Tail; // 0x1160(0x08)
	struct UMaterialInterface* M_MainBorder_Highlight; // 0x1168(0x08)
	struct UMaterialInterface* M_MainBorder_Highlight_Tail; // 0x1170(0x08)
	struct UMaterialInstanceDynamic* MID_HighlightBorder; // 0x1178(0x08)
	struct UMaterialInstanceDynamic* MID_HighlightBorder_Tail; // 0x1180(0x08)
	struct UMaterialInstanceDynamic* MID_Cur_Border; // 0x1188(0x08)
	struct UMaterialInstanceDynamic* MID_Cur_Tail; // 0x1190(0x08)
	struct UMaterialInstanceDynamic* MID_SparkleTraingles; // 0x1198(0x08)
	struct UMaterialInterface* M_SparkleTriangles; // 0x11a0(0x08)
	struct FName MID_Color_R_Param; // 0x11a8(0x04)
	struct FName MID_Sparkles_InnerColorParam; // 0x11ac(0x04)
	struct FName MID_Sparkles_OuterColorParam; // 0x11b0(0x04)
	struct FName MID_Color_L_Param; // 0x11b4(0x04)
	struct FName MID_Sparkles_TriangleColor_A; // 0x11b8(0x04)
	struct FFloatSpringState SpringState_Scale; // 0x11bc(0x0c)
	double Spring_Scale_Target; // 0x11c8(0x08)
	bool bUseSpringInterpAnims; // 0x11d0(0x01)
	bool IsInvited; // 0x11d1(0x01)
	bool bNewSuggestionInQueue; // 0x11d2(0x01)

	void SetupMIDReferences(); // Function PartySuggestionButton.PartySuggestionButton_C.SetupMIDReferences // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetMainMIDs(struct UMaterialInstanceDynamic* BorderMID, struct UMaterialInstanceDynamic* TailMID, struct UMaterialInstanceDynamic* SparklesMID); // Function PartySuggestionButton.PartySuggestionButton_C.SetMainMIDs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void InitPhysAnim(); // Function PartySuggestionButton.PartySuggestionButton_C.InitPhysAnim // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void InitMIDs(); // Function PartySuggestionButton.PartySuggestionButton_C.InitMIDs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void HandleOutroAnimationFinished(); // Function PartySuggestionButton.PartySuggestionButton_C.HandleOutroAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function PartySuggestionButton.PartySuggestionButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function PartySuggestionButton.PartySuggestionButton_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void PlayIntro(); // Function PartySuggestionButton.PartySuggestionButton_C.PlayIntro // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function PartySuggestionButton.PartySuggestionButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function PartySuggestionButton.PartySuggestionButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnDisplayInfoUpdated(bool bIsInvited, bool bIsPlaying); // Function PartySuggestionButton.PartySuggestionButton_C.OnDisplayInfoUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnSuggestionAccepted(); // Function PartySuggestionButton.PartySuggestionButton_C.OnSuggestionAccepted // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnDismissSuggestion(); // Function PartySuggestionButton.PartySuggestionButton_C.OnDismissSuggestion // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnNewSuggestionAdded(); // Function PartySuggestionButton.PartySuggestionButton_C.OnNewSuggestionAdded // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void PlayOutro(); // Function PartySuggestionButton.PartySuggestionButton_C.PlayOutro // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnInitialized(); // Function PartySuggestionButton.PartySuggestionButton_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnSuggestionChanged(); // Function PartySuggestionButton.PartySuggestionButton_C.OnSuggestionChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_PartySuggestionButton(int32_t EntryPoint); // Function PartySuggestionButton.PartySuggestionButton_C.ExecuteUbergraph_PartySuggestionButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

