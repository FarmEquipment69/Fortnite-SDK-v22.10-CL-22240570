// Class DistortedWeaponsUI.ChromeWeaponInfoWidget
// Size: 0x340 (Inherited: 0x320)
struct UChromeWeaponInfoWidget : UFortHUDElementWidget {
	struct UFortHUDContext* HUDContext; // 0x320(0x08)
	struct UFortWorldMultiItemXPComponent* CurrentXpComponent; // 0x328(0x08)
	struct UAthenaItemTierWidget* ItemTierWidget; // 0x330(0x08)
	struct UFortKeybindWidget* KeybindWidget; // 0x338(0x08)

	void OnWeaponUpgraded(); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.OnWeaponUpgraded // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnWeaponStartUpgrading(); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.OnWeaponStartUpgrading // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnWeaponRemoved(); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.OnWeaponRemoved // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnWeaponEquipped(); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.OnWeaponEquipped // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnReadyToUpgradeWeapon(enum class EFortRarity NextRarity); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.OnReadyToUpgradeWeapon // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnGainedXp(float CurrentXPPercentage); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.OnGainedXp // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void HandleXpChanged(float XPDelta, float CurrentXPPercentage); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.HandleXpChanged // (Final|Native|Protected) // @ game+0x68ee0cc
	void HandleWeaponUpgraded(); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.HandleWeaponUpgraded // (Final|Native|Protected) // @ game+0x68ee0b8
	void HandleWeaponUnEquipped(); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.HandleWeaponUnEquipped // (Final|Native|Protected) // @ game+0x68ee0a4
	void HandleWeaponEquipped(struct AFortWeapon* NewWeapon, struct AFortWeapon* PrevWeapon); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.HandleWeaponEquipped // (Final|Native|Protected) // @ game+0x68eddf4
	void HandleUpgradeTriggered(float ReloadTime, enum class EFortWeaponReloadType ReloadType); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.HandleUpgradeTriggered // (Final|Native|Protected) // @ game+0x68edd2c
	void HandlePowerUpPending(); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.HandlePowerUpPending // (Final|Native|Protected) // @ game+0x68edd18
	enum class EFortRarity GetCurrentWeaponRarity(); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.GetCurrentWeaponRarity // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68edcf4
};

