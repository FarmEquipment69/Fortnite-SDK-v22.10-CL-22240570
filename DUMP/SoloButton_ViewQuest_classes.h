// WidgetBlueprintGeneratedClass SoloButton_ViewQuest.SoloButton_ViewQuest_C
// Size: 0x10d0 (Inherited: 0x1080)
struct USoloButton_ViewQuest_C : UFortAthenaViewQuestsButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1080(0x08)
	struct UWidgetAnimation* ViewQuest_Hover; // 0x1088(0x08)
	struct UWidgetAnimation* NewQuestPulse_Pressed; // 0x1090(0x08)
	struct UWidgetAnimation* NewQuestPulse_Hover; // 0x1098(0x08)
	struct UWidgetAnimation* NewQuestPulse; // 0x10a0(0x08)
	struct UImage* ButtonBacking; // 0x10a8(0x08)
	struct UImage* Image_NewQuestBorder; // 0x10b0(0x08)
	struct UScaleBox* InputActionIconScale; // 0x10b8(0x08)
	struct UImage* Pulse; // 0x10c0(0x08)
	struct UCommonTextBlock* ViewQuestText; // 0x10c8(0x08)

	void UpdateInputActionIconScale(); // Function SoloButton_ViewQuest.SoloButton_ViewQuest_C.UpdateInputActionIconScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function SoloButton_ViewQuest.SoloButton_ViewQuest_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function SoloButton_ViewQuest.SoloButton_ViewQuest_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void HandleUnseenQuestsChanged(bool bHasUnseenQuests); // Function SoloButton_ViewQuest.SoloButton_ViewQuest_C.HandleUnseenQuestsChanged // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function SoloButton_ViewQuest.SoloButton_ViewQuest_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // Function SoloButton_ViewQuest.SoloButton_ViewQuest_C.OnTriggeredInputActionChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_SoloButton_ViewQuest(int32_t EntryPoint); // Function SoloButton_ViewQuest.SoloButton_ViewQuest_C.ExecuteUbergraph_SoloButton_ViewQuest // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

