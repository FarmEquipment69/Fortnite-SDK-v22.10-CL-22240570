// Class Solaris.SolarisArrayLibrary
// Size: 0x28 (Inherited: 0x28)
struct USolarisArrayLibrary : UObject {

	void UnsafeCall(struct TArray<struct FGenericElementType>& Array, int64_t Index); // Function Solaris.SolarisArrayLibrary.UnsafeCall // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fa994c
	void RefCall(struct TArray<struct FGenericElementType>& Array, int64_t Index); // Function Solaris.SolarisArrayLibrary.RefCall // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fa97d8
	void Move(struct TArray<struct FGenericElementType>& Target, struct TArray<struct FGenericElementType>& Source); // Function Solaris.SolarisArrayLibrary.Move // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fa965c
	int64_t Length(struct TArray<struct FGenericElementType>& Array); // Function Solaris.SolarisArrayLibrary.Length // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fa959c
	void Empty(struct TArray<struct FGenericElementType>& Array); // Function Solaris.SolarisArrayLibrary.Empty // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fa9510
	struct TArray<struct FGenericElementType> ConcatEquals(struct TArray<struct FGenericElementType>& Lhs, struct TArray<struct FGenericElementType>& Rhs); // Function Solaris.SolarisArrayLibrary.ConcatEquals // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fa93c4
	struct TArray<struct FGenericElementType> Concat(struct TArray<struct FGenericElementType>& Lhs, struct TArray<struct FGenericElementType>& Rhs); // Function Solaris.SolarisArrayLibrary.Concat // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fa92b4
	void Call(struct TArray<struct FGenericElementType>& Array, int64_t Index); // Function Solaris.SolarisArrayLibrary.Call // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fa8fa0
	int64_t Add(struct TArray<struct FGenericElementType>& Array, struct FGenericElementType& new_item); // Function Solaris.SolarisArrayLibrary.Add // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fa8df4
};

// Class Solaris.SolarisCoroutineLibrary
// Size: 0x28 (Inherited: 0x28)
struct USolarisCoroutineLibrary : UObject {

	struct UObject* TaskMake(struct UObject* Type, struct UObject* Caller, int64_t CallerResumeState, int64_t CallerCancelState, struct UObject* OwnerInstance); // Function Solaris.SolarisCoroutineLibrary.TaskMake // (Final|Native|Static|Public) // @ game+0x5fa83e8
	int64_t TaskGetState(struct UObject* Task); // Function Solaris.SolarisCoroutineLibrary.TaskGetState // (Final|Native|Static|Public) // @ game+0x5fa8364
	void TaskGetReturnProperty(struct UObject* Task); // Function Solaris.SolarisCoroutineLibrary.TaskGetReturnProperty // (Final|Native|Static|Public) // @ game+0x5fc0380
	void TaskFree(struct UObject* Task); // Function Solaris.SolarisCoroutineLibrary.TaskFree // (Final|Native|Static|Public) // @ game+0x5fa82ec
	void TaskCancel(struct UObject* Task); // Function Solaris.SolarisCoroutineLibrary.TaskCancel // (Final|Native|Static|Public) // @ game+0x5fa827c
};

// Class Solaris.SolarisDebugData
// Size: 0x38 (Inherited: 0x28)
struct USolarisDebugData : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class Solaris.SolarisDigest
// Size: 0x50 (Inherited: 0x28)
struct USolarisDigest : UObject {
	struct TArray<char> DigestCode; // 0x28(0x10)
	struct FString ProjectName; // 0x38(0x10)
	enum class EVerseDigestVariant Variant; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class Solaris.GameFeature_SolarisObserver
// Size: 0x40 (Inherited: 0x28)
struct UGameFeature_SolarisObserver : UObject {
	char pad_28[0x18]; // 0x28(0x18)
};

// Class Solaris.VerseStruct
// Size: 0xd0 (Inherited: 0xc0)
struct UVerseStruct : UScriptStruct {
	struct UFunction* InitFunction; // 0xc0(0x08)
	struct UObject* ModuleClass; // 0xc8(0x08)
};

// Class Solaris.SolarisMapLibrary
// Size: 0x28 (Inherited: 0x28)
struct USolarisMapLibrary : UObject {

	void RefCall(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Map, struct FGenericKeyType Key); // Function Solaris.SolarisMapLibrary.RefCall // (Final|Native|Static|Public|HasOutParms) // @ game+0x4c471c0
	void Move(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Dest, struct TMap<struct FGenericKeyType, struct FGenericValueType>& Src); // Function Solaris.SolarisMapLibrary.Move // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fbf1f8
	int64_t Length(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Map); // Function Solaris.SolarisMapLibrary.Length // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fbe238
	void InitMap(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Map); // Function Solaris.SolarisMapLibrary.InitMap // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fbdbc4
	struct FGenericValueType GetValueByIndex(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Map, int64_t Index); // Function Solaris.SolarisMapLibrary.GetValueByIndex // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fbd4c4
	int64_t GetNextValidIndex(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Map, int64_t InitialIndex); // Function Solaris.SolarisMapLibrary.GetNextValidIndex // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fbd2e0
	struct FGenericKeyType GetKeyByIndex(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Map, int64_t Index); // Function Solaris.SolarisMapLibrary.GetKeyByIndex // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fbd140
	struct TMap<struct FGenericKeyType, struct FGenericValueType> Concat(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Lhs, struct TMap<struct FGenericKeyType, struct FGenericValueType>& Rhs); // Function Solaris.SolarisMapLibrary.Concat // (Final|Native|Static|Public|HasOutParms) // @ game+0x4c46b60
	void Call(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Map, struct FGenericKeyType Key); // Function Solaris.SolarisMapLibrary.Call // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fbbc94
	void Add(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Map, struct FGenericKeyType& Key, struct FGenericValueType& Value); // Function Solaris.SolarisMapLibrary.Add // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fbb4f0
};

// Class Solaris.SolarisMathLibrary_Bool
// Size: 0x28 (Inherited: 0x28)
struct USolarisMathLibrary_Bool : UObject {

	void Query(); // Function Solaris.SolarisMathLibrary_Bool.Query // (Final|Native|Static|Public) // @ game+0x5fbfb9c
};

// Class Solaris.SolarisMathLibrary_Int
// Size: 0x28 (Inherited: 0x28)
struct USolarisMathLibrary_Int : UObject {

	int32_t UncheckedConvertI32I64(int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.UncheckedConvertI32I64 // (Final|Native|Static|Public) // @ game+0x5fa8568
	void SubtractEquals(int64_t& Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.SubtractEquals // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fc01b4
	void Subtract(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.Subtract // (Final|Native|Static|Public) // @ game+0x5fbffe4
	bool PredicateNotEqual(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.PredicateNotEqual // (Final|Native|Static|Public) // @ game+0x5fa8008
	bool PredicateLessEqual(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.PredicateLessEqual // (Final|Native|Static|Public) // @ game+0x5fa7f48
	bool PredicateLess(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.PredicateLess // (Final|Native|Static|Public) // @ game+0x5fa7e88
	bool PredicateGreaterEqual(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.PredicateGreaterEqual // (Final|Native|Static|Public) // @ game+0x5fa7dc8
	bool PredicateGreater(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.PredicateGreater // (Final|Native|Static|Public) // @ game+0x5fa7d08
	bool PredicateEqual(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.PredicateEqual // (Final|Native|Static|Public) // @ game+0x5fa7c48
	void Negate(int64_t Value); // Function Solaris.SolarisMathLibrary_Int.Negate // (Final|Native|Static|Public) // @ game+0x5fbf774
	void MultiplyEquals(int64_t& Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.MultiplyEquals // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fbf5a8
	void Multiply(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.Multiply // (Final|Native|Static|Public) // @ game+0x5fbf3d8
	void LessEqual(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.LessEqual // (Final|Native|Static|Public) // @ game+0x5fbe688
	void Less(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.Less // (Final|Native|Static|Public) // @ game+0x5fbe484
	void GreaterEqual(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.GreaterEqual // (Final|Native|Static|Public) // @ game+0x5fbd990
	void Greater(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.Greater // (Final|Native|Static|Public) // @ game+0x5fbd78c
	void Divide(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.Divide // (Final|Native|Static|Public) // @ game+0x5fbc974
	void AddEquals(int64_t& Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.AddEquals // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fbbac8
	void Add(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.Add // (Final|Native|Static|Public) // @ game+0x5fbb828
	void Abs(int64_t Value); // Function Solaris.SolarisMathLibrary_Int.Abs // (Final|Native|Static|Public) // @ game+0x5fbb370
};

// Class Solaris.SolarisMathLibrary_Rational
// Size: 0x28 (Inherited: 0x28)
struct USolarisMathLibrary_Rational : UObject {

	void Floor(struct FVerseRational Val); // Function Solaris.SolarisMathLibrary_Rational.Floor // (Final|Native|Static|Public) // @ game+0x5fbcd34
	void Ceil(struct FVerseRational Val); // Function Solaris.SolarisMathLibrary_Rational.Ceil // (Final|Native|Static|Public) // @ game+0x5fbc35c
};

// Class Solaris.SolarisMathLibrary_Float
// Size: 0x28 (Inherited: 0x28)
struct USolarisMathLibrary_Float : UObject {

	double SubtractEquals(double& Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.SubtractEquals // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fa819c
	double Subtract(double Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.Subtract // (Final|Native|Static|Public) // @ game+0x5fa80c8
	double Negate(double Value); // Function Solaris.SolarisMathLibrary_Float.Negate // (Final|Native|Static|Public) // @ game+0x5fa7bc0
	double MultiplyIntFloat(int64_t Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.MultiplyIntFloat // (Final|Native|Static|Public) // @ game+0x5fa7af4
	double MultiplyFloatInt(double Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Float.MultiplyFloatInt // (Final|Native|Static|Public) // @ game+0x5fa7a28
	double MultiplyEquals(double& Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.MultiplyEquals // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fa7948
	double Multiply(double Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.Multiply // (Final|Native|Static|Public) // @ game+0x5fa7874
	void LessEqual(double Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.LessEqual // (Final|Native|Static|Public) // @ game+0x5fbe574
	void Less(double Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.Less // (Final|Native|Static|Public) // @ game+0x5fbe370
	void GreaterEqual(double Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.GreaterEqual // (Final|Native|Static|Public) // @ game+0x5fbd87c
	void Greater(double Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.Greater // (Final|Native|Static|Public) // @ game+0x5fbd678
	double DivideEquals(double& Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.DivideEquals // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fa76d8
	double Divide(double Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.Divide // (Final|Native|Static|Public) // @ game+0x5fa7604
	double AddEquals(double& Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.AddEquals // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fa7524
	double Add(double Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.Add // (Final|Native|Static|Public) // @ game+0x5fa7450
	double Abs(double Value); // Function Solaris.SolarisMathLibrary_Float.Abs // (Final|Native|Static|Public) // @ game+0x5fa73c8
};

// Class Solaris.SolarisMathLibrary_String
// Size: 0x28 (Inherited: 0x28)
struct USolarisMathLibrary_String : UObject {

	void UncheckedCall(int32_t& String, int64_t Index); // Function Solaris.SolarisMathLibrary_String.UncheckedCall // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fc0614
	void RefCall(int32_t& String, int64_t Index); // Function Solaris.SolarisMathLibrary_String.RefCall // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fbfcbc
	void Move(int32_t& Destination, int32_t& Source); // Function Solaris.SolarisMathLibrary_String.Move // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fbf324
	int32_t MakeLiteral(); // Function Solaris.SolarisMathLibrary_String.MakeLiteral // (Final|Native|Static|Public) // @ game+0x5fbe9c0
	void Make(); // Function Solaris.SolarisMathLibrary_String.Make // (Final|Native|Static|Public) // @ game+0x5fbe83c
	int64_t Length(int32_t& Array); // Function Solaris.SolarisMathLibrary_String.Length // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fbe2f4
	int32_t ConcatEquals(int32_t& Lhs, int32_t& Rhs); // Function Solaris.SolarisMathLibrary_String.ConcatEquals // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fbc5e8
	int32_t Concat(int32_t& Lhs, int32_t& Rhs); // Function Solaris.SolarisMathLibrary_String.Concat // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fbc50c
	void Call(int32_t& String, int64_t Index); // Function Solaris.SolarisMathLibrary_String.Call // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fbbf90
	void Add(int32_t& String, int8_t Character); // Function Solaris.SolarisMathLibrary_String.Add // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fbb9f8
};

// Class Solaris.SolarisMathLibrary_Option
// Size: 0x28 (Inherited: 0x28)
struct USolarisMathLibrary_Option : UObject {

	void Query(); // Function Solaris.SolarisMathLibrary_Option.Query // (Final|Native|Static|Public) // @ game+0x5fbfc50
	void Make(); // Function Solaris.SolarisMathLibrary_Option.Make // (Final|Native|Static|Public) // @ game+0x5fbe778
};

// Class Solaris.SolarisGameSettings
// Size: 0x40 (Inherited: 0x28)
struct USolarisGameSettings : UObject {
	struct TArray<struct FString> Blacklist; // 0x28(0x10)
	int32_t MaxAllowedSize; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Solaris.SolarisUtilLibrary
// Size: 0x28 (Inherited: 0x28)
struct USolarisUtilLibrary : UObject {

	bool ReferenceIsValid(int64_t reference); // Function Solaris.SolarisUtilLibrary.ReferenceIsValid // (Final|Native|Static|Public) // @ game+0x5fbfddc
	int64_t MakeUnsetOption(); // Function Solaris.SolarisUtilLibrary.MakeUnsetOption // (Final|Native|Static|Public) // @ game+0x5fbf14c
	bool MakeOptionFromValue(struct UObject* Property, int64_t Value); // Function Solaris.SolarisUtilLibrary.MakeOptionFromValue // (Final|Native|Static|Public) // @ game+0x5fbea98
	bool IsOptionSet(int64_t Option); // Function Solaris.SolarisUtilLibrary.IsOptionSet // (Final|Native|Static|Public) // @ game+0x5fbe168
	bool IsNonNullObject(struct UObject* Object); // Function Solaris.SolarisUtilLibrary.IsNonNullObject // (Final|Native|Static|Public) // @ game+0x5fbe0f4
	struct UObject* InstantiateObject(struct UObject* Type); // Function Solaris.SolarisUtilLibrary.InstantiateObject // (Final|Native|Static|Public) // @ game+0x5fbdeec
	bool HasInterface(struct UObject* Object, struct UObject* InterfaceClass); // Function Solaris.SolarisUtilLibrary.HasInterface // (Final|Native|Static|Public) // @ game+0x5fbda80
	int64_t GetOptionValue(int64_t Option); // Function Solaris.SolarisUtilLibrary.GetOptionValue // (Final|Native|Static|Public) // @ game+0x5fbd408
	void GetDelegateForInterfaceMethod(struct UObject* Object, struct FName MethodName); // Function Solaris.SolarisUtilLibrary.GetDelegateForInterfaceMethod // (Final|Native|Static|Public) // @ game+0x5fbcee4
	struct UObject* GetCurrentlyInstantiatedObject(); // Function Solaris.SolarisUtilLibrary.GetCurrentlyInstantiatedObject // (Final|Native|Static|Public) // @ game+0x5fa77bc
	int64_t Dereference(int64_t reference); // Function Solaris.SolarisUtilLibrary.Dereference // (Final|Native|Static|Public) // @ game+0x5fbc8cc
	void CallDelegate(); // Function Solaris.SolarisUtilLibrary.CallDelegate // (Final|Native|Static|Public) // @ game+0x5fbc24c
};

// Class Solaris.VerseClass
// Size: 0x2f0 (Inherited: 0x230)
struct UVerseClass : UVerseClassBase {
	uint32_t SolClassFlags; // 0x230(0x04)
	char pad_234[0x4]; // 0x234(0x04)
	struct TArray<struct UObject*> TaskClasses; // 0x238(0x10)
	struct TSet<struct UObject*> InterfaceClasses; // 0x248(0x50)
	struct TMap<struct FName, struct TFieldPath<FProperty>> InterfaceMethodDelegateProperties; // 0x298(0x50)
	struct UFunction* InitInstanceFunction; // 0x2e8(0x08)
};

// Class Solaris.VerseDynamicallyTypedValueLibrary
// Size: 0x28 (Inherited: 0x28)
struct UVerseDynamicallyTypedValueLibrary : UObject {

	void NotEqual(int32_t Left, int32_t Right); // Function Solaris.VerseDynamicallyTypedValueLibrary.NotEqual // (Final|Native|Static|Public) // @ game+0x5fbf8f4
	void MakeRuntimeTypeTuple(struct TArray<int32_t> ValueType); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeTuple // (Final|Native|Static|Public) // @ game+0x5fbefac
	void MakeRuntimeTypeString(); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeString // (Final|Native|Static|Public) // @ game+0x5fbef88
	void MakeRuntimeTypeOption(int32_t ValueType); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeOption // (Final|Native|Static|Public) // @ game+0x5fbef08
	void MakeRuntimeTypeObject(); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeObject // (Final|Native|Static|Public) // @ game+0x5fbeee4
	void MakeRuntimeTypeMap(int32_t KeyType, int32_t ValueType); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeMap // (Final|Native|Static|Public) // @ game+0x5fbee20
	void MakeRuntimeTypeLogic(); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeLogic // (Final|Native|Static|Public) // @ game+0x5fbedfc
	void MakeRuntimeTypeInt64(); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeInt64 // (Final|Native|Static|Public) // @ game+0x5fbedd8
	void MakeRuntimeTypeFunction(); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeFunction // (Final|Native|Static|Public) // @ game+0x5fbedb4
	void MakeRuntimeTypeFloat(); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeFloat // (Final|Native|Static|Public) // @ game+0x5fbed90
	void MakeRuntimeTypeEnum(struct FName Name); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeEnum // (Final|Native|Static|Public) // @ game+0x5fbed10
	void MakeRuntimeTypeDynamic(); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeDynamic // (Final|Native|Static|Public) // @ game+0x5fbecec
	void MakeRuntimeTypeClass(); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeClass // (Final|Native|Static|Public) // @ game+0x5fbecc8
	void MakeRuntimeTypeChar8(); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeChar8 // (Final|Native|Static|Public) // @ game+0x5fbeca4
	void MakeRuntimeTypeChar32(); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeChar32 // (Final|Native|Static|Public) // @ game+0x5fbec80
	void MakeRuntimeTypeArray(int32_t ElementType); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeArray // (Final|Native|Static|Public) // @ game+0x5fbec00
	void Equal(int32_t Left, int32_t Right); // Function Solaris.VerseDynamicallyTypedValueLibrary.Equal // (Final|Native|Static|Public) // @ game+0x5fbca8c
	void ConvertToDynamicallyTypedValue(int32_t RuntimeType, int32_t Value); // Function Solaris.VerseDynamicallyTypedValueLibrary.ConvertToDynamicallyTypedValue // (Final|Native|Static|Public) // @ game+0x5fbc80c
	void ConvertFromDynamicallyTypedValue(int32_t RuntimeType, int32_t Value); // Function Solaris.VerseDynamicallyTypedValueLibrary.ConvertFromDynamicallyTypedValue // (Final|Native|Static|Public) // @ game+0x5fbc704
};

// Class Solaris.VerseStmLibrary
// Size: 0x28 (Inherited: 0x28)
struct UVerseStmLibrary : UObject {

	void StmSave(struct FakeType& Property); // Function Solaris.VerseStmLibrary.StmSave // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fbff70
	void StmRollback(); // Function Solaris.VerseStmLibrary.StmRollback // (Final|Native|Static|Public) // @ game+0x5fbff0c
	void StmCommit(); // Function Solaris.VerseStmLibrary.StmCommit // (Final|Native|Static|Public) // @ game+0x5fbfe58
	void StmBegin(); // Function Solaris.VerseStmLibrary.StmBegin // (Final|Native|Static|Public) // @ game+0x5fbfe44
};

