// WidgetBlueprintGeneratedClass ShowdownEventTile.ShowdownEventTile_C
// Size: 0x1120 (Inherited: 0x1070)
struct UShowdownEventTile_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1070(0x08)
	struct UWidgetAnimation* Focus_Violator; // 0x1078(0x08)
	struct UWidgetAnimation* Hover; // 0x1080(0x08)
	struct UWidgetAnimation* Focus; // 0x1088(0x08)
	struct UWidgetAnimation* TransitionSize; // 0x1090(0x08)
	struct UWidgetAnimation* Intro; // 0x1098(0x08)
	struct UCommonBorder* CommonBorder_InputContainer; // 0x10a0(0x08)
	struct UImage* Image_BG; // 0x10a8(0x08)
	struct UImage* Image_Ended; // 0x10b0(0x08)
	struct UImage* Image_Focus; // 0x10b8(0x08)
	struct UImage* Image_Hover; // 0x10c0(0x08)
	struct UImage* Image_Tail; // 0x10c8(0x08)
	struct UShowdownEventTile_RoundBreak_C* ShowdownEventTile_RoundBreak; // 0x10d0(0x08)
	struct UShowdownEventTileInfo_C* ShowdownEventTileInfo; // 0x10d8(0x08)
	struct UShowdownEventTileViolator_C* Violator; // 0x10e0(0x08)
	struct FString EventId; // 0x10e8(0x10)
	bool isEnded; // 0x10f8(0x01)
	bool IsLive; // 0x10f9(0x01)
	char pad_10FA[0x6]; // 0x10fa(0x06)
	struct FMulticastInlineDelegate OnWindowSelected; // 0x1100(0x10)
	struct FString TournamentId; // 0x1110(0x10)

	void SetData(struct FString TournamentInfo, struct FString EventInfo); // Function ShowdownEventTile.ShowdownEventTile_C.SetData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function ShowdownEventTile.ShowdownEventTile_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnClicked(); // Function ShowdownEventTile.ShowdownEventTile_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void EventIntro(int32_t Index); // Function ShowdownEventTile.ShowdownEventTile_C.EventIntro // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void EventResize(bool Out); // Function ShowdownEventTile.ShowdownEventTile_C.EventResize // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function ShowdownEventTile.ShowdownEventTile_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function ShowdownEventTile.ShowdownEventTile_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnSelected(); // Function ShowdownEventTile.ShowdownEventTile_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnDeselected(); // Function ShowdownEventTile.ShowdownEventTile_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function ShowdownEventTile.ShowdownEventTile_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function ShowdownEventTile.ShowdownEventTile_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void EventSetState(enum class EFortShowdownEventState EventState); // Function ShowdownEventTile.ShowdownEventTile_C.EventSetState // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void EventColorize(struct FFortTournamentDisplayInfo DisplayInfo); // Function ShowdownEventTile.ShowdownEventTile_C.EventColorize // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void EventColorizeDispatch(struct FFortTournamentDisplayInfo DisplayInfo); // Function ShowdownEventTile.ShowdownEventTile_C.EventColorizeDispatch // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void EventMultiRoundStyle(); // Function ShowdownEventTile.ShowdownEventTile_C.EventMultiRoundStyle // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_ShowdownEventTile(int32_t EntryPoint); // Function ShowdownEventTile.ShowdownEventTile_C.ExecuteUbergraph_ShowdownEventTile // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
	void OnWindowSelected__DelegateSignature(); // Function ShowdownEventTile.ShowdownEventTile_C.OnWindowSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
};

