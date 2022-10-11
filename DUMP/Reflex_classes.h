// Class Reflex.ReflexBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UReflexBlueprintLibrary : UBlueprintFunctionLibrary {

	void SetReflexMode(enum class EReflexMode Mode); // Function Reflex.ReflexBlueprintLibrary.SetReflexMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x70b8744
	void SetFlashIndicatorEnabled(bool bEnabled); // Function Reflex.ReflexBlueprintLibrary.SetFlashIndicatorEnabled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x70b86d4
	float GetRenderLatencyInMs(); // Function Reflex.ReflexBlueprintLibrary.GetRenderLatencyInMs // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x70b86ac
	enum class EReflexMode GetReflexMode(); // Function Reflex.ReflexBlueprintLibrary.GetReflexMode // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x70b862c
	bool GetReflexAvailable(); // Function Reflex.ReflexBlueprintLibrary.GetReflexAvailable // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x70b8608
	float GetGameToRenderLatencyInMs(); // Function Reflex.ReflexBlueprintLibrary.GetGameToRenderLatencyInMs // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x70b85e0
	float GetGameLatencyInMs(); // Function Reflex.ReflexBlueprintLibrary.GetGameLatencyInMs // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x70b85b8
	bool GetFlashIndicatorEnabled(); // Function Reflex.ReflexBlueprintLibrary.GetFlashIndicatorEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x70b852c
};

