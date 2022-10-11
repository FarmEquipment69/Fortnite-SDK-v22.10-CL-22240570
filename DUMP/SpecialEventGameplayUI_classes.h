// Class SpecialEventGameplayUI.FortGameplayCinematicHostWidget
// Size: 0x358 (Inherited: 0x320)
struct UFortGameplayCinematicHostWidget : UFortHUDElementWidget {
	struct FName IntroWidgetEntryName; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)
	struct TArray<struct FCinematicWidgetData> WidgetEntries; // 0x328(0x10)
	struct UAthenaLoadingScreenItemDefinition* LoadingScreenDefinition; // 0x338(0x08)
	char pad_340[0x18]; // 0x340(0x18)
};

// Class SpecialEventGameplayUI.FortGameplayCinematicWidget
// Size: 0x418 (Inherited: 0x3f8)
struct UFortGameplayCinematicWidget : UCommonActivatableWidget {
	char pad_3F8[0x8]; // 0x3f8(0x08)
	bool bSkipCinematics; // 0x400(0x01)
	char pad_401[0x17]; // 0x401(0x17)

	void OnStartCinematic(); // Function SpecialEventGameplayUI.FortGameplayCinematicWidget.OnStartCinematic // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnCinematicFinished(); // Function SpecialEventGameplayUI.FortGameplayCinematicWidget.OnCinematicFinished // (Final|Native|Protected|BlueprintCallable) // @ game+0x6ab94b0
};

// Class SpecialEventGameplayUI.FortGameplayIntroPanelWidget
// Size: 0x418 (Inherited: 0x3f8)
struct UFortGameplayIntroPanelWidget : UCommonActivatableWidget {
	char pad_3F8[0x20]; // 0x3f8(0x20)

	void OnWaitingForReadyForGameplay(); // Function SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnWaitingForReadyForGameplay // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnWaitingForPawn(); // Function SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnWaitingForPawn // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnWaitingForMinTime(); // Function SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnWaitingForMinTime // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnStartIntro(); // Function SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnStartIntro // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnIntroFinished(); // Function SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnIntroFinished // (Final|Native|Protected|BlueprintCallable) // @ game+0x6ab9948
};

// Class SpecialEventGameplayUI.SpecialEventCursorWidget
// Size: 0x2d8 (Inherited: 0x2b8)
struct USpecialEventCursorWidget : UUserWidget {
	char pad_2B8[0x8]; // 0x2b8(0x08)
	bool bAutomaticallyChangeVisibility; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct USpecialEventCursorPawnComponent* CursorPawnComponent; // 0x2c8(0x08)
	char pad_2D0[0x8]; // 0x2d0(0x08)

	void OnViewportLocationChanged(struct USpecialEventCursorPawnComponent* InCursorPawnComponent, struct FVector2D& NormalizedLocation, struct FVector2D& ViewportLocation); // Function SpecialEventGameplayUI.SpecialEventCursorWidget.OnViewportLocationChanged // (Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x6ab995c
	void OnDesiredVisibilityChanged(struct USpecialEventCursorPawnComponent* InCursorPawnComponent, struct FGameplayTag& CursorModeTag, bool bShouldBeVisible); // Function SpecialEventGameplayUI.SpecialEventCursorWidget.OnDesiredVisibilityChanged // (Final|Native|Private|HasOutParms) // @ game+0x6ab9724
	void OnCursorModeChanged(struct USpecialEventCursorPawnComponent* InCursorPawnComponent, struct FGameplayTag& NewCursorModeTag, struct FGameplayTag& OldCursorModeTag); // Function SpecialEventGameplayUI.SpecialEventCursorWidget.OnCursorModeChanged // (Final|Native|Private|HasOutParms) // @ game+0x6ab94c4
	struct FGameplayTagContainer GetCursorModeTags(); // Function SpecialEventGameplayUI.SpecialEventCursorWidget.GetCursorModeTags // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6ab92d8
	void BP_OnDesiredVisibilityChanged(struct USpecialEventCursorPawnComponent* InCursorPawnComponent, struct FGameplayTag& CursorModeTag, bool bShouldBeVisible); // Function SpecialEventGameplayUI.SpecialEventCursorWidget.BP_OnDesiredVisibilityChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void BP_OnCursorModeChanged(struct USpecialEventCursorPawnComponent* InCursorPawnComponent, struct FGameplayTag& NewCursorModeTag, struct FGameplayTag& OldCursorModeTag); // Function SpecialEventGameplayUI.SpecialEventCursorWidget.BP_OnCursorModeChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
};

// Class SpecialEventGameplayUI.SpecialEventPlayerInfoWidget
// Size: 0x340 (Inherited: 0x320)
struct USpecialEventPlayerInfoWidget : UFortHUDElementWidget {
	char pad_320[0x8]; // 0x320(0x08)
	struct FMulticastInlineDelegate OnRepresentedPlayerStateChanged; // 0x328(0x10)
	char pad_338[0x8]; // 0x338(0x08)

	struct AFortPlayerStateAthena* GetRepresentedPlayerState(); // Function SpecialEventGameplayUI.SpecialEventPlayerInfoWidget.GetRepresentedPlayerState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6ab9328
};

// Class SpecialEventGameplayUI.SpecialEventUILibrary
// Size: 0x28 (Inherited: 0x28)
struct USpecialEventUILibrary : UBlueprintFunctionLibrary {

	void HideFrontEndStateWidget(struct UObject* WorldContextObject, bool bNewlyHidden); // Function SpecialEventGameplayUI.SpecialEventUILibrary.HideFrontEndStateWidget // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6ab9394
};

