// Class AudioLinkEngine.AudioLinkBlueprintInterface
// Size: 0x28 (Inherited: 0x28)
struct UAudioLinkBlueprintInterface : UInterface {

	void StopLink(); // Function AudioLinkEngine.AudioLinkBlueprintInterface.StopLink // (Native|Public|BlueprintCallable) // @ game+0x7578d38
	void SetLinkSound(struct USoundBase* NewSound); // Function AudioLinkEngine.AudioLinkBlueprintInterface.SetLinkSound // (Native|Public|BlueprintCallable) // @ game+0x73e4d24
	void PlayLink(float StartTime); // Function AudioLinkEngine.AudioLinkBlueprintInterface.PlayLink // (Native|Public|BlueprintCallable) // @ game+0x919b408
	bool IsLinkPlaying(); // Function AudioLinkEngine.AudioLinkBlueprintInterface.IsLinkPlaying // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x74bd2f8
};

