// Class TypedElementFramework.TypedElementCounterInterface
// Size: 0x28 (Inherited: 0x28)
struct UTypedElementCounterInterface : UInterface {
};

// Class TypedElementFramework.TestTypedElementInterfaceA
// Size: 0x28 (Inherited: 0x28)
struct UTestTypedElementInterfaceA : UInterface {

	bool SetDisplayName(struct FScriptTypedElementHandle& InElementHandle, struct FText InNewName, bool bNotify); // Function TypedElementFramework.TestTypedElementInterfaceA.SetDisplayName // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8f4c1f8
	struct FText GetDisplayName(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementFramework.TestTypedElementInterfaceA.GetDisplayName // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8f4af28
};

// Class TypedElementFramework.TestTypedElementInterfaceB
// Size: 0x28 (Inherited: 0x28)
struct UTestTypedElementInterfaceB : UInterface {

	bool MarkAsTested(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementFramework.TestTypedElementInterfaceB.MarkAsTested // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8f4b5ec
};

// Class TypedElementFramework.TestTypedElementInterfaceC
// Size: 0x28 (Inherited: 0x28)
struct UTestTypedElementInterfaceC : UInterface {

	bool GetIsTested(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementFramework.TestTypedElementInterfaceC.GetIsTested // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8f4b5ec
};

// Class TypedElementFramework.TestTypedElementInterfaceA_ImplTyped
// Size: 0x30 (Inherited: 0x28)
struct UTestTypedElementInterfaceA_ImplTyped : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class TypedElementFramework.TestTypedElementInterfaceA_ImplUntyped
// Size: 0x30 (Inherited: 0x28)
struct UTestTypedElementInterfaceA_ImplUntyped : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class TypedElementFramework.TestTypedElementInterfaceBAndC_Typed
// Size: 0x38 (Inherited: 0x28)
struct UTestTypedElementInterfaceBAndC_Typed : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class TypedElementFramework.TypedElementHandleLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTypedElementHandleLibrary : UObject {

	void Release(struct FScriptTypedElementHandle& ElementHandle); // Function TypedElementFramework.TypedElementHandleLibrary.Release // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8f4be30
	bool NotEqual(struct FScriptTypedElementHandle& Lhs, struct FScriptTypedElementHandle& Rhs); // Function TypedElementFramework.TypedElementHandleLibrary.NotEqual // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8f4bbb8
	bool IsSet(struct FScriptTypedElementHandle& ElementHandle); // Function TypedElementFramework.TypedElementHandleLibrary.IsSet // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8f4b95c
	bool Equal(struct FScriptTypedElementHandle& Lhs, struct FScriptTypedElementHandle& Rhs); // Function TypedElementFramework.TypedElementHandleLibrary.Equal // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8f4ae0c
};

// Class TypedElementFramework.TypedElementListLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTypedElementListLibrary : UObject {

	void Shrink(struct FScriptTypedElementListProxy ElementList); // Function TypedElementFramework.TypedElementListLibrary.Shrink // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8f4c39c
	void Reset(struct FScriptTypedElementListProxy ElementList); // Function TypedElementFramework.TypedElementListLibrary.Reset // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8f4c12c
	void Reserve(struct FScriptTypedElementListProxy ElementList, int32_t Size); // Function TypedElementFramework.TypedElementListLibrary.Reserve // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8f4c01c
	bool Remove(struct FScriptTypedElementListProxy ElementList, struct FScriptTypedElementHandle& ElementHandle); // Function TypedElementFramework.TypedElementListLibrary.Remove // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8f4bed4
	int32_t Num(struct FScriptTypedElementListProxy ElementList); // Function TypedElementFramework.TypedElementListLibrary.Num // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8f4bcd4
	bool IsValidIndex(struct FScriptTypedElementListProxy ElementList, int32_t Index); // Function TypedElementFramework.TypedElementListLibrary.IsValidIndex // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8f4ba0c
	bool HasElementsOfType(struct FScriptTypedElementListProxy ElementList, struct FName ElementTypeName); // Function TypedElementFramework.TypedElementListLibrary.HasElementsOfType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8f4b7b8
	bool HasElements(struct FScriptTypedElementListProxy ElementList, struct UInterface* BaseInterfaceType); // Function TypedElementFramework.TypedElementListLibrary.HasElements // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8f4b6a0
	struct UObject* GetElementInterface(struct FScriptTypedElementListProxy ElementList, struct FScriptTypedElementHandle& ElementHandle, struct UInterface* BaseInterfaceType); // Function TypedElementFramework.TypedElementListLibrary.GetElementInterface // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8f4b294
	struct TArray<struct FScriptTypedElementHandle> GetElementHandles(struct FScriptTypedElementListProxy ElementList, struct UInterface* BaseInterfaceType); // Function TypedElementFramework.TypedElementListLibrary.GetElementHandles // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8f4b164
	struct FScriptTypedElementHandle GetElementHandleAt(struct FScriptTypedElementListProxy ElementList, int32_t Index); // Function TypedElementFramework.TypedElementListLibrary.GetElementHandleAt // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8f4b038
	void Empty(struct FScriptTypedElementListProxy ElementList, int32_t Slack); // Function TypedElementFramework.TypedElementListLibrary.Empty // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8f4acfc
	struct FScriptTypedElementListProxy CreateScriptElementList(struct UTypedElementRegistry* Registry); // Function TypedElementFramework.TypedElementListLibrary.CreateScriptElementList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8f4abe8
	int32_t CountElementsOfType(struct FScriptTypedElementListProxy ElementList, struct FName ElementTypeName); // Function TypedElementFramework.TypedElementListLibrary.CountElementsOfType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8f4aa48
	int32_t CountElements(struct FScriptTypedElementListProxy ElementList, struct UInterface* BaseInterfaceType); // Function TypedElementFramework.TypedElementListLibrary.CountElements // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8f4a8a0
	bool Contains(struct FScriptTypedElementListProxy ElementList, struct FScriptTypedElementHandle& ElementHandle); // Function TypedElementFramework.TypedElementListLibrary.Contains // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8f4a758
	struct FScriptTypedElementListProxy Clone(struct FScriptTypedElementListProxy ElementList); // Function TypedElementFramework.TypedElementListLibrary.Clone // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8f4a670
	void AppendList(struct FScriptTypedElementListProxy ElementList, struct FScriptTypedElementListProxy OtherElementList); // Function TypedElementFramework.TypedElementListLibrary.AppendList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8f4a504
	void Append(struct FScriptTypedElementListProxy ElementList, struct TArray<struct FScriptTypedElementHandle>& ElementHandles); // Function TypedElementFramework.TypedElementListLibrary.Append // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8f4a3d8
	bool Add(struct FScriptTypedElementListProxy ElementList, struct FScriptTypedElementHandle& ElementHandle); // Function TypedElementFramework.TypedElementListLibrary.Add // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8f4a290
};

// Class TypedElementFramework.TypedElementRegistry
// Size: 0x948 (Inherited: 0x28)
struct UTypedElementRegistry : UObject {
	char pad_28[0x920]; // 0x28(0x920)

	struct UTypedElementRegistry* GetInstance(); // Function TypedElementFramework.TypedElementRegistry.GetInstance // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8f4b5b0
	struct UObject* GetElementInterface(struct FScriptTypedElementHandle& InElementHandle, struct UInterface* InBaseInterfaceType); // Function TypedElementFramework.TypedElementRegistry.GetElementInterface // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8f4b4a0
};

