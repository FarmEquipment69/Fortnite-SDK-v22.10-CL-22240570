// Class GameplayAbilities.AbilitySystemDebugHUD
// Size: 0x378 (Inherited: 0x378)
struct AAbilitySystemDebugHUD : AHUD {
};

// Class GameplayAbilities.AbilityAsync
// Size: 0x38 (Inherited: 0x30)
struct UAbilityAsync : UCancellableAsyncAction {
	char pad_30[0x8]; // 0x30(0x08)

	void EndAction(); // Function GameplayAbilities.AbilityAsync.EndAction // (Native|Public|BlueprintCallable) // @ game+0x5cf922c
};

// Class GameplayAbilities.AbilityAsync_WaitAttributeChanged
// Size: 0x90 (Inherited: 0x38)
struct UAbilityAsync_WaitAttributeChanged : UAbilityAsync {
	struct FMulticastInlineDelegate Changed; // 0x38(0x10)
	char pad_48[0x48]; // 0x48(0x48)

	struct UAbilityAsync_WaitAttributeChanged* WaitForAttributeChanged(struct AActor* TargetActor, struct FGameplayAttribute Attribute, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityAsync_WaitAttributeChanged.WaitForAttributeChanged // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5cfd914
	void AsyncWaitAttributeChangedDelegate__DelegateSignature(struct FGameplayAttribute Attribute, float NewValue, float OldValue); // DelegateFunction GameplayAbilities.AbilityAsync_WaitAttributeChanged.AsyncWaitAttributeChangedDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xda05cc
};

// Class GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied
// Size: 0xf8 (Inherited: 0x38)
struct UAbilityAsync_WaitGameplayEffectApplied : UAbilityAsync {
	struct FMulticastInlineDelegate OnApplied; // 0x38(0x10)
	char pad_48[0xb0]; // 0x48(0xb0)

	struct UAbilityAsync_WaitGameplayEffectApplied* WaitGameplayEffectAppliedToActor(struct AActor* TargetActor, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, bool ListenForPeriodicEffect); // Function GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.WaitGameplayEffectAppliedToActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5cfda7c
	void OnAppliedDelegate__DelegateSignature(struct AActor* Source, struct FGameplayEffectSpecHandle SpecHandle, struct FActiveGameplayEffectHandle ActiveHandle); // DelegateFunction GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.OnAppliedDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xda05cc
};

// Class GameplayAbilities.AbilityAsync_WaitGameplayEvent
// Size: 0x58 (Inherited: 0x38)
struct UAbilityAsync_WaitGameplayEvent : UAbilityAsync {
	struct FMulticastInlineDelegate EventReceived; // 0x38(0x10)
	char pad_48[0x10]; // 0x48(0x10)

	struct UAbilityAsync_WaitGameplayEvent* WaitGameplayEventToActor(struct AActor* TargetActor, struct FGameplayTag EventTag, bool OnlyTriggerOnce, bool OnlyMatchExact); // Function GameplayAbilities.AbilityAsync_WaitGameplayEvent.WaitGameplayEventToActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1ed8848
	void EventReceivedDelegate__DelegateSignature(struct FGameplayEventData Payload); // DelegateFunction GameplayAbilities.AbilityAsync_WaitGameplayEvent.EventReceivedDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xda05cc
};

// Class GameplayAbilities.AbilityAsync_WaitGameplayTag
// Size: 0x50 (Inherited: 0x38)
struct UAbilityAsync_WaitGameplayTag : UAbilityAsync {
	char pad_38[0x18]; // 0x38(0x18)
};

// Class GameplayAbilities.AbilityAsync_WaitGameplayTagAdded
// Size: 0x60 (Inherited: 0x50)
struct UAbilityAsync_WaitGameplayTagAdded : UAbilityAsync_WaitGameplayTag {
	struct FMulticastInlineDelegate Added; // 0x50(0x10)

	struct UAbilityAsync_WaitGameplayTagAdded* WaitGameplayTagAddToActor(struct AActor* TargetActor, struct FGameplayTag tag, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityAsync_WaitGameplayTagAdded.WaitGameplayTagAddToActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5cfdd50
};

// Class GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved
// Size: 0x60 (Inherited: 0x50)
struct UAbilityAsync_WaitGameplayTagRemoved : UAbilityAsync_WaitGameplayTag {
	struct FMulticastInlineDelegate Removed; // 0x50(0x10)

	struct UAbilityAsync_WaitGameplayTagRemoved* WaitGameplayTagRemoveFromActor(struct AActor* TargetActor, struct FGameplayTag tag, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved.WaitGameplayTagRemoveFromActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5cfe074
};

// Class GameplayAbilities.AbilityAsync_WaitGameplayTagQuery
// Size: 0x108 (Inherited: 0x38)
struct UAbilityAsync_WaitGameplayTagQuery : UAbilityAsync {
	char pad_38[0xc0]; // 0x38(0xc0)
	struct FMulticastInlineDelegate Triggered; // 0xf8(0x10)

	struct UAbilityAsync_WaitGameplayTagQuery* WaitGameplayTagQueryOnActor(struct AActor* TargetActor, struct FGameplayTagQuery TagQuery, enum class EWaitGameplayTagQueryTriggerCondition TriggerCondition, bool bOnlyTriggerOnce); // Function GameplayAbilities.AbilityAsync_WaitGameplayTagQuery.WaitGameplayTagQueryOnActor // (Final|Native|Static|Protected|BlueprintCallable) // @ game+0x5cfde78
};

// Class GameplayAbilities.AbilitySystemBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAbilitySystemBlueprintLibrary : UBlueprintFunctionLibrary {

	bool TargetDataHasOrigin(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5cfd7d0
	bool TargetDataHasHitResult(struct FGameplayAbilityTargetDataHandle& HitResult, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5cfd6cc
	bool TargetDataHasEndPoint(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5cfd588
	bool TargetDataHasActor(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5cfd444
	struct FGameplayEffectSpecHandle SetStackCountToMax(struct FGameplayEffectSpecHandle SpecHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5cfd308
	struct FGameplayEffectSpecHandle SetStackCount(struct FGameplayEffectSpecHandle SpecHandle, int32_t StackCount); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5cfd194
	struct FGameplayEffectSpecHandle SetDuration(struct FGameplayEffectSpecHandle SpecHandle, float Duration); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5cfd060
	void SendGameplayEventToActor(struct AActor* Actor, struct FGameplayTag EventTag, struct FGameplayEventData Payload); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d3e9fc
	bool RemoveLooseGameplayTags(struct AActor* Actor, struct FGameplayTagContainer& GameplayTags, bool bShouldReplicate); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.RemoveLooseGameplayTags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5cfcebc
	bool NotEqual_GameplayAttributeGameplayAttribute(struct FGameplayAttribute AttributeA, struct FGameplayAttribute AttributeB); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5cfcd44
	bool NotEqual_GameplayAbilitySpecHandle(struct FGameplayAbilitySpecHandle& A, struct FGameplayAbilitySpecHandle& B); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAbilitySpecHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5cfcc68
	bool NotEqual_ActiveGameplayEffectHandle(struct FActiveGameplayEffectHandle& A, struct FActiveGameplayEffectHandle& B); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_ActiveGameplayEffectHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5cfcb84
	struct FGameplayEffectSpecHandle MakeSpecHandle(struct UGameplayEffect* InGameplayEffect, struct AActor* InInstigator, struct AActor* InEffectCauser, float InLevel); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5cfca2c
	struct FGameplayCueParameters MakeGameplayCueParameters(float NormalizedMagnitude, float RawMagnitude, struct FGameplayEffectContextHandle EffectContext, struct FGameplayTag MatchedTagName, struct FGameplayTag OriginalTag, struct FGameplayTagContainer AggregatedSourceTags, struct FGameplayTagContainer AggregatedTargetTags, struct FVector Location, struct FVector Normal, struct AActor* Instigator, struct AActor* EffectCauser, struct UObject* SourceObject, struct UPhysicalMaterial* PhysicalMaterial, int32_t GameplayEffectLevel, int32_t AbilityLevel, struct USceneComponent* TargetAttachComponent, bool bReplicateLocationWhenUsingMinimalRepProxy); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeGameplayCueParameters // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x43ea6a8
	struct FGameplayTargetDataFilterHandle MakeFilterHandle(struct FGameplayTargetDataFilter Filter, struct AActor* FilterActor); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5cfc8d8
	bool IsValid(struct FGameplayAttribute Attribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5cfc7d0
	bool IsInstigatorLocallyControlledPlayer(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5cfc71c
	bool IsInstigatorLocallyControlled(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5cfc668
	bool HasHitResult(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5cfc5a4
	struct FTransform GetTargetDataOrigin(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5cfc460
	struct FTransform GetTargetDataEndPointTransform(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5cfc2d4
	struct FVector GetTargetDataEndPoint(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5cfc1bc
	struct FVector GetOrigin(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5cfc0c4
	float GetModifiedAttributeMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayAttribute Attribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5cfbeac
	struct FTransform GetInstigatorTransform(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5cfbdd0
	struct AActor* GetInstigatorActor(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5cfbd28
	struct FHitResult GetHitResultFromTargetData(struct FGameplayAbilityTargetDataHandle& HitResult, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5cfbb5c
	struct FHitResult GetHitResult(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5cfb9f0
	struct UGameplayEffectUIData* GetGameplayEffectUIData(struct UGameplayEffect* EffectClass, struct UGameplayEffectUIData* DataType); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayEffectUIData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5cfb92c
	struct UGameplayEffect* GetGameplayEffectFromActiveEffectHandle(struct FActiveGameplayEffectHandle& ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayEffectFromActiveEffectHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5cfb86c
	bool GetGameplayCueEndLocationAndNormal(struct AActor* TargetActor, struct FGameplayCueParameters Parameters, struct FVector& Location, struct FVector& Normal); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5cfb6c8
	bool GetGameplayCueDirection(struct AActor* TargetActor, struct FGameplayCueParameters Parameters, struct FVector& Direction); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5cfb57c
	struct UGameplayAbility* GetGameplayAbilityFromSpecHandle(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAbilitySpecHandle& AbilitySpecHandle, bool& bIsInstance); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayAbilityFromSpecHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5cfb418
	float GetFloatAttributeFromAbilitySystemComponent(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5cfb2a4
	float GetFloatAttributeBaseFromAbilitySystemComponent(struct UAbilitySystemComponent* AbilitySystemComponent, struct FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5cfb130
	float GetFloatAttributeBase(struct AActor* Actor, struct FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5cfafbc
	float GetFloatAttribute(struct AActor* Actor, struct FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5cfae48
	struct FGameplayEffectContextHandle GetEffectContext(struct FGameplayEffectSpecHandle SpecHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5cfaccc
	struct FString GetDebugStringFromGameplayAttribute(struct FGameplayAttribute& Attribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDebugStringFromGameplayAttribute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5cfaa38
	int32_t GetDataCountFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5cfa978
	struct TArray<struct FGameplayEffectSpecHandle> GetAllLinkedGameplayEffectSpecHandles(struct FGameplayEffectSpecHandle SpecHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllLinkedGameplayEffectSpecHandles // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5cfa7dc
	struct TArray<struct AActor*> GetAllActorsFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllActorsFromTargetData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5cfa6d8
	struct TArray<struct AActor*> GetActorsFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5cfa5bc
	int32_t GetActorCount(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5cfa4f4
	struct AActor* GetActorByIndex(struct FGameplayCueParameters Parameters, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5cfa3fc
	float GetActiveGameplayEffectTotalDuration(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectTotalDuration // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5cfa378
	float GetActiveGameplayEffectStartTime(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStartTime // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5cfa2f4
	int32_t GetActiveGameplayEffectStackLimitCount(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5cfa23c
	int32_t GetActiveGameplayEffectStackCount(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5cfa190
	float GetActiveGameplayEffectRemainingDuration(struct UObject* WorldContextObject, struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectRemainingDuration // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5cfa0c4
	float GetActiveGameplayEffectExpectedEndTime(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectExpectedEndTime // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5cfa040
	struct FString GetActiveGameplayEffectDebugString(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5cf9fa8
	struct UAbilitySystemComponent* GetAbilitySystemComponent(struct AActor* Actor); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1d3ef84
	void ForwardGameplayCueToTarget(struct TScriptInterface<IGameplayCueInterface> TargetCueInterface, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5cf9e64
	struct FGameplayAbilityTargetDataHandle FilterTargetData(struct FGameplayAbilityTargetDataHandle& TargetDataHandle, struct FGameplayTargetDataFilterHandle ActorFilterClass); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5cf9cec
	float EvaluateAttributeValueWithTagsAndBase(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags, float BaseValue, bool& bSuccess); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5cf990c
	float EvaluateAttributeValueWithTags(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags, bool& bSuccess); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5cf957c
	bool EqualEqual_GameplayAttributeGameplayAttribute(struct FGameplayAttribute AttributeA, struct FGameplayAttribute AttributeB); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5cf9404
	bool EqualEqual_GameplayAbilitySpecHandle(struct FGameplayAbilitySpecHandle& A, struct FGameplayAbilitySpecHandle& B); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAbilitySpecHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5cf9328
	bool EqualEqual_ActiveGameplayEffectHandle(struct FActiveGameplayEffectHandle& A, struct FActiveGameplayEffectHandle& B); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_ActiveGameplayEffectHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5cf9244
	void EffectContextSetOrigin(struct FGameplayEffectContextHandle EffectContext, struct FVector Origin); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x5cf90cc
	bool EffectContextIsValid(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5cf8fb0
	bool EffectContextIsInstigatorLocallyControlled(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5cf8e84
	bool EffectContextHasHitResult(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5cf8d58
	struct UObject* EffectContextGetSourceObject(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5cf8c30
	struct AActor* EffectContextGetOriginalInstigatorActor(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5cf8b08
	struct FVector EffectContextGetOrigin(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5cf8a04
	struct AActor* EffectContextGetInstigatorActor(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5cf88dc
	struct FHitResult EffectContextGetHitResult(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5cf8710
	struct AActor* EffectContextGetEffectCauser(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5cf85e8
	void EffectContextAddHitResult(struct FGameplayEffectContextHandle EffectContext, struct FHitResult HitResult, bool bReset); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5cf841c
	bool DoesTargetDataContainActor(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index, struct AActor* Actor); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5cf82d8
	bool DoesGameplayCueMeetTagRequirements(struct FGameplayCueParameters Parameters, struct FGameplayTagRequirements& SourceTagReqs, struct FGameplayTagRequirements& TargetTagReqs); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5cf80fc
	struct FGameplayEffectSpecHandle CloneSpecHandle(struct AActor* InNewInstigator, struct AActor* InEffectCauser, struct FGameplayEffectSpecHandle GameplayEffectSpecHandle_Clone); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.CloneSpecHandle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5cf7f8c
	void BreakGameplayCueParameters(struct FGameplayCueParameters& Parameters, float& NormalizedMagnitude, float& RawMagnitude, struct FGameplayEffectContextHandle& EffectContext, struct FGameplayTag& MatchedTagName, struct FGameplayTag& OriginalTag, struct FGameplayTagContainer& AggregatedSourceTags, struct FGameplayTagContainer& AggregatedTargetTags, struct FVector& Location, struct FVector& Normal, struct AActor*& Instigator, struct AActor*& EffectCauser, struct UObject*& SourceObject, struct UPhysicalMaterial*& PhysicalMaterial, int32_t& GameplayEffectLevel, int32_t& AbilityLevel, struct USceneComponent*& TargetAttachComponent, bool& bReplicateLocationWhenUsingMinimalRepProxy); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.BreakGameplayCueParameters // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1d5dc1c
	struct FGameplayEffectSpecHandle AssignTagSetByCallerMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag DataTag, float Magnitude); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignTagSetByCallerMagnitude // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5cf7dd8
	struct FGameplayEffectSpecHandle AssignSetByCallerMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FName DataName, float Magnitude); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5cf7c1c
	struct FGameplayAbilityTargetDataHandle AppendTargetDataHandle(struct FGameplayAbilityTargetDataHandle TargetHandle, struct FGameplayAbilityTargetDataHandle& HandleToAdd); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5cf7ac4
	bool AddLooseGameplayTags(struct AActor* Actor, struct FGameplayTagContainer& GameplayTags, bool bShouldReplicate); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLooseGameplayTags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5cf7910
	struct FGameplayEffectSpecHandle AddLinkedGameplayEffectSpec(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayEffectSpecHandle LinkedGameplayEffectSpec); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5cf76c8
	struct FGameplayEffectSpecHandle AddLinkedGameplayEffect(struct FGameplayEffectSpecHandle SpecHandle, struct UGameplayEffect* LinkedGameplayEffect); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5cf73ec
	struct FGameplayEffectSpecHandle AddGrantedTags(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTagContainer NewGameplayTags); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5cf7208
	struct FGameplayEffectSpecHandle AddGrantedTag(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag NewGameplayTag); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5cf7098
	struct FGameplayEffectSpecHandle AddAssetTags(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTagContainer NewGameplayTags); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5cf6ecc
	struct FGameplayEffectSpecHandle AddAssetTag(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag NewGameplayTag); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5cf6d60
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromLocations(struct FGameplayAbilityTargetingLocationInfo& SourceLocation, struct FGameplayAbilityTargetingLocationInfo& TargetLocation); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5cf6c30
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromHitResult(struct FHitResult& HitResult); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5cf6b58
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActorArray(struct TArray<struct AActor*>& ActorArray, bool OneTargetPerHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x201c24c
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActor(struct AActor* Actor); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5cf6aa4
};

// Class GameplayAbilities.AbilitySystemComponent
// Size: 0x1398 (Inherited: 0x118)
struct UAbilitySystemComponent : UGameplayTasksComponent {
	char pad_118[0x10]; // 0x118(0x10)
	struct TArray<struct FAttributeDefaults> DefaultStartingData; // 0x128(0x10)
	struct FName AffectedAnimInstanceTag; // 0x138(0x04)
	char pad_13C[0x19c]; // 0x13c(0x19c)
	float OutgoingDuration; // 0x2d8(0x04)
	float IncomingDuration; // 0x2dc(0x04)
	char pad_2E0[0x20]; // 0x2e0(0x20)
	struct TArray<struct FString> ClientDebugStrings; // 0x300(0x10)
	struct TArray<struct FString> ServerDebugStrings; // 0x310(0x10)
	char pad_320[0x60]; // 0x320(0x60)
	bool UserAbilityActivationInhibited; // 0x380(0x01)
	bool ReplicationProxyEnabled; // 0x381(0x01)
	bool bSuppressGrantAbility; // 0x382(0x01)
	bool bSuppressGameplayCues; // 0x383(0x01)
	char pad_384[0x4]; // 0x384(0x04)
	struct TArray<struct AGameplayAbilityTargetActor*> SpawnedTargetActors; // 0x388(0x10)
	char pad_398[0x28]; // 0x398(0x28)
	struct AActor* OwnerActor; // 0x3c0(0x08)
	struct AActor* AvatarActor; // 0x3c8(0x08)
	char pad_3D0[0x10]; // 0x3d0(0x10)
	struct FGameplayAbilitySpecContainer ActivatableAbilities; // 0x3e0(0x120)
	char pad_500[0x30]; // 0x500(0x30)
	struct TArray<struct UGameplayAbility*> AllReplicatedInstancedAbilities; // 0x530(0x10)
	char pad_540[0x210]; // 0x540(0x210)
	struct FGameplayAbilityRepAnimMontage RepAnimMontageInfo; // 0x750(0x38)
	bool bCachedIsNetSimulated; // 0x788(0x01)
	bool bPendingMontageRep; // 0x789(0x01)
	char pad_78A[0x6]; // 0x78a(0x06)
	struct FGameplayAbilityLocalAnimMontage LocalAnimMontageInfo; // 0x790(0x30)
	char pad_7C0[0xa0]; // 0x7c0(0xa0)
	struct FActiveGameplayEffectsContainer ActiveGameplayEffects; // 0x860(0x478)
	struct FActiveGameplayCueContainer ActiveGameplayCues; // 0xcd8(0x128)
	struct FActiveGameplayCueContainer MinimalReplicationGameplayCues; // 0xe00(0x128)
	char pad_F28[0x128]; // 0xf28(0x128)
	struct TArray<char> BlockedAbilityBindings; // 0x1050(0x10)
	char pad_1060[0x128]; // 0x1060(0x128)
	struct FMinimalReplicationTagCountMap MinimalReplicationTags; // 0x1188(0x60)
	struct TArray<struct UAttributeSet*> SpawnedAttributes; // 0x11e8(0x10)
	char pad_11F8[0x10]; // 0x11f8(0x10)
	struct FMinimalReplicationTagCountMap ReplicatedLooseTags; // 0x1208(0x60)
	char pad_1268[0x8]; // 0x1268(0x08)
	struct FReplicatedPredictionKeyMap ReplicatedPredictionKeyMap; // 0x1270(0x118)
	char pad_1388[0x10]; // 0x1388(0x10)

	void UpdateActiveGameplayEffectSetByCallerMagnitudes(struct FActiveGameplayEffectHandle ActiveHandle, struct TMap<struct FGameplayTag, float>& NewSetByCallerValues); // Function GameplayAbilities.AbilitySystemComponent.UpdateActiveGameplayEffectSetByCallerMagnitudes // (BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5d053d8
	void UpdateActiveGameplayEffectSetByCallerMagnitude(struct FActiveGameplayEffectHandle ActiveHandle, struct FGameplayTag SetByCallerTag, float NewValue); // Function GameplayAbilities.AbilitySystemComponent.UpdateActiveGameplayEffectSetByCallerMagnitude // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x5d052d4
	bool TryActivateAbilityByClass(struct UGameplayAbility* InAbilityToActivate, bool bAllowRemoteActivation); // Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass // (Final|Native|Public|BlueprintCallable) // @ game+0x5d05210
	bool TryActivateAbility(struct FGameplayAbilitySpecHandle AbilityToActivate, bool bAllowRemoteActivation); // Function GameplayAbilities.AbilitySystemComponent.TryActivateAbility // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0514c
	bool TryActivateAbilitiesByTag(struct FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation); // Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2458480
	void TargetConfirm(); // Function GameplayAbilities.AbilitySystemComponent.TargetConfirm // (Native|Public|BlueprintCallable) // @ game+0x5d05134
	void TargetCancel(); // Function GameplayAbilities.AbilitySystemComponent.TargetCancel // (Native|Public|BlueprintCallable) // @ game+0x5d0511c
	void SetUserAbilityActivationInhibited(bool NewInhibit); // Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited // (Native|Public|BlueprintCallable) // @ game+0x5d05098
	void SetActiveGameplayEffectLevelUsingQuery(struct FGameplayEffectQuery Query, int32_t NewLevel); // Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevelUsingQuery // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x5d04f98
	void SetActiveGameplayEffectLevel(struct FActiveGameplayEffectHandle ActiveHandle, int32_t NewLevel); // Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x5d04ecc
	void ServerTryActivateAbilityWithEventData(struct FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, struct FPredictionKey PredictionKey, struct FGameplayEventData TriggerEventData); // Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x5d04ca4
	void ServerTryActivateAbility(struct FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, struct FPredictionKey PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x5d04b34
	void ServerSetReplicatedTargetDataCancelled(struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x5d04994
	void ServerSetReplicatedTargetData(struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FGameplayAbilityTargetDataHandle ReplicatedTargetDataHandle, struct FGameplayTag ApplicationTag, struct FPredictionKey CurrentPredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x5d04734
	void ServerSetReplicatedEventWithPayload(enum class EAbilityGenericReplicatedEvent EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey, struct FVector_NetQuantize100 VectorPayload); // Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x5d044e4
	void ServerSetReplicatedEvent(enum class EAbilityGenericReplicatedEvent EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x5d04300
	void ServerSetInputReleased(struct FGameplayAbilitySpecHandle AbilityHandle); // Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x5d04264
	void ServerSetInputPressed(struct FGameplayAbilitySpecHandle AbilityHandle); // Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x5d041c8
	void ServerPrintDebug_RequestWithStrings(struct TArray<struct FString> Strings); // Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_RequestWithStrings // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x5d04114
	void ServerPrintDebug_Request(); // Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x5d040c8
	void ServerEndAbility(struct FGameplayAbilitySpecHandle AbilityToEnd, struct FGameplayAbilityActivationInfo ActivationInfo, struct FPredictionKey PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x5d03f24
	void ServerCurrentMontageSetPlayRate(struct UAnimMontage* ClientAnimMontage, float InPlayRate); // Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x5d03e34
	void ServerCurrentMontageSetNextSectionName(struct UAnimMontage* ClientAnimMontage, float ClientPosition, struct FName SectionName, struct FName NextSectionName); // Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x5d03cbc
	void ServerCurrentMontageJumpToSectionName(struct UAnimMontage* ClientAnimMontage, struct FName SectionName); // Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x5d03bd0
	void ServerCancelAbility(struct FGameplayAbilitySpecHandle AbilityToCancel, struct FGameplayAbilityActivationInfo ActivationInfo); // Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x5d03aa8
	void ServerAbilityRPCBatch(struct FServerAbilityRPCBatch BatchInfo); // Function GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x5d03990
	void RemoveActiveGameplayEffectBySourceEffect(struct UGameplayEffect* GameplayEffect, struct UAbilitySystemComponent* InstigatorAbilitySystemComponent, int32_t StacksToRemove); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x5d03894
	bool RemoveActiveGameplayEffect(struct FActiveGameplayEffectHandle Handle, int32_t StacksToRemove); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x182f8dc
	int32_t RemoveActiveEffectsWithTags(struct FGameplayTagContainer Tags); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags // (Final|Native|Public|BlueprintCallable) // @ game+0x2409468
	int32_t RemoveActiveEffectsWithSourceTags(struct FGameplayTagContainer Tags); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags // (Final|Native|Public|BlueprintCallable) // @ game+0x5d037c8
	int32_t RemoveActiveEffectsWithGrantedTags(struct FGameplayTagContainer Tags); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags // (Final|Native|Public|BlueprintCallable) // @ game+0x5d036fc
	int32_t RemoveActiveEffectsWithAppliedTags(struct FGameplayTagContainer Tags); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags // (Final|Native|Public|BlueprintCallable) // @ game+0x5d036fc
	void ReleaseInputID(int32_t InputID); // Function GameplayAbilities.AbilitySystemComponent.ReleaseInputID // (Final|Native|Public|BlueprintCallable) // @ game+0x5d03678
	void PressInputID(int32_t InputID); // Function GameplayAbilities.AbilitySystemComponent.PressInputID // (Final|Native|Public|BlueprintCallable) // @ game+0x5d035f4
	void OnSpawnedAttributesEndPlayed(struct AActor* InActor, enum class EEndPlayReason EndPlayReason); // Function GameplayAbilities.AbilitySystemComponent.OnSpawnedAttributesEndPlayed // (Final|Native|Public) // @ game+0x5d03530
	void OnRep_SpawnedAttributes(struct TArray<struct UAttributeSet*>& PreviousSpawnedAttributes); // Function GameplayAbilities.AbilitySystemComponent.OnRep_SpawnedAttributes // (Final|Native|Private|HasOutParms) // @ game+0x12af300
	void OnRep_ServerDebugString(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString // (Native|Public) // @ game+0x5d03518
	void OnRep_ReplicatedAnimMontage(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage // (Native|Protected) // @ game+0x5d03500
	void OnRep_OwningActor(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor // (Final|Native|Public) // @ game+0x16f5f70
	void OnRep_ClientDebugString(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString // (Native|Public) // @ game+0x5d034e8
	void OnRep_ActivateAbilities(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities // (Native|Protected) // @ game+0x5d034d0
	void OnOwnerActorDestroyed(struct AActor* InActor); // Function GameplayAbilities.AbilitySystemComponent.OnOwnerActorDestroyed // (Final|Native|Public) // @ game+0x1ef7acc
	void OnAvatarActorDestroyed(struct AActor* InActor); // Function GameplayAbilities.AbilitySystemComponent.OnAvatarActorDestroyed // (Final|Native|Public) // @ game+0x1e71528
	void NetMulticast_InvokeGameplayCuesExecuted_WithParams(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams // (Net|Native|Event|NetMulticast|Public) // @ game+0x5d03314
	void NetMulticast_InvokeGameplayCuesExecuted(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted // (Net|Native|Event|NetMulticast|Public) // @ game+0x5d03128
	void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams // (Net|Native|Event|NetMulticast|Public) // @ game+0x5d02f6c
	void NetMulticast_InvokeGameplayCueExecuted_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams // (Net|Native|Event|NetMulticast|Public) // @ game+0x215d464
	void NetMulticast_InvokeGameplayCueExecuted_FromSpec(struct FGameplayEffectSpecForRPC Spec, struct FPredictionKey PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec // (Net|Native|Event|NetMulticast|Public) // @ game+0x1f1ea04
	void NetMulticast_InvokeGameplayCueExecuted(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted // (Net|Native|Event|NetMulticast|Public) // @ game+0x5d02dd0
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams // (Net|Native|Event|NetMulticast|Public) // @ game+0x5d02c64
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(struct FGameplayEffectSpecForRPC Spec, struct FPredictionKey PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec // (Net|Native|Event|NetMulticast|Public) // @ game+0x5d02b64
	void NetMulticast_InvokeGameplayCueAdded_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams // (Net|Native|Event|NetMulticast|Public) // @ game+0x1bd943c
	void NetMulticast_InvokeGameplayCueAdded(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded // (Net|Native|Event|NetMulticast|Public) // @ game+0x5d029c8
	struct FGameplayEffectSpecHandle MakeOutgoingSpec(struct UGameplayEffect* GameplayEffectClass, float Level, struct FGameplayEffectContextHandle Context); // Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d02828
	struct FGameplayEffectContextHandle MakeEffectContext(); // Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d02744
	void K2_InitStats(struct UAttributeSet* Attributes, struct UDataTable* DataTable); // Function GameplayAbilities.AbilitySystemComponent.K2_InitStats // (Final|Native|Public|BlueprintCallable) // @ game+0x5d02680
	struct FGameplayAbilitySpecHandle K2_GiveAbilityAndActivateOnce(struct UGameplayAbility* AbilityClass, int32_t Level, int32_t InputID); // Function GameplayAbilities.AbilitySystemComponent.K2_GiveAbilityAndActivateOnce // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x5d0257c
	struct FGameplayAbilitySpecHandle K2_GiveAbility(struct UGameplayAbility* AbilityClass, int32_t Level, int32_t InputID); // Function GameplayAbilities.AbilitySystemComponent.K2_GiveAbility // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x5d02478
	bool IsGameplayCueActive(struct FGameplayTag GameplayCueTag); // Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d023e8
	void InputConfirm(); // Function GameplayAbilities.AbilitySystemComponent.InputConfirm // (Final|Native|Public|BlueprintCallable) // @ game+0x198de0c
	void InputCancel(); // Function GameplayAbilities.AbilitySystemComponent.InputCancel // (Final|Native|Public|BlueprintCallable) // @ game+0x5d023d0
	bool GetUserAbilityActivationInhibited(); // Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d023b8
	int32_t GetGameplayTagCount(struct FGameplayTag GameplayTag); // Function GameplayAbilities.AbilitySystemComponent.GetGameplayTagCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d022fc
	float GetGameplayEffectMagnitude(struct FActiveGameplayEffectHandle Handle, struct FGameplayAttribute Attribute); // Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d021cc
	int32_t GetGameplayEffectCount_IfLoaded(struct TSoftClassPtr<UObject> SoftSourceGameplayEffect, struct UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck); // Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount_IfLoaded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d02080
	int32_t GetGameplayEffectCount(struct UGameplayEffect* SourceGameplayEffect, struct UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck); // Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d01f84
	float GetGameplayAttributeValue(struct FGameplayAttribute Attribute, bool& bFound); // Function GameplayAbilities.AbilitySystemComponent.GetGameplayAttributeValue // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d01e40
	struct UAttributeSet* GetAttributeSet(struct UAttributeSet* AttributeSetClass); // Function GameplayAbilities.AbilitySystemComponent.GetAttributeSet // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x5d01db0
	void GetAllAttributes(struct TArray<struct FGameplayAttribute>& OutAttributes); // Function GameplayAbilities.AbilitySystemComponent.GetAllAttributes // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5d01d18
	void GetAllAbilities(struct TArray<struct FGameplayAbilitySpecHandle>& OutAbilityHandles); // Function GameplayAbilities.AbilitySystemComponent.GetAllAbilities // (Final|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x5d01c7c
	struct TArray<struct FActiveGameplayEffectHandle> GetActiveEffectsWithAllTags(struct FGameplayTagContainer Tags); // Function GameplayAbilities.AbilitySystemComponent.GetActiveEffectsWithAllTags // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x5d01b94
	struct TArray<struct FActiveGameplayEffectHandle> GetActiveEffects(struct FGameplayEffectQuery& Query); // Function GameplayAbilities.AbilitySystemComponent.GetActiveEffects // (Final|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x5d01aa0
	void FindAllAbilitiesWithTags(struct TArray<struct FGameplayAbilitySpecHandle>& OutAbilityHandles, struct FGameplayTagContainer Tags, bool bExactMatch); // Function GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesWithTags // (Final|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x5d01930
	void FindAllAbilitiesWithInputID(struct TArray<struct FGameplayAbilitySpecHandle>& OutAbilityHandles, int32_t InputID); // Function GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesWithInputID // (Final|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x5d01840
	void FindAllAbilitiesMatchingQuery(struct TArray<struct FGameplayAbilitySpecHandle>& OutAbilityHandles, struct FGameplayTagQuery Query); // Function GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesMatchingQuery // (Final|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x5d016e0
	void ClientTryActivateAbility(struct FGameplayAbilitySpecHandle AbilityToActivate); // Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x5d0165c
	void ClientSetReplicatedEvent(enum class EAbilityGenericReplicatedEvent EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x5d01540
	void ClientPrintDebug_Response(struct TArray<struct FString> Strings, int32_t GameFlags); // Function GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x5d0146c
	void ClientEndAbility(struct FGameplayAbilitySpecHandle AbilityToEnd, struct FGameplayAbilityActivationInfo ActivationInfo); // Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x5d0137c
	void ClientCancelAbility(struct FGameplayAbilitySpecHandle AbilityToCancel, struct FGameplayAbilityActivationInfo ActivationInfo); // Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x5d0128c
	void ClientActivateAbilitySucceedWithEventData(struct FGameplayAbilitySpecHandle AbilityToActivate, struct FPredictionKey PredictionKey, struct FGameplayEventData TriggerEventData); // Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x5d01118
	void ClientActivateAbilitySucceed(struct FGameplayAbilitySpecHandle AbilityToActivate, struct FPredictionKey PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x5d0102c
	void ClientActivateAbilityFailed(struct FGameplayAbilitySpecHandle AbilityToActivate, int16_t PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x5d00f64
	void ClearAllAbilitiesWithInputID(int32_t InputID); // Function GameplayAbilities.AbilitySystemComponent.ClearAllAbilitiesWithInputID // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x5d00ee4
	void ClearAllAbilities(); // Function GameplayAbilities.AbilitySystemComponent.ClearAllAbilities // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x5d00ed0
	void ClearAbility(struct FGameplayAbilitySpecHandle& Handle); // Function GameplayAbilities.AbilitySystemComponent.ClearAbility // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5d00e44
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(struct UGameplayEffect* GameplayEffectClass, struct UAbilitySystemComponent* Target, float Level, struct FGameplayEffectContextHandle Context); // Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x5d00c84
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(struct UGameplayEffect* GameplayEffectClass, float Level, struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf // (Final|Native|Public|BlueprintCallable) // @ game+0x198a804
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle& SpecHandle, struct UAbilitySystemComponent* Target); // Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5d00b18
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(struct FGameplayEffectSpecHandle& SpecHandle); // Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5d009f8
	void AbilityConfirmOrCancel__DelegateSignature(); // DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xda05cc
	void AbilityAbilityKey__DelegateSignature(int32_t InputID); // DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xda05cc
};

// Class GameplayAbilities.AbilitySystemDebugHUDExtension
// Size: 0x28 (Inherited: 0x28)
struct UAbilitySystemDebugHUDExtension : UObject {
};

// Class GameplayAbilities.AbilitySystemDebugHUDExtension_Tags
// Size: 0x28 (Inherited: 0x28)
struct UAbilitySystemDebugHUDExtension_Tags : UAbilitySystemDebugHUDExtension {
};

// Class GameplayAbilities.AbilitySystemDebugHUDExtension_Attributes
// Size: 0x28 (Inherited: 0x28)
struct UAbilitySystemDebugHUDExtension_Attributes : UAbilitySystemDebugHUDExtension {
};

// Class GameplayAbilities.AbilitySystemDebugHUDExtension_BlockedAbilityTags
// Size: 0x28 (Inherited: 0x28)
struct UAbilitySystemDebugHUDExtension_BlockedAbilityTags : UAbilitySystemDebugHUDExtension {
};

// Class GameplayAbilities.AbilitySystemGlobals
// Size: 0x208 (Inherited: 0x28)
struct UAbilitySystemGlobals : UObject {
	struct FSoftClassPath AbilitySystemGlobalsClassName; // 0x28(0x18)
	char pad_40[0x28]; // 0x40(0x28)
	bool bUseDebugTargetFromHud; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	struct FGameplayTag ActivateFailIsDeadTag; // 0x6c(0x04)
	struct FName ActivateFailIsDeadName; // 0x70(0x04)
	struct FGameplayTag ActivateFailCooldownTag; // 0x74(0x04)
	struct FName ActivateFailCooldownName; // 0x78(0x04)
	struct FGameplayTag ActivateFailCostTag; // 0x7c(0x04)
	struct FName ActivateFailCostName; // 0x80(0x04)
	struct FGameplayTag ActivateFailTagsBlockedTag; // 0x84(0x04)
	struct FName ActivateFailTagsBlockedName; // 0x88(0x04)
	struct FGameplayTag ActivateFailTagsMissingTag; // 0x8c(0x04)
	struct FName ActivateFailTagsMissingName; // 0x90(0x04)
	struct FGameplayTag ActivateFailNetworkingTag; // 0x94(0x04)
	struct FName ActivateFailNetworkingName; // 0x98(0x04)
	int32_t MinimalReplicationTagCountBits; // 0x9c(0x04)
	struct FNetSerializeScriptStructCache TargetDataStructCache; // 0xa0(0x10)
	bool bAllowGameplayModEvaluationChannels; // 0xb0(0x01)
	enum class EGameplayModEvaluationChannel DefaultGameplayModEvaluationChannel; // 0xb1(0x01)
	char pad_B2[0x2]; // 0xb2(0x02)
	struct FName GameplayModEvaluationChannelAliases[0xa]; // 0xb4(0x28)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct FSoftObjectPath GlobalCurveTableName; // 0xe0(0x18)
	struct UCurveTable* GlobalCurveTable; // 0xf8(0x08)
	struct FSoftObjectPath GlobalAttributeMetaDataTableName; // 0x100(0x18)
	struct UDataTable* GlobalAttributeMetaDataTable; // 0x118(0x08)
	struct FSoftObjectPath GlobalAttributeSetDefaultsTableName; // 0x120(0x18)
	struct TArray<struct FSoftObjectPath> GlobalAttributeSetDefaultsTableNames; // 0x138(0x10)
	struct TArray<struct UCurveTable*> GlobalAttributeDefaultsTables; // 0x148(0x10)
	struct FSoftObjectPath GlobalGameplayCueManagerClass; // 0x158(0x18)
	struct FSoftObjectPath GlobalGameplayCueManagerName; // 0x170(0x18)
	struct TArray<struct FString> GameplayCueNotifyPaths; // 0x188(0x10)
	struct FSoftObjectPath GameplayTagResponseTableName; // 0x198(0x18)
	struct UGameplayTagReponseTable* GameplayTagResponseTable; // 0x1b0(0x08)
	bool PredictTargetGameplayEffects; // 0x1b8(0x01)
	bool ReplicateActivationOwnedTags; // 0x1b9(0x01)
	char pad_1BA[0x6]; // 0x1ba(0x06)
	struct UGameplayCueManager* GlobalGameplayCueManager; // 0x1c0(0x08)
	char pad_1C8[0x40]; // 0x1c8(0x40)

	void ToggleIgnoreAbilitySystemCosts(); // Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts // (Exec|Native|Public) // @ game+0x5d0b870
	void ToggleIgnoreAbilitySystemCooldowns(); // Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns // (Exec|Native|Public) // @ game+0x5d0b858
	void ServerEndPlayerAbility(struct FString AbilityNameMatch); // Function GameplayAbilities.AbilitySystemGlobals.ServerEndPlayerAbility // (Final|Exec|Native|Public) // @ game+0x5d0b628
	void ServerCancelPlayerAbility(struct FString AbilityNameMatch); // Function GameplayAbilities.AbilitySystemGlobals.ServerCancelPlayerAbility // (Final|Exec|Native|Public) // @ game+0x5d0b628
	void ServerActivatePlayerAbility(struct FString AbilityNameMatch); // Function GameplayAbilities.AbilitySystemGlobals.ServerActivatePlayerAbility // (Final|Exec|Native|Public) // @ game+0x5d0b628
	void ListPlayerAbilities(); // Function GameplayAbilities.AbilitySystemGlobals.ListPlayerAbilities // (Final|Exec|Native|Public) // @ game+0x21ce104
};

// Class GameplayAbilities.AbilitySystemInterface
// Size: 0x28 (Inherited: 0x28)
struct UAbilitySystemInterface : UInterface {
};

// Class GameplayAbilities.AbilitySystemReplicationProxyInterface
// Size: 0x28 (Inherited: 0x28)
struct UAbilitySystemReplicationProxyInterface : UInterface {
};

// Class GameplayAbilities.AttributeSet
// Size: 0x30 (Inherited: 0x28)
struct UAttributeSet : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class GameplayAbilities.AbilitySystemTestAttributeSet
// Size: 0x70 (Inherited: 0x30)
struct UAbilitySystemTestAttributeSet : UAttributeSet {
	float MaxHealth; // 0x30(0x04)
	float Health; // 0x34(0x04)
	float Mana; // 0x38(0x04)
	float MaxMana; // 0x3c(0x04)
	float Damage; // 0x40(0x04)
	float SpellDamage; // 0x44(0x04)
	float PhysicalDamage; // 0x48(0x04)
	float CritChance; // 0x4c(0x04)
	float CritMultiplier; // 0x50(0x04)
	float ArmorDamageReduction; // 0x54(0x04)
	float DodgeChance; // 0x58(0x04)
	float LifeSteal; // 0x5c(0x04)
	float Strength; // 0x60(0x04)
	float StackingAttribute1; // 0x64(0x04)
	float StackingAttribute2; // 0x68(0x04)
	float NoStackAttribute; // 0x6c(0x04)
};

// Class GameplayAbilities.AbilitySystemTestPawn
// Size: 0x358 (Inherited: 0x338)
struct AAbilitySystemTestPawn : ADefaultPawn {
	char pad_338[0x18]; // 0x338(0x18)
	struct UAbilitySystemComponent* AbilitySystemComponent; // 0x350(0x08)
};

// Class GameplayAbilities.AbilityTask
// Size: 0x78 (Inherited: 0x60)
struct UAbilityTask : UGameplayTask {
	struct UGameplayAbility* Ability; // 0x60(0x08)
	struct TWeakObjectPtr<struct UAbilitySystemComponent> AbilitySystemComponent; // 0x68(0x08)
	char pad_70[0x8]; // 0x70(0x08)
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base
// Size: 0xb8 (Inherited: 0x78)
struct UAbilityTask_ApplyRootMotion_Base : UAbilityTask {
	struct FName ForceName; // 0x78(0x04)
	enum class ERootMotionFinishVelocityMode FinishVelocityMode; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	struct FVector FinishSetVelocity; // 0x80(0x18)
	float FinishClampVelocity; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct UCharacterMovementComponent* MovementComponent; // 0xa0(0x08)
	char pad_A8[0x10]; // 0xa8(0x10)
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
// Size: 0x100 (Inherited: 0xb8)
struct UAbilityTask_ApplyRootMotionConstantForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastInlineDelegate OnFinish; // 0xb8(0x10)
	struct FVector WorldDirection; // 0xc8(0x18)
	float Strength; // 0xe0(0x04)
	float Duration; // 0xe4(0x04)
	bool bIsAdditive; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct UCurveFloat* StrengthOverTime; // 0xf0(0x08)
	bool bEnableGravity; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)

	struct UAbilityTask_ApplyRootMotionConstantForce* ApplyRootMotionConstantForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector WorldDirection, float Strength, float Duration, bool bIsAdditive, struct UCurveFloat* StrengthOverTime, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bEnableGravity); // Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x5d099bc
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
// Size: 0x120 (Inherited: 0xb8)
struct UAbilityTask_ApplyRootMotionJumpForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastInlineDelegate OnFinish; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnLanded; // 0xc8(0x10)
	struct FRotator Rotation; // 0xd8(0x18)
	float Distance; // 0xf0(0x04)
	float Height; // 0xf4(0x04)
	float Duration; // 0xf8(0x04)
	float MinimumLandedTriggerTime; // 0xfc(0x04)
	bool bFinishOnLanded; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct UCurveVector* PathOffsetCurve; // 0x108(0x08)
	struct UCurveFloat* TimeMappingCurve; // 0x110(0x08)
	char pad_118[0x8]; // 0x118(0x08)

	void OnLandedCallback(struct FHitResult& Hit); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback // (Final|Native|Public|HasOutParms) // @ game+0x5d0b4a0
	void Finish(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0b48c
	struct UAbilityTask_ApplyRootMotionJumpForce* ApplyRootMotionJumpForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FRotator Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, struct UCurveVector* PathOffsetCurve, struct UCurveFloat* TimeMappingCurve); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x5d09cf8
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
// Size: 0x158 (Inherited: 0xb8)
struct UAbilityTask_ApplyRootMotionMoveToActorForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastInlineDelegate OnFinished; // 0xb8(0x10)
	char pad_C8[0x8]; // 0xc8(0x08)
	struct FVector StartLocation; // 0xd0(0x18)
	struct FVector TargetLocation; // 0xe8(0x18)
	struct AActor* TargetActor; // 0x100(0x08)
	struct FVector TargetLocationOffset; // 0x108(0x18)
	enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	float Duration; // 0x124(0x04)
	bool bDisableDestinationReachedInterrupt; // 0x128(0x01)
	bool bSetNewMovementMode; // 0x129(0x01)
	enum class EMovementMode NewMovementMode; // 0x12a(0x01)
	bool bRestrictSpeedToExpected; // 0x12b(0x01)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct UCurveVector* PathOffsetCurve; // 0x130(0x08)
	struct UCurveFloat* TimeMappingCurve; // 0x138(0x08)
	struct UCurveFloat* TargetLerpSpeedHorizontalCurve; // 0x140(0x08)
	struct UCurveFloat* TargetLerpSpeedVerticalCurve; // 0x148(0x08)
	char pad_150[0x8]; // 0x150(0x08)

	void OnTargetActorSwapped(struct AActor* OriginalTarget, struct AActor* NewTarget); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnTargetActorSwapped // (Final|Native|Public) // @ game+0x5d0b55c
	void OnRep_TargetLocation(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation // (Final|Native|Protected) // @ game+0x5d0b538
	struct UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToTargetDataActorForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FGameplayAbilityTargetDataHandle TargetDataHandle, int32_t TargetDataIndex, int32_t TargetActorIndex, struct FVector TargetLocationOffset, enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, struct UCurveFloat* TargetLerpSpeedHorizontal, struct UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, struct UCurveVector* PathOffsetCurve, struct UCurveFloat* TimeMappingCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToTargetDataActorForce // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x5d0a920
	struct UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToActorForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct AActor* TargetActor, struct FVector TargetLocationOffset, enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, struct UCurveFloat* TargetLerpSpeedHorizontal, struct UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, struct UCurveVector* PathOffsetCurve, struct UCurveFloat* TimeMappingCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x5d0a0d0
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
// Size: 0x120 (Inherited: 0xb8)
struct UAbilityTask_ApplyRootMotionMoveToForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastInlineDelegate OnTimedOut; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnTimedOutAndDestinationReached; // 0xc8(0x10)
	struct FVector StartLocation; // 0xd8(0x18)
	struct FVector TargetLocation; // 0xf0(0x18)
	float Duration; // 0x108(0x04)
	bool bSetNewMovementMode; // 0x10c(0x01)
	enum class EMovementMode NewMovementMode; // 0x10d(0x01)
	bool bRestrictSpeedToExpected; // 0x10e(0x01)
	char pad_10F[0x1]; // 0x10f(0x01)
	struct UCurveVector* PathOffsetCurve; // 0x110(0x08)
	char pad_118[0x8]; // 0x118(0x08)

	struct UAbilityTask_ApplyRootMotionMoveToForce* ApplyRootMotionMoveToForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector TargetLocation, float Duration, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, struct UCurveVector* PathOffsetCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce // (Final|Native|Static|Private|HasDefaults|BlueprintCallable) // @ game+0x5d0a5d4
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
// Size: 0x128 (Inherited: 0xb8)
struct UAbilityTask_ApplyRootMotionRadialForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastInlineDelegate OnFinish; // 0xb8(0x10)
	struct FVector Location; // 0xc8(0x18)
	struct AActor* LocationActor; // 0xe0(0x08)
	float Strength; // 0xe8(0x04)
	float Duration; // 0xec(0x04)
	float Radius; // 0xf0(0x04)
	bool bIsPush; // 0xf4(0x01)
	bool bIsAdditive; // 0xf5(0x01)
	bool bNoZForce; // 0xf6(0x01)
	char pad_F7[0x1]; // 0xf7(0x01)
	struct UCurveFloat* StrengthDistanceFalloff; // 0xf8(0x08)
	struct UCurveFloat* StrengthOverTime; // 0x100(0x08)
	bool bUseFixedWorldDirection; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct FRotator FixedWorldDirection; // 0x110(0x18)

	struct UAbilityTask_ApplyRootMotionRadialForce* ApplyRootMotionRadialForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector Location, struct AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, struct UCurveFloat* StrengthDistanceFalloff, struct UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, struct FRotator FixedWorldDirection, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x5d0af5c
};

// Class GameplayAbilities.AbilityTask_MoveToLocation
// Size: 0xe0 (Inherited: 0x78)
struct UAbilityTask_MoveToLocation : UAbilityTask {
	struct FMulticastInlineDelegate OnTargetLocationReached; // 0x78(0x10)
	char pad_88[0x8]; // 0x88(0x08)
	struct FVector StartLocation; // 0x90(0x18)
	struct FVector TargetLocation; // 0xa8(0x18)
	float DurationOfMovement; // 0xc0(0x04)
	char pad_C4[0xc]; // 0xc4(0x0c)
	struct UCurveFloat* LerpCurve; // 0xd0(0x08)
	struct UCurveVector* LerpCurveVector; // 0xd8(0x08)

	struct UAbilityTask_MoveToLocation* MoveToLocation(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector Location, float Duration, struct UCurveFloat* OptionalInterpolationCurve, struct UCurveVector* OptionalVectorInterpolationCurve); // Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x5d0cc00
};

// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
// Size: 0x90 (Inherited: 0x78)
struct UAbilityTask_NetworkSyncPoint : UAbilityTask {
	struct FMulticastInlineDelegate OnSync; // 0x78(0x10)
	char pad_88[0x8]; // 0x88(0x08)

	struct UAbilityTask_NetworkSyncPoint* WaitNetSync(struct UGameplayAbility* OwningAbility, enum class EAbilityTaskNetSyncType SyncType); // Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0eb68
	void OnSignalCallback(); // Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback // (Final|Native|Public) // @ game+0x5d0d128
};

// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
// Size: 0x100 (Inherited: 0x78)
struct UAbilityTask_PlayMontageAndWait : UAbilityTask {
	struct FMulticastInlineDelegate OnCompleted; // 0x78(0x10)
	struct FMulticastInlineDelegate OnBlendOut; // 0x88(0x10)
	struct FMulticastInlineDelegate OnInterrupted; // 0x98(0x10)
	struct FMulticastInlineDelegate OnCancelled; // 0xa8(0x10)
	char pad_B8[0x28]; // 0xb8(0x28)
	struct UAnimMontage* MontageToPlay; // 0xe0(0x08)
	float Rate; // 0xe8(0x04)
	struct FName StartSection; // 0xec(0x04)
	float AnimRootMotionTranslationScale; // 0xf0(0x04)
	float StartTimeSeconds; // 0xf4(0x04)
	bool bStopWhenAbilityEnds; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)

	void OnMontageInterrupted(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted // (Final|Native|Public) // @ game+0x5d0d114
	void OnMontageEnded(struct UAnimMontage* Montage, bool bInterrupted); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded // (Final|Native|Public) // @ game+0x5d0d04c
	void OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut // (Final|Native|Public) // @ game+0x5d0cf84
	struct UAbilityTask_PlayMontageAndWait* CreatePlayMontageAndWaitProxy(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct UAnimMontage* MontageToPlay, float Rate, struct FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0c604
};

// Class GameplayAbilities.AbilityTask_Repeat
// Size: 0xb0 (Inherited: 0x78)
struct UAbilityTask_Repeat : UAbilityTask {
	struct FMulticastInlineDelegate OnPerformAction; // 0x78(0x10)
	struct FMulticastInlineDelegate OnFinished; // 0x88(0x10)
	char pad_98[0x18]; // 0x98(0x18)

	struct UAbilityTask_Repeat* RepeatAction(struct UGameplayAbility* OwningAbility, float TimeBetweenActions, int32_t TotalActionCount); // Function GameplayAbilities.AbilityTask_Repeat.RepeatAction // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0d13c
};

// Class GameplayAbilities.AbilityTask_SpawnActor
// Size: 0xc0 (Inherited: 0x78)
struct UAbilityTask_SpawnActor : UAbilityTask {
	struct FMulticastInlineDelegate Success; // 0x78(0x10)
	struct FMulticastInlineDelegate DidNotSpawn; // 0x88(0x10)
	char pad_98[0x28]; // 0x98(0x28)

	struct UAbilityTask_SpawnActor* SpawnActor(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, struct AActor* Class); // Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0d238
	void FinishSpawningActor(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, struct AActor* SpawnedActor); // Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0c84c
	bool BeginSpawningActor(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, struct AActor* Class, struct AActor*& SpawnedActor); // Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5d0c358
};

// Class GameplayAbilities.AbilityTask_StartAbilityState
// Size: 0xb0 (Inherited: 0x78)
struct UAbilityTask_StartAbilityState : UAbilityTask {
	struct FMulticastInlineDelegate OnStateEnded; // 0x78(0x10)
	struct FMulticastInlineDelegate OnStateInterrupted; // 0x88(0x10)
	char pad_98[0x18]; // 0x98(0x18)

	struct UAbilityTask_StartAbilityState* StartAbilityState(struct UGameplayAbility* OwningAbility, struct FName StateName, bool bEndCurrentState); // Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0d374
};

// Class GameplayAbilities.AbilityTask_VisualizeTargeting
// Size: 0xa0 (Inherited: 0x78)
struct UAbilityTask_VisualizeTargeting : UAbilityTask {
	struct FMulticastInlineDelegate TimeElapsed; // 0x78(0x10)
	char pad_88[0x18]; // 0x88(0x18)

	struct UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* TargetActor, struct FName TaskInstanceName, float Duration); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0d5e8
	struct UAbilityTask_VisualizeTargeting* VisualizeTargeting(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* Class, struct FName TaskInstanceName, float Duration); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0d4ac
	void FinishSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* SpawnedActor); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0cb40
	bool BeginSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* Class, struct AGameplayAbilityTargetActor*& SpawnedActor); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5d0c4fc
};

// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
// Size: 0x128 (Inherited: 0x78)
struct UAbilityTask_WaitAbilityActivate : UAbilityTask {
	struct FMulticastInlineDelegate OnActivate; // 0x78(0x10)
	char pad_88[0xa0]; // 0x88(0xa0)

	struct UAbilityTask_WaitAbilityActivate* WaitForAbilityActivateWithTagRequirements(struct UGameplayAbility* OwningAbility, struct FGameplayTagRequirements TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0da48
	struct UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTagQuery Query, bool IncludeTriggeredAbilities, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate_Query // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0dbd0
	struct UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate(struct UGameplayAbility* OwningAbility, struct FGameplayTag WithTag, struct FGameplayTag WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0d8a4
	void OnAbilityActivate(struct UGameplayAbility* ActivatedAbility); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate // (Final|Native|Public) // @ game+0x5d0cddc
};

// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
// Size: 0xe8 (Inherited: 0x78)
struct UAbilityTask_WaitAbilityCommit : UAbilityTask {
	struct FMulticastInlineDelegate OnCommit; // 0x78(0x10)
	char pad_88[0x60]; // 0x88(0x60)

	struct UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTagQuery Query, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit_Query // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0df00
	struct UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit(struct UGameplayAbility* OwningAbility, struct FGameplayTag WithTag, struct FGameplayTag WithoutTage, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0ddb0
	void OnAbilityCommit(struct UGameplayAbility* ActivatedAbility); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit // (Final|Native|Public) // @ game+0x5d0ce5c
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChange
// Size: 0xe8 (Inherited: 0x78)
struct UAbilityTask_WaitAttributeChange : UAbilityTask {
	struct FMulticastInlineDelegate OnChange; // 0x78(0x10)
	char pad_88[0x58]; // 0x88(0x58)
	struct UAbilitySystemComponent* ExternalOwner; // 0xe0(0x08)

	struct UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute InAttribute, struct FGameplayTag InWithTag, struct FGameplayTag InWithoutTag, enum class EWaitAttributeChangeComparison InComparisonType, float InComparisonValue, bool TriggerOnce, struct AActor* OptionalExternalOwner); // Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0e894
	struct UAbilityTask_WaitAttributeChange* WaitForAttributeChange(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute Attribute, struct FGameplayTag WithSrcTag, struct FGameplayTag WithoutSrcTag, bool TriggerOnce, struct AActor* OptionalExternalOwner); // Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0e09c
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
// Size: 0x138 (Inherited: 0x78)
struct UAbilityTask_WaitAttributeChangeRatioThreshold : UAbilityTask {
	struct FMulticastInlineDelegate OnChange; // 0x78(0x10)
	char pad_88[0xa8]; // 0x88(0xa8)
	struct UAbilitySystemComponent* ExternalOwner; // 0x130(0x08)

	struct UAbilityTask_WaitAttributeChangeRatioThreshold* WaitForAttributeChangeRatioThreshold(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute AttributeNumerator, struct FGameplayAttribute AttributeDenominator, enum class EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce, struct AActor* OptionalExternalOwner); // Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0e340
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
// Size: 0xe8 (Inherited: 0x78)
struct UAbilityTask_WaitAttributeChangeThreshold : UAbilityTask {
	struct FMulticastInlineDelegate OnChange; // 0x78(0x10)
	char pad_88[0x58]; // 0x88(0x58)
	struct UAbilitySystemComponent* ExternalOwner; // 0xe0(0x08)

	struct UAbilityTask_WaitAttributeChangeThreshold* WaitForAttributeChangeThreshold(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute Attribute, enum class EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce, struct AActor* OptionalExternalOwner); // Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0e650
};

// Class GameplayAbilities.AbilityTask_WaitCancel
// Size: 0x90 (Inherited: 0x78)
struct UAbilityTask_WaitCancel : UAbilityTask {
	struct FMulticastInlineDelegate OnCancel; // 0x78(0x10)
	char pad_88[0x8]; // 0x88(0x08)

	struct UAbilityTask_WaitCancel* WaitCancel(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0d724
	void OnLocalCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback // (Final|Native|Public) // @ game+0x5d0cf70
	void OnCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback // (Final|Native|Public) // @ game+0x5d0cedc
};

// Class GameplayAbilities.AbilityTask_WaitConfirm
// Size: 0x98 (Inherited: 0x78)
struct UAbilityTask_WaitConfirm : UAbilityTask {
	struct FMulticastInlineDelegate OnConfirm; // 0x78(0x10)
	char pad_88[0x10]; // 0x88(0x10)

	struct UAbilityTask_WaitConfirm* WaitConfirm(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0d7e4
	void OnConfirmCallback(struct UGameplayAbility* InAbility); // Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback // (Final|Native|Public) // @ game+0x5d0cef0
};

// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
// Size: 0xa0 (Inherited: 0x78)
struct UAbilityTask_WaitConfirmCancel : UAbilityTask {
	struct FMulticastInlineDelegate OnConfirm; // 0x78(0x10)
	struct FMulticastInlineDelegate OnCancel; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)

	struct UAbilityTask_WaitConfirmCancel* WaitConfirmCancel(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0fb50
	void OnLocalConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback // (Final|Native|Public) // @ game+0x5d0f654
	void OnLocalCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback // (Final|Native|Public) // @ game+0x5d0f640
	void OnConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback // (Final|Native|Public) // @ game+0x5d0f170
	void OnCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback // (Final|Native|Public) // @ game+0x5d0f15c
};

// Class GameplayAbilities.AbilityTask_WaitDelay
// Size: 0x90 (Inherited: 0x78)
struct UAbilityTask_WaitDelay : UAbilityTask {
	struct FMulticastInlineDelegate OnFinish; // 0x78(0x10)
	char pad_88[0x8]; // 0x88(0x08)

	struct UAbilityTask_WaitDelay* WaitDelay(struct UGameplayAbility* OwningAbility, float Time); // Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0fc10
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// Size: 0x1b0 (Inherited: 0x78)
struct UAbilityTask_WaitGameplayEffectApplied : UAbilityTask {
	char pad_78[0x128]; // 0x78(0x128)
	struct UAbilitySystemComponent* ExternalOwner; // 0x1a0(0x08)
	char pad_1A8[0x8]; // 0x1a8(0x08)

	void OnApplyGameplayEffectCallback(struct UAbilitySystemComponent* Target, struct FGameplayEffectSpec& SpecApplied, struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback // (Final|Native|Public|HasOutParms) // @ game+0x5d0effc
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// Size: 0x1d0 (Inherited: 0x1b0)
struct UAbilityTask_WaitGameplayEffectApplied_Self : UAbilityTask_WaitGameplayEffectApplied {
	struct FMulticastInlineDelegate OnApplied; // 0x1b0(0x10)
	char pad_1C0[0x10]; // 0x1c0(0x10)

	struct UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagQuery SourceTagQuery, struct FGameplayTagQuery TargetTagQuery, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf_Query // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d102d0
	struct UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0ffbc
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// Size: 0x1d0 (Inherited: 0x1b0)
struct UAbilityTask_WaitGameplayEffectApplied_Target : UAbilityTask_WaitGameplayEffectApplied {
	struct FMulticastInlineDelegate OnApplied; // 0x1b0(0x10)
	char pad_1C0[0x10]; // 0x1c0(0x10)

	struct UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagQuery SourceTagQuery, struct FGameplayTagQuery TargetTagQuery, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget_Query // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d10960
	struct UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle TargetFilter, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffects); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d1064c
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
// Size: 0x120 (Inherited: 0x78)
struct UAbilityTask_WaitGameplayEffectBlockedImmunity : UAbilityTask {
	struct FMulticastInlineDelegate bLocked; // 0x78(0x10)
	char pad_88[0x88]; // 0x88(0x88)
	struct UAbilitySystemComponent* ExternalOwner; // 0x110(0x08)
	char pad_118[0x8]; // 0x118(0x08)

	struct UAbilityTask_WaitGameplayEffectBlockedImmunity* WaitGameplayEffectBlockedByImmunity(struct UGameplayAbility* OwningAbility, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, struct AActor* OptionalExternalTarget, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d10cdc
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// Size: 0xb8 (Inherited: 0x78)
struct UAbilityTask_WaitGameplayEffectRemoved : UAbilityTask {
	struct FMulticastInlineDelegate OnRemoved; // 0x78(0x10)
	struct FMulticastInlineDelegate InvalidHandle; // 0x88(0x10)
	char pad_98[0x20]; // 0x98(0x20)

	struct UAbilityTask_WaitGameplayEffectRemoved* WaitForGameplayEffectRemoved(struct UGameplayAbility* OwningAbility, struct FActiveGameplayEffectHandle Handle); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0fce4
	void OnGameplayEffectRemoved(struct FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved // (Final|Native|Public|HasOutParms) // @ game+0x5d0f184
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
// Size: 0xb0 (Inherited: 0x78)
struct UAbilityTask_WaitGameplayEffectStackChange : UAbilityTask {
	struct FMulticastInlineDelegate OnChange; // 0x78(0x10)
	struct FMulticastInlineDelegate InvalidHandle; // 0x88(0x10)
	char pad_98[0x18]; // 0x98(0x18)

	struct UAbilityTask_WaitGameplayEffectStackChange* WaitForGameplayEffectStackChange(struct UGameplayAbility* OwningAbility, struct FActiveGameplayEffectHandle Handle); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0fdf0
	void OnGameplayEffectStackChange(struct FActiveGameplayEffectHandle Handle, int32_t NewCount, int32_t OldCount); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange // (Final|Native|Public) // @ game+0x5d0f268
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEvent
// Size: 0xa8 (Inherited: 0x78)
struct UAbilityTask_WaitGameplayEvent : UAbilityTask {
	struct FMulticastInlineDelegate EventReceived; // 0x78(0x10)
	char pad_88[0x8]; // 0x88(0x08)
	struct UAbilitySystemComponent* OptionalExternalTarget; // 0x90(0x08)
	char pad_98[0x10]; // 0x98(0x10)

	struct UAbilityTask_WaitGameplayEvent* WaitGameplayEvent(struct UGameplayAbility* OwningAbility, struct FGameplayTag EventTag, struct AActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact); // Function GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d10edc
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTag
// Size: 0x98 (Inherited: 0x78)
struct UAbilityTask_WaitGameplayTag : UAbilityTask {
	char pad_78[0x8]; // 0x78(0x08)
	struct UAbilitySystemComponent* OptionalExternalTarget; // 0x80(0x08)
	char pad_88[0x10]; // 0x88(0x10)

	void GameplayTagCallback(struct FGameplayTag tag, int32_t NewCount); // Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback // (Native|Public) // @ game+0x5d0ef38
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// Size: 0xa8 (Inherited: 0x98)
struct UAbilityTask_WaitGameplayTagAdded : UAbilityTask_WaitGameplayTag {
	struct FMulticastInlineDelegate Added; // 0x98(0x10)

	struct UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(struct UGameplayAbility* OwningAbility, struct FGameplayTag tag, struct AActor* InOptionalExternalTarget, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d110f8
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// Size: 0xa8 (Inherited: 0x98)
struct UAbilityTask_WaitGameplayTagRemoved : UAbilityTask_WaitGameplayTag {
	struct FMulticastInlineDelegate Removed; // 0x98(0x10)

	struct UAbilityTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(struct UGameplayAbility* OwningAbility, struct FGameplayTag tag, struct AActor* InOptionalExternalTarget, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d114c0
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagQuery
// Size: 0x158 (Inherited: 0x78)
struct UAbilityTask_WaitGameplayTagQuery : UAbilityTask {
	char pad_78[0xc0]; // 0x78(0xc0)
	struct FMulticastInlineDelegate Triggered; // 0x138(0x10)
	struct UAbilitySystemComponent* OptionalExternalTarget; // 0x148(0x08)
	char pad_150[0x8]; // 0x150(0x08)

	struct UAbilityTask_WaitGameplayTagQuery* WaitGameplayTagQuery(struct UGameplayAbility* OwningAbility, struct FGameplayTagQuery TagQuery, struct AActor* InOptionalExternalTarget, enum class EWaitGameplayTagQueryTriggerCondition TriggerCondition, bool bOnlyTriggerOnce); // Function GameplayAbilities.AbilityTask_WaitGameplayTagQuery.WaitGameplayTagQuery // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x5d112c0
	void UpdateTargetTags(struct FGameplayTag tag, int32_t NewCount); // Function GameplayAbilities.AbilityTask_WaitGameplayTagQuery.UpdateTargetTags // (Final|Native|Protected) // @ game+0x5d0fa90
};

// Class GameplayAbilities.AbilityTask_WaitInputPress
// Size: 0x98 (Inherited: 0x78)
struct UAbilityTask_WaitInputPress : UAbilityTask {
	struct FMulticastInlineDelegate OnPress; // 0x78(0x10)
	char pad_88[0x10]; // 0x88(0x10)

	struct UAbilityTask_WaitInputPress* WaitInputPress(struct UGameplayAbility* OwningAbility, bool bTestAlreadyPressed); // Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d11688
	void OnPressCallback(); // Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback // (Final|Native|Public) // @ game+0x5d0f7c4
};

// Class GameplayAbilities.AbilityTask_WaitInputRelease
// Size: 0x98 (Inherited: 0x78)
struct UAbilityTask_WaitInputRelease : UAbilityTask {
	struct FMulticastInlineDelegate OnRelease; // 0x78(0x10)
	char pad_88[0x10]; // 0x88(0x10)

	struct UAbilityTask_WaitInputRelease* WaitInputRelease(struct UGameplayAbility* OwningAbility, bool bTestAlreadyReleased); // Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d11790
	void OnReleaseCallback(); // Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback // (Final|Native|Public) // @ game+0x5d0f7d8
};

// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
// Size: 0x98 (Inherited: 0x78)
struct UAbilityTask_WaitMovementModeChange : UAbilityTask {
	struct FMulticastInlineDelegate OnChange; // 0x78(0x10)
	char pad_88[0x10]; // 0x88(0x10)

	void OnMovementModeChange(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange // (Final|Native|Public) // @ game+0x5d0f668
	struct UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(struct UGameplayAbility* OwningAbility, enum class EMovementMode NewMode); // Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0ed74
};

// Class GameplayAbilities.AbilityTask_WaitOverlap
// Size: 0x88 (Inherited: 0x78)
struct UAbilityTask_WaitOverlap : UAbilityTask {
	struct FMulticastInlineDelegate OnOverlap; // 0x78(0x10)

	struct UAbilityTask_WaitOverlap* WaitForOverlap(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0fefc
	void OnHitCallback(struct UPrimitiveComponent* HitComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0x5d0f364
};

// Class GameplayAbilities.AbilityTask_WaitTargetData
// Size: 0xb8 (Inherited: 0x78)
struct UAbilityTask_WaitTargetData : UAbilityTask {
	struct FMulticastInlineDelegate ValidData; // 0x78(0x10)
	struct FMulticastInlineDelegate Cancelled; // 0x88(0x10)
	struct AGameplayAbilityTargetActor* TargetClass; // 0x98(0x08)
	struct AGameplayAbilityTargetActor* TargetActor; // 0xa0(0x08)
	char pad_A8[0x10]; // 0xa8(0x10)

	struct UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, enum class EGameplayTargetingConfirmation ConfirmationType, struct AGameplayAbilityTargetActor* TargetActor); // Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d119ec
	struct UAbilityTask_WaitTargetData* WaitTargetData(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, enum class EGameplayTargetingConfirmation ConfirmationType, struct AGameplayAbilityTargetActor* Class); // Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d11898
	void OnTargetDataReplicatedCancelledCallback(); // Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback // (Final|Native|Public) // @ game+0x5d0fa7c
	void OnTargetDataReplicatedCallback(struct FGameplayAbilityTargetDataHandle& Data, struct FGameplayTag ActivationTag); // Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback // (Final|Native|Public|HasOutParms) // @ game+0x5d0f974
	void OnTargetDataReadyCallback(struct FGameplayAbilityTargetDataHandle& Data); // Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback // (Final|Native|Public|HasOutParms) // @ game+0x5d0f8b0
	void OnTargetDataCancelledCallback(struct FGameplayAbilityTargetDataHandle& Data); // Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback // (Final|Native|Public|HasOutParms) // @ game+0x5d0f7ec
	void FinishSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* SpawnedActor); // Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0ee78
	bool BeginSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* Class, struct AGameplayAbilityTargetActor*& SpawnedActor); // Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5d0ec6c
};

// Class GameplayAbilities.AbilityTask_WaitVelocityChange
// Size: 0xb0 (Inherited: 0x78)
struct UAbilityTask_WaitVelocityChange : UAbilityTask {
	struct FMulticastInlineDelegate OnVelocityChage; // 0x78(0x10)
	struct UMovementComponent* CachedMovementComponent; // 0x88(0x08)
	char pad_90[0x20]; // 0x90(0x20)

	struct UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(struct UGameplayAbility* OwningAbility, struct FVector Direction, float MinimumMagnitude); // Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x5d14970
};

// Class GameplayAbilities.AnimNotify_GameplayCue
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_GameplayCue : UAnimNotify {
	struct FGameplayCueTag GameplayCue; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class GameplayAbilities.AnimNotify_GameplayCueState
// Size: 0x38 (Inherited: 0x30)
struct UAnimNotify_GameplayCueState : UAnimNotifyState {
	struct FGameplayCueTag GameplayCue; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class GameplayAbilities.GameplayAbility
// Size: 0x3b8 (Inherited: 0x28)
struct UGameplayAbility : UObject {
	char pad_28[0x80]; // 0x28(0x80)
	struct FGameplayTagContainer AbilityTags; // 0xa8(0x20)
	bool bReplicateInputDirectly; // 0xc8(0x01)
	bool RemoteInstanceEnded; // 0xc9(0x01)
	char pad_CA[0x4]; // 0xca(0x04)
	enum class EGameplayAbilityReplicationPolicy ReplicationPolicy; // 0xce(0x01)
	enum class EGameplayAbilityInstancingPolicy InstancingPolicy; // 0xcf(0x01)
	bool bServerRespectsRemoteAbilityCancellation; // 0xd0(0x01)
	bool bRetriggerInstancedAbility; // 0xd1(0x01)
	char pad_D2[0x6]; // 0xd2(0x06)
	struct FGameplayAbilityActivationInfo CurrentActivationInfo; // 0xd8(0x20)
	struct FGameplayEventData CurrentEventData; // 0xf8(0xb0)
	enum class EGameplayAbilityNetExecutionPolicy NetExecutionPolicy; // 0x1a8(0x01)
	enum class EGameplayAbilityNetSecurityPolicy NetSecurityPolicy; // 0x1a9(0x01)
	char pad_1AA[0x6]; // 0x1aa(0x06)
	struct UGameplayEffect* CostGameplayEffectClass; // 0x1b0(0x08)
	struct TArray<struct FAbilityTriggerData> AbilityTriggers; // 0x1b8(0x10)
	struct UGameplayEffect* CooldownGameplayEffectClass; // 0x1c8(0x08)
	struct FGameplayTagContainer CancelAbilitiesWithTag; // 0x1d0(0x20)
	struct FGameplayTagContainer BlockAbilitiesWithTag; // 0x1f0(0x20)
	struct FGameplayTagContainer ActivationOwnedTags; // 0x210(0x20)
	struct FGameplayTagContainer ActivationRequiredTags; // 0x230(0x20)
	struct FGameplayTagContainer ActivationBlockedTags; // 0x250(0x20)
	struct FGameplayTagContainer SourceRequiredTags; // 0x270(0x20)
	struct FGameplayTagContainer SourceBlockedTags; // 0x290(0x20)
	struct FGameplayTagContainer TargetRequiredTags; // 0x2b0(0x20)
	struct FGameplayTagContainer TargetBlockedTags; // 0x2d0(0x20)
	char pad_2F0[0x20]; // 0x2f0(0x20)
	struct TArray<struct UGameplayTask*> ActiveTasks; // 0x310(0x10)
	char pad_320[0x10]; // 0x320(0x10)
	struct UAnimMontage* CurrentMontage; // 0x330(0x08)
	char pad_338[0x60]; // 0x338(0x60)
	bool bIsActive; // 0x398(0x01)
	bool bIsAbilityEnding; // 0x399(0x01)
	bool bIsCancelable; // 0x39a(0x01)
	bool bIsBlockingOtherAbilities; // 0x39b(0x01)
	char pad_39C[0x14]; // 0x39c(0x14)
	bool bMarkPendingKillOnAbilityEnd; // 0x3b0(0x01)
	char pad_3B1[0x7]; // 0x3b1(0x07)

	void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities); // Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities // (Native|Public|BlueprintCallable) // @ game+0x5d16180
	void SetCanBeCanceled(bool bCanBeCanceled); // Function GameplayAbilities.GameplayAbility.SetCanBeCanceled // (Native|Public|BlueprintCallable) // @ game+0x5d160fc
	void SendGameplayEvent(struct FGameplayTag EventTag, struct FGameplayEventData Payload); // Function GameplayAbilities.GameplayAbility.SendGameplayEvent // (Native|Protected|BlueprintCallable) // @ game+0x5d15fdc
	void RemoveGrantedByEffect(); // Function GameplayAbilities.GameplayAbility.RemoveGrantedByEffect // (Native|Public|BlueprintCallable) // @ game+0x5d15fc4
	void MontageStop(float OverrideBlendOutTime); // Function GameplayAbilities.GameplayAbility.MontageStop // (Final|Native|Protected|BlueprintCallable) // @ game+0x5d15f40
	void MontageSetNextSectionName(struct FName FromSectionName, struct FName ToSectionName); // Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName // (Final|Native|Protected|BlueprintCallable) // @ game+0x5d15e68
	void MontageJumpToSection(struct FName SectionName); // Function GameplayAbilities.GameplayAbility.MontageJumpToSection // (Final|Native|Protected|BlueprintCallable) // @ game+0x5d15dd4
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(struct FName SocketName); // Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x5d15d1c
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor(); // Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x5d15cc0
	struct FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(struct UGameplayEffect* GameplayEffectClass, float Level); // Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d15be0
	bool K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayEventData Payload); // Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent // (Event|Protected|BlueprintEvent|Const) // @ game+0xda05cc
	void K2_RemoveGameplayCue(struct FGameplayTag GameplayCueTag); // Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue // (Native|Protected|BlueprintCallable) // @ game+0x5d15b5c
	void K2_OnEndAbility(bool bWasCancelled); // Function GameplayAbilities.GameplayAbility.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	bool K2_HasAuthority(); // Function GameplayAbilities.GameplayAbility.K2_HasAuthority // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x5d15b40
	void K2_ExecuteGameplayCueWithParams(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameters); // Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams // (Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x5d15a4c
	void K2_ExecuteGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayEffectContextHandle Context); // Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue // (Native|Protected|BlueprintCallable) // @ game+0x5d15914
	void K2_EndAbilityLocally(); // Function GameplayAbilities.GameplayAbility.K2_EndAbilityLocally // (Native|Protected|BlueprintCallable) // @ game+0x5d158fc
	void K2_EndAbility(); // Function GameplayAbilities.GameplayAbility.K2_EndAbility // (Native|Protected|BlueprintCallable) // @ game+0x5d158e4
	void K2_CommitExecute(); // Function GameplayAbilities.GameplayAbility.K2_CommitExecute // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	bool K2_CommitAbilityCost(bool BroadcastCommitEvent); // Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost // (Native|Public|BlueprintCallable) // @ game+0x5d1584c
	bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown); // Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown // (Native|Public|BlueprintCallable) // @ game+0x5d15770
	bool K2_CommitAbility(); // Function GameplayAbilities.GameplayAbility.K2_CommitAbility // (Native|Public|BlueprintCallable) // @ game+0x5d15748
	bool K2_CheckAbilityCost(); // Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost // (Native|Public|BlueprintCallable) // @ game+0x5d15720
	bool K2_CheckAbilityCooldown(); // Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown // (Native|Public|BlueprintCallable) // @ game+0x2318420
	void K2_CancelAbility(); // Function GameplayAbilities.GameplayAbility.K2_CancelAbility // (Final|Native|Public|BlueprintCallable) // @ game+0x5d156d0
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer& RelevantTags); // Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility // (Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0xda05cc
	struct TArray<struct FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle EffectSpecHandle, struct FGameplayAbilityTargetDataHandle TargetData); // Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget // (Final|Native|Protected|BlueprintCallable) // @ game+0x5d15554
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(struct FGameplayEffectSpecHandle EffectSpecHandle); // Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner // (Final|Native|Protected|BlueprintCallable) // @ game+0x5d15468
	void K2_AddGameplayCueWithParams(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd); // Function GameplayAbilities.GameplayAbility.K2_AddGameplayCueWithParams // (Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x5d15334
	void K2_AddGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayEffectContextHandle Context, bool bRemoveOnAbilityEnd); // Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue // (Native|Protected|BlueprintCallable) // @ game+0x5d151c0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void K2_ActivateAbility(); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	bool IsLocallyControlled(); // Function GameplayAbilities.GameplayAbility.IsLocallyControlled // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x5d1519c
	void InvalidateClientPredictionKey(); // Function GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x5d15188
	struct UObject* GetSourceObject_BP(struct FGameplayAbilitySpecHandle Handle, struct FGameplayAbilityActorInfo& ActorInfo); // Function GameplayAbilities.GameplayAbility.GetSourceObject_BP // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d15090
	struct USkeletalMeshComponent* GetOwningComponentFromActorInfo(); // Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d1501c
	struct AActor* GetOwningActorFromActorInfo(); // Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d14ff8
	struct FGameplayEffectContextHandle GetGrantedByEffectContext(); // Function GameplayAbilities.GameplayAbility.GetGrantedByEffectContext // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d14f18
	struct UObject* GetCurrentSourceObject(); // Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d14e94
	struct UAnimMontage* GetCurrentMontage(); // Function GameplayAbilities.GameplayAbility.GetCurrentMontage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d14e7c
	float GetCooldownTimeRemaining(); // Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d14e40
	struct FGameplayEffectContextHandle GetContextFromOwner(struct FGameplayAbilityTargetDataHandle OptionalTargetData); // Function GameplayAbilities.GameplayAbility.GetContextFromOwner // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d14d4c
	struct AActor* GetAvatarActorFromActorInfo(); // Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d14d28
	struct FGameplayAbilityActorInfo GetActorInfo(); // Function GameplayAbilities.GameplayAbility.GetActorInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d14cc4
	struct UAbilitySystemComponent* GetAbilitySystemComponentFromActorInfo(); // Function GameplayAbilities.GameplayAbility.GetAbilitySystemComponentFromActorInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d14ca0
	int32_t GetAbilityLevel_BP(struct FGameplayAbilitySpecHandle Handle, struct FGameplayAbilityActorInfo& ActorInfo); // Function GameplayAbilities.GameplayAbility.GetAbilityLevel_BP // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d14ba4
	int32_t GetAbilityLevel(); // Function GameplayAbilities.GameplayAbility.GetAbilityLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d14b80
	void EndTaskByInstanceName(struct FName InstanceName); // Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName // (Final|Native|Protected|BlueprintCallable) // @ game+0x5d14b00
	void EndAbilityState(struct FName OptionalStateNameToEnd); // Function GameplayAbilities.GameplayAbility.EndAbilityState // (Final|Native|Protected|BlueprintCallable) // @ game+0x5d14a80
	void ConfirmTaskByInstanceName(struct FName InstanceName, bool bEndTask); // Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName // (Final|Native|Protected|BlueprintCallable) // @ game+0x5d148ac
	void CancelTaskByInstanceName(struct FName InstanceName); // Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName // (Final|Native|Protected|BlueprintCallable) // @ game+0x5d1482c
	void BP_RemoveGameplayEffectFromOwnerWithHandle(struct FActiveGameplayEffectHandle Handle, int32_t StacksToRemove); // Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithHandle // (Final|Native|Protected|BlueprintCallable) // @ game+0x5d14750
	void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(struct FGameplayTagContainer WithGrantedTags, int32_t StacksToRemove); // Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags // (Final|Native|Protected|BlueprintCallable) // @ game+0x5d1464c
	void BP_RemoveGameplayEffectFromOwnerWithAssetTags(struct FGameplayTagContainer WithAssetTags, int32_t StacksToRemove); // Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags // (Final|Native|Protected|BlueprintCallable) // @ game+0x5d14548
	struct TArray<struct FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(struct FGameplayAbilityTargetDataHandle TargetData, struct UGameplayEffect* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks); // Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget // (Final|Native|Protected|BlueprintCallable) // @ game+0x5d1434c
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(struct UGameplayEffect* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks); // Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner // (Final|Native|Protected|BlueprintCallable) // @ game+0x5d14248
};

// Class GameplayAbilities.GameplayAbilityBlueprint
// Size: 0xa8 (Inherited: 0xa8)
struct UGameplayAbilityBlueprint : UBlueprint {
};

// Class GameplayAbilities.GameplayAbilitySet
// Size: 0x40 (Inherited: 0x30)
struct UGameplayAbilitySet : UDataAsset {
	struct TArray<struct FGameplayAbilityBindInfo> Abilities; // 0x30(0x10)
};

// Class GameplayAbilities.GameplayAbilityTargetActor
// Size: 0x3d0 (Inherited: 0x288)
struct AGameplayAbilityTargetActor : AActor {
	bool ShouldProduceTargetDataOnServer; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct FGameplayAbilityTargetingLocationInfo StartLocation; // 0x290(0xa0)
	char pad_330[0x30]; // 0x330(0x30)
	struct APlayerController* MasterPC; // 0x360(0x08)
	struct UGameplayAbility* OwningAbility; // 0x368(0x08)
	bool bDestroyOnConfirmation; // 0x370(0x01)
	char pad_371[0x7]; // 0x371(0x07)
	struct AActor* SourceActor; // 0x378(0x08)
	struct FWorldReticleParameters ReticleParams; // 0x380(0x18)
	struct AGameplayAbilityWorldReticle* ReticleClass; // 0x398(0x08)
	struct FGameplayTargetDataFilterHandle Filter; // 0x3a0(0x10)
	bool bDebug; // 0x3b0(0x01)
	char pad_3B1[0x17]; // 0x3b1(0x17)
	struct UAbilitySystemComponent* GenericDelegateBoundASC; // 0x3c8(0x08)

	void ConfirmTargeting(); // Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting // (Native|Public) // @ game+0x2133fe0
	void CancelTargeting(); // Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting // (Native|Public) // @ game+0x1651d1c
};

// Class GameplayAbilities.GameplayAbilityTargetActor_Trace
// Size: 0x3f0 (Inherited: 0x3d0)
struct AGameplayAbilityTargetActor_Trace : AGameplayAbilityTargetActor {
	float MaxRange; // 0x3d0(0x04)
	struct FCollisionProfileName TraceProfile; // 0x3d4(0x04)
	bool bTraceAffectsAimPitch; // 0x3d8(0x01)
	char pad_3D9[0x17]; // 0x3d9(0x17)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
// Size: 0x410 (Inherited: 0x3f0)
struct AGameplayAbilityTargetActor_GroundTrace : AGameplayAbilityTargetActor_Trace {
	float CollisionRadius; // 0x3e8(0x04)
	float CollisionHeight; // 0x3ec(0x04)
	char pad_3F8[0x18]; // 0x3f8(0x18)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
// Size: 0x420 (Inherited: 0x410)
struct AGameplayAbilityTargetActor_ActorPlacement : AGameplayAbilityTargetActor_GroundTrace {
	struct UObject* PlacedActorClass; // 0x408(0x08)
	struct UMaterialInterface* PlacedActorMaterial; // 0x410(0x08)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_Radius
// Size: 0x3e0 (Inherited: 0x3d0)
struct AGameplayAbilityTargetActor_Radius : AGameplayAbilityTargetActor {
	float Radius; // 0x3d0(0x04)
	char pad_3D4[0xc]; // 0x3d4(0x0c)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
// Size: 0x3f0 (Inherited: 0x3f0)
struct AGameplayAbilityTargetActor_SingleLineTrace : AGameplayAbilityTargetActor_Trace {
};

// Class GameplayAbilities.GameplayAbilityWorldReticle
// Size: 0x2b8 (Inherited: 0x288)
struct AGameplayAbilityWorldReticle : AActor {
	struct FWorldReticleParameters Parameters; // 0x288(0x18)
	bool bFaceOwnerFlat; // 0x2a0(0x01)
	bool bSnapToTargetedActor; // 0x2a1(0x01)
	bool bIsTargetValid; // 0x2a2(0x01)
	bool bIsTargetAnActor; // 0x2a3(0x01)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct APlayerController* MasterPC; // 0x2a8(0x08)
	struct AActor* TargetingActor; // 0x2b0(0x08)

	void SetReticleMaterialParamVector(struct FName ParamName, struct FVector Value); // Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector // (Event|Public|HasDefaults|BlueprintEvent) // @ game+0xda05cc
	void SetReticleMaterialParamFloat(struct FName ParamName, float Value); // Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnValidTargetChanged(bool bNewValue); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnTargetingAnActor(bool bNewValue); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnParametersInitialized(); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void FaceTowardSource(bool bFaceIn2D); // Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource // (Final|Native|Public|BlueprintCallable) // @ game+0x5d17ab0
};

// Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
// Size: 0x2d0 (Inherited: 0x2b8)
struct AGameplayAbilityWorldReticle_ActorVisualization : AGameplayAbilityWorldReticle {
	struct UCapsuleComponent* CollisionComponent; // 0x2b8(0x08)
	struct TArray<struct UActorComponent*> VisualizationComponents; // 0x2c0(0x10)
};

// Class GameplayAbilities.GameplayAbility_CharacterJump
// Size: 0x3b8 (Inherited: 0x3b8)
struct UGameplayAbility_CharacterJump : UGameplayAbility {
};

// Class GameplayAbilities.GameplayAbility_Montage
// Size: 0x3e8 (Inherited: 0x3b8)
struct UGameplayAbility_Montage : UGameplayAbility {
	struct UAnimMontage* MontageToPlay; // 0x3b8(0x08)
	float PlayRate; // 0x3c0(0x04)
	struct FName SectionName; // 0x3c4(0x04)
	struct TArray<struct UGameplayEffect*> GameplayEffectClassesWhileAnimating; // 0x3c8(0x10)
	struct TArray<struct UGameplayEffect*> GameplayEffectsWhileAnimating; // 0x3d8(0x10)
};

// Class GameplayAbilities.GameplayCueFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGameplayCueFunctionLibrary : UBlueprintFunctionLibrary {

	void RemoveGameplayCueOnActor(struct AActor* Target, struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueFunctionLibrary.RemoveGameplayCueOnActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5d17c3c
	struct FGameplayCueParameters MakeGameplayCueParametersFromHitResult(struct FHitResult& HitResult); // Function GameplayAbilities.GameplayCueFunctionLibrary.MakeGameplayCueParametersFromHitResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5d17b30
	void ExecuteGameplayCueOnActor(struct AActor* Target, struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueFunctionLibrary.ExecuteGameplayCueOnActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x21da348
	void AddGameplayCueOnActor(struct AActor* Target, struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueFunctionLibrary.AddGameplayCueOnActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5d17930
};

// Class GameplayAbilities.GameplayCueInterface
// Size: 0x28 (Inherited: 0x28)
struct UGameplayCueInterface : UInterface {

	void ForwardGameplayCueToParent(); // Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent // (BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1ff14f4
	void BlueprintCustomHandler(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
};

// Class GameplayAbilities.GameplayCueManager
// Size: 0x310 (Inherited: 0x30)
struct UGameplayCueManager : UDataAsset {
	char pad_30[0x18]; // 0x30(0x18)
	struct FGameplayCueObjectLibrary RuntimeGameplayCueObjectLibrary; // 0x48(0x50)
	struct FGameplayCueObjectLibrary EditorGameplayCueObjectLibrary; // 0x98(0x50)
	char pad_E8[0x1c8]; // 0xe8(0x1c8)
	struct TArray<struct UObject*> LoadedGameplayCueNotifyClasses; // 0x2b0(0x10)
	struct TArray<struct AGameplayCueNotify_Actor*> GameplayCueClassesForPreallocation; // 0x2c0(0x10)
	struct TArray<struct FGameplayCuePendingExecute> PendingExecuteCues; // 0x2d0(0x10)
	int32_t GameplayCueSendContextCount; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct TArray<struct FPreallocationInfo> PreallocationInfoList_Internal; // 0x2e8(0x10)
	char pad_2F8[0x18]; // 0x2f8(0x18)
};

// Class GameplayAbilities.GameplayCueNotify_Actor
// Size: 0x2e0 (Inherited: 0x288)
struct AGameplayCueNotify_Actor : AActor {
	bool bAutoDestroyOnRemove; // 0x288(0x01)
	char pad_289[0x3]; // 0x289(0x03)
	float AutoDestroyDelay; // 0x28c(0x04)
	bool WarnIfTimelineIsStillRunning; // 0x290(0x01)
	bool WarnIfLatentActionIsStillRunning; // 0x291(0x01)
	char pad_292[0x2]; // 0x292(0x02)
	struct FGameplayTag GameplayCueTag; // 0x294(0x04)
	struct FName GameplayCueName; // 0x298(0x04)
	bool bAutoAttachToOwner; // 0x29c(0x01)
	bool IsOverride; // 0x29d(0x01)
	bool bUniqueInstancePerInstigator; // 0x29e(0x01)
	bool bUniqueInstancePerSourceObject; // 0x29f(0x01)
	bool bAllowMultipleOnActiveEvents; // 0x2a0(0x01)
	bool bAllowMultipleWhileActiveEvents; // 0x2a1(0x01)
	char pad_2A2[0x2]; // 0x2a2(0x02)
	int32_t NumPreallocatedInstances; // 0x2a4(0x04)
	char pad_2A8[0x38]; // 0x2a8(0x38)

	bool WhileActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xe7dbf8
	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xe7e2fc
	void OnOwnerDestroyed(struct AActor* DestroyedActor); // Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed // (Native|Public) // @ game+0x208aac0
	bool OnExecute(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1e18528
	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.OnActive // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xf9ac94
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void K2_EndGameplayCue(); // Function GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue // (Native|Public|BlueprintCallable) // @ game+0x5d18b50
};

// Class GameplayAbilities.GameplayCueNotify_Static
// Size: 0x38 (Inherited: 0x28)
struct UGameplayCueNotify_Static : UObject {
	struct FGameplayTag GameplayCueTag; // 0x28(0x04)
	struct FName GameplayCueName; // 0x2c(0x04)
	bool IsOverride; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)

	bool WhileActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.WhileActive // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x209d204
	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.OnRemove // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x20eafec
	bool OnExecute(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.OnExecute // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1bc1ea0
	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.OnActive // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2094138
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0xda05cc
};

// Class GameplayAbilities.GameplayCueNotify_Burst
// Size: 0x338 (Inherited: 0x38)
struct UGameplayCueNotify_Burst : UGameplayCueNotify_Static {
	struct FGameplayCueNotify_SpawnCondition DefaultSpawnCondition; // 0x38(0x38)
	struct FGameplayCueNotify_PlacementInfo DefaultPlacementInfo; // 0x70(0x40)
	struct FGameplayCueNotify_BurstEffects BurstEffects; // 0xb0(0x288)

	void OnBurst(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GameplayAbilities.GameplayCueNotify_Burst.OnBurst // (Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0xda05cc
};

// Class GameplayAbilities.GameplayCueNotify_BurstLatent
// Size: 0x638 (Inherited: 0x2e0)
struct AGameplayCueNotify_BurstLatent : AGameplayCueNotify_Actor {
	struct FGameplayCueNotify_SpawnCondition DefaultSpawnCondition; // 0x2e0(0x38)
	struct FGameplayCueNotify_PlacementInfo DefaultPlacementInfo; // 0x318(0x40)
	struct FGameplayCueNotify_BurstEffects BurstEffects; // 0x358(0x288)
	struct FGameplayCueNotify_SpawnResult BurstSpawnResults; // 0x5e0(0x58)

	void OnBurst(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GameplayAbilities.GameplayCueNotify_BurstLatent.OnBurst // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
};

// Class GameplayAbilities.GameplayCueNotify_HitImpact
// Size: 0x48 (Inherited: 0x38)
struct UGameplayCueNotify_HitImpact : UGameplayCueNotify_Static {
	struct USoundBase* sound; // 0x38(0x08)
	struct UParticleSystem* ParticleSystem; // 0x40(0x08)
};

// Class GameplayAbilities.GameplayCueNotify_Looping
// Size: 0xe38 (Inherited: 0x2e0)
struct AGameplayCueNotify_Looping : AGameplayCueNotify_Actor {
	struct FGameplayCueNotify_SpawnCondition DefaultSpawnCondition; // 0x2e0(0x38)
	struct FGameplayCueNotify_PlacementInfo DefaultPlacementInfo; // 0x318(0x40)
	struct FGameplayCueNotify_BurstEffects ApplicationEffects; // 0x358(0x288)
	struct FGameplayCueNotify_SpawnResult ApplicationSpawnResults; // 0x5e0(0x58)
	struct FGameplayCueNotify_LoopingEffects LoopingEffects; // 0x638(0x1e0)
	struct FGameplayCueNotify_SpawnResult LoopingSpawnResults; // 0x818(0x58)
	struct FGameplayCueNotify_BurstEffects RecurringEffects; // 0x870(0x288)
	struct FGameplayCueNotify_SpawnResult RecurringSpawnResults; // 0xaf8(0x58)
	struct FGameplayCueNotify_BurstEffects RemovalEffects; // 0xb50(0x288)
	struct FGameplayCueNotify_SpawnResult RemovalSpawnResults; // 0xdd8(0x58)
	char pad_E30[0x8]; // 0xe30(0x08)

	void OnRemoval(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GameplayAbilities.GameplayCueNotify_Looping.OnRemoval // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnRecurring(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GameplayAbilities.GameplayCueNotify_Looping.OnRecurring // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnLoopingStart(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GameplayAbilities.GameplayCueNotify_Looping.OnLoopingStart // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnApplication(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GameplayAbilities.GameplayCueNotify_Looping.OnApplication // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
};

// Class GameplayAbilities.GameplayCueSet
// Size: 0x90 (Inherited: 0x30)
struct UGameplayCueSet : UDataAsset {
	struct TArray<struct FGameplayCueNotifyData> GameplayCueData; // 0x30(0x10)
	char pad_40[0x50]; // 0x40(0x50)
};

// Class GameplayAbilities.GameplayCueTranslator
// Size: 0x28 (Inherited: 0x28)
struct UGameplayCueTranslator : UObject {
};

// Class GameplayAbilities.GameplayCueTranslator_Test
// Size: 0x28 (Inherited: 0x28)
struct UGameplayCueTranslator_Test : UGameplayCueTranslator {
};

// Class GameplayAbilities.GameplayEffect
// Size: 0x858 (Inherited: 0x28)
struct UGameplayEffect : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	enum class EGameplayEffectDurationType DurationPolicy; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FGameplayEffectModifierMagnitude DurationMagnitude; // 0x38(0x1d8)
	struct FScalableFloat Period; // 0x210(0x28)
	bool bExecutePeriodicEffectOnApplication; // 0x238(0x01)
	enum class EGameplayEffectPeriodInhibitionRemovedPolicy PeriodicInhibitionPolicy; // 0x239(0x01)
	char pad_23A[0x6]; // 0x23a(0x06)
	struct TArray<struct FGameplayModifierInfo> Modifiers; // 0x240(0x10)
	struct TArray<struct FGameplayEffectExecutionDefinition> Executions; // 0x250(0x10)
	struct FScalableFloat ChanceToApplyToTarget; // 0x260(0x28)
	struct TArray<struct UGameplayEffectCustomApplicationRequirement*> ApplicationRequirements; // 0x288(0x10)
	struct TArray<struct UGameplayEffect*> TargetEffectClasses; // 0x298(0x10)
	struct TArray<struct FConditionalGameplayEffect> ConditionalGameplayEffects; // 0x2a8(0x10)
	struct TArray<struct UGameplayEffect*> OverflowEffects; // 0x2b8(0x10)
	bool bDenyOverflowApplication; // 0x2c8(0x01)
	bool bClearStackOnOverflow; // 0x2c9(0x01)
	char pad_2CA[0x6]; // 0x2ca(0x06)
	struct TArray<struct UGameplayEffect*> PrematureExpirationEffectClasses; // 0x2d0(0x10)
	struct TArray<struct UGameplayEffect*> RoutineExpirationEffectClasses; // 0x2e0(0x10)
	bool bRequireModifierSuccessToTriggerCues; // 0x2f0(0x01)
	bool bSuppressStackingCues; // 0x2f1(0x01)
	char pad_2F2[0x6]; // 0x2f2(0x06)
	struct TArray<struct FGameplayEffectCue> GameplayCues; // 0x2f8(0x10)
	struct UGameplayEffectUIData* UIData; // 0x308(0x08)
	struct FInheritedTagContainer InheritableGameplayEffectTags; // 0x310(0x60)
	struct FInheritedTagContainer InheritableOwnedTagsContainer; // 0x370(0x60)
	struct FInheritedTagContainer InheritableBlockedAbilityTagsContainer; // 0x3d0(0x60)
	struct FGameplayTagRequirements OngoingTagRequirements; // 0x430(0x40)
	struct FGameplayTagRequirements ApplicationTagRequirements; // 0x470(0x40)
	struct FGameplayTagRequirements RemovalTagRequirements; // 0x4b0(0x40)
	struct FInheritedTagContainer RemoveGameplayEffectsWithTags; // 0x4f0(0x60)
	struct FGameplayTagRequirements GrantedApplicationImmunityTags; // 0x550(0x40)
	struct FGameplayEffectQuery GrantedApplicationImmunityQuery; // 0x590(0x150)
	char pad_6E0[0x8]; // 0x6e0(0x08)
	struct FGameplayEffectQuery RemoveGameplayEffectQuery; // 0x6e8(0x150)
	char pad_838[0x1]; // 0x838(0x01)
	enum class EGameplayEffectStackingType StackingType; // 0x839(0x01)
	char pad_83A[0x2]; // 0x83a(0x02)
	int32_t StackLimitCount; // 0x83c(0x04)
	enum class EGameplayEffectStackingDurationPolicy StackDurationRefreshPolicy; // 0x840(0x01)
	enum class EGameplayEffectStackingPeriodPolicy StackPeriodResetPolicy; // 0x841(0x01)
	enum class EGameplayEffectStackingExpirationPolicy StackExpirationPolicy; // 0x842(0x01)
	char pad_843[0x5]; // 0x843(0x05)
	struct TArray<struct FGameplayAbilitySpecDef> GrantedAbilities; // 0x848(0x10)
};

// Class GameplayAbilities.GameplayEffectCalculation
// Size: 0x38 (Inherited: 0x28)
struct UGameplayEffectCalculation : UObject {
	struct TArray<struct FGameplayEffectAttributeCaptureDefinition> RelevantAttributesToCapture; // 0x28(0x10)
};

// Class GameplayAbilities.GameplayEffectCustomApplicationRequirement
// Size: 0x28 (Inherited: 0x28)
struct UGameplayEffectCustomApplicationRequirement : UObject {

	bool CanApplyGameplayEffect(struct UGameplayEffect* GameplayEffect, struct FGameplayEffectSpec& Spec, struct UAbilitySystemComponent* ASC); // Function GameplayAbilities.GameplayEffectCustomApplicationRequirement.CanApplyGameplayEffect // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x5d1cf78
};

// Class GameplayAbilities.GameplayEffectExecutionCalculation
// Size: 0x40 (Inherited: 0x38)
struct UGameplayEffectExecutionCalculation : UGameplayEffectCalculation {
	bool bRequiresPassedInTags; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	void Execute(struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput& OutExecutionOutput); // Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x5d1d0dc
};

// Class GameplayAbilities.GameplayEffectUIData
// Size: 0x28 (Inherited: 0x28)
struct UGameplayEffectUIData : UObject {
};

// Class GameplayAbilities.GameplayEffectUIData_TextOnly
// Size: 0x40 (Inherited: 0x28)
struct UGameplayEffectUIData_TextOnly : UGameplayEffectUIData {
	struct FText Description; // 0x28(0x18)
};

// Class GameplayAbilities.GameplayModMagnitudeCalculation
// Size: 0x40 (Inherited: 0x38)
struct UGameplayModMagnitudeCalculation : UGameplayEffectCalculation {
	bool bAllowNonNetAuthorityDependencyRegistration; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	float K2_GetCapturedAttributeMagnitude(struct FGameplayEffectSpec& EffectSpec, struct FGameplayAttribute Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags); // Function GameplayAbilities.GameplayModMagnitudeCalculation.K2_GetCapturedAttributeMagnitude // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x5d1d9d4
	struct FGameplayTagContainer GetTargetSpecTags(struct FGameplayEffectSpec& EffectSpec); // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetSpecTags // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x5d1d908
	struct FGameplayTagContainer GetTargetAggregatedTags(struct FGameplayEffectSpec& EffectSpec); // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetAggregatedTags // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x5d1d7d8
	struct FGameplayTagContainer GetTargetActorTags(struct FGameplayEffectSpec& EffectSpec); // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetActorTags // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x5d1d70c
	struct FGameplayTagContainer GetSourceSpecTags(struct FGameplayEffectSpec& EffectSpec); // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceSpecTags // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x5d1d640
	struct FGameplayTagContainer GetSourceAggregatedTags(struct FGameplayEffectSpec& EffectSpec); // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceAggregatedTags // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x5d1d510
	struct FGameplayTagContainer GetSourceActorTags(struct FGameplayEffectSpec& EffectSpec); // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceActorTags // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x5d1d448
	float GetSetByCallerMagnitudeByTag(struct FGameplayEffectSpec& EffectSpec, struct FGameplayTag& tag); // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSetByCallerMagnitudeByTag // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x5d1d32c
	float GetSetByCallerMagnitudeByName(struct FGameplayEffectSpec& EffectSpec, struct FName& MagnitudeName); // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSetByCallerMagnitudeByName // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x5d1d210
	float CalculateBaseMagnitude(struct FGameplayEffectSpec& Spec); // Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x5d1ceac
};

// Class GameplayAbilities.GameplayTagReponseTable
// Size: 0x1e8 (Inherited: 0x30)
struct UGameplayTagReponseTable : UDataAsset {
	struct TArray<struct FGameplayTagResponseTableEntry> Entries; // 0x30(0x10)
	char pad_40[0x1a8]; // 0x40(0x1a8)

	void TagResponseEvent(struct FGameplayTag tag, int32_t NewCount, struct UAbilitySystemComponent* ASC, int32_t idx); // Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent // (Final|Native|Protected) // @ game+0x5d1dc50
};

// Class GameplayAbilities.MovieSceneGameplayCueTriggerSection
// Size: 0x1d8 (Inherited: 0x108)
struct UMovieSceneGameplayCueTriggerSection : UMovieSceneHookSection {
	struct FMovieSceneGameplayCueChannel Channel; // 0x108(0xd0)
};

// Class GameplayAbilities.MovieSceneGameplayCueSection
// Size: 0x190 (Inherited: 0x108)
struct UMovieSceneGameplayCueSection : UMovieSceneHookSection {
	struct FMovieSceneGameplayCueKey Cue; // 0x108(0x88)
};

// Class GameplayAbilities.MovieSceneGameplayCueTrack
// Size: 0xa8 (Inherited: 0x98)
struct UMovieSceneGameplayCueTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x98(0x10)

	void SetSequencerTrackHandler(struct FDelegate InGameplayCueTrackHandler); // Function GameplayAbilities.MovieSceneGameplayCueTrack.SetSequencerTrackHandler // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d4c410
};

// Class GameplayAbilities.TickableAttributeSetInterface
// Size: 0x28 (Inherited: 0x28)
struct UTickableAttributeSetInterface : UInterface {
};

