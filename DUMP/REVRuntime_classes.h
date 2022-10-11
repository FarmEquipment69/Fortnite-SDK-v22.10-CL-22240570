// Class REVRuntime.REVComponent
// Size: 0x7a0 (Inherited: 0x780)
struct UREVComponent : USynthComponent {
	char pad_780[0x8]; // 0x780(0x08)
	struct UREVModel* Model; // 0x788(0x08)
	char pad_790[0x10]; // 0x790(0x10)

	void UpdateParameters(float InPitch, float InRPM, float InThrottle, float InVelocity, int32_t InGear, bool bInEnableShifting); // Function REVRuntime.REVComponent.UpdateParameters // (Final|Native|Public|BlueprintCallable) // @ game+0x6e319e0
	void SetRevModel(struct UREVModel* InModel); // Function REVRuntime.REVComponent.SetRevModel // (Final|Native|Public|BlueprintCallable) // @ game+0x6e3193c
};

// Class REVRuntime.REVModel
// Size: 0x68 (Inherited: 0x28)
struct UREVModel : UObject {
	char pad_28[0x40]; // 0x28(0x40)
};

