// Class AssetRegistry.AssetRegistryImpl
// Size: 0x908 (Inherited: 0x28)
struct UAssetRegistryImpl : UObject {
	char pad_28[0x8e0]; // 0x28(0x8e0)
};

// Class AssetRegistry.AssetRegistryHelpers
// Size: 0x28 (Inherited: 0x28)
struct UAssetRegistryHelpers : UObject {

	struct FSoftObjectPath ToSoftObjectPath(struct FAssetData& InAssetData); // Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x91f1b58
	struct FARFilter SetFilterTagsAndValues(struct FARFilter& InFilter, struct TArray<struct FTagAndValue>& InTagsAndValues); // Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x91f1a08
	bool IsValid(struct FAssetData& InAssetData); // Function AssetRegistry.AssetRegistryHelpers.IsValid // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x91f10c0
	bool IsUAsset(struct FAssetData& InAssetData); // Function AssetRegistry.AssetRegistryHelpers.IsUAsset // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x91f1004
	bool IsRedirector(struct FAssetData& InAssetData); // Function AssetRegistry.AssetRegistryHelpers.IsRedirector // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x91f0e38
	bool IsAssetLoaded(struct FAssetData& InAssetData); // Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x91f0d38
	bool GetTagValue(struct FAssetData& InAssetData, struct FName& InTagName, struct FString& OutTagValue); // Function AssetRegistry.AssetRegistryHelpers.GetTagValue // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x91f0ac4
	struct FString GetFullName(struct FAssetData& InAssetData); // Function AssetRegistry.AssetRegistryHelpers.GetFullName // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x91f07f8
	struct FString GetExportTextName(struct FAssetData& InAssetData); // Function AssetRegistry.AssetRegistryHelpers.GetExportTextName // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x91f064c
	struct UObject* GetClass(struct FAssetData& InAssetData); // Function AssetRegistry.AssetRegistryHelpers.GetClass // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x91f0590
	struct TScriptInterface<IAssetRegistry> GetAssetRegistry(); // Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x91efe70
	struct UObject* GetAsset(struct FAssetData& InAssetData); // Function AssetRegistry.AssetRegistryHelpers.GetAsset // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x91efc4c
	struct FAssetData CreateAssetData(struct UObject* InAsset, bool bAllowBlueprintClass); // Function AssetRegistry.AssetRegistryHelpers.CreateAssetData // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x91ef99c
};

// Class AssetRegistry.AssetRegistry
// Size: 0x28 (Inherited: 0x28)
struct UAssetRegistry : UInterface {

	void WaitForPackage(struct FString PackageName); // Function AssetRegistry.AssetRegistry.WaitForPackage // (Native|Public|BlueprintCallable) // @ game+0x91f1d80
	void WaitForCompletion(); // Function AssetRegistry.AssetRegistry.WaitForCompletion // (Native|Public|BlueprintCallable) // @ game+0x91f1d68
	void UseFilterToExcludeAssets(struct TArray<struct FAssetData>& AssetDataList, struct FARFilter& Filter); // Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const) // @ game+0x91f1c30
	void SearchAllAssets(bool bSynchronousSearch); // Function AssetRegistry.AssetRegistry.SearchAllAssets // (Native|Public|BlueprintCallable) // @ game+0x91f1984
	void ScanPathsSynchronous(struct TArray<struct FString>& InPaths, bool bForceRescan, bool bIgnoreDenyListScanFilters); // Function AssetRegistry.AssetRegistry.ScanPathsSynchronous // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x91f185c
	void ScanModifiedAssetFiles(struct TArray<struct FString>& InFilePaths); // Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x91f17c0
	void ScanFilesSynchronous(struct TArray<struct FString>& InFilePaths, bool bForceRescan); // Function AssetRegistry.AssetRegistry.ScanFilesSynchronous // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x91f16d0
	void RunAssetsThroughFilter(struct TArray<struct FAssetData>& AssetDataList, struct FARFilter& Filter); // Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const) // @ game+0x91f1598
	void PrioritizeSearchPath(struct FString PathToPrioritize); // Function AssetRegistry.AssetRegistry.PrioritizeSearchPath // (Native|Public|BlueprintCallable) // @ game+0x91f1440
	bool K2_GetReferencers(struct FName PackageName, struct FAssetRegistryDependencyOptions& ReferenceOptions, struct TArray<struct FName>& OutReferencers); // Function AssetRegistry.AssetRegistry.K2_GetReferencers // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x91f1300
	bool K2_GetDependencies(struct FName PackageName, struct FAssetRegistryDependencyOptions& DependencyOptions, struct TArray<struct FName>& OutDependencies); // Function AssetRegistry.AssetRegistry.K2_GetDependencies // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x91f11c0
	bool IsSearchAsync(); // Function AssetRegistry.AssetRegistry.IsSearchAsync // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91f0fdc
	bool IsSearchAllAssets(); // Function AssetRegistry.AssetRegistry.IsSearchAllAssets // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91f0fb4
	bool IsLoadingAssets(); // Function AssetRegistry.AssetRegistry.IsLoadingAssets // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d8aaf4
	bool HasAssets(struct FName PackagePath, bool bRecursive); // Function AssetRegistry.AssetRegistry.HasAssets // (Native|Public|BlueprintCallable|Const) // @ game+0x91f0c70
	void GetSubPaths(struct FString InBasePath, struct TArray<struct FString>& OutPathList, bool bInRecurse); // Function AssetRegistry.AssetRegistry.GetSubPaths // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x91f08c8
	bool GetAssetsByPaths(struct TArray<struct FName> PackagePaths, struct TArray<struct FAssetData>& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets); // Function AssetRegistry.AssetRegistry.GetAssetsByPaths // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x91f03b8
	bool GetAssetsByPath(struct FName PackagePath, struct TArray<struct FAssetData>& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets); // Function AssetRegistry.AssetRegistry.GetAssetsByPath // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x91f024c
	bool GetAssetsByPackageName(struct FName PackageName, struct TArray<struct FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets); // Function AssetRegistry.AssetRegistry.GetAssetsByPackageName // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x91f0128
	bool GetAssetsByClass(struct FTopLevelAssetPath ClassPathName, struct TArray<struct FAssetData>& OutAssetData, bool bSearchSubClasses); // Function AssetRegistry.AssetRegistry.GetAssetsByClass // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x91f0000
	bool GetAssets(struct FARFilter& Filter, struct TArray<struct FAssetData>& OutAssetData); // Function AssetRegistry.AssetRegistry.GetAssets // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const) // @ game+0x91efec8
	struct FAssetData GetAssetByObjectPath(struct FName ObjectPath, bool bIncludeOnlyOnDiskAssets); // Function AssetRegistry.AssetRegistry.GetAssetByObjectPath // (Native|Public|HasDefaults|BlueprintCallable|Const) // @ game+0x91efd78
	void GetAllCachedPaths(struct TArray<struct FString>& OutPathList); // Function AssetRegistry.AssetRegistry.GetAllCachedPaths // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x91efbb0
	bool GetAllAssets(struct TArray<struct FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets); // Function AssetRegistry.AssetRegistry.GetAllAssets // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x91efac0
};

