// Class Synthesis.AudioImpulseResponse
// Size: 0x58 (Inherited: 0x28)
struct UAudioImpulseResponse : UObject {
	struct TArray<float> ImpulseResponse; // 0x28(0x10)
	int32_t NumChannels; // 0x38(0x04)
	int32_t SampleRate; // 0x3c(0x04)
	float NormalizationVolumeDb; // 0x40(0x04)
	bool bTrueStereo; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct TArray<float> IRData; // 0x48(0x10)
};

// Class Synthesis.ModularSynthPresetBank
// Size: 0x38 (Inherited: 0x28)
struct UModularSynthPresetBank : UObject {
	struct TArray<struct FModularSynthPresetBankEntry> Presets; // 0x28(0x10)
};

// Class Synthesis.ModularSynthLibrary
// Size: 0x28 (Inherited: 0x28)
struct UModularSynthLibrary : UBlueprintFunctionLibrary {

	void AddModularSynthPresetToBankAsset(struct UModularSynthPresetBank* InBank, struct FModularSynthPreset& Preset, struct FString PresetName); // Function Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x643376c
};

// Class Synthesis.ModularSynthComponent
// Size: 0xe40 (Inherited: 0x780)
struct UModularSynthComponent : USynthComponent {
	int32_t VoiceCount; // 0x780(0x04)
	char pad_784[0x6bc]; // 0x784(0x6bc)

	void SetSynthPreset(struct FModularSynthPreset& SynthPreset); // Function Synthesis.ModularSynthComponent.SetSynthPreset // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6435ed8
	void SetSustainGain(float SustainGain); // Function Synthesis.ModularSynthComponent.SetSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x6435e54
	void SetStereoDelayWetlevel(float DelayWetlevel); // Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel // (Final|Native|Public|BlueprintCallable) // @ game+0x6435dd0
	void SetStereoDelayTime(float DelayTimeMsec); // Function Synthesis.ModularSynthComponent.SetStereoDelayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x6435d4c
	void SetStereoDelayRatio(float DelayRatio); // Function Synthesis.ModularSynthComponent.SetStereoDelayRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x6435cc8
	void SetStereoDelayMode(enum class ESynthStereoDelayMode StereoDelayMode); // Function Synthesis.ModularSynthComponent.SetStereoDelayMode // (Final|Native|Public|BlueprintCallable) // @ game+0x6435c48
	void SetStereoDelayIsEnabled(bool StereoDelayEnabled); // Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x6435bc8
	void SetStereoDelayFeedback(float DelayFeedback); // Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback // (Final|Native|Public|BlueprintCallable) // @ game+0x6435b44
	void SetSpread(float Spread); // Function Synthesis.ModularSynthComponent.SetSpread // (Final|Native|Public|BlueprintCallable) // @ game+0x6435ac0
	void SetReleaseTime(float ReleaseTimeMsec); // Function Synthesis.ModularSynthComponent.SetReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0x6435a3c
	void SetPortamento(float Portamento); // Function Synthesis.ModularSynthComponent.SetPortamento // (Final|Native|Public|BlueprintCallable) // @ game+0x64359b8
	void SetPitchBend(float PitchBend); // Function Synthesis.ModularSynthComponent.SetPitchBend // (Final|Native|Public|BlueprintCallable) // @ game+0x6435934
	void SetPan(float Pan); // Function Synthesis.ModularSynthComponent.SetPan // (Final|Native|Public|BlueprintCallable) // @ game+0x64358b0
	void SetOscType(int32_t OscIndex, enum class ESynth1OscType OscType); // Function Synthesis.ModularSynthComponent.SetOscType // (Final|Native|Public|BlueprintCallable) // @ game+0x64357ec
	void SetOscSync(bool bIsSynced); // Function Synthesis.ModularSynthComponent.SetOscSync // (Final|Native|Public|BlueprintCallable) // @ game+0x6435730
	void SetOscSemitones(int32_t OscIndex, float Semitones); // Function Synthesis.ModularSynthComponent.SetOscSemitones // (Final|Native|Public|BlueprintCallable) // @ game+0x6435668
	void SetOscPulsewidth(int32_t OscIndex, float Pulsewidth); // Function Synthesis.ModularSynthComponent.SetOscPulsewidth // (Final|Native|Public|BlueprintCallable) // @ game+0x64355a0
	void SetOscOctave(int32_t OscIndex, float Octave); // Function Synthesis.ModularSynthComponent.SetOscOctave // (Final|Native|Public|BlueprintCallable) // @ game+0x64354d8
	void SetOscGainMod(int32_t OscIndex, float OscGainMod); // Function Synthesis.ModularSynthComponent.SetOscGainMod // (Final|Native|Public|BlueprintCallable) // @ game+0x6435410
	void SetOscGain(int32_t OscIndex, float OscGain); // Function Synthesis.ModularSynthComponent.SetOscGain // (Final|Native|Public|BlueprintCallable) // @ game+0x6435348
	void SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod); // Function Synthesis.ModularSynthComponent.SetOscFrequencyMod // (Final|Native|Public|BlueprintCallable) // @ game+0x6435280
	void SetOscCents(int32_t OscIndex, float Cents); // Function Synthesis.ModularSynthComponent.SetOscCents // (Final|Native|Public|BlueprintCallable) // @ game+0x64351b8
	void SetModEnvSustainGain(float SustainGain); // Function Synthesis.ModularSynthComponent.SetModEnvSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x6435134
	void SetModEnvReleaseTime(float Release); // Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0x64350b0
	void SetModEnvPatch(enum class ESynthModEnvPatch InPatchType); // Function Synthesis.ModularSynthComponent.SetModEnvPatch // (Final|Native|Public|BlueprintCallable) // @ game+0x6434ff8
	void SetModEnvInvert(bool bInvert); // Function Synthesis.ModularSynthComponent.SetModEnvInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x6434f3c
	void SetModEnvDepth(float Depth); // Function Synthesis.ModularSynthComponent.SetModEnvDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x6434eb8
	void SetModEnvDecayTime(float DecayTimeMsec); // Function Synthesis.ModularSynthComponent.SetModEnvDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x6434e34
	void SetModEnvBiasPatch(enum class ESynthModEnvBiasPatch InPatchType); // Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch // (Final|Native|Public|BlueprintCallable) // @ game+0x6434d7c
	void SetModEnvBiasInvert(bool bInvert); // Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x6434cc0
	void SetModEnvAttackTime(float AttackTimeMsec); // Function Synthesis.ModularSynthComponent.SetModEnvAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x6434c3c
	void SetLFOType(int32_t LFOIndex, enum class ESynthLFOType LFOType); // Function Synthesis.ModularSynthComponent.SetLFOType // (Final|Native|Public|BlueprintCallable) // @ game+0x6434b48
	void SetLFOPatch(int32_t LFOIndex, enum class ESynthLFOPatchType LFOPatchType); // Function Synthesis.ModularSynthComponent.SetLFOPatch // (Final|Native|Public|BlueprintCallable) // @ game+0x6434a54
	void SetLFOMode(int32_t LFOIndex, enum class ESynthLFOMode LFOMode); // Function Synthesis.ModularSynthComponent.SetLFOMode // (Final|Native|Public|BlueprintCallable) // @ game+0x6434960
	void SetLFOGainMod(int32_t LFOIndex, float GainMod); // Function Synthesis.ModularSynthComponent.SetLFOGainMod // (Final|Native|Public|BlueprintCallable) // @ game+0x6434898
	void SetLFOGain(int32_t LFOIndex, float Gain); // Function Synthesis.ModularSynthComponent.SetLFOGain // (Final|Native|Public|BlueprintCallable) // @ game+0x64347d0
	void SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz); // Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod // (Final|Native|Public|BlueprintCallable) // @ game+0x6434708
	void SetLFOFrequency(int32_t LFOIndex, float FrequencyHz); // Function Synthesis.ModularSynthComponent.SetLFOFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x6434640
	void SetGainDb(float GainDb); // Function Synthesis.ModularSynthComponent.SetGainDb // (Final|Native|Public|BlueprintCallable) // @ game+0x64345bc
	void SetFilterType(enum class ESynthFilterType FilterType); // Function Synthesis.ModularSynthComponent.SetFilterType // (Final|Native|Public|BlueprintCallable) // @ game+0x6434504
	void SetFilterQMod(float FilterQ); // Function Synthesis.ModularSynthComponent.SetFilterQMod // (Final|Native|Public|BlueprintCallable) // @ game+0x6434480
	void SetFilterQ(float FilterQ); // Function Synthesis.ModularSynthComponent.SetFilterQ // (Final|Native|Public|BlueprintCallable) // @ game+0x64343fc
	void SetFilterFrequencyMod(float FilterFrequencyHz); // Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod // (Final|Native|Public|BlueprintCallable) // @ game+0x6434378
	void SetFilterFrequency(float FilterFrequencyHz); // Function Synthesis.ModularSynthComponent.SetFilterFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x64342f4
	void SetFilterAlgorithm(enum class ESynthFilterAlgorithm FilterAlgorithm); // Function Synthesis.ModularSynthComponent.SetFilterAlgorithm // (Final|Native|Public|BlueprintCallable) // @ game+0x6434274
	void SetEnableUnison(bool EnableUnison); // Function Synthesis.ModularSynthComponent.SetEnableUnison // (Final|Native|Public|BlueprintCallable) // @ game+0x64341f4
	void SetEnableRetrigger(bool RetriggerEnabled); // Function Synthesis.ModularSynthComponent.SetEnableRetrigger // (Final|Native|Public|BlueprintCallable) // @ game+0x6434174
	void SetEnablePolyphony(bool bEnablePolyphony); // Function Synthesis.ModularSynthComponent.SetEnablePolyphony // (Final|Native|Public|BlueprintCallable) // @ game+0x64340f4
	bool SetEnablePatch(struct FPatchId PatchId, bool bIsEnabled); // Function Synthesis.ModularSynthComponent.SetEnablePatch // (Final|Native|Public|BlueprintCallable) // @ game+0x643402c
	void SetEnableLegato(bool LegatoEnabled); // Function Synthesis.ModularSynthComponent.SetEnableLegato // (Final|Native|Public|BlueprintCallable) // @ game+0x6433fac
	void SetDecayTime(float DecayTimeMsec); // Function Synthesis.ModularSynthComponent.SetDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x6433f28
	void SetChorusFrequency(float Frequency); // Function Synthesis.ModularSynthComponent.SetChorusFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x6433ea4
	void SetChorusFeedback(float Feedback); // Function Synthesis.ModularSynthComponent.SetChorusFeedback // (Final|Native|Public|BlueprintCallable) // @ game+0x6433e20
	void SetChorusEnabled(bool EnableChorus); // Function Synthesis.ModularSynthComponent.SetChorusEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x6433da0
	void SetChorusDepth(float Depth); // Function Synthesis.ModularSynthComponent.SetChorusDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x6433d1c
	void SetAttackTime(float AttackTimeMsec); // Function Synthesis.ModularSynthComponent.SetAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x6433c98
	void NoteOn(float Note, int32_t Velocity, float Duration); // Function Synthesis.ModularSynthComponent.NoteOn // (Final|Native|Public|BlueprintCallable) // @ game+0x6433ba0
	void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes); // Function Synthesis.ModularSynthComponent.NoteOff // (Final|Native|Public|BlueprintCallable) // @ game+0x6433a90
	struct FPatchId CreatePatch(enum class ESynth1PatchSource PatchSource, struct TArray<struct FSynth1PatchCable>& PatchCables, bool bEnableByDefault); // Function Synthesis.ModularSynthComponent.CreatePatch // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6433950
};

// Class Synthesis.SourceEffectBitCrusherPreset
// Size: 0xf0 (Inherited: 0x68)
struct USourceEffectBitCrusherPreset : USoundEffectSourcePreset {
	char pad_68[0x58]; // 0x68(0x58)
	struct FSourceEffectBitCrusherSettings Settings; // 0xc0(0x30)

	void SetSettings(struct FSourceEffectBitCrusherBaseSettings& Settings); // Function Synthesis.SourceEffectBitCrusherPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6438494
	void SetSampleRateModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulator // (Final|Native|Public|BlueprintCallable) // @ game+0x6438414
	void SetSampleRate(float SampleRate); // Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRate // (Final|Native|Public|BlueprintCallable) // @ game+0x6438390
	void SetModulationSettings(struct FSourceEffectBitCrusherSettings& ModulationSettings); // Function Synthesis.SourceEffectBitCrusherPreset.SetModulationSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x64381ec
	void SetBits(float Bits); // Function Synthesis.SourceEffectBitCrusherPreset.SetBits // (Final|Native|Public|BlueprintCallable) // @ game+0x6437cd0
	void SetBitModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectBitCrusherPreset.SetBitModulator // (Final|Native|Public|BlueprintCallable) // @ game+0x6437c50
};

// Class Synthesis.SourceEffectChorusPreset
// Size: 0x180 (Inherited: 0x68)
struct USourceEffectChorusPreset : USoundEffectSourcePreset {
	char pad_68[0xa0]; // 0x68(0xa0)
	struct FSourceEffectChorusSettings Settings; // 0x108(0x78)

	void SetWetModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetWetModulator // (Final|Native|Public|BlueprintCallable) // @ game+0x6438e30
	void SetWet(float WetAmount); // Function Synthesis.SourceEffectChorusPreset.SetWet // (Final|Native|Public|BlueprintCallable) // @ game+0x6438dac
	void SetSpreadModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetSpreadModulator // (Final|Native|Public|BlueprintCallable) // @ game+0x6438d2c
	void SetSpread(float Spread); // Function Synthesis.SourceEffectChorusPreset.SetSpread // (Final|Native|Public|BlueprintCallable) // @ game+0x6438ca8
	void SetSettings(struct FSourceEffectChorusBaseSettings& Settings); // Function Synthesis.SourceEffectChorusPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6438534
	void SetModulationSettings(struct FSourceEffectChorusSettings& ModulationSettings); // Function Synthesis.SourceEffectChorusPreset.SetModulationSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x64382ec
	void SetFrequencyModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetFrequencyModulator // (Final|Native|Public|BlueprintCallable) // @ game+0x64380e4
	void SetFrequency(float Frequency); // Function Synthesis.SourceEffectChorusPreset.SetFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x6438060
	void SetFeedbackModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetFeedbackModulator // (Final|Native|Public|BlueprintCallable) // @ game+0x6437fe0
	void SetFeedback(float Feedback); // Function Synthesis.SourceEffectChorusPreset.SetFeedback // (Final|Native|Public|BlueprintCallable) // @ game+0x6437f5c
	void SetDryModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetDryModulator // (Final|Native|Public|BlueprintCallable) // @ game+0x6437edc
	void SetDry(float DryAmount); // Function Synthesis.SourceEffectChorusPreset.SetDry // (Final|Native|Public|BlueprintCallable) // @ game+0x6437e58
	void SetDepthModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetDepthModulator // (Final|Native|Public|BlueprintCallable) // @ game+0x6437dd8
	void SetDepth(float Depth); // Function Synthesis.SourceEffectChorusPreset.SetDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x6437d54
};

// Class Synthesis.SourceEffectConvolutionReverbPreset
// Size: 0xc0 (Inherited: 0x68)
struct USourceEffectConvolutionReverbPreset : USoundEffectSourcePreset {
	struct UAudioImpulseResponse* ImpulseResponse; // 0x68(0x08)
	struct FSourceEffectConvolutionReverbSettings Settings; // 0x70(0x10)
	enum class ESubmixEffectConvolutionReverbBlockSize BlockSize; // 0x80(0x01)
	bool bEnableHardwareAcceleration; // 0x81(0x01)
	char pad_82[0x3e]; // 0x82(0x3e)

	void SetSettings(struct FSourceEffectConvolutionReverbSettings& InSettings); // Function Synthesis.SourceEffectConvolutionReverbPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x64385dc
	void SetImpulseResponse(struct UAudioImpulseResponse* InImpulseResponse); // Function Synthesis.SourceEffectConvolutionReverbPreset.SetImpulseResponse // (Final|Native|Public|BlueprintCallable) // @ game+0x6438164
};

// Class Synthesis.SourceEffectDynamicsProcessorPreset
// Size: 0xe0 (Inherited: 0x68)
struct USourceEffectDynamicsProcessorPreset : USoundEffectSourcePreset {
	char pad_68[0x50]; // 0x68(0x50)
	struct FSourceEffectDynamicsProcessorSettings Settings; // 0xb8(0x28)

	void SetSettings(struct FSourceEffectDynamicsProcessorSettings& InSettings); // Function Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x643869c
};

// Class Synthesis.EnvelopeFollowerListener
// Size: 0xc0 (Inherited: 0xa0)
struct UEnvelopeFollowerListener : UActorComponent {
	struct FMulticastInlineDelegate OnEnvelopeFollowerUpdate; // 0xa0(0x10)
	char pad_B0[0x10]; // 0xb0(0x10)
};

// Class Synthesis.SourceEffectEnvelopeFollowerPreset
// Size: 0xa8 (Inherited: 0x68)
struct USourceEffectEnvelopeFollowerPreset : USoundEffectSourcePreset {
	char pad_68[0x34]; // 0x68(0x34)
	struct FSourceEffectEnvelopeFollowerSettings Settings; // 0x9c(0x0c)

	void UnregisterEnvelopeFollowerListener(struct UEnvelopeFollowerListener* EnvelopeFollowerListener); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener // (Final|Native|Public|BlueprintCallable) // @ game+0x6438eb0
	void SetSettings(struct FSourceEffectEnvelopeFollowerSettings& InSettings); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6438864
	void RegisterEnvelopeFollowerListener(struct UEnvelopeFollowerListener* EnvelopeFollowerListener); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener // (Final|Native|Public|BlueprintCallable) // @ game+0x6437bc0
};

// Class Synthesis.SourceEffectEQPreset
// Size: 0xb0 (Inherited: 0x68)
struct USourceEffectEQPreset : USoundEffectSourcePreset {
	char pad_68[0x38]; // 0x68(0x38)
	struct FSourceEffectEQSettings Settings; // 0xa0(0x10)

	void SetSettings(struct FSourceEffectEQSettings& InSettings); // Function Synthesis.SourceEffectEQPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6438788
};

// Class Synthesis.SourceEffectFilterPreset
// Size: 0xd0 (Inherited: 0x68)
struct USourceEffectFilterPreset : USoundEffectSourcePreset {
	char pad_68[0x48]; // 0x68(0x48)
	struct FSourceEffectFilterSettings Settings; // 0xb0(0x20)

	void SetSettings(struct FSourceEffectFilterSettings& InSettings); // Function Synthesis.SourceEffectFilterPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6438944
};

// Class Synthesis.SourceEffectFoldbackDistortionPreset
// Size: 0xa8 (Inherited: 0x68)
struct USourceEffectFoldbackDistortionPreset : USoundEffectSourcePreset {
	char pad_68[0x34]; // 0x68(0x34)
	struct FSourceEffectFoldbackDistortionSettings Settings; // 0x9c(0x0c)

	void SetSettings(struct FSourceEffectFoldbackDistortionSettings& InSettings); // Function Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6438a00
};

// Class Synthesis.SourceEffectMidSideSpreaderPreset
// Size: 0xa0 (Inherited: 0x68)
struct USourceEffectMidSideSpreaderPreset : USoundEffectSourcePreset {
	char pad_68[0x30]; // 0x68(0x30)
	struct FSourceEffectMidSideSpreaderSettings Settings; // 0x98(0x08)

	void SetSettings(struct FSourceEffectMidSideSpreaderSettings& InSettings); // Function Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6438ae0
};

// Class Synthesis.SourceEffectMotionFilterPreset
// Size: 0x180 (Inherited: 0x68)
struct USourceEffectMotionFilterPreset : USoundEffectSourcePreset {
	char pad_68[0xa0]; // 0x68(0xa0)
	struct FSourceEffectMotionFilterSettings Settings; // 0x108(0x78)

	void SetSettings(struct FSourceEffectMotionFilterSettings& InSettings); // Function Synthesis.SourceEffectMotionFilterPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6438b9c
};

// Class Synthesis.SourceEffectPannerPreset
// Size: 0xa0 (Inherited: 0x68)
struct USourceEffectPannerPreset : USoundEffectSourcePreset {
	char pad_68[0x30]; // 0x68(0x30)
	struct FSourceEffectPannerSettings Settings; // 0x98(0x08)

	void SetSettings(struct FSourceEffectPannerSettings& InSettings); // Function Synthesis.SourceEffectPannerPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x643b1e4
};

// Class Synthesis.SourceEffectPhaserPreset
// Size: 0xb0 (Inherited: 0x68)
struct USourceEffectPhaserPreset : USoundEffectSourcePreset {
	char pad_68[0x38]; // 0x68(0x38)
	struct FSourceEffectPhaserSettings Settings; // 0xa0(0x10)

	void SetSettings(struct FSourceEffectPhaserSettings& InSettings); // Function Synthesis.SourceEffectPhaserPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x643b2a0
};

// Class Synthesis.SourceEffectRingModulationPreset
// Size: 0xd0 (Inherited: 0x68)
struct USourceEffectRingModulationPreset : USoundEffectSourcePreset {
	char pad_68[0x48]; // 0x68(0x48)
	struct FSourceEffectRingModulationSettings Settings; // 0xb0(0x20)

	void SetSettings(struct FSourceEffectRingModulationSettings& InSettings); // Function Synthesis.SourceEffectRingModulationPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x643b380
};

// Class Synthesis.SourceEffectSimpleDelayPreset
// Size: 0xc0 (Inherited: 0x68)
struct USourceEffectSimpleDelayPreset : USoundEffectSourcePreset {
	char pad_68[0x40]; // 0x68(0x40)
	struct FSourceEffectSimpleDelaySettings Settings; // 0xa8(0x18)

	void SetSettings(struct FSourceEffectSimpleDelaySettings& InSettings); // Function Synthesis.SourceEffectSimpleDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x643b450
};

// Class Synthesis.SourceEffectStereoDelayPreset
// Size: 0xd8 (Inherited: 0x68)
struct USourceEffectStereoDelayPreset : USoundEffectSourcePreset {
	char pad_68[0x4c]; // 0x68(0x4c)
	struct FSourceEffectStereoDelaySettings Settings; // 0xb4(0x24)

	void SetSettings(struct FSourceEffectStereoDelaySettings& InSettings); // Function Synthesis.SourceEffectStereoDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x643b528
};

// Class Synthesis.SourceEffectWaveShaperPreset
// Size: 0xa0 (Inherited: 0x68)
struct USourceEffectWaveShaperPreset : USoundEffectSourcePreset {
	char pad_68[0x30]; // 0x68(0x30)
	struct FSourceEffectWaveShaperSettings Settings; // 0x98(0x08)

	void SetSettings(struct FSourceEffectWaveShaperSettings& InSettings); // Function Synthesis.SourceEffectWaveShaperPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x643b1e4
};

// Class Synthesis.SubmixEffectConvolutionReverbPreset
// Size: 0x100 (Inherited: 0x68)
struct USubmixEffectConvolutionReverbPreset : USoundEffectSubmixPreset {
	struct UAudioImpulseResponse* ImpulseResponse; // 0x68(0x08)
	struct FSubmixEffectConvolutionReverbSettings Settings; // 0x70(0x30)
	enum class ESubmixEffectConvolutionReverbBlockSize BlockSize; // 0xa0(0x01)
	bool bEnableHardwareAcceleration; // 0xa1(0x01)
	char pad_A2[0x5e]; // 0xa2(0x5e)

	void SetSettings(struct FSubmixEffectConvolutionReverbSettings& InSettings); // Function Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x643b628
	void SetImpulseResponse(struct UAudioImpulseResponse* InImpulseResponse); // Function Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse // (Final|Native|Public|BlueprintCallable) // @ game+0x643aeac
};

// Class Synthesis.SubmixEffectDelayStatics
// Size: 0x28 (Inherited: 0x28)
struct USubmixEffectDelayStatics : UBlueprintFunctionLibrary {

	struct FSubmixEffectDelaySettings SetMaximumDelayLength(struct FSubmixEffectDelaySettings& DelaySettings, float MaximumDelayLength); // Function Synthesis.SubmixEffectDelayStatics.SetMaximumDelayLength // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x643b0c8
	struct FSubmixEffectDelaySettings SetInterpolationTime(struct FSubmixEffectDelaySettings& DelaySettings, float InterpolationTime); // Function Synthesis.SubmixEffectDelayStatics.SetInterpolationTime // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x643afb8
	struct FSubmixEffectDelaySettings SetDelayLength(struct FSubmixEffectDelaySettings& DelaySettings, float DelayLength); // Function Synthesis.SubmixEffectDelayStatics.SetDelayLength // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x643a970
};

// Class Synthesis.SubmixEffectDelayPreset
// Size: 0xb8 (Inherited: 0x68)
struct USubmixEffectDelayPreset : USoundEffectSubmixPreset {
	char pad_68[0x34]; // 0x68(0x34)
	struct FSubmixEffectDelaySettings Settings; // 0x9c(0x0c)
	struct FSubmixEffectDelaySettings DynamicSettings; // 0xa8(0x0c)
	char pad_B4[0x4]; // 0xb4(0x04)

	void SetSettings(struct FSubmixEffectDelaySettings& InSettings); // Function Synthesis.SubmixEffectDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x643b724
	void SetInterpolationTime(float Time); // Function Synthesis.SubmixEffectDelayPreset.SetInterpolationTime // (Final|Native|Public|BlueprintCallable) // @ game+0x643af34
	void SetDelay(float Length); // Function Synthesis.SubmixEffectDelayPreset.SetDelay // (Final|Native|Public|BlueprintCallable) // @ game+0x643a8ec
	void SetDefaultSettings(struct FSubmixEffectDelaySettings& InSettings); // Function Synthesis.SubmixEffectDelayPreset.SetDefaultSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x643a83c
	float GetMaxDelayInMilliseconds(); // Function Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x643a730
};

// Class Synthesis.SubmixEffectFilterPreset
// Size: 0xa8 (Inherited: 0x68)
struct USubmixEffectFilterPreset : USoundEffectSubmixPreset {
	char pad_68[0x34]; // 0x68(0x34)
	struct FSubmixEffectFilterSettings Settings; // 0x9c(0x0c)

	void SetSettings(struct FSubmixEffectFilterSettings& InSettings); // Function Synthesis.SubmixEffectFilterPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x643b7e8
	void SetFilterType(enum class ESubmixFilterType InType); // Function Synthesis.SubmixEffectFilterPreset.SetFilterType // (Final|Native|Public|BlueprintCallable) // @ game+0x643ae10
	void SetFilterQMod(float InQ); // Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod // (Final|Native|Public|BlueprintCallable) // @ game+0x643ad8c
	void SetFilterQ(float InQ); // Function Synthesis.SubmixEffectFilterPreset.SetFilterQ // (Final|Native|Public|BlueprintCallable) // @ game+0x643ad08
	void SetFilterCutoffFrequencyMod(float InFrequency); // Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod // (Final|Native|Public|BlueprintCallable) // @ game+0x643ac84
	void SetFilterCutoffFrequency(float InFrequency); // Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x643ac00
	void SetFilterAlgorithm(enum class ESubmixFilterAlgorithm InAlgorithm); // Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm // (Final|Native|Public|BlueprintCallable) // @ game+0x643ab64
};

// Class Synthesis.SubmixEffectFlexiverbPreset
// Size: 0xb0 (Inherited: 0x68)
struct USubmixEffectFlexiverbPreset : USoundEffectSubmixPreset {
	char pad_68[0x38]; // 0x68(0x38)
	struct FSubmixEffectFlexiverbSettings Settings; // 0xa0(0x10)

	void SetSettings(struct FSubmixEffectFlexiverbSettings& InSettings); // Function Synthesis.SubmixEffectFlexiverbPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x643b8c4
};

// Class Synthesis.SubmixEffectMultibandCompressorPreset
// Size: 0x100 (Inherited: 0x68)
struct USubmixEffectMultibandCompressorPreset : USoundEffectSubmixPreset {
	char pad_68[0x60]; // 0x68(0x60)
	struct FSubmixEffectMultibandCompressorSettings Settings; // 0xc8(0x38)

	void SetSettings(struct FSubmixEffectMultibandCompressorSettings& InSettings); // Function Synthesis.SubmixEffectMultibandCompressorPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x643b9a8
	void SetExternalSubmix(struct USoundSubmix* Submix); // Function Synthesis.SubmixEffectMultibandCompressorPreset.SetExternalSubmix // (Final|Native|Public|BlueprintCallable) // @ game+0x643aa8c
	void SetAudioBus(struct UAudioBus* AudioBus); // Function Synthesis.SubmixEffectMultibandCompressorPreset.SetAudioBus // (Final|Native|Public|BlueprintCallable) // @ game+0x643a75c
	void ResetKey(); // Function Synthesis.SubmixEffectMultibandCompressorPreset.ResetKey // (Final|Native|Public|BlueprintCallable) // @ game+0x643a748
};

// Class Synthesis.SubmixEffectStereoDelayPreset
// Size: 0xd8 (Inherited: 0x68)
struct USubmixEffectStereoDelayPreset : USoundEffectSubmixPreset {
	char pad_68[0x4c]; // 0x68(0x4c)
	struct FSubmixEffectStereoDelaySettings Settings; // 0xb4(0x24)

	void SetSettings(struct FSubmixEffectStereoDelaySettings& InSettings); // Function Synthesis.SubmixEffectStereoDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x643b528
};

// Class Synthesis.SubmixEffectTapDelayPreset
// Size: 0xd8 (Inherited: 0x68)
struct USubmixEffectTapDelayPreset : USoundEffectSubmixPreset {
	char pad_68[0x40]; // 0x68(0x40)
	struct FSubmixEffectTapDelaySettings Settings; // 0xa8(0x18)
	char pad_C0[0x18]; // 0xc0(0x18)

	void SetTap(int32_t TapId, struct FTapDelayInfo& TapInfo); // Function Synthesis.SubmixEffectTapDelayPreset.SetTap // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x643eb24
	void SetSettings(struct FSubmixEffectTapDelaySettings& InSettings); // Function Synthesis.SubmixEffectTapDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x643e78c
	void SetInterpolationTime(float Time); // Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime // (Final|Native|Public|BlueprintCallable) // @ game+0x643dcc0
	void RemoveTap(int32_t TapId); // Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap // (Final|Native|Public|BlueprintCallable) // @ game+0x643c8d8
	void GetTapIds(struct TArray<int32_t>& TapIds); // Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x643c3ac
	void GetTap(int32_t TapId, struct FTapDelayInfo& TapInfo); // Function Synthesis.SubmixEffectTapDelayPreset.GetTap // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x643c2a4
	float GetMaxDelayInMilliseconds(); // Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds // (Final|Native|Public|BlueprintCallable) // @ game+0x643c224
	void AddTap(int32_t& TapId); // Function Synthesis.SubmixEffectTapDelayPreset.AddTap // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x643c020
};

// Class Synthesis.Synth2DSlider
// Size: 0x5e0 (Inherited: 0x148)
struct USynth2DSlider : UWidget {
	float ValueX; // 0x148(0x04)
	float ValueY; // 0x14c(0x04)
	struct FDelegate ValueXDelegate; // 0x150(0x0c)
	struct FDelegate ValueYDelegate; // 0x15c(0x0c)
	char pad_168[0x8]; // 0x168(0x08)
	struct FSynth2DSliderStyle WidgetStyle; // 0x170(0x3e0)
	struct FLinearColor SliderHandleColor; // 0x550(0x10)
	bool IndentHandle; // 0x560(0x01)
	bool Locked; // 0x561(0x01)
	char pad_562[0x2]; // 0x562(0x02)
	float StepSize; // 0x564(0x04)
	bool IsFocusable; // 0x568(0x01)
	char pad_569[0x7]; // 0x569(0x07)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x570(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x580(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x590(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x5a0(0x10)
	struct FMulticastInlineDelegate OnValueChangedX; // 0x5b0(0x10)
	struct FMulticastInlineDelegate OnValueChangedY; // 0x5c0(0x10)
	char pad_5D0[0x10]; // 0x5d0(0x10)

	void SetValue(struct FVector2D InValue); // Function Synthesis.Synth2DSlider.SetValue // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x643ec2c
	void SetStepSize(float InValue); // Function Synthesis.Synth2DSlider.SetStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0x643e960
	void SetSliderHandleColor(struct FLinearColor InValue); // Function Synthesis.Synth2DSlider.SetSliderHandleColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x643e844
	void SetLocked(bool InValue); // Function Synthesis.Synth2DSlider.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x643dd44
	void SetIndentHandle(bool InValue); // Function Synthesis.Synth2DSlider.SetIndentHandle // (Final|Native|Public|BlueprintCallable) // @ game+0x643dc0c
	struct FVector2D GetValue(); // Function Synthesis.Synth2DSlider.GetValue // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x643c494
};

// Class Synthesis.GranularSynth
// Size: 0xb60 (Inherited: 0x780)
struct UGranularSynth : USynthComponent {
	struct USoundWave* GranulatedSoundWave; // 0x780(0x08)
	char pad_788[0x3d8]; // 0x788(0x3d8)

	void SetSustainGain(float SustainGain); // Function Synthesis.GranularSynth.SetSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x643e9e4
	void SetSoundWave(struct USoundWave* InSoundWave); // Function Synthesis.GranularSynth.SetSoundWave // (Final|Native|Public|BlueprintCallable) // @ game+0x643e8e0
	void SetScrubMode(bool bScrubMode); // Function Synthesis.GranularSynth.SetScrubMode // (Final|Native|Public|BlueprintCallable) // @ game+0x643e6d0
	void SetReleaseTimeMsec(float ReleaseTimeMsec); // Function Synthesis.GranularSynth.SetReleaseTimeMsec // (Final|Native|Public|BlueprintCallable) // @ game+0x643e64c
	void SetPlayheadTime(float InPositionSec, float LerpTimeSec, enum class EGranularSynthSeekType SeekType); // Function Synthesis.GranularSynth.SetPlayheadTime // (Final|Native|Public|BlueprintCallable) // @ game+0x643df00
	void SetPlaybackSpeed(float InPlayheadRate); // Function Synthesis.GranularSynth.SetPlaybackSpeed // (Final|Native|Public|BlueprintCallable) // @ game+0x643de7c
	void SetGrainVolume(float BaseVolume, struct FVector2D VolumeRange); // Function Synthesis.GranularSynth.SetGrainVolume // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x643dab8
	void SetGrainsPerSecond(float InGrainsPerSecond); // Function Synthesis.GranularSynth.SetGrainsPerSecond // (Final|Native|Public|BlueprintCallable) // @ game+0x643db88
	void SetGrainProbability(float InGrainProbability); // Function Synthesis.GranularSynth.SetGrainProbability // (Final|Native|Public|BlueprintCallable) // @ game+0x643da34
	void SetGrainPitch(float BasePitch, struct FVector2D PitchRange); // Function Synthesis.GranularSynth.SetGrainPitch // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x643d964
	void SetGrainPan(float BasePan, struct FVector2D PanRange); // Function Synthesis.GranularSynth.SetGrainPan // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x643d894
	void SetGrainEnvelopeType(enum class EGranularSynthEnvelopeType EnvelopeType); // Function Synthesis.GranularSynth.SetGrainEnvelopeType // (Final|Native|Public|BlueprintCallable) // @ game+0x643d7dc
	void SetGrainDuration(float BaseDurationMsec, struct FVector2D DurationRange); // Function Synthesis.GranularSynth.SetGrainDuration // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x643d70c
	void SetDecayTime(float DecayTimeMsec); // Function Synthesis.GranularSynth.SetDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x643cde8
	void SetAttackTime(float AttackTimeMsec); // Function Synthesis.GranularSynth.SetAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x643cde8
	void NoteOn(float Note, int32_t Velocity, float Duration); // Function Synthesis.GranularSynth.NoteOn // (Final|Native|Public|BlueprintCallable) // @ game+0x643c688
	void NoteOff(float Note, bool bKill); // Function Synthesis.GranularSynth.NoteOff // (Final|Native|Public|BlueprintCallable) // @ game+0x643c538
	bool IsLoaded(); // Function Synthesis.GranularSynth.IsLoaded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x643c520
	float GetSampleDuration(); // Function Synthesis.GranularSynth.GetSampleDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x643c28c
	float GetCurrentPlayheadTime(); // Function Synthesis.GranularSynth.GetCurrentPlayheadTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x643c0ac
};

// Class Synthesis.MonoWaveTableSynthPreset
// Size: 0x170 (Inherited: 0x28)
struct UMonoWaveTableSynthPreset : UObject {
	struct FString PresetName; // 0x28(0x10)
	char bLockKeyframesToGridBool : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t LockKeyframesToGrid; // 0x3c(0x04)
	int32_t WaveTableResolution; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FRuntimeFloatCurve> WaveTable; // 0x48(0x10)
	char bNormalizeWaveTables : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x117]; // 0x59(0x117)
};

// Class Synthesis.SynthComponentMonoWaveTable
// Size: 0xec0 (Inherited: 0x780)
struct USynthComponentMonoWaveTable : USynthComponent {
	struct FMulticastInlineDelegate OnTableAltered; // 0x780(0x10)
	struct FMulticastInlineDelegate OnNumTablesChanged; // 0x790(0x10)
	struct UMonoWaveTableSynthPreset* CurrentPreset; // 0x7a0(0x08)
	char pad_7A8[0x718]; // 0x7a8(0x718)

	void SetWaveTablePosition(float InPosition); // Function Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition // (Final|Native|Public|BlueprintCallable) // @ game+0x643ecb4
	void SetSustainPedalState(bool InSustainPedalState); // Function Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState // (Final|Native|Public|BlueprintCallable) // @ game+0x643ea68
	void SetPosLfoType(enum class ESynthLFOType InLfoType); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoType // (Final|Native|Public|BlueprintCallable) // @ game+0x643e104
	void SetPosLfoFrequency(float InLfoFrequency); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x643e080
	void SetPosLfoDepth(float InLfoDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x643dffc
	void SetPositionEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x643e5c8
	void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0x643e544
	void SetPositionEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x643e488
	void SetPositionEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x643e404
	void SetPositionEnvelopeDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x643e380
	void SetPositionEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x643e2c4
	void SetPositionEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x643e240
	void SetPositionEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x643e1bc
	void SetLowPassFilterResonance(float InNewQ); // Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance // (Final|Native|Public|BlueprintCallable) // @ game+0x643ddf8
	void SetFrequencyWithMidiNote(float InMidiNote); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote // (Final|Native|Public|BlueprintCallable) // @ game+0x643d688
	void SetFrequencyPitchBend(float FrequencyOffsetCents); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend // (Final|Native|Public|BlueprintCallable) // @ game+0x643d604
	void SetFrequency(float FrequencyHz); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x643d580
	void SetFilterEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x643d478
	void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0x643d3f4
	void SetFilterEnvelopenDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x643d4fc
	void SetFilterEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x643d338
	void SetFilterEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x643d2b4
	void SetFilterEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x643d1f8
	void SetFilterEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x643d174
	void SetFilterEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x643d0f0
	bool SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveValue // (Final|Native|Public|BlueprintCallable) // @ game+0x643cff4
	bool SetCurveTangent(int32_t TableIndex, float InNewTangent); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent // (Final|Native|Public|BlueprintCallable) // @ game+0x643cf2c
	bool SetCurveInterpolationType(enum class CurveInterpolationType InterpolationType, int32_t TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType // (Final|Native|Public|BlueprintCallable) // @ game+0x643ce6c
	void SetAmpEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x643cd64
	void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0x643cce0
	void SetAmpEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x643cc24
	void SetAmpEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x643cba0
	void SetAmpEnvelopeDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x643cb1c
	void SetAmpEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x643ca60
	void SetAmpEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x643c9dc
	void SetAmpEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x643c958
	void RefreshWaveTable(int32_t Index); // Function Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable // (Final|Native|Public|BlueprintCallable) // @ game+0x643c858
	void RefreshAllWaveTables(); // Function Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables // (Final|Native|Public|BlueprintCallable) // @ game+0x643c844
	void NoteOn(float InMidiNote, float InVelocity); // Function Synthesis.SynthComponentMonoWaveTable.NoteOn // (Final|Native|Public|BlueprintCallable) // @ game+0x643c780
	void NoteOff(float InMidiNote); // Function Synthesis.SynthComponentMonoWaveTable.NoteOff // (Final|Native|Public|BlueprintCallable) // @ game+0x643c604
	int32_t GetNumTableEntries(); // Function Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries // (Final|Native|Public|BlueprintCallable) // @ game+0x643c264
	int32_t GetMaxTableIndex(); // Function Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x643c23c
	struct TArray<float> GetKeyFrameValuesForTable(float TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x643c154
	float GetCurveTangent(int32_t TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent // (Final|Native|Public|BlueprintCallable) // @ game+0x643c0c4
};

// Class Synthesis.SynthComponentToneGenerator
// Size: 0x870 (Inherited: 0x780)
struct USynthComponentToneGenerator : USynthComponent {
	float Frequency; // 0x780(0x04)
	float Volume; // 0x784(0x04)
	struct FRuntimeFloatCurve DistanceAttenuationCurve; // 0x788(0x88)
	struct FVector2D DistanceRange; // 0x810(0x10)
	float AttenuationDbAtMaxRange; // 0x820(0x04)
	char pad_824[0x4c]; // 0x824(0x4c)

	void SetVolume(float InVolume); // Function Synthesis.SynthComponentToneGenerator.SetVolume // (Final|Native|Public|BlueprintCallable) // @ game+0x6452974
	void SetFrequency(float InFrequency); // Function Synthesis.SynthComponentToneGenerator.SetFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x6452490
};

// Class Synthesis.SynthSamplePlayer
// Size: 0x8b0 (Inherited: 0x780)
struct USynthSamplePlayer : USynthComponent {
	struct USoundWave* SoundWave; // 0x780(0x08)
	struct FMulticastInlineDelegate OnSampleLoaded; // 0x788(0x10)
	struct FMulticastInlineDelegate OnSamplePlaybackProgress; // 0x798(0x10)
	char pad_7A8[0x108]; // 0x7a8(0x108)

	void SetSoundWave(struct USoundWave* InSoundWave); // Function Synthesis.SynthSamplePlayer.SetSoundWave // (Final|Native|Public|BlueprintCallable) // @ game+0x64527d4
	void SetScrubTimeWidth(float InScrubTimeWidthSec); // Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x6452750
	void SetScrubMode(bool bScrubMode); // Function Synthesis.SynthSamplePlayer.SetScrubMode // (Final|Native|Public|BlueprintCallable) // @ game+0x6452694
	void SetPitch(float InPitch, float TimeSec); // Function Synthesis.SynthSamplePlayer.SetPitch // (Final|Native|Public|BlueprintCallable) // @ game+0x64525d0
	void SeekToTime(float TimeSec, enum class ESamplePlayerSeekType SeekType, bool bWrap); // Function Synthesis.SynthSamplePlayer.SeekToTime // (Final|Native|Public|BlueprintCallable) // @ game+0x6452390
	bool IsLoaded(); // Function Synthesis.SynthSamplePlayer.IsLoaded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x278f258
	float GetSampleDuration(); // Function Synthesis.SynthSamplePlayer.GetSampleDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6452350
	float GetCurrentPlaybackProgressTime(); // Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6452038
	float GetCurrentPlaybackProgressPercent(); // Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6452018
};

// Class Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct USynthesisUtilitiesBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	float GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax); // Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLogFrequency // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x64521d0
	float GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax); // Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLinearFrequency // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x6452050
};

// Class Synthesis.SynthKnob
// Size: 0x530 (Inherited: 0x148)
struct USynthKnob : UWidget {
	float Value; // 0x148(0x04)
	float StepSize; // 0x14c(0x04)
	float MouseSpeed; // 0x150(0x04)
	float MouseFineTuneSpeed; // 0x154(0x04)
	char ShowTooltipInfo : 1; // 0x158(0x01)
	char pad_158_1 : 7; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
	struct FText ParameterName; // 0x160(0x18)
	struct FText ParameterUnits; // 0x178(0x18)
	struct FDelegate ValueDelegate; // 0x190(0x0c)
	char pad_19C[0x4]; // 0x19c(0x04)
	struct FSynthKnobStyle WidgetStyle; // 0x1a0(0x320)
	bool Locked; // 0x4c0(0x01)
	bool IsFocusable; // 0x4c1(0x01)
	char pad_4C2[0x6]; // 0x4c2(0x06)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x4c8(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x4d8(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x4e8(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x4f8(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x508(0x10)
	char pad_518[0x18]; // 0x518(0x18)

	void SetValue(float InValue); // Function Synthesis.SynthKnob.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x64528f0
	void SetStepSize(float InValue); // Function Synthesis.SynthKnob.SetStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0x6452864
	void SetLocked(bool InValue); // Function Synthesis.SynthKnob.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x645251c
	float GetValue(); // Function Synthesis.SynthKnob.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6452368
};

