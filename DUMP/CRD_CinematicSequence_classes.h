// Class CRD_CinematicSequence.CinematicSequenceDeviceBase
// Size: 0xf10 (Inherited: 0xf00)
struct ACinematicSequenceDeviceBase : ABuildingProp {
	struct ULevelSequence* Sequence; // 0xf00(0x08)
	struct ALevelSequenceActor* LevelSequenceActor; // 0xf08(0x08)

	void Play(); // Function CRD_CinematicSequence.CinematicSequenceDeviceBase.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x67dd100
};

