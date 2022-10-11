// Class XpEverywhereUI.XpEverywhereAccoladesWidget
// Size: 0x390 (Inherited: 0x320)
struct UXpEverywhereAccoladesWidget : UFortHUDElementWidget {
	char pad_320[0x60]; // 0x320(0x60)
	struct FFortPrioritizedWidgetData PrioritizationData; // 0x380(0x02)
	char pad_382[0xe]; // 0x382(0x0e)

	void OpenWidget(struct UFortAccoladeItemDefinition* AccoladeDef, int32_t XpValue, struct FText& DisplayName, struct TSoftObjectPtr<UTexture2D>& AccoladeLargePreviewImageOverride, struct FText& SimulatedName, struct FText& SimulatedText, enum class EFortSimulatedXPSize SimulatedXpSize); // Function XpEverywhereUI.XpEverywhereAccoladesWidget.OpenWidget // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnStompedByOtherWidget(); // Function XpEverywhereUI.XpEverywhereAccoladesWidget.OnStompedByOtherWidget // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnEventAdded(); // Function XpEverywhereUI.XpEverywhereAccoladesWidget.OnEventAdded // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	bool HasMoreXPEvents(); // Function XpEverywhereUI.XpEverywhereAccoladesWidget.HasMoreXPEvents // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6c05f3c
	void CloseWidget(); // Function XpEverywhereUI.XpEverywhereAccoladesWidget.CloseWidget // (Final|Native|Protected|BlueprintCallable) // @ game+0x6c05d4c
};

// Class XpEverywhereUI.XpEverywhereBar
// Size: 0x4d8 (Inherited: 0x3f8)
struct UXpEverywhereBar : UCommonActivatableWidget {
	bool bXpBarAlwaysActive; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)
	struct UFortSocialAvatarIcon* SocialAvatarIcon; // 0x400(0x08)
	char pad_408[0xd0]; // 0x408(0xd0)

	void OnXpBarUpdated(int32_t ShownXP, int32_t ShownLevel, int32_t NewDesiredXP, int32_t NewDesiredLevel, int32_t NewRemainingRestXP); // Function XpEverywhereUI.XpEverywhereBar.OnXpBarUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnXpBarInitialized(int32_t CurrentXP, int32_t CurrentLevel, int32_t CurrentRemainingRestXP); // Function XpEverywhereUI.XpEverywhereBar.OnXpBarInitialized // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	int32_t GetTotalXpRequiredForLevel(int32_t InLevel); // Function XpEverywhereUI.XpEverywhereBar.GetTotalXpRequiredForLevel // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6c05e88
	void DoneUpdatingXpBar(); // Function XpEverywhereUI.XpEverywhereBar.DoneUpdatingXpBar // (Final|Native|Protected|BlueprintCallable) // @ game+0x6c05e08
};

// Class XpEverywhereUI.XpEverywhereLevelUpWidget
// Size: 0x400 (Inherited: 0x3f8)
struct UXpEverywhereLevelUpWidget : UCommonActivatableWidget {
	char pad_3F8[0x8]; // 0x3f8(0x08)

	void OnShowWidget(int32_t NewLevel); // Function XpEverywhereUI.XpEverywhereLevelUpWidget.OnShowWidget // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void DoneLevelingUp(); // Function XpEverywhereUI.XpEverywhereLevelUpWidget.DoneLevelingUp // (Final|Native|Protected|BlueprintCallable) // @ game+0x6c05da8
	void DisplayLevelUpRewards(); // Function XpEverywhereUI.XpEverywhereLevelUpWidget.DisplayLevelUpRewards // (Final|Native|Protected|BlueprintCallable|Const) // @ game+0x6c05d60
};

// Class XpEverywhereUI.XpEverywhereReticleWidget
// Size: 0x338 (Inherited: 0x320)
struct UXpEverywhereReticleWidget : UFortHUDElementWidget {
	char pad_320[0x18]; // 0x320(0x18)

	void UpdateXPSource(struct FText& NewSourceText); // Function XpEverywhereUI.XpEverywhereReticleWidget.UpdateXPSource // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void UpdateXPAmount(int32_t NewAmount, struct USoundCue* Cue, enum class EFortSimulatedXPSize SimulatedXpSize); // Function XpEverywhereUI.XpEverywhereReticleWidget.UpdateXPAmount // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void UpdateRestXP(int32_t RestXpRemaining); // Function XpEverywhereUI.XpEverywhereReticleWidget.UpdateRestXP // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void HandleProfileUpdated(); // Function XpEverywhereUI.XpEverywhereReticleWidget.HandleProfileUpdated // (Final|Native|Protected) // @ game+0x6c05f28
	void ForwardEvents(); // Function XpEverywhereUI.XpEverywhereReticleWidget.ForwardEvents // (Final|Native|Protected|BlueprintCallable) // @ game+0x6c05e74
};

// Class XpEverywhereUI.XpEverywhereRewardWidget
// Size: 0x3b0 (Inherited: 0x320)
struct UXpEverywhereRewardWidget : UFortHUDElementWidget {
	char pad_320[0x48]; // 0x320(0x48)
	struct UFortNotificationEntry* DefaultEntryClass; // 0x368(0x08)
	bool bHasPrioritizedWidgetFocus; // 0x370(0x01)
	char pad_371[0x7]; // 0x371(0x07)
	struct UFortNotificationEntry* ActiveWidget; // 0x378(0x08)
	struct TArray<struct UFortNotificationEntry*> WidgetQueue; // 0x380(0x10)
	struct UVerticalBox* NotificationUpdatesBox; // 0x390(0x08)
	struct TArray<struct FXpEverywhereNotificationWidgetClass> NotificationClassPoolData; // 0x398(0x10)
	struct FFortPrioritizedWidgetData PrioritizationData; // 0x3a8(0x02)
	char pad_3AA[0x6]; // 0x3aa(0x06)

	void HandleNotificationUpdateFinished(); // Function XpEverywhereUI.XpEverywhereRewardWidget.HandleNotificationUpdateFinished // (Final|Native|Protected) // @ game+0x6c05f14
};

// Class XpEverywhereUI.XpEverywhereUIComponent
// Size: 0x160 (Inherited: 0xa0)
struct UXpEverywhereUIComponent : UActorComponent {
	char pad_A0[0x90]; // 0xa0(0x90)
	struct FGameplayTagContainer XpEverywhereHiddenElementTags; // 0x130(0x20)
	char pad_150[0x10]; // 0x150(0x10)
};

