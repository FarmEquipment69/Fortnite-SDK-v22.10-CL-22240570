// Class GameplayTags.BlueprintGameplayTagLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBlueprintGameplayTagLibrary : UBlueprintFunctionLibrary {

	bool RemoveGameplayTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag tag); // Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x920b620
	bool NotEqual_TagTag(struct FGameplayTag A, struct FString B); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x920b478
	bool NotEqual_TagContainerTagContainer(struct FGameplayTagContainer A, struct FString B); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x920b124
	bool NotEqual_GameplayTagContainer(struct FGameplayTagContainer& A, struct FGameplayTagContainer& B); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x920afe4
	bool NotEqual_GameplayTag(struct FGameplayTag A, struct FGameplayTag B); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2236c90
	bool MatchesTag(struct FGameplayTag TagOne, struct FGameplayTag TagTwo, bool bExactMatch); // Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1ef2a5c
	bool MatchesAnyTags(struct FGameplayTag TagOne, struct FGameplayTagContainer& OtherContainer, bool bExactMatch); // Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x920ae90
	struct FGameplayTagContainer MakeLiteralGameplayTagContainer(struct FGameplayTagContainer Value); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2222390
	struct FGameplayTag MakeLiteralGameplayTag(struct FGameplayTag Value); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x74051f4
	struct FGameplayTagQuery MakeGameplayTagQuery(struct FGameplayTagQuery TagQuery); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x12450a0
	struct FGameplayTagContainer MakeGameplayTagContainerFromTag(struct FGameplayTag SingleTag); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x24748c8
	struct FGameplayTagContainer MakeGameplayTagContainerFromArray(struct TArray<struct FGameplayTag>& GameplayTags); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x920adc4
	bool IsTagQueryEmpty(struct FGameplayTagQuery& TagQuery); // Function GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x920acd4
	bool IsGameplayTagValid(struct FGameplayTag GameplayTag); // Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1ee8dc0
	bool HasTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag tag, bool bExactMatch); // Function GameplayTags.BlueprintGameplayTagLibrary.HasTag // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1853104
	bool HasAnyTags(struct FGameplayTagContainer& TagContainer, struct FGameplayTagContainer& OtherContainer, bool bExactMatch); // Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1852f20
	bool HasAllTags(struct FGameplayTagContainer& TagContainer, struct FGameplayTagContainer& OtherContainer, bool bExactMatch); // Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x920aaec
	bool HasAllMatchingGameplayTags(struct TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface, struct FGameplayTagContainer& OtherContainer); // Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x920a9e0
	struct FName GetTagName(struct FGameplayTag& GameplayTag); // Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x2438630
	int32_t GetNumGameplayTagsInContainer(struct FGameplayTagContainer& TagContainer); // Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x920a860
	struct FString GetDebugStringFromGameplayTagContainer(struct FGameplayTagContainer& TagContainer); // Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x920a534
	struct FString GetDebugStringFromGameplayTag(struct FGameplayTag GameplayTag); // Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5f89550
	void GetAllActorsOfClassMatchingTagQuery(struct UObject* WorldContextObject, struct AActor* ActorClass, struct FGameplayTagQuery& GameplayTagQuery, struct TArray<struct AActor*>& OutActors); // Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x920a08c
	bool EqualEqual_GameplayTagContainer(struct FGameplayTagContainer& A, struct FGameplayTagContainer& B); // Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x9209f4c
	bool EqualEqual_GameplayTag(struct FGameplayTag A, struct FGameplayTag B); // Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5f896b8
	bool DoesTagAssetInterfaceHaveTag(struct TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface, struct FGameplayTag tag); // Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9209e7c
	bool DoesContainerMatchTagQuery(struct FGameplayTagContainer& TagContainer, struct FGameplayTagQuery& TagQuery); // Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x9209d04
	void BreakGameplayTagContainer(struct FGameplayTagContainer& GameplayTagContainer, struct TArray<struct FGameplayTag>& GameplayTags); // Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x9209be8
	void AppendGameplayTagContainers(struct FGameplayTagContainer& InOutTagContainer, struct FGameplayTagContainer& InTagContainer); // Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9209ab8
	void AddGameplayTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag tag); // Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x92099c8
};

// Class GameplayTags.GameplayTagAssetInterface
// Size: 0x28 (Inherited: 0x28)
struct UGameplayTagAssetInterface : UInterface {

	bool HasMatchingGameplayTag(struct FGameplayTag TagToCheck); // Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x23a9dec
	bool HasAnyMatchingGameplayTags(struct FGameplayTagContainer& TagContainer); // Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x22ecd3c
	bool HasAllMatchingGameplayTags(struct FGameplayTagContainer& TagContainer); // Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x920a918
	void GetOwnedGameplayTags(struct FGameplayTagContainer& TagContainer); // Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x20e4440
};

// Class GameplayTags.EditableGameplayTagQuery
// Size: 0x98 (Inherited: 0x28)
struct UEditableGameplayTagQuery : UObject {
	struct FString UserDescription; // 0x28(0x10)
	char pad_38[0x10]; // 0x38(0x10)
	struct UEditableGameplayTagQueryExpression* RootExpression; // 0x48(0x08)
	struct FGameplayTagQuery TagQueryExportText_Helper; // 0x50(0x48)
};

// Class GameplayTags.EditableGameplayTagQueryExpression
// Size: 0x28 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression : UObject {
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
// Size: 0x48 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_AnyTagsMatch : UEditableGameplayTagQueryExpression {
	struct FGameplayTagContainer Tags; // 0x28(0x20)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
// Size: 0x48 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_AllTagsMatch : UEditableGameplayTagQueryExpression {
	struct FGameplayTagContainer Tags; // 0x28(0x20)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
// Size: 0x48 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_NoTagsMatch : UEditableGameplayTagQueryExpression {
	struct FGameplayTagContainer Tags; // 0x28(0x20)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
// Size: 0x38 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_AnyExprMatch : UEditableGameplayTagQueryExpression {
	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions; // 0x28(0x10)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
// Size: 0x38 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_AllExprMatch : UEditableGameplayTagQueryExpression {
	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions; // 0x28(0x10)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
// Size: 0x38 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_NoExprMatch : UEditableGameplayTagQueryExpression {
	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions; // 0x28(0x10)
};

// Class GameplayTags.GameplayTagsManager
// Size: 0x248 (Inherited: 0x28)
struct UGameplayTagsManager : UObject {
	char pad_28[0x138]; // 0x28(0x138)
	struct TMap<struct FName, struct FGameplayTagSource> TagSources; // 0x160(0x50)
	char pad_1B0[0x88]; // 0x1b0(0x88)
	struct TArray<struct UDataTable*> GameplayTagTables; // 0x238(0x10)
};

// Class GameplayTags.GameplayTagsList
// Size: 0x48 (Inherited: 0x28)
struct UGameplayTagsList : UObject {
	struct FString ConfigFileName; // 0x28(0x10)
	struct TArray<struct FGameplayTagTableRow> GameplayTagList; // 0x38(0x10)
};

// Class GameplayTags.RestrictedGameplayTagsList
// Size: 0x48 (Inherited: 0x28)
struct URestrictedGameplayTagsList : UObject {
	struct FString ConfigFileName; // 0x28(0x10)
	struct TArray<struct FRestrictedGameplayTagTableRow> RestrictedGameplayTagList; // 0x38(0x10)
};

// Class GameplayTags.GameplayTagsSettings
// Size: 0xb8 (Inherited: 0x48)
struct UGameplayTagsSettings : UGameplayTagsList {
	bool ImportTagsFromConfig; // 0x48(0x01)
	bool WarnOnInvalidTags; // 0x49(0x01)
	bool ClearInvalidTags; // 0x4a(0x01)
	bool FastReplication; // 0x4b(0x01)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString InvalidTagCharacters; // 0x50(0x10)
	struct TArray<struct FGameplayTagCategoryRemap> CategoryRemapping; // 0x60(0x10)
	struct TArray<struct FSoftObjectPath> GameplayTagTableList; // 0x70(0x10)
	struct TArray<struct FGameplayTagRedirect> GameplayTagRedirects; // 0x80(0x10)
	struct TArray<struct FName> CommonlyReplicatedTags; // 0x90(0x10)
	int32_t NumBitsForContainerSize; // 0xa0(0x04)
	int32_t NetIndexFirstBitSegment; // 0xa4(0x04)
	struct TArray<struct FRestrictedConfigInfo> RestrictedConfigFiles; // 0xa8(0x10)
};

// Class GameplayTags.GameplayTagsDeveloperSettings
// Size: 0x48 (Inherited: 0x30)
struct UGameplayTagsDeveloperSettings : UDeveloperSettings {
	struct FString DeveloperConfigName; // 0x30(0x10)
	struct FName FavoriteTagSource; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

