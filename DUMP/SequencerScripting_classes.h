// Class SequencerScripting.MovieSceneBindingExtensions
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneBindingExtensions : UBlueprintFunctionLibrary {

	void SetParent(struct FMovieSceneBindingProxy& InBinding, struct FMovieSceneBindingProxy& InParentBinding); // Function SequencerScripting.MovieSceneBindingExtensions.SetParent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6503f90
	void SetName(struct FMovieSceneBindingProxy& InBinding, struct FString InName); // Function SequencerScripting.MovieSceneBindingExtensions.SetName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6503d20
	void SetDisplayName(struct FMovieSceneBindingProxy& InBinding, struct FText& InDisplayName); // Function SequencerScripting.MovieSceneBindingExtensions.SetDisplayName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x65038cc
	void RemoveTrack(struct FMovieSceneBindingProxy& InBinding, struct UMovieSceneTrack* TrackToRemove); // Function SequencerScripting.MovieSceneBindingExtensions.RemoveTrack // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6503580
	void Remove(struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.Remove // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x65030a4
	void MoveBindingContents(struct FMovieSceneBindingProxy& SourceBindingId, struct FMovieSceneBindingProxy& DestinationBindingId); // Function SequencerScripting.MovieSceneBindingExtensions.MoveBindingContents // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6502fb8
	bool IsValid(struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.IsValid // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x6502f28
	struct TArray<struct UMovieSceneTrack*> GetTracks(struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetTracks // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6502c08
	struct UObject* GetPossessedObjectClass(struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetPossessedObjectClass // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x65028b8
	struct FMovieSceneBindingProxy GetParent(struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetParent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x65027d0
	struct UObject* GetObjectTemplate(struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetObjectTemplate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x650273c
	struct FString GetName(struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6502578
	struct FGuid GetId(struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetId // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x6502350
	struct FText GetDisplayName(struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetDisplayName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x65020f8
	struct TArray<struct FMovieSceneBindingProxy> GetChildPossessables(struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetChildPossessables // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6501f88
	struct TArray<struct UMovieSceneTrack*> FindTracksByType(struct FMovieSceneBindingProxy& InBinding, struct UMovieSceneTrack* TrackType); // Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByType // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6501788
	struct TArray<struct UMovieSceneTrack*> FindTracksByExactType(struct FMovieSceneBindingProxy& InBinding, struct UMovieSceneTrack* TrackType); // Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByExactType // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6501694
	struct UMovieSceneTrack* AddTrack(struct FMovieSceneBindingProxy& InBinding, struct UMovieSceneTrack* TrackType); // Function SequencerScripting.MovieSceneBindingExtensions.AddTrack // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x650140c
};

// Class SequencerScripting.MovieSceneEventTrackExtensions
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneEventTrackExtensions : UBlueprintFunctionLibrary {

	struct UObject* GetBoundObjectPropertyClass(struct FMovieSceneEvent& EventKey); // Function SequencerScripting.MovieSceneEventTrackExtensions.GetBoundObjectPropertyClass // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x650187c
	struct UMovieSceneEventTriggerSection* AddEventTriggerSection(struct UMovieSceneEventTrack* InTrack); // Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventTriggerSection // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x650109c
	struct UMovieSceneEventRepeaterSection* AddEventRepeaterSection(struct UMovieSceneEventTrack* InTrack); // Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventRepeaterSection // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6500fe8
};

// Class SequencerScripting.MovieSceneFolderExtensions
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneFolderExtensions : UBlueprintFunctionLibrary {

	bool SetFolderName(struct UMovieSceneFolder* Folder, struct FName InFolderName); // Function SequencerScripting.MovieSceneFolderExtensions.SetFolderName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6503abc
	bool SetFolderColor(struct UMovieSceneFolder* Folder, struct FColor InFolderColor); // Function SequencerScripting.MovieSceneFolderExtensions.SetFolderColor // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x65039f0
	bool RemoveChildObjectBinding(struct UMovieSceneFolder* Folder, struct FMovieSceneBindingProxy InObjectBinding); // Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildObjectBinding // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6503340
	bool RemoveChildMasterTrack(struct UMovieSceneFolder* Folder, struct UMovieSceneTrack* InMasterTrack); // Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildMasterTrack // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x650324c
	bool RemoveChildFolder(struct UMovieSceneFolder* TargetFolder, struct UMovieSceneFolder* FolderToRemove); // Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildFolder // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6503158
	struct FName GetFolderName(struct UMovieSceneFolder* Folder); // Function SequencerScripting.MovieSceneFolderExtensions.GetFolderName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x65022bc
	struct FColor GetFolderColor(struct UMovieSceneFolder* Folder); // Function SequencerScripting.MovieSceneFolderExtensions.GetFolderColor // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x6502234
	struct TArray<struct FMovieSceneBindingProxy> GetChildObjectBindings(struct UMovieSceneFolder* Folder); // Function SequencerScripting.MovieSceneFolderExtensions.GetChildObjectBindings // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x6501d30
	struct TArray<struct UMovieSceneTrack*> GetChildMasterTracks(struct UMovieSceneFolder* Folder); // Function SequencerScripting.MovieSceneFolderExtensions.GetChildMasterTracks // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x6501ba0
	struct TArray<struct UMovieSceneFolder*> GetChildFolders(struct UMovieSceneFolder* Folder); // Function SequencerScripting.MovieSceneFolderExtensions.GetChildFolders // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x65019d0
	bool AddChildObjectBinding(struct UMovieSceneFolder* Folder, struct FMovieSceneBindingProxy InObjectBinding); // Function SequencerScripting.MovieSceneFolderExtensions.AddChildObjectBinding // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6500ec4
	bool AddChildMasterTrack(struct UMovieSceneFolder* Folder, struct UMovieSceneTrack* InMasterTrack); // Function SequencerScripting.MovieSceneFolderExtensions.AddChildMasterTrack // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6500dc0
	bool AddChildFolder(struct UMovieSceneFolder* TargetFolder, struct UMovieSceneFolder* FolderToAdd); // Function SequencerScripting.MovieSceneFolderExtensions.AddChildFolder // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6500cbc
};

// Class SequencerScripting.MovieSceneMaterialTrackExtensions
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneMaterialTrackExtensions : UBlueprintFunctionLibrary {

	void SetMaterialIndex(struct UMovieSceneComponentMaterialTrack* Track, int32_t MaterialIndex); // Function SequencerScripting.MovieSceneMaterialTrackExtensions.SetMaterialIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6503b98
	int32_t GetMaterialIndex(struct UMovieSceneComponentMaterialTrack* Track); // Function SequencerScripting.MovieSceneMaterialTrackExtensions.GetMaterialIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6502458
};

// Class SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions
// Size: 0x28 (Inherited: 0x28)
struct UMovieScenePrimitiveMaterialTrackExtensions : UBlueprintFunctionLibrary {

	void SetMaterialIndex(struct UMovieScenePrimitiveMaterialTrack* Track, int32_t MaterialIndex); // Function SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions.SetMaterialIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6503c5c
	int32_t GetMaterialIndex(struct UMovieScenePrimitiveMaterialTrack* Track); // Function SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions.GetMaterialIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x65024e8
};

// Class SequencerScripting.MovieScenePropertyTrackExtensions
// Size: 0x28 (Inherited: 0x28)
struct UMovieScenePropertyTrackExtensions : UBlueprintFunctionLibrary {

	void SetPropertyNameAndPath(struct UMovieScenePropertyTrack* Track, struct FName& InPropertyName, struct FString InPropertyPath); // Function SequencerScripting.MovieScenePropertyTrackExtensions.SetPropertyNameAndPath // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x65040cc
	void SetObjectPropertyClass(struct UMovieSceneObjectPropertyTrack* Track, struct UObject* PropertyClass); // Function SequencerScripting.MovieScenePropertyTrackExtensions.SetObjectPropertyClass // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6503ecc
	void SetByteTrackEnum(struct UMovieSceneByteTrack* Track, struct UEnum* InEnum); // Function SequencerScripting.MovieScenePropertyTrackExtensions.SetByteTrackEnum // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6503680
	struct FName GetUniqueTrackName(struct UMovieScenePropertyTrack* Track); // Function SequencerScripting.MovieScenePropertyTrackExtensions.GetUniqueTrackName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6502cdc
	struct FString GetPropertyPath(struct UMovieScenePropertyTrack* Track); // Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyPath // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x65029e8
	struct FName GetPropertyName(struct UMovieScenePropertyTrack* Track); // Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6502950
	struct UObject* GetObjectPropertyClass(struct UMovieSceneObjectPropertyTrack* Track); // Function SequencerScripting.MovieScenePropertyTrackExtensions.GetObjectPropertyClass // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x65026a4
	struct UEnum* GetByteTrackEnum(struct UMovieSceneByteTrack* Track); // Function SequencerScripting.MovieScenePropertyTrackExtensions.GetByteTrackEnum // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x6501938
};

// Class SequencerScripting.MovieSceneScriptingKey
// Size: 0x40 (Inherited: 0x28)
struct UMovieSceneScriptingKey : UObject {
	char pad_28[0x18]; // 0x28(0x18)
};

// Class SequencerScripting.MovieSceneScriptingActorReferenceKey
// Size: 0x58 (Inherited: 0x40)
struct UMovieSceneScriptingActorReferenceKey : UMovieSceneScriptingKey {
	char pad_40[0x18]; // 0x40(0x18)

	void SetValue(struct FMovieSceneObjectBindingID& InNewValue); // Function SequencerScripting.MovieSceneScriptingActorReferenceKey.SetValue // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6504504
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingActorReferenceKey.SetTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x65042cc
	struct FMovieSceneObjectBindingID GetValue(); // Function SequencerScripting.MovieSceneScriptingActorReferenceKey.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6502d60
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingActorReferenceKey.GetTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6502b78
};

// Class SequencerScripting.MovieSceneScriptingChannel
// Size: 0x30 (Inherited: 0x28)
struct UMovieSceneScriptingChannel : UObject {
	struct FName ChannelName; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class SequencerScripting.MovieSceneScriptingActorReferenceChannel
// Size: 0x58 (Inherited: 0x30)
struct UMovieSceneScriptingActorReferenceChannel : UMovieSceneScriptingChannel {
	char pad_30[0x28]; // 0x30(0x28)

	void SetDefault(struct FMovieSceneObjectBindingID InDefaultValue); // Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.SetDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x6503744
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveKey // (Native|Public|BlueprintCallable) // @ game+0x65034fc
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x6503448
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.HasDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6502e78
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetKeys // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65023e0
	struct FMovieSceneObjectBindingID GetDefault(); // Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x650205c
	struct UMovieSceneScriptingActorReferenceKey* AddKey(struct FFrameNumber InTime, struct FMovieSceneObjectBindingID NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.AddKey // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x6501150
};

// Class SequencerScripting.MovieSceneScriptingBoolKey
// Size: 0x58 (Inherited: 0x40)
struct UMovieSceneScriptingBoolKey : UMovieSceneScriptingKey {
	char pad_40[0x18]; // 0x40(0x18)

	void SetValue(bool InNewValue); // Function SequencerScripting.MovieSceneScriptingBoolKey.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x6504608
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingBoolKey.SetTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x65043e8
	bool GetValue(); // Function SequencerScripting.MovieSceneScriptingBoolKey.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6502df8
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingBoolKey.GetTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6502b78
};

// Class SequencerScripting.MovieSceneScriptingBoolChannel
// Size: 0x58 (Inherited: 0x30)
struct UMovieSceneScriptingBoolChannel : UMovieSceneScriptingChannel {
	char pad_30[0x28]; // 0x30(0x28)

	void SetDefault(bool InDefaultValue); // Function SequencerScripting.MovieSceneScriptingBoolChannel.SetDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x65037f0
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingBoolChannel.RemoveKey // (Native|Public|BlueprintCallable) // @ game+0x65034fc
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingBoolChannel.RemoveDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x6503488
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingBoolChannel.HasDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6502ecc
	int32_t GetNumKeys(); // Function SequencerScripting.MovieSceneScriptingBoolChannel.GetNumKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x650264c
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingBoolChannel.GetKeys // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65023e0
	bool GetDefault(); // Function SequencerScripting.MovieSceneScriptingBoolChannel.GetDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6502094
	struct TArray<bool> EvaluateKeys(struct FSequencerScriptingRange Range, struct FFrameRate FrameRate); // Function SequencerScripting.MovieSceneScriptingBoolChannel.EvaluateKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6501550
	struct FSequencerScriptingRange ComputeEffectiveRange(); // Function SequencerScripting.MovieSceneScriptingBoolChannel.ComputeEffectiveRange // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65014e8
	struct UMovieSceneScriptingBoolKey* AddKey(struct FFrameNumber& InTime, bool NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingBoolChannel.AddKey // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x65012b0
};

// Class SequencerScripting.MovieSceneScriptingByteKey
// Size: 0x58 (Inherited: 0x40)
struct UMovieSceneScriptingByteKey : UMovieSceneScriptingKey {
	char pad_40[0x18]; // 0x40(0x18)

	void SetValue(char InNewValue); // Function SequencerScripting.MovieSceneScriptingByteKey.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x650a8e4
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingByteKey.SetTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x65042cc
	char GetValue(); // Function SequencerScripting.MovieSceneScriptingByteKey.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65099a0
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingByteKey.GetTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6502b78
};

// Class SequencerScripting.MovieSceneScriptingByteChannel
// Size: 0x58 (Inherited: 0x30)
struct UMovieSceneScriptingByteChannel : UMovieSceneScriptingChannel {
	char pad_30[0x28]; // 0x30(0x28)

	void SetDefault(char InDefaultValue); // Function SequencerScripting.MovieSceneScriptingByteChannel.SetDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x6509dec
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingByteChannel.RemoveKey // (Native|Public|BlueprintCallable) // @ game+0x65034fc
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingByteChannel.RemoveDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x6503488
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingByteChannel.HasDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6502ecc
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingByteChannel.GetKeys // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65023e0
	char GetDefault(); // Function SequencerScripting.MovieSceneScriptingByteChannel.GetDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6502094
	struct UMovieSceneScriptingByteKey* AddKey(struct FFrameNumber& InTime, char NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit, enum class EMovieSceneKeyInterpolation InInterpolation); // Function SequencerScripting.MovieSceneScriptingByteChannel.AddKey // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x6508b50
};

// Class SequencerScripting.MovieSceneScriptingDoubleKey
// Size: 0x58 (Inherited: 0x40)
struct UMovieSceneScriptingDoubleKey : UMovieSceneScriptingKey {
	char pad_40[0x18]; // 0x40(0x18)

	void SetValue(double InNewValue); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x650a990
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x65043e8
	void SetTangentWeightMode(enum class ERichCurveTangentWeightMode InNewValue); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentWeightMode // (Final|Native|Public|BlueprintCallable) // @ game+0x650a6a0
	void SetTangentMode(enum class ERichCurveTangentMode InNewValue); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentMode // (Final|Native|Public|BlueprintCallable) // @ game+0x650a568
	void SetLeaveTangentWeight(float InNewValue); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangentWeight // (Final|Native|Public|BlueprintCallable) // @ game+0x650a204
	void SetLeaveTangent(float InNewValue); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangent // (Final|Native|Public|BlueprintCallable) // @ game+0x650a0f8
	void SetInterpolationMode(enum class ERichCurveInterpMode InNewValue); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetInterpolationMode // (Final|Native|Public|BlueprintCallable) // @ game+0x6509fc0
	void SetArriveTangentWeight(float InNewValue); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangentWeight // (Final|Native|Public|BlueprintCallable) // @ game+0x6509ce0
	void SetArriveTangent(float InNewValue); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangent // (Final|Native|Public|BlueprintCallable) // @ game+0x6509bd4
	double GetValue(); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6509a30
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6502b78
	enum class ERichCurveTangentWeightMode GetTangentWeightMode(); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentWeightMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6509940
	enum class ERichCurveTangentMode GetTangentMode(); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65098e0
	float GetLeaveTangentWeight(); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangentWeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6509668
	float GetLeaveTangent(); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6509604
	enum class ERichCurveInterpMode GetInterpolationMode(); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetInterpolationMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65095a4
	float GetArriveTangentWeight(); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangentWeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65094f0
	float GetArriveTangent(); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x650948c
};

// Class SequencerScripting.MovieSceneScriptingDoubleChannel
// Size: 0x58 (Inherited: 0x30)
struct UMovieSceneScriptingDoubleChannel : UMovieSceneScriptingChannel {
	char pad_30[0x28]; // 0x30(0x28)

	void SetPreInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetPreInfinityExtrapolation // (Final|Native|Public|BlueprintCallable) // @ game+0x650a43c
	void SetPostInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetPostInfinityExtrapolation // (Final|Native|Public|BlueprintCallable) // @ game+0x650a310
	void SetDefault(double InDefaultValue); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x6509eb8
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveKey // (Native|Public|BlueprintCallable) // @ game+0x65034fc
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x6509b4c
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.HasDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6509ab0
	enum class ERichCurveExtrapolation GetPreInfinityExtrapolation(); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetPreInfinityExtrapolation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6509840
	enum class ERichCurveExtrapolation GetPostInfinityExtrapolation(); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetPostInfinityExtrapolation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65097a0
	int32_t GetNumKeys(); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetNumKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65096cc
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetKeys // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65023e0
	double GetDefault(); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6509554
	struct TArray<double> EvaluateKeys(struct FSequencerScriptingRange Range, struct FFrameRate FrameRate); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.EvaluateKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6509234
	struct FSequencerScriptingRange ComputeEffectiveRange(); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.ComputeEffectiveRange // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65091b4
	struct UMovieSceneScriptingDoubleKey* AddKey(struct FFrameNumber& InTime, double NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit, enum class EMovieSceneKeyInterpolation InInterpolation); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.AddKey // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x6508ce4
};

// Class SequencerScripting.MovieSceneScriptingEventKey
// Size: 0x58 (Inherited: 0x40)
struct UMovieSceneScriptingEventKey : UMovieSceneScriptingKey {
	char pad_40[0x18]; // 0x40(0x18)

	void SetValue(struct FMovieSceneEvent& InNewValue); // Function SequencerScripting.MovieSceneScriptingEventKey.SetValue // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x650aa14
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingEventKey.SetTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x65042cc
	struct FMovieSceneEvent GetValue(); // Function SequencerScripting.MovieSceneScriptingEventKey.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6509a68
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingEventKey.GetTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6502b78
};

// Class SequencerScripting.MovieSceneScriptingEventChannel
// Size: 0x58 (Inherited: 0x30)
struct UMovieSceneScriptingEventChannel : UMovieSceneScriptingChannel {
	char pad_30[0x28]; // 0x30(0x28)

	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingEventChannel.RemoveKey // (Native|Public|BlueprintCallable) // @ game+0x65034fc
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingEventChannel.GetKeys // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65023e0
	struct UMovieSceneScriptingEventKey* AddKey(struct FFrameNumber& InTime, struct FMovieSceneEvent NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingEventChannel.AddKey // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x6508e84
};

// Class SequencerScripting.MovieSceneScriptingFloatKey
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneScriptingFloatKey : UMovieSceneScriptingKey {

	void SetValue(float InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetValue // (Native|Public|BlueprintCallable) // @ game+0x650ab18
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetTime // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x650a7d8
	void SetTangentWeightMode(enum class ERichCurveTangentWeightMode InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentWeightMode // (Native|Public|BlueprintCallable) // @ game+0x650a754
	void SetTangentMode(enum class ERichCurveTangentMode InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentMode // (Native|Public|BlueprintCallable) // @ game+0x650a61c
	void SetLeaveTangentWeight(float InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangentWeight // (Native|Public|BlueprintCallable) // @ game+0x650a288
	void SetLeaveTangent(float InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangent // (Native|Public|BlueprintCallable) // @ game+0x650a17c
	void SetInterpolationMode(enum class ERichCurveInterpMode InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetInterpolationMode // (Native|Public|BlueprintCallable) // @ game+0x650a074
	void SetArriveTangentWeight(float InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangentWeight // (Native|Public|BlueprintCallable) // @ game+0x6509d64
	void SetArriveTangent(float InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangent // (Native|Public|BlueprintCallable) // @ game+0x6509c58
	float GetValue(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetValue // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2378bb0
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6502b78
	enum class ERichCurveTangentWeightMode GetTangentWeightMode(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentWeightMode // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6509978
	enum class ERichCurveTangentMode GetTangentMode(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentMode // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6509918
	float GetLeaveTangentWeight(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangentWeight // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65096a0
	float GetLeaveTangent(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangent // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x650963c
	enum class ERichCurveInterpMode GetInterpolationMode(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetInterpolationMode // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65095dc
	float GetArriveTangentWeight(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangentWeight // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6509528
	float GetArriveTangent(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangent // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65094c4
};

// Class SequencerScripting.MovieSceneScriptingActualFloatKey
// Size: 0x58 (Inherited: 0x40)
struct UMovieSceneScriptingActualFloatKey : UMovieSceneScriptingFloatKey {
	char pad_40[0x18]; // 0x40(0x18)
};

// Class SequencerScripting.MovieSceneScriptingDoubleAsFloatKey
// Size: 0x58 (Inherited: 0x40)
struct UMovieSceneScriptingDoubleAsFloatKey : UMovieSceneScriptingFloatKey {
	char pad_40[0x18]; // 0x40(0x18)
};

// Class SequencerScripting.MovieSceneScriptingFloatChannel
// Size: 0x70 (Inherited: 0x30)
struct UMovieSceneScriptingFloatChannel : UMovieSceneScriptingChannel {
	char pad_30[0x40]; // 0x30(0x40)

	void SetPreInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation); // Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPreInfinityExtrapolation // (Final|Native|Public|BlueprintCallable) // @ game+0x650a4cc
	void SetPostInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation); // Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPostInfinityExtrapolation // (Final|Native|Public|BlueprintCallable) // @ game+0x650a3a0
	void SetDefault(float InDefaultValue); // Function SequencerScripting.MovieSceneScriptingFloatChannel.SetDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x6509f3c
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingFloatChannel.RemoveKey // (Native|Public|BlueprintCallable) // @ game+0x65034fc
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.RemoveDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x6509bc0
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.HasDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6509b28
	enum class ERichCurveExtrapolation GetPreInfinityExtrapolation(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPreInfinityExtrapolation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6509884
	enum class ERichCurveExtrapolation GetPostInfinityExtrapolation(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPostInfinityExtrapolation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65097e4
	int32_t GetNumKeys(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.GetNumKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6509724
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.GetKeys // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65023e0
	float GetDefault(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.GetDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x650957c
	struct TArray<float> EvaluateKeys(struct FSequencerScriptingRange Range, struct FFrameRate FrameRate); // Function SequencerScripting.MovieSceneScriptingFloatChannel.EvaluateKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x650937c
	struct FSequencerScriptingRange ComputeEffectiveRange(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.ComputeEffectiveRange // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6509200
	struct UMovieSceneScriptingFloatKey* AddKey(struct FFrameNumber& InTime, float NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit, enum class EMovieSceneKeyInterpolation InInterpolation); // Function SequencerScripting.MovieSceneScriptingFloatChannel.AddKey // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x650901c
};

// Class SequencerScripting.MovieSceneScriptingIntegerKey
// Size: 0x58 (Inherited: 0x40)
struct UMovieSceneScriptingIntegerKey : UMovieSceneScriptingKey {
	char pad_40[0x18]; // 0x40(0x18)

	void SetValue(int32_t InNewValue); // Function SequencerScripting.MovieSceneScriptingIntegerKey.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x65145e8
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingIntegerKey.SetTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x65043e8
	int32_t GetValue(); // Function SequencerScripting.MovieSceneScriptingIntegerKey.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x651199c
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingIntegerKey.GetTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6502b78
};

// Class SequencerScripting.MovieSceneScriptingIntegerChannel
// Size: 0x58 (Inherited: 0x30)
struct UMovieSceneScriptingIntegerChannel : UMovieSceneScriptingChannel {
	char pad_30[0x28]; // 0x30(0x28)

	void SetDefault(int32_t InDefaultValue); // Function SequencerScripting.MovieSceneScriptingIntegerChannel.SetDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x6512e1c
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveKey // (Native|Public|BlueprintCallable) // @ game+0x65034fc
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x65127a0
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingIntegerChannel.HasDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6511e3c
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetKeys // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65023e0
	int32_t GetDefault(); // Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x650fd64
	struct UMovieSceneScriptingIntegerKey* AddKey(struct FFrameNumber& InTime, int32_t NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingIntegerChannel.AddKey // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x650ce84
};

// Class SequencerScripting.MovieSceneScriptingObjectPathKey
// Size: 0x58 (Inherited: 0x40)
struct UMovieSceneScriptingObjectPathKey : UMovieSceneScriptingKey {
	char pad_40[0x18]; // 0x40(0x18)

	void SetValue(struct UObject* InNewValue); // Function SequencerScripting.MovieSceneScriptingObjectPathKey.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x6514694
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingObjectPathKey.SetTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x65042cc
	struct UObject* GetValue(); // Function SequencerScripting.MovieSceneScriptingObjectPathKey.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6511a28
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingObjectPathKey.GetTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6502b78
};

// Class SequencerScripting.MovieSceneScriptingObjectPathChannel
// Size: 0x58 (Inherited: 0x30)
struct UMovieSceneScriptingObjectPathChannel : UMovieSceneScriptingChannel {
	char pad_30[0x28]; // 0x30(0x28)

	void SetDefault(struct UObject* InDefaultValue); // Function SequencerScripting.MovieSceneScriptingObjectPathChannel.SetDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x6512ee8
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveKey // (Native|Public|BlueprintCallable) // @ game+0x65034fc
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x6503448
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingObjectPathChannel.HasDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6511eb4
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetKeys // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65023e0
	struct UObject* GetDefault(); // Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x650fde4
	struct UMovieSceneScriptingObjectPathKey* AddKey(struct FFrameNumber InTime, struct UObject* NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingObjectPathChannel.AddKey // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x650cfdc
};

// Class SequencerScripting.MovieSceneScriptingStringKey
// Size: 0x58 (Inherited: 0x40)
struct UMovieSceneScriptingStringKey : UMovieSceneScriptingKey {
	char pad_40[0x18]; // 0x40(0x18)

	void SetValue(struct FString InNewValue); // Function SequencerScripting.MovieSceneScriptingStringKey.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x6514714
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingStringKey.SetTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x65042cc
	struct FString GetValue(); // Function SequencerScripting.MovieSceneScriptingStringKey.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6511a7c
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingStringKey.GetTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6502b78
};

// Class SequencerScripting.MovieSceneScriptingStringChannel
// Size: 0x58 (Inherited: 0x30)
struct UMovieSceneScriptingStringChannel : UMovieSceneScriptingChannel {
	char pad_30[0x28]; // 0x30(0x28)

	void SetDefault(struct FString InDefaultValue); // Function SequencerScripting.MovieSceneScriptingStringChannel.SetDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x6512f80
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveKey // (Native|Public|BlueprintCallable) // @ game+0x65034fc
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x6509b4c
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingStringChannel.HasDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6511ee0
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingStringChannel.GetKeys // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65023e0
	struct FString GetDefault(); // Function SequencerScripting.MovieSceneScriptingStringChannel.GetDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x650fe08
	struct UMovieSceneScriptingStringKey* AddKey(struct FFrameNumber& InTime, struct FString NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingStringChannel.AddKey // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x650d118
};

// Class SequencerScripting.MovieSceneSectionExtensions
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneSectionExtensions : UBlueprintFunctionLibrary {

	void SetStartFrameSeconds(struct UMovieSceneSection* Section, float StartTime); // Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x65142fc
	void SetStartFrameBounded(struct UMovieSceneSection* Section, bool bIsBounded); // Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameBounded // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x65141e0
	void SetStartFrame(struct UMovieSceneSection* Section, int32_t StartFrame); // Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x65140b4
	void SetRangeSeconds(struct UMovieSceneSection* Section, float StartTime, float EndTime); // Function SequencerScripting.MovieSceneSectionExtensions.SetRangeSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6513e2c
	void SetRange(struct UMovieSceneSection* Section, int32_t StartFrame, int32_t EndFrame); // Function SequencerScripting.MovieSceneSectionExtensions.SetRange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6513c68
	void SetEndFrameSeconds(struct UMovieSceneSection* Section, float EndTime); // Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6513454
	void SetEndFrameBounded(struct UMovieSceneSection* Section, bool bIsBounded); // Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameBounded // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6513320
	void SetEndFrame(struct UMovieSceneSection* Section, int32_t EndFrame); // Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x65131f4
	bool HasStartFrame(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.HasStartFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6512018
	bool HasEndFrame(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.HasEndFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6511f7c
	float GetStartFrameSeconds(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrameSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x651171c
	int32_t GetStartFrame(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6511610
	int32_t GetParentSequenceFrame(struct UMovieSceneSubSection* Section, int32_t InFrame, struct UMovieSceneSequence* ParentSequence); // Function SequencerScripting.MovieSceneSectionExtensions.GetParentSequenceFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x65105d4
	float GetEndFrameSeconds(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrameSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x650ffdc
	int32_t GetEndFrame(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x650fed0
	struct TArray<struct UMovieSceneScriptingChannel*> GetChannelsByType(struct UMovieSceneSection* Section, struct UMovieSceneScriptingChannel* ChannelType); // Function SequencerScripting.MovieSceneSectionExtensions.GetChannelsByType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x650e0f0
	struct TArray<struct UMovieSceneScriptingChannel*> GetChannels(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetChannels // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x650f6e0
	float GetAutoSizeStartFrameSeconds(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeStartFrameSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x650f3a0
	int32_t GetAutoSizeStartFrame(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeStartFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x650f320
	bool GetAutoSizeHasStartFrame(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeHasStartFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x650f254
	bool GetAutoSizeHasEndFrame(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeHasEndFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x650f188
	float GetAutoSizeEndFrameSeconds(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeEndFrameSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x650f108
	int32_t GetAutoSizeEndFrame(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeEndFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x650f088
	struct TArray<struct UMovieSceneScriptingChannel*> GetAllChannels(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetAllChannels // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x650eaa4
	struct TArray<struct UMovieSceneScriptingChannel*> FindChannelsByType(struct UMovieSceneSection* Section, struct UMovieSceneScriptingChannel* ChannelType); // Function SequencerScripting.MovieSceneSectionExtensions.FindChannelsByType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x650e0f0
};

// Class SequencerScripting.MovieSceneSequenceExtensions
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneSequenceExtensions : UBlueprintFunctionLibrary {

	void SortMarkedFrames(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.SortMarkedFrames // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6514b68
	void SetWorkRangeStart(struct UMovieSceneSequence* InSequence, float StartTimeInSeconds); // Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeStart // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6514aa8
	void SetWorkRangeEnd(struct UMovieSceneSequence* InSequence, float EndTimeInSeconds); // Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeEnd // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x65149e8
	void SetViewRangeStart(struct UMovieSceneSequence* InSequence, float StartTimeInSeconds); // Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeStart // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6514928
	void SetViewRangeEnd(struct UMovieSceneSequence* InSequence, float EndTimeInSeconds); // Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeEnd // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6514868
	void SetTickResolutionDirectly(struct UMovieSceneSequence* Sequence, struct FFrameRate TickResolution); // Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolutionDirectly // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6514510
	void SetTickResolution(struct UMovieSceneSequence* Sequence, struct FFrameRate TickResolution); // Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolution // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x651442c
	void SetReadOnly(struct UMovieSceneSequence* Sequence, bool bInReadOnly); // Function SequencerScripting.MovieSceneSequenceExtensions.SetReadOnly // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6514000
	void SetPlaybackStartSeconds(struct UMovieSceneSequence* Sequence, float StartTime); // Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStartSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6513b2c
	void SetPlaybackStart(struct UMovieSceneSequence* Sequence, int32_t StartFrame); // Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStart // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6513a04
	void SetPlaybackEndSeconds(struct UMovieSceneSequence* Sequence, float EndTime); // Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEndSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x65138c8
	void SetPlaybackEnd(struct UMovieSceneSequence* Sequence, int32_t EndFrame); // Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEnd // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x65137a0
	void SetMarkedFrame(struct UMovieSceneSequence* Sequence, int32_t InMarkIndex, struct FFrameNumber InFrameNumber); // Function SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFrame // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x6513664
	void SetEvaluationType(struct UMovieSceneSequence* InSequence, enum class EMovieSceneEvaluationType InEvaluationType); // Function SequencerScripting.MovieSceneSequenceExtensions.SetEvaluationType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6513584
	void SetDisplayRate(struct UMovieSceneSequence* Sequence, struct FFrameRate DisplayRate); // Function SequencerScripting.MovieSceneSequenceExtensions.SetDisplayRate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x651311c
	void SetClockSource(struct UMovieSceneSequence* InSequence, enum class EUpdateClockSource InClockSource); // Function SequencerScripting.MovieSceneSequenceExtensions.SetClockSource // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6512d34
	struct FMovieSceneBindingProxy ResolveBindingID(struct UMovieSceneSequence* MasterSequence, struct FMovieSceneObjectBindingID InObjectBindingID); // Function SequencerScripting.MovieSceneSequenceExtensions.ResolveBindingID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6512b9c
	void RemoveRootFolderFromSequence(struct UMovieSceneSequence* Sequence, struct UMovieSceneFolder* Folder); // Function SequencerScripting.MovieSceneSequenceExtensions.RemoveRootFolderFromSequence // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6512938
	bool RemoveMasterTrack(struct UMovieSceneSequence* Sequence, struct UMovieSceneTrack* MasterTrack); // Function SequencerScripting.MovieSceneSequenceExtensions.RemoveMasterTrack // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6512814
	struct FSequencerScriptingRange MakeRangeSeconds(struct UMovieSceneSequence* Sequence, float StartTime, float Duration); // Function SequencerScripting.MovieSceneSequenceExtensions.MakeRangeSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x65125f8
	struct FSequencerScriptingRange MakeRange(struct UMovieSceneSequence* Sequence, int32_t StartFrame, int32_t Duration); // Function SequencerScripting.MovieSceneSequenceExtensions.MakeRange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x65124a4
	struct FMovieSceneObjectBindingID MakeBindingID(struct UMovieSceneSequence* MasterSequence, struct FMovieSceneBindingProxy& InBinding, enum class EMovieSceneObjectBindingSpace Space); // Function SequencerScripting.MovieSceneSequenceExtensions.MakeBindingID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6512340
	struct TArray<struct UObject*> LocateBoundObjects(struct UMovieSceneSequence* Sequence, struct FMovieSceneBindingProxy& InBinding, struct UObject* Context); // Function SequencerScripting.MovieSceneSequenceExtensions.LocateBoundObjects // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6512138
	bool IsReadOnly(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.IsReadOnly // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x65120b4
	float GetWorkRangeStart(struct UMovieSceneSequence* InSequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeStart // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x6511db0
	float GetWorkRangeEnd(struct UMovieSceneSequence* InSequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeEnd // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x6511d24
	float GetViewRangeStart(struct UMovieSceneSequence* InSequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeStart // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x6511c98
	float GetViewRangeEnd(struct UMovieSceneSequence* InSequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeEnd // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x6511c0c
	struct FTimecode GetTimecodeSource(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetTimecodeSource // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6511900
	struct FFrameRate GetTickResolution(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetTickResolution // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6511878
	struct TArray<struct FMovieSceneBindingProxy> GetSpawnables(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetSpawnables // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x65113e0
	struct TArray<struct UMovieSceneFolder*> GetRootFoldersInSequence(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetRootFoldersInSequence // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x651126c
	struct TArray<struct FMovieSceneBindingProxy> GetPossessables(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetPossessables // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6511040
	struct FMovieSceneObjectBindingID GetPortableBindingID(struct UMovieSceneSequence* MasterSequence, struct UMovieSceneSequence* DestinationSequence, struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneSequenceExtensions.GetPortableBindingID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6510f20
	float GetPlaybackStartSeconds(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStartSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6510dd0
	int32_t GetPlaybackStart(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStart // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6510ccc
	struct FSequencerScriptingRange GetPlaybackRange(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackRange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6510be0
	float GetPlaybackEndSeconds(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEndSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6510a90
	int32_t GetPlaybackEnd(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEnd // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x651098c
	struct UMovieScene* GetMovieScene(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetMovieScene // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6510554
	struct TArray<struct UMovieSceneTrack*> GetMasterTracks(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetMasterTracks // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6510344
	struct TArray<struct FMovieSceneMarkedFrame> GetMarkedFrames(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetMarkedFrames // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x65101d0
	enum class EMovieSceneEvaluationType GetEvaluationType(struct UMovieSceneSequence* InSequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetEvaluationType // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x6510138
	struct FFrameRate GetDisplayRate(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetDisplayRate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x650fe48
	enum class EUpdateClockSource GetClockSource(struct UMovieSceneSequence* InSequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetClockSource // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x650fcc4
	struct TArray<struct FMovieSceneBindingProxy> GetBindings(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetBindings // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x650f4d0
	struct FMovieSceneObjectBindingID GetBindingID(struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneSequenceExtensions.GetBindingID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x650f420
	int32_t FindNextMarkedFrame(struct UMovieSceneSequence* Sequence, struct FFrameNumber InFrameNumber, bool bForward); // Function SequencerScripting.MovieSceneSequenceExtensions.FindNextMarkedFrame // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x650e978
	struct TArray<struct UMovieSceneTrack*> FindMasterTracksByType(struct UMovieSceneSequence* Sequence, struct UMovieSceneTrack* TrackType); // Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x650e6f0
	struct TArray<struct UMovieSceneTrack*> FindMasterTracksByExactType(struct UMovieSceneSequence* Sequence, struct UMovieSceneTrack* TrackType); // Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByExactType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x650e474
	int32_t FindMarkedFrameByLabel(struct UMovieSceneSequence* Sequence, struct FString InLabel); // Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByLabel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x650e2b0
	int32_t FindMarkedFrameByFrameNumber(struct UMovieSceneSequence* Sequence, struct FFrameNumber InFrameNumber); // Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByFrameNumber // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x650e1cc
	struct FMovieSceneBindingProxy FindBindingByName(struct UMovieSceneSequence* Sequence, struct FString Name); // Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x650ded8
	struct FMovieSceneBindingProxy FindBindingById(struct UMovieSceneSequence* Sequence, struct FGuid BindingID); // Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingById // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x650dd5c
	void DeleteMarkedFrames(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrames // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x650dc84
	void DeleteMarkedFrame(struct UMovieSceneSequence* Sequence, int32_t DeleteIndex); // Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x650dbb0
	struct FMovieSceneBindingProxy AddSpawnableFromInstance(struct UMovieSceneSequence* Sequence, struct UObject* ObjectToSpawn); // Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x650da78
	struct FMovieSceneBindingProxy AddSpawnableFromClass(struct UMovieSceneSequence* Sequence, struct UObject* ClassToSpawn); // Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromClass // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x650d940
	struct UMovieSceneFolder* AddRootFolderToSequence(struct UMovieSceneSequence* Sequence, struct FString NewFolderName); // Function SequencerScripting.MovieSceneSequenceExtensions.AddRootFolderToSequence // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x650d77c
	struct FMovieSceneBindingProxy AddPossessable(struct UMovieSceneSequence* Sequence, struct UObject* ObjectToPossess); // Function SequencerScripting.MovieSceneSequenceExtensions.AddPossessable // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x650d674
	struct UMovieSceneTrack* AddMasterTrack(struct UMovieSceneSequence* Sequence, struct UMovieSceneTrack* TrackType); // Function SequencerScripting.MovieSceneSequenceExtensions.AddMasterTrack // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x650d544
	int32_t AddMarkedFrame(struct UMovieSceneSequence* Sequence, struct FMovieSceneMarkedFrame& InMarkedFrame); // Function SequencerScripting.MovieSceneSequenceExtensions.AddMarkedFrame // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x650d364
};

// Class SequencerScripting.MovieSceneTrackExtensions
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneTrackExtensions : UBlueprintFunctionLibrary {

	void SetTrackRowDisplayName(struct UMovieSceneTrack* Track, struct FText& InName, int32_t RowIndex); // Function SequencerScripting.MovieSceneTrackExtensions.SetTrackRowDisplayName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x65184d8
	void SetSortingOrder(struct UMovieSceneTrack* Track, int32_t SortingOrder); // Function SequencerScripting.MovieSceneTrackExtensions.SetSortingOrder // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6518270
	void SetSectionToKey(struct UMovieSceneTrack* Track, struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneTrackExtensions.SetSectionToKey // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x65181a8
	void SetDisplayName(struct UMovieSceneTrack* Track, struct FText& InName); // Function SequencerScripting.MovieSceneTrackExtensions.SetDisplayName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6517e60
	void SetColorTint(struct UMovieSceneTrack* Track, struct FColor& ColorTint); // Function SequencerScripting.MovieSceneTrackExtensions.SetColorTint // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x6517dac
	void RemoveSection(struct UMovieSceneTrack* Track, struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneTrackExtensions.RemoveSection // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6517c50
	struct FText GetTrackRowDisplayName(struct UMovieSceneTrack* Track, int32_t RowIndex); // Function SequencerScripting.MovieSceneTrackExtensions.GetTrackRowDisplayName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x651797c
	int32_t GetSortingOrder(struct UMovieSceneTrack* Track); // Function SequencerScripting.MovieSceneTrackExtensions.GetSortingOrder // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6517798
	struct UMovieSceneSection* GetSectionToKey(struct UMovieSceneTrack* Track); // Function SequencerScripting.MovieSceneTrackExtensions.GetSectionToKey // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x65175dc
	struct TArray<struct UMovieSceneSection*> GetSections(struct UMovieSceneTrack* Track); // Function SequencerScripting.MovieSceneTrackExtensions.GetSections // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x651767c
	struct FText GetDisplayName(struct UMovieSceneTrack* Track); // Function SequencerScripting.MovieSceneTrackExtensions.GetDisplayName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6517320
	struct FColor GetColorTint(struct UMovieSceneTrack* Track); // Function SequencerScripting.MovieSceneTrackExtensions.GetColorTint // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x6517298
	struct UMovieSceneSection* AddSection(struct UMovieSceneTrack* Track); // Function SequencerScripting.MovieSceneTrackExtensions.AddSection // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x65171d4
};

// Class SequencerScripting.MovieSceneFloatVectorTrackExtensions
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneFloatVectorTrackExtensions : UBlueprintFunctionLibrary {

	void SetNumChannelsUsed(struct UMovieSceneFloatVectorTrack* Track, int32_t InNumChannelsUsed); // Function SequencerScripting.MovieSceneFloatVectorTrackExtensions.SetNumChannelsUsed // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x65180e4
	int32_t GetNumChannelsUsed(struct UMovieSceneFloatVectorTrack* Track); // Function SequencerScripting.MovieSceneFloatVectorTrackExtensions.GetNumChannelsUsed // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x651754c
};

// Class SequencerScripting.MovieSceneDoubleVectorTrackExtensions
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneDoubleVectorTrackExtensions : UBlueprintFunctionLibrary {

	void SetNumChannelsUsed(struct UMovieSceneDoubleVectorTrack* Track, int32_t InNumChannelsUsed); // Function SequencerScripting.MovieSceneDoubleVectorTrackExtensions.SetNumChannelsUsed // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x65180e4
	int32_t GetNumChannelsUsed(struct UMovieSceneDoubleVectorTrack* Track); // Function SequencerScripting.MovieSceneDoubleVectorTrackExtensions.GetNumChannelsUsed // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x651754c
};

// Class SequencerScripting.SequencerScriptingRangeExtensions
// Size: 0x28 (Inherited: 0x28)
struct USequencerScriptingRangeExtensions : UBlueprintFunctionLibrary {

	void SetStartSeconds(struct FSequencerScriptingRange& Range, float Start); // Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartSeconds // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x65183f8
	void SetStartFrame(struct FSequencerScriptingRange& Range, int32_t Start); // Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartFrame // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6518324
	void SetEndSeconds(struct FSequencerScriptingRange& Range, float End); // Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndSeconds // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6518004
	void SetEndFrame(struct FSequencerScriptingRange& Range, int32_t End); // Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndFrame // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6517f30
	void RemoveStart(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveStart // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6517d1c
	void RemoveEnd(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveEnd // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6517bc0
	bool HasStart(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.HasStart // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6517b28
	bool HasEnd(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.HasEnd // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6517a90
	float GetStartSeconds(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartSeconds // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x65178bc
	int32_t GetStartFrame(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartFrame // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6517828
	float GetEndSeconds(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndSeconds // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x651748c
	int32_t GetEndFrame(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndFrame // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x65173f8
};

