// WidgetBlueprintGeneratedClass LiveStreamMenuButtonToggle.LiveStreamMenuButtonToggle_C
// Size: 0x10c0 (Inherited: 0x1080)
struct ULiveStreamMenuButtonToggle_C : ULiveStreamMenuToggleButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1080(0x08)
	struct UWidgetAnimation* Hover; // 0x1088(0x08)
	struct UImage* Art; // 0x1090(0x08)
	struct UImage* ButtonBacking; // 0x1098(0x08)
	struct UCommonTextBlock* ButtonText; // 0x10a0(0x08)
	struct UOverlay* IconBox; // 0x10a8(0x08)
	struct ULiveViolator_C* LiveViolator; // 0x10b0(0x08)
	struct UImage* ; // 0x10b8(0x08)

	void RefreshButton(bool IsLiveStreamEnabled); // Function LiveStreamMenuButtonToggle.LiveStreamMenuButtonToggle_C.RefreshButton // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function LiveStreamMenuButtonToggle.LiveStreamMenuButtonToggle_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function LiveStreamMenuButtonToggle.LiveStreamMenuButtonToggle_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function LiveStreamMenuButtonToggle.LiveStreamMenuButtonToggle_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_LiveStreamMenuButtonToggle(int32_t EntryPoint); // Function LiveStreamMenuButtonToggle.LiveStreamMenuButtonToggle_C.ExecuteUbergraph_LiveStreamMenuButtonToggle // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

