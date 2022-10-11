// Class CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility
// Size: 0xb88 (Inherited: 0xb20)
struct UCreativeVideoPlayerFullscreenGameplayAbility : UFortGameplayAbility {
	struct UGameplayEffect* NoCollisionGameplayEffectClass; // 0xb20(0x08)
	struct UGameplayEffect* NoDamageGameplayEffectClass; // 0xb28(0x08)
	struct TArray<struct UGameplayEffect*> AnimationStateGameplayEffectClasses; // 0xb30(0x10)
	struct UUserWidget* FullscreenWidgetClass; // 0xb40(0x08)
	enum class ECreativeVideoPlayerFullscreenEffects FullscreenEffects; // 0xb48(0x01)
	bool bPromptToConfirmFullscreen; // 0xb49(0x01)
	char pad_B4A[0x6]; // 0xb4a(0x06)
	struct UFortInputComponent* OverrideMovementInputComponent; // 0xb50(0x08)
	struct UFortInputComponent* SelectFullscreenModeInputComponent; // 0xb58(0x08)
	struct TArray<struct FActiveGameplayEffectHandle> ActiveGameplayEffects; // 0xb60(0x10)
	enum class ECreativeVideoPlayerFullscreenEffects RequestedFullscreenEffects; // 0xb70(0x01)
	char pad_B71[0x7]; // 0xb71(0x07)
	struct UUserWidget* VideoPlayerWidget; // 0xb78(0x08)
	bool bActivatedFullscreen; // 0xb80(0x01)
	char pad_B81[0x7]; // 0xb81(0x07)

	void ServerLeaveFullscreenMode(); // Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ServerLeaveFullscreenMode // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x67d1d48
	void ServerEnterFullscreenMode(); // Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ServerEnterFullscreenMode // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x67d1d30
	void OnFullscreenUIEnds(); // Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.OnFullscreenUIEnds // (Final|Native|Private) // @ game+0x67d1d1c
	void HandleEnterFullscreenActionReleased(); // Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.HandleEnterFullscreenActionReleased // (Final|Native|Private) // @ game+0x67d1cd4
	void HandleEnterFullscreenActionPressed(); // Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.HandleEnterFullscreenActionPressed // (Final|Native|Private) // @ game+0x21ce104
	void ExitFullscreenState(); // Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ExitFullscreenState // (Final|Native|Public|BlueprintCallable) // @ game+0x67d1ca8
	void EnterFullscreenStateWithOptions(struct FCreativeVideoPlayerFullscreenOptions Options); // Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.EnterFullscreenStateWithOptions // (Final|Native|Public|BlueprintCallable) // @ game+0x67d1c24
	void EnterFullscreenState(); // Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.EnterFullscreenState // (Final|Native|Public|BlueprintCallable) // @ game+0x67d1bf8
	void ClientTransitionToFullscreenVideo(); // Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ClientTransitionToFullscreenVideo // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x642f224
	void ClientLeaveFullscreenVideo(); // Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ClientLeaveFullscreenVideo // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x642f20c
};

// Class CreativeVideoPlayerRuntime.CreativeVideoPlayerFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UCreativeVideoPlayerFunctionLibrary : UBlueprintFunctionLibrary {

	void ShutdownFullscreenVideoMode(struct AController* Controller); // Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFunctionLibrary.ShutdownFullscreenVideoMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x67d1d60
};

// Class CreativeVideoPlayerRuntime.CreativeVideoPlayerWorldSubsystem
// Size: 0x40 (Inherited: 0x30)
struct UCreativeVideoPlayerWorldSubsystem : UWorldSubsystem {
	struct FMulticastInlineDelegate OnNotifyFullscreenChange; // 0x30(0x10)
};

