// Class CustomizableObject.CustomizableInstanceLODManagementBase
// Size: 0x28 (Inherited: 0x28)
struct UCustomizableInstanceLODManagementBase : UObject {
};

// Class CustomizableObject.CustomizableInstanceLODManagement
// Size: 0x88 (Inherited: 0x28)
struct UCustomizableInstanceLODManagement : UCustomizableInstanceLODManagementBase {
	char pad_28[0x60]; // 0x28(0x60)
};

// Class CustomizableObject.CustomizableInstancePrivateData
// Size: 0x298 (Inherited: 0x28)
struct UCustomizableInstancePrivateData : UObject {
	struct TArray<struct FGeneratedMaterial> GeneratedMaterials; // 0x28(0x10)
	struct TArray<struct FGeneratedTexture> GeneratedTextures; // 0x38(0x10)
	char pad_48[0x50]; // 0x48(0x50)
	struct TArray<struct FParameterDecorations> ParameterDecorations; // 0x98(0x10)
	char pad_A8[0x10]; // 0xa8(0x10)
	struct TMap<struct FString, struct TWeakObjectPtr<struct UTexture2D>> TextureReuseCache; // 0xb8(0x50)
	char pad_108[0x88]; // 0x108(0x88)
	struct TArray<struct FCustomizableInstanceComponentData> ComponentsData; // 0x190(0x10)
	struct TArray<struct UMaterialInterface*> ReferencedMaterials; // 0x1a0(0x10)
	char pad_1B0[0xa0]; // 0x1b0(0xa0)
	struct TArray<struct UPhysicsAsset*> ClothingPhysicsAssets; // 0x250(0x10)
	struct TArray<struct UAnimInstance*> GatheredAnimBPs; // 0x260(0x10)
	struct FGameplayTagContainer AnimBPGameplayTags; // 0x270(0x20)
	char pad_290[0x8]; // 0x290(0x08)
};

// Class CustomizableObject.MutableMaskOutCache
// Size: 0xc8 (Inherited: 0x28)
struct UMutableMaskOutCache : UObject {
	struct TMap<struct FString, struct FString> Materials; // 0x28(0x50)
	struct TMap<struct FString, struct FMaskOutTexture> Textures; // 0x78(0x50)
};

// Class CustomizableObject.CustomizableObjectBulk
// Size: 0x38 (Inherited: 0x28)
struct UCustomizableObjectBulk : UObject {
	struct TArray<struct FString> BulkDataFileNames; // 0x28(0x10)
};

// Class CustomizableObject.CustomizableObject
// Size: 0x3b0 (Inherited: 0x28)
struct UCustomizableObject : UObject {
	struct USkeletalMesh* ReferenceSkeletalMesh; // 0x28(0x08)
	struct TArray<struct USkeletalMesh*> ReferenceSkeletalMeshes; // 0x30(0x10)
	struct TArray<struct FMutableRefSkeletalMeshData> ReferenceSkeletalMeshesData; // 0x40(0x10)
	struct UStaticMesh* ReferenceStaticMesh; // 0x50(0x08)
	struct TArray<struct TSoftObjectPtr<UMaterialInterface>> ReferencedMaterials; // 0x58(0x10)
	struct TArray<struct FName> ReferencedMaterialSlotNames; // 0x68(0x10)
	struct TArray<struct TSoftObjectPtr<USkeleton>> ReferencedSkeletons; // 0x78(0x10)
	struct FMutableLODSettings LODSettings; // 0x88(0x10)
	struct TArray<struct FMutableModelImageProperties> ImageProperties; // 0x98(0x10)
	struct TArray<struct FMorphTargetInfo> ContributingMorphTargetsInfo; // 0xa8(0x10)
	struct TArray<struct FMorphTargetVertexData> MorphTargetReconstructionData; // 0xb8(0x10)
	struct TArray<struct FCustomizableObjectClothConfigData> ClothSharedConfigsData; // 0xc8(0x10)
	struct TArray<struct FCustomizableObjectClothingAssetData> ContributingClothingAssetsData; // 0xd8(0x10)
	struct TArray<struct FCustomizableObjectMeshToMeshVertData> ClothMeshToMeshVertData; // 0xe8(0x10)
	struct TArray<struct FMutableModelParameterProperties> ParameterProperties; // 0xf8(0x10)
	char pad_108[0x50]; // 0x108(0x50)
	struct TMap<struct FString, struct FParameterUIData> ParameterUIDataMap; // 0x158(0x50)
	struct TMap<struct FString, struct FParameterUIData> StateUIDataMap; // 0x1a8(0x50)
	struct TMap<struct FString, struct TSoftObjectPtr<UPhysicsAsset>> PhysicsAssetsMap; // 0x1f8(0x50)
	struct TMap<struct FString, struct TSoftClassPtr<UObject>> AnimBPAssetsMap; // 0x248(0x50)
	struct TSoftObjectPtr<UMutableMaskOutCache> MaskOutCache; // 0x298(0x28)
	struct TMap<uint64_t, struct FMutableStreamableBlock> HashToStreamableBlock; // 0x2c0(0x50)
	struct TArray<struct FString> CustomizableObjectClassTags; // 0x310(0x10)
	struct TArray<struct FString> PopulationClassTags; // 0x320(0x10)
	struct TMap<struct FString, struct FParameterTags> CustomizableObjectParametersTags; // 0x330(0x50)
	struct UMutableMaskOutCache* MaskOutCache_HardRef; // 0x380(0x08)
	struct FGuid Identifier; // 0x388(0x10)
	struct UCustomizableObjectBulk* BulkData; // 0x398(0x08)
	char pad_3A0[0x10]; // 0x3a0(0x10)

	void UnloadMaskOutCache(); // Function CustomizableObject.CustomizableObject.UnloadMaskOutCache // (Final|Native|Public|BlueprintCallable) // @ game+0x72e3a9c
	void LoadMaskOutCache(); // Function CustomizableObject.CustomizableObject.LoadMaskOutCache // (Final|Native|Public|BlueprintCallable) // @ game+0x72e3a44
	bool IsCompiled(); // Function CustomizableObject.CustomizableObject.IsCompiled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e3a24
	struct FParameterUIData GetStateUIMetadataFromIndex(int32_t StateIndex); // Function CustomizableObject.CustomizableObject.GetStateUIMetadataFromIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e3964
	struct FParameterUIData GetStateUIMetadata(struct FString StateName); // Function CustomizableObject.CustomizableObject.GetStateUIMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e37d0
	struct FString GetStateParameterName(struct FString StateName, int32_t ParameterIndex); // Function CustomizableObject.CustomizableObject.GetStateParameterName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e3520
	int32_t GetStateParameterCount(struct FString StateName); // Function CustomizableObject.CustomizableObject.GetStateParameterCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e33a4
	struct FString GetStateName(int32_t StateIndex); // Function CustomizableObject.CustomizableObject.GetStateName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e3300
	int32_t GetStateCount(); // Function CustomizableObject.CustomizableObject.GetStateCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e32e0
	struct FParameterUIData GetParameterUIMetadataFromIndex(int32_t ParamIndex); // Function CustomizableObject.CustomizableObject.GetParameterUIMetadataFromIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e3214
	struct FParameterUIData GetParameterUIMetadata(struct FString ParamName); // Function CustomizableObject.CustomizableObject.GetParameterUIMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e3080
	enum class EMutableParameterType GetParameterTypeByName(struct FString Name); // Function CustomizableObject.CustomizableObject.GetParameterTypeByName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e2f1c
	enum class EMutableParameterType GetParameterType(int32_t ParamIndex); // Function CustomizableObject.CustomizableObject.GetParameterType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e2e90
	struct FString GetParameterName(int32_t ParamIndex); // Function CustomizableObject.CustomizableObject.GetParameterName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e2dfc
	int32_t GetParameterDescriptionCount(struct FString ParamName); // Function CustomizableObject.CustomizableObject.GetParameterDescriptionCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e2c60
	int32_t GetParameterCount(); // Function CustomizableObject.CustomizableObject.GetParameterCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cb8bc8
	int32_t GetIntParameterNumOptions(int32_t ParamIndex); // Function CustomizableObject.CustomizableObject.GetIntParameterNumOptions // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e2bd4
	struct FString GetIntParameterAvailableOption(int32_t ParamIndex, int32_t K); // Function CustomizableObject.CustomizableObject.GetIntParameterAvailableOption // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e2b0c
	int32_t FindParameter(struct FString Name); // Function CustomizableObject.CustomizableObject.FindParameter // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e29a8
	struct UCustomizableObjectInstance* CreateInstance(); // Function CustomizableObject.CustomizableObject.CreateInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x72e2940
};

// Class CustomizableObject.DGGUI
// Size: 0x2c0 (Inherited: 0x2b8)
struct UDGGUI : UUserWidget {
	char pad_2B8[0x8]; // 0x2b8(0x08)

	void SetCustomizableSkeletalComponent(struct UCustomizableSkeletalComponent* CustomizableSkeletalComponent); // Function CustomizableObject.DGGUI.SetCustomizableSkeletalComponent // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	struct UCustomizableSkeletalComponent* GetCustomizableSkeletalComponent(); // Function CustomizableObject.DGGUI.GetCustomizableSkeletalComponent // (Event|Public|BlueprintEvent) // @ game+0xda05cc
};

// Class CustomizableObject.CustomizableObjectInstance
// Size: 0x220 (Inherited: 0x28)
struct UCustomizableObjectInstance : UObject {
	struct UCustomizableObject* CustomizableObject; // 0x28(0x08)
	struct TArray<struct USkeletalMesh*> SkeletalMeshes; // 0x30(0x10)
	struct TArray<struct FCustomizableObjectBoolParameterValue> BoolParameters; // 0x40(0x10)
	struct TArray<struct FCustomizableObjectIntParameterValue> IntParameters; // 0x50(0x10)
	struct TArray<struct FCustomizableObjectFloatParameterValue> FloatParameters; // 0x60(0x10)
	struct TArray<struct FCustomizableObjectTextureParameterValue> TextureParameters; // 0x70(0x10)
	struct TArray<struct FCustomizableObjectVectorParameterValue> VectorParameters; // 0x80(0x10)
	struct TArray<struct FCustomizableObjectProjectorParameterValue> ProjectorParameters; // 0x90(0x10)
	bool bBuildParameterDecorations; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FMulticastInlineDelegate UpdatedDelegate; // 0xa8(0x10)
	char pad_B8[0x60]; // 0xb8(0x60)
	struct FString SkeletalMeshStatus; // 0x118(0x10)
	char pad_128[0x98]; // 0x128(0x98)
	struct UCustomizableInstancePrivateData* PrivateData; // 0x1c0(0x08)
	char pad_1C8[0x8]; // 0x1c8(0x08)
	struct TMap<struct FName, struct FMultilayerProjector> MultilayerProjectors; // 0x1d0(0x50)

	void UpdateSkeletalMeshAsync(bool bIgnoreCloseDist, bool bForceHighPriority); // Function CustomizableObject.CustomizableObjectInstance.UpdateSkeletalMeshAsync // (Final|Native|Public|BlueprintCallable) // @ game+0x72e95c0
	void SetVectorParameterSelectedOption(struct FString VectorParamName, struct FLinearColor VectorValue); // Function CustomizableObject.CustomizableObjectInstance.SetVectorParameterSelectedOption // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x72e9420
	void SetReplacePhysicsAssets(bool bReplaceEnabled); // Function CustomizableObject.CustomizableObjectInstance.SetReplacePhysicsAssets // (Final|Native|Public|BlueprintCallable) // @ game+0x72e9390
	void SetRandomValues(); // Function CustomizableObject.CustomizableObjectInstance.SetRandomValues // (Final|Native|Public|BlueprintCallable) // @ game+0x72e937c
	void SetProjectorValue(struct FString ProjectorParamName, struct FVector& Pos, struct FVector& Direction, struct FVector& Up, struct FVector& Scale, float Angle, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.SetProjectorValue // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x72e9058
	void SetIntParameterSelectedOption(struct FString ParamName, struct FString SelectedOptionName, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.SetIntParameterSelectedOption // (Final|Native|Public|BlueprintCallable) // @ game+0x72e8dbc
	void SetFloatParameterSelectedOption(struct FString FloatParamName, float FloatValue, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.SetFloatParameterSelectedOption // (Final|Native|Public|BlueprintCallable) // @ game+0x72e8bec
	void SetCurrentState(struct FString StateName); // Function CustomizableObject.CustomizableObjectInstance.SetCurrentState // (Final|Native|Public|BlueprintCallable) // @ game+0x72e8a8c
	void SetColorParameterSelectedOption(struct FString ColorParamName, struct FLinearColor ColorValue); // Function CustomizableObject.CustomizableObjectInstance.SetColorParameterSelectedOption // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x72e88ec
	void SetBoolParameterSelectedOption(struct FString BoolParamName, bool BoolValue); // Function CustomizableObject.CustomizableObjectInstance.SetBoolParameterSelectedOption // (Final|Native|Public|BlueprintCallable) // @ game+0x72e8754
	int32_t RemoveValueFromProjectorRange(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.RemoveValueFromProjectorRange // (Final|Native|Public|BlueprintCallable) // @ game+0x72e85c4
	int32_t RemoveValueFromIntRange(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.RemoveValueFromIntRange // (Final|Native|Public|BlueprintCallable) // @ game+0x72e8424
	int32_t RemoveValueFromFloatRange(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.RemoveValueFromFloatRange // (Final|Native|Public|BlueprintCallable) // @ game+0x72e8290
	void RemoveMultilayerProjector(struct FName& ProjectorParamName); // Function CustomizableObject.CustomizableObjectInstance.RemoveMultilayerProjector // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x72e8200
	void MultilayerProjectorUpdateVirtualLayer(struct FName& ProjectorParamName, struct FName& ID, struct FMultilayerProjectorVirtualLayer& Layer); // Function CustomizableObject.CustomizableObjectInstance.MultilayerProjectorUpdateVirtualLayer // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x72e80b4
	void MultilayerProjectorUpdateLayer(struct FName& ProjectorParamName, int32_t Index, struct FMultilayerProjectorLayer& Layer); // Function CustomizableObject.CustomizableObjectInstance.MultilayerProjectorUpdateLayer // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x72e7f74
	void MultilayerProjectorRemoveVirtualLayer(struct FName& ProjectorParamName, struct FName& ID); // Function CustomizableObject.CustomizableObjectInstance.MultilayerProjectorRemoveVirtualLayer // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x72e7e00
	void MultilayerProjectorRemoveLayerAt(struct FName& ProjectorParamName, int32_t Index); // Function CustomizableObject.CustomizableObjectInstance.MultilayerProjectorRemoveLayerAt // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x72e7d34
	int32_t MultilayerProjectorNumLayers(struct FName& ProjectorParamName); // Function CustomizableObject.CustomizableObjectInstance.MultilayerProjectorNumLayers // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e7c00
	struct TArray<struct FName> MultilayerProjectorGetVirtualLayers(struct FName& ProjectorParamName); // Function CustomizableObject.CustomizableObjectInstance.MultilayerProjectorGetVirtualLayers // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e7b28
	struct FMultilayerProjectorVirtualLayer MultilayerProjectorGetVirtualLayer(struct FName& ProjectorParamName, struct FName& ID); // Function CustomizableObject.CustomizableObjectInstance.MultilayerProjectorGetVirtualLayer // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e79ec
	struct FMultilayerProjectorLayer MultilayerProjectorGetLayer(struct FName& ProjectorParamName, int32_t Index); // Function CustomizableObject.CustomizableObjectInstance.MultilayerProjectorGetLayer // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e78e0
	struct FMultilayerProjectorVirtualLayer MultilayerProjectorFindOrCreateVirtualLayer(struct FName& ProjectorParamName, struct FName& ID); // Function CustomizableObject.CustomizableObjectInstance.MultilayerProjectorFindOrCreateVirtualLayer // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x72e77c8
	void MultilayerProjectorCreateVirtualLayer(struct FName& ProjectorParamName, struct FName& ID); // Function CustomizableObject.CustomizableObjectInstance.MultilayerProjectorCreateVirtualLayer // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x72e7654
	void MultilayerProjectorCreateLayer(struct FName& ProjectorParamName, int32_t Index); // Function CustomizableObject.CustomizableObjectInstance.MultilayerProjectorCreateLayer // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x72e74f0
	bool IsParamMultidimensional(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.IsParamMultidimensional // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e7200
	bool IsParameterRelevant(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.IsParameterRelevant // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e7370
	bool HasAnySkeletalMesh(); // Function CustomizableObject.CustomizableObjectInstance.HasAnySkeletalMesh // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e71dc
	struct USkeletalMesh* GetSkeletalMesh(int32_t ComponentIndex); // Function CustomizableObject.CustomizableObjectInstance.GetSkeletalMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x72e7150
	void GetProjectorValue(struct FString ProjectorParamName, struct FVector& Pos, struct FVector& Direction, struct FVector& Up, struct FVector& Scale, float& Angle, enum class ECustomizableObjectProjectorType& Type, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorValue // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e6dcc
	struct FVector GetProjectorUp(struct FString ParamName, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorUp // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e6c10
	struct FVector GetProjectorScale(struct FString ParamName, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorScale // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e6a54
	struct FVector GetProjectorPosition(struct FString ParamName, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e6898
	enum class ECustomizableObjectProjectorType GetProjectorParameterType(struct FString ParamName, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorParameterType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e6698
	struct FVector GetProjectorDirection(struct FString ParamName, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorDirection // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e64dc
	float GetProjectorAngle(struct FString ParamName, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e6334
	struct UTexture2D* GetParameterDescription(struct FString ParamName, int32_t DescIndex); // Function CustomizableObject.CustomizableObjectInstance.GetParameterDescription // (Final|Native|Public|BlueprintCallable) // @ game+0x72e6140
	struct FString GetIntParameterSelectedOption(struct FString ParamName, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.GetIntParameterSelectedOption // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e5f34
	float GetFloatParameterSelectedOption(struct FString FloatParamName, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.GetFloatParameterSelectedOption // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e5d8c
	struct FString GetCurrentState(); // Function CustomizableObject.CustomizableObjectInstance.GetCurrentState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e5c4c
	struct FLinearColor GetColorParameterSelectedOption(struct FString ColorParamName); // Function CustomizableObject.CustomizableObjectInstance.GetColorParameterSelectedOption // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e5ab4
	bool GetBoolParameterSelectedOption(struct FString BoolParamName); // Function CustomizableObject.CustomizableObjectInstance.GetBoolParameterSelectedOption // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e5928
	struct UAnimInstance* GetAnimBP(int32_t ComponentIndex, int32_t SlotIndex); // Function CustomizableObject.CustomizableObjectInstance.GetAnimBP // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e5838
	struct FGameplayTagContainer GetAnimationGameplayTags(); // Function CustomizableObject.CustomizableObjectInstance.GetAnimationGameplayTags // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e5904
	void ForEachAnimInstance(int32_t ComponentIndex, struct FDelegate Delegate); // Function CustomizableObject.CustomizableObjectInstance.ForEachAnimInstance // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x72e575c
	int32_t FindVectorParameterNameIndex(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.FindVectorParameterNameIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e55f8
	int32_t FindProjectorParameterNameIndex(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.FindProjectorParameterNameIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e5494
	int32_t FindIntParameterNameIndex(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.FindIntParameterNameIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e5330
	int32_t FindFloatParameterNameIndex(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.FindFloatParameterNameIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e51cc
	int32_t FindBoolParameterNameIndex(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.FindBoolParameterNameIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e5068
	int32_t CurrentParamRange(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.CurrentParamRange // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72e4ed8
	bool CreateMultiLayerProjector(struct FName& ProjectorParamName); // Function CustomizableObject.CustomizableObjectInstance.CreateMultiLayerProjector // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x72e4e40
	struct UCustomizableObjectInstance* CloneStatic(struct UObject* Outer); // Function CustomizableObject.CustomizableObjectInstance.CloneStatic // (Final|Native|Public|BlueprintCallable) // @ game+0x72e4da0
	struct UCustomizableObjectInstance* Clone(); // Function CustomizableObject.CustomizableObjectInstance.Clone // (Final|Native|Public|BlueprintCallable) // @ game+0x72e4d50
	int32_t AddValueToProjectorRange(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.AddValueToProjectorRange // (Final|Native|Public|BlueprintCallable) // @ game+0x72e4bec
	int32_t AddValueToIntRange(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.AddValueToIntRange // (Final|Native|Public|BlueprintCallable) // @ game+0x72e4a88
	int32_t AddValueToFloatRange(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.AddValueToFloatRange // (Final|Native|Public|BlueprintCallable) // @ game+0x72e48e0
};

// Class CustomizableObject.MutableTextureMipDataProviderFactory
// Size: 0x48 (Inherited: 0x28)
struct UMutableTextureMipDataProviderFactory : UTextureMipDataProviderFactory {
	struct UCustomizableObjectInstance* CustomizableObjectInstance; // 0x28(0x08)
	char pad_30[0x18]; // 0x30(0x18)
};

// Class CustomizableObject.CustomizableSystemImageProvider
// Size: 0x28 (Inherited: 0x28)
struct UCustomizableSystemImageProvider : UObject {
};

// Class CustomizableObject.CustomizableObjectImageProviderArray
// Size: 0x58 (Inherited: 0x28)
struct UCustomizableObjectImageProviderArray : UCustomizableSystemImageProvider {
	struct TArray<struct UTexture2D*> Textures; // 0x28(0x10)
	char pad_38[0x20]; // 0x38(0x20)
};

// Class CustomizableObject.CustomizableObjectSystem
// Size: 0x170 (Inherited: 0x28)
struct UCustomizableObjectSystem : UObject {
	struct TArray<struct FPendingReleaseSkeletalMeshInfo> PendingReleaseSkeletalMesh; // 0x28(0x10)
	struct UCustomizableObjectImageProviderArray* PreviewExternalImageProvider; // 0x38(0x08)
	struct UCustomizableInstanceLODManagementBase* DefaultInstanceLODManagement; // 0x40(0x08)
	struct UCustomizableInstanceLODManagementBase* CurrentInstanceLODManagement; // 0x48(0x08)
	struct TArray<struct UTexture2D*> ProtectedCachedTextures; // 0x50(0x10)
	char pad_60[0x110]; // 0x60(0x110)

	void SetReleaseMutableTexturesImmediately(bool bReleaseTextures); // Function CustomizableObject.CustomizableObjectSystem.SetReleaseMutableTexturesImmediately // (Final|Native|Public|BlueprintCallable) // @ game+0x73060ec
	int32_t GetTotalInstances(); // Function CustomizableObject.CustomizableObjectSystem.GetTotalInstances // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73060d0
	int32_t GetTextureMemoryUsed(); // Function CustomizableObject.CustomizableObjectSystem.GetTextureMemoryUsed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73060b4
	struct FString GetPluginVersion(); // Function CustomizableObject.CustomizableObjectSystem.GetPluginVersion // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7306068
	int32_t GetNumPendingInstances(); // Function CustomizableObject.CustomizableObjectSystem.GetNumPendingInstances // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x730604c
	int32_t GetNumInstances(); // Function CustomizableObject.CustomizableObjectSystem.GetNumInstances // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7306034
	struct UCustomizableObjectSystem* GetInstance(); // Function CustomizableObject.CustomizableObjectSystem.GetInstance // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x7306010
	int32_t GetAverageBuildTime(); // Function CustomizableObject.CustomizableObjectSystem.GetAverageBuildTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7305fe4
};

// Class CustomizableObject.CustomizableSkeletalComponent
// Size: 0x2e0 (Inherited: 0x2a0)
struct UCustomizableSkeletalComponent : USceneComponent {
	char pad_2A0[0x4]; // 0x2a0(0x04)
	float SkippedLastRenderTime; // 0x2a4(0x04)
	struct UCustomizableObjectInstance* CustomizableObjectInstance; // 0x2a8(0x08)
	int32_t ComponentIndex; // 0x2b0(0x04)
	char pad_2B4[0x2c]; // 0x2b4(0x2c)

	void UpdateSkeletalMeshAsync(bool bNeverSkipUpdate); // Function CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsync // (Final|Native|Public|BlueprintCallable) // @ game+0x730616c
};

// Class CustomizableObject.CustomizableSkeletalMeshActor
// Size: 0x330 (Inherited: 0x308)
struct ACustomizableSkeletalMeshActor : ASkeletalMeshActor {
	struct TArray<struct UCustomizableSkeletalComponent*> CustomizableSkeletalComponents; // 0x308(0x10)
	struct TArray<struct USkeletalMeshComponent*> SkeletalMeshComponents; // 0x318(0x10)
	struct UCustomizableSkeletalComponent* CustomizableSkeletalComponent; // 0x328(0x08)
};

