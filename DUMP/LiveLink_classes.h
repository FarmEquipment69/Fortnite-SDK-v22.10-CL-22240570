// Class LiveLink.LiveLinkBasicFrameInterpolationProcessor
// Size: 0x40 (Inherited: 0x28)
struct ULiveLinkBasicFrameInterpolationProcessor : ULiveLinkFrameInterpolationProcessor {
	bool bInterpolatePropertyValues; // 0x28(0x01)
	char pad_29[0x17]; // 0x29(0x17)
};

// Class LiveLink.LiveLinkAnimationFrameInterpolationProcessor
// Size: 0x50 (Inherited: 0x40)
struct ULiveLinkAnimationFrameInterpolationProcessor : ULiveLinkBasicFrameInterpolationProcessor {
	char pad_40[0x10]; // 0x40(0x10)
};

// Class LiveLink.LiveLinkAnimationRoleToTransform
// Size: 0x40 (Inherited: 0x28)
struct ULiveLinkAnimationRoleToTransform : ULiveLinkFrameTranslator {
	struct FName BoneName; // 0x28(0x04)
	char pad_2C[0x14]; // 0x2c(0x14)
};

// Class LiveLink.LiveLinkAnimationVirtualSubject
// Size: 0x160 (Inherited: 0x158)
struct ULiveLinkAnimationVirtualSubject : ULiveLinkVirtualSubject {
	char pad_158[0x1]; // 0x158(0x01)
	bool bAppendSubjectNameToBones; // 0x159(0x01)
	char pad_15A[0x6]; // 0x15a(0x06)
};

// Class LiveLink.LiveLinkTransformAxisSwitchPreProcessor
// Size: 0x70 (Inherited: 0x28)
struct ULiveLinkTransformAxisSwitchPreProcessor : ULiveLinkFramePreProcessor {
	enum class ELiveLinkAxis FrontAxis; // 0x28(0x01)
	enum class ELiveLinkAxis RightAxis; // 0x29(0x01)
	enum class ELiveLinkAxis UpAxis; // 0x2a(0x01)
	bool bUseOffsetPosition; // 0x2b(0x01)
	bool bUseOffsetOrientation; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct FVector OffsetPosition; // 0x30(0x18)
	struct FRotator OffsetOrientation; // 0x48(0x18)
	char pad_60[0x10]; // 0x60(0x10)
};

// Class LiveLink.LiveLinkAnimationAxisSwitchPreProcessor
// Size: 0x70 (Inherited: 0x70)
struct ULiveLinkAnimationAxisSwitchPreProcessor : ULiveLinkTransformAxisSwitchPreProcessor {
};

// Class LiveLink.LiveLinkBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkBlueprintLibrary : UBlueprintFunctionLibrary {

	void TransformNames(struct FSubjectFrameHandle& SubjectFrameHandle, struct TArray<struct FName>& TransformNames); // Function LiveLink.LiveLinkBlueprintLibrary.TransformNames // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x6f8f378
	void TransformName(struct FLiveLinkTransform& LiveLinkTransform, struct FName& Name); // Function LiveLink.LiveLinkBlueprintLibrary.TransformName // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x6f8f244
	void SetLiveLinkSubjectEnabled(struct FLiveLinkSubjectKey SubjectKey, bool bEnabled); // Function LiveLink.LiveLinkBlueprintLibrary.SetLiveLinkSubjectEnabled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6f8f120
	bool RemoveSource(struct FLiveLinkSourceHandle& SourceHandle); // Function LiveLink.LiveLinkBlueprintLibrary.RemoveSource // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x6f8f054
	void ParentBoneSpaceTransform(struct FLiveLinkTransform& LiveLinkTransform, struct FTransform& Transform); // Function LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform // (Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x6f8eeb8
	int32_t NumberOfTransforms(struct FSubjectFrameHandle& SubjectFrameHandle); // Function LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x6f8ede0
	bool IsSpecificLiveLinkSubjectEnabled(struct FLiveLinkSubjectKey SubjectKey, bool bForThisFrame); // Function LiveLink.LiveLinkBlueprintLibrary.IsSpecificLiveLinkSubjectEnabled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6f8ecb4
	bool IsSourceStillValid(struct FLiveLinkSourceHandle& SourceHandle); // Function LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x6f8ebd4
	bool IsLiveLinkSubjectEnabled(struct FLiveLinkSubjectName SubjectName); // Function LiveLink.LiveLinkBlueprintLibrary.IsLiveLinkSubjectEnabled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6f8eb00
	bool HasParent(struct FLiveLinkTransform& LiveLinkTransform); // Function LiveLink.LiveLinkBlueprintLibrary.HasParent // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x6f8ea10
	void GetTransformByName(struct FSubjectFrameHandle& SubjectFrameHandle, struct FName TransformName, struct FLiveLinkTransform& LiveLinkTransform); // Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByName // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x6f8e85c
	void GetTransformByIndex(struct FSubjectFrameHandle& SubjectFrameHandle, int32_t TransformIndex, struct FLiveLinkTransform& LiveLinkTransform); // Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x6f8e6a8
	struct ULiveLinkRole* GetSpecificLiveLinkSubjectRole(struct FLiveLinkSubjectKey SubjectKey); // Function LiveLink.LiveLinkBlueprintLibrary.GetSpecificLiveLinkSubjectRole // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6f8e120
	struct FText GetSourceTypeFromGuid(struct FGuid SourceGuid); // Function LiveLink.LiveLinkBlueprintLibrary.GetSourceTypeFromGuid // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x6f8e034
	struct FText GetSourceType(struct FLiveLinkSourceHandle& SourceHandle); // Function LiveLink.LiveLinkBlueprintLibrary.GetSourceType // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x6f8ded4
	struct FText GetSourceStatus(struct FLiveLinkSourceHandle& SourceHandle); // Function LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x6f8dd74
	struct FText GetSourceMachineName(struct FLiveLinkSourceHandle& SourceHandle); // Function LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x6f8dc14
	void GetRootTransform(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkTransform& LiveLinkTransform); // Function LiveLink.LiveLinkBlueprintLibrary.GetRootTransform // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x6f8daa0
	bool GetPropertyValue(struct FLiveLinkBasicBlueprintData& BasicData, struct FName PropertyName, float& Value); // Function LiveLink.LiveLinkBlueprintLibrary.GetPropertyValue // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x6f8d904
	void GetParent(struct FLiveLinkTransform& LiveLinkTransform, struct FLiveLinkTransform& Parent); // Function LiveLink.LiveLinkBlueprintLibrary.GetParent // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x6f8d78c
	void GetMetaData(struct FSubjectFrameHandle& SubjectFrameHandle, struct FSubjectMetadata& MetaData); // Function LiveLink.LiveLinkBlueprintLibrary.GetMetaData // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x6f8d5e4
	struct TArray<struct FLiveLinkSubjectKey> GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeVirtualSubject); // Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjects // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6f8d4d0
	struct ULiveLinkRole* GetLiveLinkSubjectRole(struct FLiveLinkSubjectName SubjectName); // Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjectRole // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6f8d448
	struct TArray<struct FLiveLinkSubjectName> GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject); // Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkEnabledSubjectNames // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6f8d38c
	void GetCurves(struct FSubjectFrameHandle& SubjectFrameHandle, struct TMap<struct FName, float>& Curves); // Function LiveLink.LiveLinkBlueprintLibrary.GetCurves // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x6f8d1dc
	void GetChildren(struct FLiveLinkTransform& LiveLinkTransform, struct TArray<struct FLiveLinkTransform>& Children); // Function LiveLink.LiveLinkBlueprintLibrary.GetChildren // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x6f8d09c
	void GetBasicData(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkBasicBlueprintData& BasicBlueprintData); // Function LiveLink.LiveLinkBlueprintLibrary.GetBasicData // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x6f8cedc
	bool GetAnimationStaticData(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkSkeletonStaticData& AnimationStaticData); // Function LiveLink.LiveLinkBlueprintLibrary.GetAnimationStaticData // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x6f8cb30
	bool GetAnimationFrameData(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkAnimationFrameData& AnimationFrameData); // Function LiveLink.LiveLinkBlueprintLibrary.GetAnimationFrameData // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x6f8c980
	bool EvaluateLiveLinkFrameWithSpecificRole(struct FLiveLinkSubjectName SubjectName, struct ULiveLinkRole* Role, struct FLiveLinkBaseBlueprintData& OutBlueprintData); // Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameWithSpecificRole // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6f8c818
	bool EvaluateLiveLinkFrameAtWorldTimeOffset(struct FLiveLinkSubjectName SubjectName, struct ULiveLinkRole* Role, float WorldTimeOffset, struct FLiveLinkBaseBlueprintData& OutBlueprintData); // Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtWorldTimeOffset // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6f8c668
	bool EvaluateLiveLinkFrameAtSceneTime(struct FLiveLinkSubjectName SubjectName, struct ULiveLinkRole* Role, struct FTimecode SceneTime, struct FLiveLinkBaseBlueprintData& OutBlueprintData); // Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtSceneTime // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6f8c4b8
	bool EvaluateLiveLinkFrame(struct FLiveLinkSubjectRepresentation SubjectRepresentation, struct FLiveLinkBaseBlueprintData& OutBlueprintData); // Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrame // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6f8c384
	void ComponentSpaceTransform(struct FLiveLinkTransform& LiveLinkTransform, struct FTransform& Transform); // Function LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform // (Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x6f8bed8
	int32_t ChildCount(struct FLiveLinkTransform& LiveLinkTransform); // Function LiveLink.LiveLinkBlueprintLibrary.ChildCount // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x6f8bdc4
};

// Class LiveLink.LiveLinkBlueprintVirtualSubject
// Size: 0x180 (Inherited: 0x158)
struct ULiveLinkBlueprintVirtualSubject : ULiveLinkVirtualSubject {
	char pad_158[0x28]; // 0x158(0x28)

	bool UpdateVirtualSubjectStaticData_Internal(struct FLiveLinkBaseStaticData& InStruct); // Function LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectStaticData_Internal // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6f8f5c0
	bool UpdateVirtualSubjectFrameData_Internal(struct FLiveLinkBaseFrameData& InStruct, bool bInShouldStampCurrentTime); // Function LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectFrameData_Internal // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6f8f4bc
	void OnUpdate(); // Function LiveLink.LiveLinkBlueprintVirtualSubject.OnUpdate // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnInitialize(); // Function LiveLink.LiveLinkBlueprintVirtualSubject.OnInitialize // (Event|Public|BlueprintEvent) // @ game+0xda05cc
};

// Class LiveLink.LiveLinkComponent
// Size: 0xc0 (Inherited: 0xa0)
struct ULiveLinkComponent : UActorComponent {
	struct FMulticastInlineDelegate OnLiveLinkUpdated; // 0xa0(0x10)
	char pad_B0[0x10]; // 0xb0(0x10)

	void GetSubjectDataAtWorldTime(struct FName SubjectName, float WorldTime, bool& bSuccess, struct FSubjectFrameHandle& SubjectFrameHandle); // Function LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6f8e4f0
	void GetSubjectDataAtSceneTime(struct FName SubjectName, struct FTimecode& SceneTime, bool& bSuccess, struct FSubjectFrameHandle& SubjectFrameHandle); // Function LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6f8e32c
	void GetSubjectData(struct FName SubjectName, bool& bSuccess, struct FSubjectFrameHandle& SubjectFrameHandle); // Function LiveLink.LiveLinkComponent.GetSubjectData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6f8e1c4
	void GetAvailableSubjectNames(struct TArray<struct FName>& SubjectNames); // Function LiveLink.LiveLinkComponent.GetAvailableSubjectNames // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6f8ce40
};

// Class LiveLink.LiveLinkDrivenComponent
// Size: 0xb0 (Inherited: 0xa0)
struct ULiveLinkDrivenComponent : UActorComponent {
	struct FLiveLinkSubjectName SubjectName; // 0xa0(0x04)
	struct FName ActorTransformBone; // 0xa4(0x04)
	bool bModifyActorTransform; // 0xa8(0x01)
	bool bSetRelativeLocation; // 0xa9(0x01)
	char pad_AA[0x6]; // 0xaa(0x06)
};

// Class LiveLink.LiveLinkMessageBusFinder
// Size: 0x80 (Inherited: 0x28)
struct ULiveLinkMessageBusFinder : UObject {
	char pad_28[0x58]; // 0x28(0x58)

	void GetAvailableProviders(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, float Duration, struct TArray<struct FProviderPollResult>& AvailableProviders); // Function LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6f8ccbc
	struct ULiveLinkMessageBusFinder* ConstructMessageBusFinder(); // Function LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6f8c358
	void ConnectToProvider(struct FProviderPollResult& Provider, struct FLiveLinkSourceHandle& SourceHandle); // Function LiveLink.LiveLinkMessageBusFinder.ConnectToProvider // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6f8c074
};

// Class LiveLink.LiveLinkMessageBusSourceFactory
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkMessageBusSourceFactory : ULiveLinkSourceFactory {
};

// Class LiveLink.LiveLinkMessageBusSourceSettings
// Size: 0xa8 (Inherited: 0xa8)
struct ULiveLinkMessageBusSourceSettings : ULiveLinkSourceSettings {
};

// Class LiveLink.LiveLinkPreset
// Size: 0x50 (Inherited: 0x28)
struct ULiveLinkPreset : UObject {
	struct TArray<struct FLiveLinkSourcePreset> Sources; // 0x28(0x10)
	struct TArray<struct FLiveLinkSubjectPreset> Subjects; // 0x38(0x10)
	char pad_48[0x8]; // 0x48(0x08)

	void BuildFromClient(); // Function LiveLink.LiveLinkPreset.BuildFromClient // (Final|Native|Public|BlueprintCallable) // @ game+0x6f8bdb0
	void ApplyToClientLatent(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo); // Function LiveLink.LiveLinkPreset.ApplyToClientLatent // (Final|Native|Public|BlueprintCallable) // @ game+0x6f8bcc8
	bool ApplyToClient(); // Function LiveLink.LiveLinkPreset.ApplyToClient // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x6f8bca4
	bool AddToClient(bool bRecreatePresets); // Function LiveLink.LiveLinkPreset.AddToClient // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x6f8bc14
};

// Class LiveLink.LiveLinkUserSettings
// Size: 0x38 (Inherited: 0x28)
struct ULiveLinkUserSettings : UObject {
	struct FDirectoryPath PresetSaveDir; // 0x28(0x10)
};

// Class LiveLink.LiveLinkSettings
// Size: 0xc0 (Inherited: 0x28)
struct ULiveLinkSettings : UObject {
	struct TArray<struct FLiveLinkRoleProjectSetting> DefaultRoleSettings; // 0x28(0x10)
	struct ULiveLinkFrameInterpolationProcessor* FrameInterpolationProcessor; // 0x38(0x08)
	struct TSoftObjectPtr<ULiveLinkPreset> DefaultLiveLinkPreset; // 0x40(0x28)
	float ClockOffsetCorrectionStep; // 0x68(0x04)
	enum class ELiveLinkSourceMode DefaultMessageBusSourceMode; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	double MessageBusPingRequestFrequency; // 0x70(0x08)
	double MessageBusHeartbeatFrequency; // 0x78(0x08)
	double MessageBusHeartbeatTimeout; // 0x80(0x08)
	double MessageBusTimeBeforeRemovingInactiveSource; // 0x88(0x08)
	double TimeWithoutFrameToBeConsiderAsInvalid; // 0x90(0x08)
	struct FLinearColor ValidColor; // 0x98(0x10)
	struct FLinearColor InvalidColor; // 0xa8(0x10)
	char TextSizeSource; // 0xb8(0x01)
	char TextSizeSubject; // 0xb9(0x01)
	char pad_BA[0x6]; // 0xba(0x06)
};

// Class LiveLink.LiveLinkTimecodeProvider
// Size: 0xc0 (Inherited: 0x30)
struct ULiveLinkTimecodeProvider : UTimecodeProvider {
	struct FLiveLinkSubjectKey SubjectKey; // 0x30(0x14)
	enum class ELiveLinkTimecodeProviderEvaluationType Evaluation; // 0x44(0x04)
	bool bOverrideFrameRate; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FFrameRate OverrideFrameRate; // 0x4c(0x08)
	int32_t BufferSize; // 0x54(0x04)
	char pad_58[0x68]; // 0x58(0x68)
};

// Class LiveLink.LiveLinkTimeSynchronizationSource
// Size: 0x80 (Inherited: 0x30)
struct ULiveLinkTimeSynchronizationSource : UTimeSynchronizationSource {
	struct FLiveLinkSubjectName SubjectName; // 0x30(0x04)
	char pad_34[0x4c]; // 0x34(0x4c)
};

// Class LiveLink.LiveLinkVirtualSubjectSourceSettings
// Size: 0xb0 (Inherited: 0xa8)
struct ULiveLinkVirtualSubjectSourceSettings : ULiveLinkSourceSettings {
	struct FName SourceName; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

