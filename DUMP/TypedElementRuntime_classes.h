// Class TypedElementRuntime.TypedElementAssetDataInterface
// Size: 0x28 (Inherited: 0x28)
struct UTypedElementAssetDataInterface : UInterface {

	struct FAssetData GetAssetData(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementRuntime.TypedElementAssetDataInterface.GetAssetData // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x91937ec
	struct TArray<struct FAssetData> GetAllReferencedAssetDatas(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementRuntime.TypedElementAssetDataInterface.GetAllReferencedAssetDatas // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9193720
};

// Class TypedElementRuntime.TypedElementHierarchyInterface
// Size: 0x28 (Inherited: 0x28)
struct UTypedElementHierarchyInterface : UInterface {

	struct FScriptTypedElementHandle GetParentElement(struct FScriptTypedElementHandle& InElementHandle, bool bAllowCreate); // Function TypedElementRuntime.TypedElementHierarchyInterface.GetParentElement // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9193f84
	void GetChildElements(struct FScriptTypedElementHandle& InElementHandle, struct TArray<struct FScriptTypedElementHandle>& OutElementHandles, bool bAllowCreate); // Function TypedElementRuntime.TypedElementHierarchyInterface.GetChildElements // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x91939b0
};

// Class TypedElementRuntime.TypedElementObjectInterface
// Size: 0x28 (Inherited: 0x28)
struct UTypedElementObjectInterface : UInterface {

	struct UObject* GetObjectClass(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementRuntime.TypedElementObjectInterface.GetObjectClass // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9193ed0
	struct UObject* GetObject(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementRuntime.TypedElementObjectInterface.GetObject // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9193e1c
};

// Class TypedElementRuntime.TypedElementSelectionInterface
// Size: 0x28 (Inherited: 0x28)
struct UTypedElementSelectionInterface : UInterface {

	bool SelectElement(struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy InSelectionSet, struct FTypedElementSelectionOptions& InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionInterface.SelectElement // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9194b9c
	bool IsElementSelected(struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy InSelectionSet, struct FTypedElementIsSelectedOptions& InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionInterface.IsElementSelected // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x919479c
	struct FScriptTypedElementHandle GetSelectionElement(struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy InCurrentSelection, enum class ETypedElementSelectionMethod InSelectionMethod); // Function TypedElementRuntime.TypedElementSelectionInterface.GetSelectionElement // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9194190
	bool DeselectElement(struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy InSelectionSet, struct FTypedElementSelectionOptions& InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionInterface.DeselectElement // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x91931c0
	bool CanSelectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions& InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionInterface.CanSelectElement // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9192d70
	bool CanDeselectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions& InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionInterface.CanDeselectElement // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9192b3c
	bool AllowSelectionModifiers(struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy InSelectionSet); // Function TypedElementRuntime.TypedElementSelectionInterface.AllowSelectionModifiers // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9192900
};

// Class TypedElementRuntime.TypedElementSelectionSet
// Size: 0x898 (Inherited: 0x28)
struct UTypedElementSelectionSet : UObject {
	char pad_28[0x800]; // 0x28(0x800)
	struct FMulticastInlineDelegate OnPreSelectionChange; // 0x828(0x10)
	struct FMulticastInlineDelegate OnSelectionChange; // 0x838(0x10)
	char pad_848[0x50]; // 0x848(0x50)

	bool SetSelection(struct TArray<struct FScriptTypedElementHandle>& InElementHandles, struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.SetSelection // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x91950fc
	bool SelectElements(struct TArray<struct FScriptTypedElementHandle>& InElementHandles, struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.SelectElements // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9194e74
	bool SelectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.SelectElement // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9194d48
	void RestoreSelectionState(struct FTypedElementSelectionSetState& InSelectionState); // Function TypedElementRuntime.TypedElementSelectionSet.RestoreSelectionState // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9194b00
	void OnPreChangeDynamic__DelegateSignature(struct UTypedElementSelectionSet* SelectionSet); // DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnPreChangeDynamic__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xda05cc
	void OnChangeDynamic__DelegateSignature(struct UTypedElementSelectionSet* SelectionSet); // DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnChangeDynamic__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xda05cc
	struct TArray<struct FScriptTypedElementHandle> K2_GetSelectedElementHandles(struct UInterface* InBaseInterfaceType); // Function TypedElementRuntime.TypedElementSelectionSet.K2_GetSelectedElementHandles // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x9194a58
	bool IsElementSelected(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementIsSelectedOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.IsElementSelected // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x9194940
	bool HasSelectedObjects(struct UObject* InRequiredClass); // Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedObjects // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x91946a4
	bool HasSelectedElements(struct UInterface* InBaseInterfaceType); // Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedElements // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x919452c
	struct UObject* GetTopSelectedObject(struct UObject* InRequiredClass); // Function TypedElementRuntime.TypedElementSelectionSet.GetTopSelectedObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9194434
	struct FScriptTypedElementHandle GetSelectionElement(struct FScriptTypedElementHandle& InElementHandle, enum class ETypedElementSelectionMethod InSelectionMethod); // Function TypedElementRuntime.TypedElementSelectionSet.GetSelectionElement // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x9194334
	struct TArray<struct UObject*> GetSelectedObjects(struct UObject* InRequiredClass); // Function TypedElementRuntime.TypedElementSelectionSet.GetSelectedObjects // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x9194088
	int32_t GetNumSelectedElements(); // Function TypedElementRuntime.TypedElementSelectionSet.GetNumSelectedElements // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9193e00
	struct FTypedElementSelectionSetState GetCurrentSelectionState(); // Function TypedElementRuntime.TypedElementSelectionSet.GetCurrentSelectionState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9193b00
	struct UObject* GetBottomSelectedObject(struct UObject* InRequiredClass); // Function TypedElementRuntime.TypedElementSelectionSet.GetBottomSelectedObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91938b8
	bool DeselectElements(struct TArray<struct FScriptTypedElementHandle>& InElementHandles, struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.DeselectElements // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9193498
	bool DeselectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.DeselectElement // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x919336c
	int32_t CountSelectedObjects(struct UObject* InRequiredClass); // Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedObjects // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x91930cc
	int32_t CountSelectedElements(struct UInterface* InBaseInterfaceType); // Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedElements // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x9193040
	bool ClearSelection(struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.ClearSelection // (Final|Native|Public|BlueprintCallable) // @ game+0x9192fa4
	bool CanSelectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.CanSelectElement // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x9192e78
	bool CanDeselectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.CanDeselectElement // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x9192c44
	bool AllowSelectionModifiers(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementRuntime.TypedElementSelectionSet.AllowSelectionModifiers // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x9192a5c
};

// Class TypedElementRuntime.TypedElementSelectionSetLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTypedElementSelectionSetLibrary : UObject {

	bool SetSelectionFromList(struct UTypedElementSelectionSet* SelectionSet, struct FScriptTypedElementListProxy ElementList, struct FTypedElementSelectionOptions SelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSetLibrary.SetSelectionFromList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9195228
	bool SelectElementsFromList(struct UTypedElementSelectionSet* SelectionSet, struct FScriptTypedElementListProxy ElementList, struct FTypedElementSelectionOptions SelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSetLibrary.SelectElementsFromList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9194fa0
	struct FScriptTypedElementListProxy GetNormalizedSelection(struct UTypedElementSelectionSet* SelectionSet, struct FTypedElementSelectionNormalizationOptions NormalizationOptions); // Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedSelection // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9193d24
	struct FScriptTypedElementListProxy GetNormalizedElementList(struct UTypedElementSelectionSet* SelectionSet, struct FScriptTypedElementListProxy ElementList, struct FTypedElementSelectionNormalizationOptions NormalizationOptions); // Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedElementList // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9193bb4
	bool DeselectElementsFromList(struct UTypedElementSelectionSet* SelectionSet, struct FScriptTypedElementListProxy ElementList, struct FTypedElementSelectionOptions SelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSetLibrary.DeselectElementsFromList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x91935c4
};

