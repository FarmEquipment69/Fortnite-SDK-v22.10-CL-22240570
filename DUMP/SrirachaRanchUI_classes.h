// Class SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio
// Size: 0x120 (Inherited: 0x110)
struct UFortMobileActionButtonBehavior_ToggleRadio : UFortMobileActionButtonBehavior {
	struct UPaperSprite* ToggleRadioOffSprite; // 0x110(0x08)
	char pad_118[0x8]; // 0x118(0x08)

	void HandleRadioStopped(struct UStreamingRadioPlayerComponent* Radio, struct FAthenaRadioStation Source); // Function SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio.HandleRadioStopped // (Final|Native|Private) // @ game+0x693145c
	void HandleRadioPlaying(struct UStreamingRadioPlayerComponent* Radio, struct FAthenaRadioStation Source); // Function SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio.HandleRadioPlaying // (Final|Native|Private) // @ game+0x693136c
};

// Class SrirachaRanchUI.RadioPlayerWidgetBase
// Size: 0x370 (Inherited: 0x320)
struct URadioPlayerWidgetBase : UFortHUDElementWidget {
	char pad_320[0x40]; // 0x320(0x40)
	struct FFortPrioritizedWidgetData PriorityData; // 0x360(0x02)
	char pad_362[0x6]; // 0x362(0x06)
	struct UStreamingRadioPlayerComponent* LastValidComp; // 0x368(0x08)

	void SetControllable(bool bCanControl); // Function SrirachaRanchUI.RadioPlayerWidgetBase.SetControllable // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnSourcePlaying(struct UStreamingRadioPlayerComponent* Radio, struct FAthenaRadioStation Source); // Function SrirachaRanchUI.RadioPlayerWidgetBase.OnSourcePlaying // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnSourceFinished(struct UStreamingRadioPlayerComponent* Radio, struct FAthenaRadioStation Source); // Function SrirachaRanchUI.RadioPlayerWidgetBase.OnSourceFinished // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnShouldShowDueToEntrance(); // Function SrirachaRanchUI.RadioPlayerWidgetBase.OnShouldShowDueToEntrance // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnRadioStopped(struct UStreamingRadioPlayerComponent* Radio, struct FAthenaRadioStation LastSource); // Function SrirachaRanchUI.RadioPlayerWidgetBase.OnRadioStopped // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnLoadingNewSource(struct UStreamingRadioPlayerComponent* Radio, struct FAthenaRadioStation Source); // Function SrirachaRanchUI.RadioPlayerWidgetBase.OnLoadingNewSource // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnFailedToOpenSource(struct UStreamingRadioPlayerComponent* Radio, struct FAthenaRadioStation Source); // Function SrirachaRanchUI.RadioPlayerWidgetBase.OnFailedToOpenSource // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnDisconnectFromComp(); // Function SrirachaRanchUI.RadioPlayerWidgetBase.OnDisconnectFromComp // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnControllerGainedNewFortPawn(struct AFortPawn* FortPawn); // Function SrirachaRanchUI.RadioPlayerWidgetBase.OnControllerGainedNewFortPawn // (Final|Native|Protected) // @ game+0x6931574
	void NativeExitedVehicle(); // Function SrirachaRanchUI.RadioPlayerWidgetBase.NativeExitedVehicle // (Final|Native|Protected) // @ game+0x6931560
	void NativeEnteredVehicle(); // Function SrirachaRanchUI.RadioPlayerWidgetBase.NativeEnteredVehicle // (Final|Native|Protected) // @ game+0x693154c
};

