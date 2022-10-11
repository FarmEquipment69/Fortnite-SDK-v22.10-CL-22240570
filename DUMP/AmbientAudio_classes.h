// Class AmbientAudio.AmbientAudioComponent
// Size: 0xd8 (Inherited: 0xa8)
struct UAmbientAudioComponent : UAudioGameplayComponent {
	char pad_A8[0x8]; // 0xa8(0x08)
	struct UAmbientAudioDataAsset* AmbientAsset; // 0xb0(0x08)
	int32_t Priority; // 0xb8(0x04)
	float CrossfadeTime; // 0xbc(0x04)
	struct FGuid AmbientGuid; // 0xc0(0x10)
	struct FName DisplayName; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)

	void SetPriority(int32_t InPriority); // Function AmbientAudio.AmbientAudioComponent.SetPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x70bb5f4
	void SetCrossfadeTime(float InCrossfadeTime); // Function AmbientAudio.AmbientAudioComponent.SetCrossfadeTime // (Final|Native|Public|BlueprintCallable) // @ game+0x70bb460
	void SetAmbientAsset(struct UAmbientAudioDataAsset* InAmbientAsset); // Function AmbientAudio.AmbientAudioComponent.SetAmbientAsset // (Final|Native|Public|BlueprintCallable) // @ game+0x70bb34c
};

// Class AmbientAudio.AmbientAudioDataAsset
// Size: 0x58 (Inherited: 0x30)
struct UAmbientAudioDataAsset : UDataAsset {
	struct TArray<struct FAmbientAudioLoop> LoopingSounds; // 0x30(0x10)
	struct TArray<struct FAmbientAudioOneShot> OneShotSounds; // 0x40(0x10)
	float TagCrossfadeTime; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class AmbientAudio.AmbientAudioSubsystem
// Size: 0x250 (Inherited: 0x30)
struct UAmbientAudioSubsystem : UWorldSubsystem {
	char pad_30[0x8]; // 0x30(0x08)
	struct FMulticastInlineDelegate OnTagChanged; // 0x38(0x10)
	struct FMulticastInlineDelegate OnEntryChanged; // 0x48(0x10)
	struct TArray<struct UAmbientAudioComponent*> AmbientComponents; // 0x58(0x10)
	char pad_68[0x1e8]; // 0x68(0x1e8)

	void RemoveGameplayTag(struct FGameplayTag GameplayTag); // Function AmbientAudio.AmbientAudioSubsystem.RemoveGameplayTag // (Final|Native|Public|BlueprintCallable) // @ game+0x22f21ac
	void RemoveAmbientEntry(struct FName AmbientName, float CrossfadeOverride); // Function AmbientAudio.AmbientAudioSubsystem.RemoveAmbientEntry // (Final|Native|Public|BlueprintCallable) // @ game+0x245a834
	void AddGameplayTag(struct FGameplayTag GameplayTag); // Function AmbientAudio.AmbientAudioSubsystem.AddGameplayTag // (Final|Native|Public|BlueprintCallable) // @ game+0x70bb218
	void AddAmbientEntry(struct FName AmbientName, struct UAmbientAudioDataAsset* Asset, int32_t Priority, float CrossfadeTime); // Function AmbientAudio.AmbientAudioSubsystem.AddAmbientEntry // (Final|Native|Public|BlueprintCallable) // @ game+0x1bdb0c4
};

// Class AmbientAudio.AmbientVolume
// Size: 0x2e8 (Inherited: 0x2c0)
struct AAmbientVolume : AVolume {
	struct UAmbientAudioDataAsset* AmbientAsset; // 0x2c0(0x08)
	int32_t Priority; // 0x2c8(0x04)
	float CrossfadeTime; // 0x2cc(0x04)
	char bEnabled : 1; // 0x2d0(0x01)
	char bGlobal : 1; // 0x2d0(0x01)
	char pad_2D0_2 : 6; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	struct FGuid AmbientGuid; // 0x2d4(0x10)
	char pad_2E4[0x4]; // 0x2e4(0x04)

	void SetPriority(int32_t NewPriority); // Function AmbientAudio.AmbientVolume.SetPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x70bb578
	void SetEnabled(bool bNewEnabled); // Function AmbientAudio.AmbientVolume.SetEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x70bb4e4
	void SetCrossfadeTime(float NewCrossfadeTime); // Function AmbientAudio.AmbientVolume.SetCrossfadeTime // (Final|Native|Public|BlueprintCallable) // @ game+0x70bb3dc
	void SetAmbientAsset(struct UAmbientAudioDataAsset* NewAmbientAsset); // Function AmbientAudio.AmbientVolume.SetAmbientAsset // (Final|Native|Public|BlueprintCallable) // @ game+0x70bb2c4
	void OnRep_bEnabled(); // Function AmbientAudio.AmbientVolume.OnRep_bEnabled // (Native|Protected) // @ game+0x24c3aa0
};

