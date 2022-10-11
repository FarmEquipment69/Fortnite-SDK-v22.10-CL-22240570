// Class LandscapePatch.LandscapePatchComponent
// Size: 0x320 (Inherited: 0x2a0)
struct ULandscapePatchComponent : USceneComponent {
	struct TSoftObjectPtr<ALandscape> Landscape; // 0x2a0(0x28)
	struct TSoftObjectPtr<ALandscapePatchManager> PatchManager; // 0x2c8(0x28)
	char pad_2F0[0x2]; // 0x2f0(0x02)
	bool bIsEnabled; // 0x2f2(0x01)
	bool bPropertiesCopiedIndicator; // 0x2f3(0x01)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct TSoftObjectPtr<ALandscapePatchManager> PreviousPatchManager; // 0x2f8(0x28)

	void SetPatchManager(struct ALandscapePatchManager* NewPatchManager); // Function LandscapePatch.LandscapePatchComponent.SetPatchManager // (Native|Public|BlueprintCallable) // @ game+0x73263ac
	void SetLandscape(struct ALandscape* NewLandscape); // Function LandscapePatch.LandscapePatchComponent.SetLandscape // (Native|Public|BlueprintCallable) // @ game+0x7326328
	void SetIsEnabled(bool bEnabledIn); // Function LandscapePatch.LandscapePatchComponent.SetIsEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x7326298
	void RequestLandscapeUpdate(); // Function LandscapePatch.LandscapePatchComponent.RequestLandscapeUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x7325c18
	void MoveToTop(); // Function LandscapePatch.LandscapePatchComponent.MoveToTop // (Final|Native|Protected) // @ game+0x4ce8a80
	bool IsEnabled(); // Function LandscapePatch.LandscapePatchComponent.IsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7325b58
	struct ALandscapePatchManager* GetPatchManager(); // Function LandscapePatch.LandscapePatchComponent.GetPatchManager // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ce8a50
	struct FTransform GetLandscapeHeightmapCoordsToWorld(); // Function LandscapePatch.LandscapePatchComponent.GetLandscapeHeightmapCoordsToWorld // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7325798
};

// Class LandscapePatch.LandscapeCircleHeightPatch
// Size: 0x330 (Inherited: 0x320)
struct ULandscapeCircleHeightPatch : ULandscapePatchComponent {
	float Radius; // 0x320(0x04)
	float Falloff; // 0x324(0x04)
	bool bExclusiveRadius; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
};

// Class LandscapePatch.LandscapePatchManager
// Size: 0x300 (Inherited: 0x288)
struct ALandscapePatchManager : ALandscapeBlueprintBrushBase {
	struct TArray<struct TSoftObjectPtr<ULandscapePatchComponent>> PatchComponents; // 0x288(0x10)
	char pad_298[0x8]; // 0x298(0x08)
	struct FTransform HeightmapCoordsToWorld; // 0x2a0(0x60)
};

// Class LandscapePatch.LandscapeTextureBackedRenderTargetBase
// Size: 0x50 (Inherited: 0x28)
struct ULandscapeTextureBackedRenderTargetBase : UObject {
	struct UTextureRenderTarget2D* PostLoadRT; // 0x28(0x08)
	struct UTexture2D* InternalTexture; // 0x30(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0x38(0x08)
	int32_t SizeX; // 0x40(0x04)
	int32_t SizeY; // 0x44(0x04)
	bool bUseInternalTextureOnly; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class LandscapePatch.LandscapeWeightTextureBackedRenderTarget
// Size: 0x58 (Inherited: 0x50)
struct ULandscapeWeightTextureBackedRenderTarget : ULandscapeTextureBackedRenderTargetBase {
	bool bUseAlphaChannel; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class LandscapePatch.LandscapeHeightTextureBackedRenderTarget
// Size: 0x60 (Inherited: 0x50)
struct ULandscapeHeightTextureBackedRenderTarget : ULandscapeTextureBackedRenderTargetBase {
	struct FLandscapeHeightPatchConvertToNativeParams ConversionParams; // 0x50(0x0c)
	enum class ETextureRenderTargetFormat RenderTargetFormat; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
};

// Class LandscapePatch.LandscapeTexturePatchBase
// Size: 0x360 (Inherited: 0x320)
struct ULandscapeTexturePatchBase : ULandscapePatchComponent {
	enum class ELandscapeTexturePatchSourceMode SourceMode; // 0x320(0x01)
	char pad_321[0x7]; // 0x321(0x07)
	struct UTexture* TextureAsset; // 0x328(0x08)
	struct FVector2D UnscaledPatchCoverage; // 0x330(0x10)
	struct UTexture2D* InternalTexture; // 0x340(0x08)
	struct UTextureRenderTarget2D* InternalRenderTarget; // 0x348(0x08)
	bool bShowTextureAssetProperty; // 0x350(0x01)
	char pad_351[0xf]; // 0x351(0x0f)

	void SetUnscaledCoverage(struct FVector2D Coverage); // Function LandscapePatch.LandscapeTexturePatchBase.SetUnscaledCoverage // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x73267ac
	bool SetTextureResolution(struct FVector2D ResolutionIn); // Function LandscapePatch.LandscapeTexturePatchBase.SetTextureResolution // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x7326684
	void SetTextureAsset(struct UTexture* TextureIn); // Function LandscapePatch.LandscapeTexturePatchBase.SetTextureAsset // (Final|Native|Public|BlueprintCallable) // @ game+0x7326604
	bool SetSourceMode(enum class ELandscapeTexturePatchSourceMode NewMode, bool bInitializeIfRenderTarget); // Function LandscapePatch.LandscapeTexturePatchBase.SetSourceMode // (Native|Public|BlueprintCallable) // @ game+0x7326538
	struct FVector2D GetUnscaledCoverage(); // Function LandscapePatch.LandscapeTexturePatchBase.GetUnscaledCoverage // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7325500
	bool GetTextureResolution(struct FVector2D& SizeOut); // Function LandscapePatch.LandscapeTexturePatchBase.GetTextureResolution // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7325948
	struct FTransform GetPatchToWorldTransform(); // Function LandscapePatch.LandscapeTexturePatchBase.GetPatchToWorldTransform // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7325894
	struct UTextureRenderTarget2D* GetInternalRenderTarget(); // Function LandscapePatch.LandscapeTexturePatchBase.GetInternalRenderTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x7325780
	bool GetInitResolutionFromLandscape(float ResolutionMultiplier, struct FVector2D& ResolutionOut); // Function LandscapePatch.LandscapeTexturePatchBase.GetInitResolutionFromLandscape // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x732569c
	struct FVector2D GetFullUnscaledWorldSize(); // Function LandscapePatch.LandscapeTexturePatchBase.GetFullUnscaledWorldSize // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7325534
};

// Class LandscapePatch.LandscapeTextureHeightPatch
// Size: 0x390 (Inherited: 0x360)
struct ULandscapeTextureHeightPatch : ULandscapeTexturePatchBase {
	enum class ELandscapeTextureHeightPatchBlendMode BlendMode; // 0x358(0x01)
	bool bUseTextureAlphaChannel; // 0x359(0x01)
	enum class ELandscapeTextureHeightPatchZeroHeightMeaning ZeroHeightMeaning; // 0x35a(0x01)
	enum class ELandscapeTextureHeightPatchEncoding SourceEncoding; // 0x35b(0x01)
	struct FLandscapeTexturePatchEncodingSettings EncodingSettings; // 0x360(0x10)
	enum class ELandscapeTextureHeightPatchFalloffMode FalloffMode; // 0x370(0x01)
	float Falloff; // 0x374(0x04)
	bool bApplyComponentZScale; // 0x378(0x01)
	enum class ELandscapeTextureHeightPatchInitMode InitializationMode; // 0x379(0x01)
	bool bUseSameTextureDimensions; // 0x37a(0x01)
	bool bBaseResolutionOffLandscape; // 0x37b(0x01)
	float ResolutionMultiplier; // 0x37c(0x04)
	int32_t InitTextureSizeX; // 0x380(0x04)
	int32_t InitTextureSizeY; // 0x384(0x04)
	enum class ELandscapeTexturePatchSourceMode PreviousSourceMode; // 0x388(0x01)
	enum class ETextureRenderTargetFormat InternalRenderTargetFormat; // 0x389(0x01)
	char pad_38B[0x1]; // 0x38b(0x01)
	float SavedConversionHeightScale; // 0x38c(0x04)

	void SnapToLandscape(); // Function LandscapePatch.LandscapeTextureHeightPatch.SnapToLandscape // (Final|Native|Public|BlueprintCallable) // @ game+0x7326df0
	void SetZeroHeightMeaning(enum class ELandscapeTextureHeightPatchZeroHeightMeaning ZeroHeightMeaningIn); // Function LandscapePatch.LandscapeTextureHeightPatch.SetZeroHeightMeaning // (Final|Native|Public|BlueprintCallable) // @ game+0x7326cf8
	void SetUseTextureAlphaChannel(bool bUse); // Function LandscapePatch.LandscapeTextureHeightPatch.SetUseTextureAlphaChannel // (Final|Native|Public|BlueprintCallable) // @ game+0x732698c
	void SetSourceEncodingMode(enum class ELandscapeTextureHeightPatchEncoding EncodingMode); // Function LandscapePatch.LandscapeTextureHeightPatch.SetSourceEncodingMode // (Final|Native|Public|BlueprintCallable) // @ game+0x73264bc
	void SetInternalRenderTargetFormat(enum class ETextureRenderTargetFormat Format); // Function LandscapePatch.LandscapeTextureHeightPatch.SetInternalRenderTargetFormat // (Final|Native|Public|BlueprintCallable) // @ game+0x7326234
	void SetFalloff(float FalloffIn); // Function LandscapePatch.LandscapeTextureHeightPatch.SetFalloff // (Final|Native|Public|BlueprintCallable) // @ game+0x7325f18
	void SetEncodingSettings(struct FLandscapeTexturePatchEncodingSettings& Settings); // Function LandscapePatch.LandscapeTextureHeightPatch.SetEncodingSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7325e84
	void SetBlendMode(enum class ELandscapeTextureHeightPatchBlendMode BlendModeIn); // Function LandscapePatch.LandscapeTextureHeightPatch.SetBlendMode // (Final|Native|Public|BlueprintCallable) // @ game+0x7325d8c
	void ResetSourceEncodingMode(enum class ELandscapeTextureHeightPatchEncoding EncodingMode); // Function LandscapePatch.LandscapeTextureHeightPatch.ResetSourceEncodingMode // (Final|Native|Public|BlueprintCallable) // @ game+0x7325cdc
	void Reinitialize(); // Function LandscapePatch.LandscapeTextureHeightPatch.Reinitialize // (Final|Native|Public) // @ game+0x21ce104
	void DeleteInternalTextures(); // Function LandscapePatch.LandscapeTextureHeightPatch.DeleteInternalTextures // (Final|Native|Public|BlueprintCallable) // @ game+0x7325460
};

// Class LandscapePatch.LandscapeWeightPatchTextureInfo
// Size: 0x58 (Inherited: 0x28)
struct ULandscapeWeightPatchTextureInfo : UObject {
	struct FName WeightmapLayerName; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UTexture* TextureAsset; // 0x30(0x08)
	struct ULandscapeWeightTextureBackedRenderTarget* InternalData; // 0x38(0x08)
	enum class ELandscapeTexturePatchSourceMode SourceMode; // 0x40(0x01)
	enum class ELandscapeTexturePatchSourceMode DetailPanelSourceMode; // 0x41(0x01)
	bool bUseAlphaChannel; // 0x42(0x01)
	bool bOverrideBlendMode; // 0x43(0x01)
	enum class ELandscapeTexturePatchBlendMode OverrideBlendMode; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct ULandscapeTexturePatch* OwningPatch; // 0x48(0x08)
	char pad_50[0x8]; // 0x50(0x08)
};

// Class LandscapePatch.LandscapeTexturePatch
// Size: 0x3a0 (Inherited: 0x320)
struct ULandscapeTexturePatch : ULandscapePatchComponent {
	int32_t ResolutionX; // 0x320(0x04)
	int32_t ResolutionY; // 0x324(0x04)
	struct FVector2D UnscaledPatchCoverage; // 0x328(0x10)
	enum class ELandscapeTexturePatchBlendMode BlendMode; // 0x338(0x01)
	enum class ELandscapeTexturePatchFalloffMode FalloffMode; // 0x339(0x01)
	char pad_33A[0x2]; // 0x33a(0x02)
	float Falloff; // 0x33c(0x04)
	enum class ELandscapeTexturePatchSourceMode HeightSourceMode; // 0x340(0x01)
	enum class ELandscapeTexturePatchSourceMode DetailPanelHeightSourceMode; // 0x341(0x01)
	char pad_342[0x6]; // 0x342(0x06)
	struct ULandscapeHeightTextureBackedRenderTarget* HeightInternalData; // 0x348(0x08)
	struct UTexture* HeightTextureAsset; // 0x350(0x08)
	bool bUseTextureAlphaForHeight; // 0x358(0x01)
	enum class ELandscapeTextureHeightPatchEncoding HeightEncoding; // 0x359(0x01)
	char pad_35A[0x6]; // 0x35a(0x06)
	struct FLandscapeTexturePatchEncodingSettings HeightEncodingSettings; // 0x360(0x10)
	enum class ELandscapeTextureHeightPatchZeroHeightMeaning ZeroHeightMeaning; // 0x370(0x01)
	bool bApplyComponentZScale; // 0x371(0x01)
	char pad_372[0x6]; // 0x372(0x06)
	struct TArray<struct ULandscapeWeightPatchTextureInfo*> WeightPatches; // 0x378(0x10)
	int32_t NumWeightPatches; // 0x388(0x04)
	char pad_38C[0x1]; // 0x38c(0x01)
	bool bBaseResolutionOffLandscape; // 0x38d(0x01)
	char pad_38E[0x2]; // 0x38e(0x02)
	float ResolutionMultiplier; // 0x390(0x04)
	int32_t InitTextureSizeX; // 0x394(0x04)
	int32_t InitTextureSizeY; // 0x398(0x04)
	enum class ETextureRenderTargetFormat HeightRenderTargetFormat; // 0x39c(0x01)
	char pad_39D[0x3]; // 0x39d(0x03)

	void SnapToLandscape(); // Function LandscapePatch.LandscapeTexturePatch.SnapToLandscape // (Final|Native|Protected|BlueprintCallable) // @ game+0x21ce104
	void SetZeroHeightMeaning(enum class ELandscapeTextureHeightPatchZeroHeightMeaning ZeroHeightMeaningIn); // Function LandscapePatch.LandscapeTexturePatch.SetZeroHeightMeaning // (Final|Native|Public|BlueprintCallable) // @ game+0x7326d74
	void SetWeightPatchTextureAsset(struct FName& InWeightmapLayerName, struct UTexture* TextureIn); // Function LandscapePatch.LandscapeTexturePatch.SetWeightPatchTextureAsset // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7326bb4
	void SetWeightPatchSourceMode(struct FName& InWeightmapLayerName, enum class ELandscapeTexturePatchSourceMode NewMode); // Function LandscapePatch.LandscapeTexturePatch.SetWeightPatchSourceMode // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7326ae0
	void SetWeightPatchBlendModeOverride(struct FName& InWeightmapLayerName, enum class ELandscapeTexturePatchBlendMode BlendMode); // Function LandscapePatch.LandscapeTexturePatch.SetWeightPatchBlendModeOverride // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7326a0c
	void SetUseAlphaChannelForWeightPatch(struct FName& InWeightmapLayerName, bool bUseAlphaChannel); // Function LandscapePatch.LandscapeTexturePatch.SetUseAlphaChannelForWeightPatch // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x73268b8
	void SetUseAlphaChannelForHeight(bool bUse); // Function LandscapePatch.LandscapeTexturePatch.SetUseAlphaChannelForHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x7326838
	void SetUnscaledCoverage(struct FVector2D Coverage); // Function LandscapePatch.LandscapeTexturePatch.SetUnscaledCoverage // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x7326720
	void SetResolution(struct FVector2D ResolutionIn); // Function LandscapePatch.LandscapeTexturePatch.SetResolution // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x7326430
	void SetHeightTextureAsset(struct UTexture* TextureIn); // Function LandscapePatch.LandscapeTexturePatch.SetHeightTextureAsset // (Final|Native|Public|BlueprintCallable) // @ game+0x73261b4
	void SetHeightSourceMode(enum class ELandscapeTexturePatchSourceMode NewMode); // Function LandscapePatch.LandscapeTexturePatch.SetHeightSourceMode // (Native|Public|BlueprintCallable) // @ game+0x7326130
	void SetHeightRenderTargetFormat(enum class ETextureRenderTargetFormat Format); // Function LandscapePatch.LandscapeTexturePatch.SetHeightRenderTargetFormat // (Final|Native|Public|BlueprintCallable) // @ game+0x732609c
	void SetHeightEncodingSettings(struct FLandscapeTexturePatchEncodingSettings& Settings); // Function LandscapePatch.LandscapeTexturePatch.SetHeightEncodingSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7325e84
	void SetHeightEncodingMode(enum class ELandscapeTextureHeightPatchEncoding EncodingMode); // Function LandscapePatch.LandscapeTexturePatch.SetHeightEncodingMode // (Final|Native|Public|BlueprintCallable) // @ game+0x7326020
	void SetFalloff(float FalloffIn); // Function LandscapePatch.LandscapeTexturePatch.SetFalloff // (Final|Native|Public|BlueprintCallable) // @ game+0x7325f9c
	void SetBlendMode(enum class ELandscapeTexturePatchBlendMode BlendModeIn); // Function LandscapePatch.LandscapeTexturePatch.SetBlendMode // (Final|Native|Public|BlueprintCallable) // @ game+0x7325e08
	void ResetHeightEncodingMode(enum class ELandscapeTextureHeightPatchEncoding EncodingMode); // Function LandscapePatch.LandscapeTexturePatch.ResetHeightEncodingMode // (Final|Native|Public|BlueprintCallable) // @ game+0x7325c2c
	void RemoveWeightPatch(struct FName& InWeightmapLayerName); // Function LandscapePatch.LandscapeTexturePatch.RemoveWeightPatch // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7325b88
	void RemoveAllWeightPatches(); // Function LandscapePatch.LandscapeTexturePatch.RemoveAllWeightPatches // (Native|Public|BlueprintCallable) // @ game+0x7325b70
	void ReinitializeWeights(); // Function LandscapePatch.LandscapeTexturePatch.ReinitializeWeights // (Final|Native|Protected) // @ game+0x21ce104
	void ReinitializeHeight(); // Function LandscapePatch.LandscapeTexturePatch.ReinitializeHeight // (Final|Native|Protected) // @ game+0x21ce104
	enum class ELandscapeTexturePatchSourceMode GetWeightPatchSourceMode(struct FName& InWeightmapLayerName); // Function LandscapePatch.LandscapeTexturePatch.GetWeightPatchSourceMode // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7325ab8
	struct UTextureRenderTarget2D* GetWeightPatchRenderTarget(struct FName& InWeightmapLayerName); // Function LandscapePatch.LandscapeTexturePatch.GetWeightPatchRenderTarget // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7325a18
	struct FVector2D GetUnscaledCoverage(); // Function LandscapePatch.LandscapeTexturePatch.GetUnscaledCoverage // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x73259e4
	struct FVector2D GetResolution(); // Function LandscapePatch.LandscapeTexturePatch.GetResolution // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7325914
	struct FTransform GetPatchToWorldTransform(); // Function LandscapePatch.LandscapeTexturePatch.GetPatchToWorldTransform // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7325814
	bool GetInitResolutionFromLandscape(float ResolutionMultiplier, struct FVector2D& ResolutionOut); // Function LandscapePatch.LandscapeTexturePatch.GetInitResolutionFromLandscape // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x73255b8
	enum class ELandscapeTexturePatchSourceMode GetHeightSourceMode(); // Function LandscapePatch.LandscapeTexturePatch.GetHeightSourceMode // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7325590
	struct UTextureRenderTarget2D* GetHeightRenderTarget(); // Function LandscapePatch.LandscapeTexturePatch.GetHeightRenderTarget // (Native|Public|BlueprintCallable) // @ game+0x7325568
	struct FVector2D GetFullUnscaledWorldSize(); // Function LandscapePatch.LandscapeTexturePatch.GetFullUnscaledWorldSize // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7325500
	struct TArray<struct FName> GetAllWeightPatchLayerNames(); // Function LandscapePatch.LandscapeTexturePatch.GetAllWeightPatchLayerNames // (Final|Native|Public|BlueprintCallable) // @ game+0x732548c
	void DisableAllWeightPatches(); // Function LandscapePatch.LandscapeTexturePatch.DisableAllWeightPatches // (Native|Public|BlueprintCallable) // @ game+0x7325474
	void ClearWeightPatchBlendModeOverride(struct FName& InWeightmapLayerName); // Function LandscapePatch.LandscapeTexturePatch.ClearWeightPatchBlendModeOverride // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x73253d0
	void AddWeightPatch(struct FName& InWeightmapLayerName, enum class ELandscapeTexturePatchSourceMode SourceMode, bool bUseAlphaChannel); // Function LandscapePatch.LandscapeTexturePatch.AddWeightPatch // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x73252c4
};

