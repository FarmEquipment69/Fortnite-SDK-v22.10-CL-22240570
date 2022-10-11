// WidgetBlueprintGeneratedClass AthenaMatchmakingPlayButton.AthenaMatchmakingPlayButton_C
// Size: 0x10d0 (Inherited: 0x1090)
struct UAthenaMatchmakingPlayButton_C : UAthenaMatchmakingPlayButtonBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1090(0x08)
	struct UWidgetAnimation* Disabled; // 0x1098(0x08)
	struct UWidgetAnimation* PlayShine; // 0x10a0(0x08)
	struct UWidgetAnimation* OnHovered; // 0x10a8(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0x10b0(0x08)
	struct UImage* Image_ButtonTop; // 0x10b8(0x08)
	struct UImage* Image_Shadow; // 0x10c0(0x08)
	struct UMatchmakingInputIndicator_C* MatchmakingInputIndicator; // 0x10c8(0x08)

	void SetButtonText(struct FText InText); // Function AthenaMatchmakingPlayButton.AthenaMatchmakingPlayButton_C.SetButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function AthenaMatchmakingPlayButton.AthenaMatchmakingPlayButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function AthenaMatchmakingPlayButton.AthenaMatchmakingPlayButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_AthenaMatchmakingPlayButton(int32_t EntryPoint); // Function AthenaMatchmakingPlayButton.AthenaMatchmakingPlayButton_C.ExecuteUbergraph_AthenaMatchmakingPlayButton // (Final|UbergraphFunction) // @ game+0xda05cc
};

