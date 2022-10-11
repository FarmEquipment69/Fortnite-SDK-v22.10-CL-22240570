// VerseClass Verse.$SolarisSignatureFunctionOuter
// Size: 0x28 (Inherited: 0x28)
struct U$SolarisSignatureFunctionOuter : UObject {
};

// VerseClass Verse.cancellable
// Size: 0x28 (Inherited: 0x28)
struct Ucancellable : UObject {

	void _L_2fVerse_2eorg_2fVerse_2fcancellable_N_RCancel(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function Verse.cancellable._L_2fVerse_2eorg_2fVerse_2fcancellable_N_RCancel // (Public|BlueprintCallable) // @ game+0xda05cc
};

// VerseClass Verse.localizable_float
// Size: 0x3c (Inherited: 0x28)
struct Ulocalizable_float : UObject {
	double __verse_0x31A8F10C_Value; // 0x28(0x08)
	struct FDelegate __verse_0x3FB03556__L_2fVerse_2eorg_2fVerse_2flocalizable__value_N_RLocalizeValue_L_Nlocale_R; // 0x30(0x0c)

	VerseStringProperty _L_2fVerse_2eorg_2fVerse_2flocalizable__value_N_RLocalizeValue_L_Nlocale_R(struct Flocale __verse_0xB2CDDD72_Argument); // Function Verse.localizable_float._L_2fVerse_2eorg_2fVerse_2flocalizable__value_N_RLocalizeValue_L_Nlocale_R // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xda05cc
	void $InitInstance(); // Function Verse.localizable_float.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function Verse.localizable_float.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass Verse.localizable_int
// Size: 0x3c (Inherited: 0x28)
struct Ulocalizable_int : UObject {
	int64_t __verse_0x31A8F10C_Value; // 0x28(0x08)
	struct FDelegate __verse_0x3FB03556__L_2fVerse_2eorg_2fVerse_2flocalizable__value_N_RLocalizeValue_L_Nlocale_R; // 0x30(0x0c)

	VerseStringProperty _L_2fVerse_2eorg_2fVerse_2flocalizable__value_N_RLocalizeValue_L_Nlocale_R(struct Flocale __verse_0xB2CDDD72_Argument); // Function Verse.localizable_int._L_2fVerse_2eorg_2fVerse_2flocalizable__value_N_RLocalizeValue_L_Nlocale_R // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xda05cc
	void $InitInstance(); // Function Verse.localizable_int.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function Verse.localizable_int.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass Verse.localizable_string
// Size: 0x44 (Inherited: 0x28)
struct Ulocalizable_string : UObject {
	VerseStringProperty __verse_0x31A8F10C_Value; // 0x28(0x10)
	struct FDelegate __verse_0x3FB03556__L_2fVerse_2eorg_2fVerse_2flocalizable__value_N_RLocalizeValue_L_Nlocale_R; // 0x38(0x0c)

	VerseStringProperty _L_2fVerse_2eorg_2fVerse_2flocalizable__value_N_RLocalizeValue_L_Nlocale_R(struct Flocale __verse_0xB2CDDD72_Argument); // Function Verse.localizable_string._L_2fVerse_2eorg_2fVerse_2flocalizable__value_N_RLocalizeValue_L_Nlocale_R // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xda05cc
	void $InitInstance(); // Function Verse.localizable_string.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function Verse.localizable_string.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass Verse.localizable_value
// Size: 0x28 (Inherited: 0x28)
struct Ulocalizable_value : UObject {

	VerseStringProperty _L_2fVerse_2eorg_2fVerse_2flocalizable__value_N_RLocalizeValue_L_Nlocale_R(struct Flocale __verse_0xB2CDDD72_Argument); // Function Verse.localizable_value._L_2fVerse_2eorg_2fVerse_2flocalizable__value_N_RLocalizeValue_L_Nlocale_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xda05cc
};

// VerseClass Verse.Math
// Size: 0x28 (Inherited: 0x28)
struct UMath : UObject {

	VerseStringProperty _L_2fVerse_2eorg_2fMath_N_RToString_L_Ncolor_R(struct FColor __verse_0xB2CDDD72_Argument); // Function Verse.Math._L_2fVerse_2eorg_2fMath_N_RToString_L_Ncolor_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1d8c
	struct FColor _L_2fVerse_2eorg_2fMath_N_RMakeColorWithAlpha_L_Ncolor_M_Nfloat_R(struct Ftuple_Lcolor_Mfloat_R __verse_0xB2CDDD72_Argument); // Function Verse.Math._L_2fVerse_2eorg_2fMath_N_RMakeColorWithAlpha_L_Ncolor_M_Nfloat_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1d84
	struct FColor _L_2fVerse_2eorg_2fMath_N_RMakeColorFromValues_L_Nint_M_Nint_M_Nint_M_Nint_R(struct Ftuple_Lint_Mint_Mint_Mint_R __verse_0xB2CDDD72_Argument); // Function Verse.Math._L_2fVerse_2eorg_2fMath_N_RMakeColorFromValues_L_Nint_M_Nint_M_Nint_M_Nint_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1d7c
	OptionProperty _L_2fVerse_2eorg_2fMath_N_RMakeColorFromTemperature_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function Verse.Math._L_2fVerse_2eorg_2fMath_N_RMakeColorFromTemperature_L_Nfloat_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1d74
	struct FColor _L_2fVerse_2eorg_2fMath_N_RMakeColorFromNamed_L_Nnamed__color_R(enum class named_color __verse_0xB2CDDD72_Argument); // Function Verse.Math._L_2fVerse_2eorg_2fMath_N_RMakeColorFromNamed_L_Nnamed__color_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1d6c
	struct FColor _L_2fVerse_2eorg_2fMath_N_RMakeColorFromLinear_L_Nfloat_M_Nfloat_M_Nfloat_M_Nfloat_R(struct Ftuple_Lfloat_Mfloat_Mfloat_Mfloat_R __verse_0xB2CDDD72_Argument); // Function Verse.Math._L_2fVerse_2eorg_2fMath_N_RMakeColorFromLinear_L_Nfloat_M_Nfloat_M_Nfloat_M_Nfloat_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1d64
	struct FColor _L_2fVerse_2eorg_2fMath_N_RMakeColorFromHex_L_N_Kchar_R(VerseStringProperty __verse_0xB2CDDD72_Argument); // Function Verse.Math._L_2fVerse_2eorg_2fMath_N_RMakeColorFromHex_L_N_Kchar_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1d5c
	OptionProperty _L_2fVerse_2eorg_2fMath_N_RMakeColorFromHSV_L_Nfloat_M_Nfloat_M_Nfloat_R(struct Ftuple_Lfloat_Mfloat_Mfloat_R __verse_0xB2CDDD72_Argument); // Function Verse.Math._L_2fVerse_2eorg_2fMath_N_RMakeColorFromHSV_L_Nfloat_M_Nfloat_M_Nfloat_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1d54
	struct FColor color$Factory(); // Function Verse.Math.color$Factory // (Static|HasOutParms) // @ game+0xda05cc
	void $InitCDO(); // Function Verse.Math.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass Verse.message
// Size: 0x98 (Inherited: 0x28)
struct Umessage : UObject {
	VerseStringProperty __verse_0x589418B4_Key; // 0x28(0x10)
	VerseStringProperty __verse_0xEDB05B46_DefaultText; // 0x38(0x10)
	struct TMap<VerseStringProperty, struct UObject*> __verse_0x85420AD2_Substitutions; // 0x48(0x50)

	void $InitInstance(); // Function Verse.message.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function Verse.message.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass Verse.Random
// Size: 0x28 (Inherited: 0x28)
struct URandom : UObject {

	struct TArray<VerseDynamicProperty> _L_2fVerse_2eorg_2fRandom_N_RShuffle_L_N_K_Lt_Ntype_R_20where_20t_Ntype_R(struct TArray<VerseDynamicProperty> __verse_0xB2CDDD72_Argument); // Function Verse.Random._L_2fVerse_2eorg_2fRandom_N_RShuffle_L_N_K_Lt_Ntype_R_20where_20t_Ntype_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xda05cc
	int64_t _L_2fVerse_2eorg_2fRandom_N_RGetRandomInt_L_Nint_M_Nint_R(struct Ftuple_Lint_Mint_R __verse_0xB2CDDD72_Argument); // Function Verse.Random._L_2fVerse_2eorg_2fRandom_N_RGetRandomInt_L_Nint_M_Nint_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1d9c
	double _L_2fVerse_2eorg_2fRandom_N_RGetRandomFloat_L_Nfloat_M_Nfloat_R(struct Ftuple_Lfloat_Mfloat_R __verse_0xB2CDDD72_Argument); // Function Verse.Random._L_2fVerse_2eorg_2fRandom_N_RGetRandomFloat_L_Nfloat_M_Nfloat_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1d94
	void $InitCDO(); // Function Verse.Random.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass Verse.subscribable_float
// Size: 0x28 (Inherited: 0x28)
struct Usubscribable_float : UObject {

	struct UObject* _L_2fVerse_2eorg_2fVerse_2fsubscribable__float_N_RSubscribe_L_Nfloat_Tvoid_R(struct FDelegate __verse_0xB2CDDD72_Argument); // Function Verse.subscribable_float._L_2fVerse_2eorg_2fVerse_2fsubscribable__float_N_RSubscribe_L_Nfloat_Tvoid_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xda05cc
};

// VerseClass Verse.subscribable_int
// Size: 0x28 (Inherited: 0x28)
struct Usubscribable_int : UObject {

	struct UObject* _L_2fVerse_2eorg_2fVerse_2fsubscribable__int_N_RSubscribe_L_Nint_Tvoid_R(struct FDelegate __verse_0xB2CDDD72_Argument); // Function Verse.subscribable_int._L_2fVerse_2eorg_2fVerse_2fsubscribable__int_N_RSubscribe_L_Nint_Tvoid_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xda05cc
};

// VerseClass Verse.subscribable_logic
// Size: 0x28 (Inherited: 0x28)
struct Usubscribable_logic : UObject {

	struct UObject* _L_2fVerse_2eorg_2fVerse_2fsubscribable__logic_N_RSubscribe_L_Nlogic_Tvoid_R(struct FDelegate __verse_0xB2CDDD72_Argument); // Function Verse.subscribable_logic._L_2fVerse_2eorg_2fVerse_2fsubscribable__logic_N_RSubscribe_L_Nlogic_Tvoid_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xda05cc
};

// VerseClass Verse.subscribable_string
// Size: 0x28 (Inherited: 0x28)
struct Usubscribable_string : UObject {

	struct UObject* _L_2fVerse_2eorg_2fVerse_2fsubscribable__string_N_RSubscribe_L_N_Kchar_Tvoid_R(struct FDelegate __verse_0xB2CDDD72_Argument); // Function Verse.subscribable_string._L_2fVerse_2eorg_2fVerse_2fsubscribable__string_N_RSubscribe_L_N_Kchar_Tvoid_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xda05cc
};

// VerseClass Verse.subscribable_void
// Size: 0x28 (Inherited: 0x28)
struct Usubscribable_void : UObject {

	struct UObject* _L_2fVerse_2eorg_2fVerse_2fsubscribable__void_N_RSubscribe_L_Ntuple_L_R_Tvoid_R(struct FDelegate __verse_0xB2CDDD72_Argument); // Function Verse.subscribable_void._L_2fVerse_2eorg_2fVerse_2fsubscribable__void_N_RSubscribe_L_Ntuple_L_R_Tvoid_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xda05cc
};

// VerseClass Verse.Verse
// Size: 0x40 (Inherited: 0x28)
struct UVerse : UObject {
	double __verse_0x5851330D_Inf; // 0x28(0x08)
	double __verse_0xAA2D0DC5_NaN; // 0x30(0x08)
	double __verse_0x34BB10F0_PiFloat; // 0x38(0x08)

	VerseStringProperty _L_2fVerse_2eorg_2fVerse_N_RToStringSeparated_L_N_K_Kchar_M_N_Kchar_R(struct Ftuple_L_K_Kchar_M_Kchar_R __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RToStringSeparated_L_N_K_Kchar_M_N_Kchar_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1e74
	VerseStringProperty _L_2fVerse_2eorg_2fVerse_N_RToString_L_Nint_R(int64_t __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RToString_L_Nint_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1e8c
	VerseStringProperty _L_2fVerse_2eorg_2fVerse_N_RToString_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RToString_L_Nfloat_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1e84
	VerseStringProperty _L_2fVerse_2eorg_2fVerse_N_RToString_L_Nchar_R(char __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RToString_L_Nchar_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1e7c
	VerseStringProperty _L_2fVerse_2eorg_2fVerse_N_RToString_L_N_Kchar_R(VerseStringProperty __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RToString_L_N_Kchar_R // (Final|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xda05cc
	double _L_2fVerse_2eorg_2fVerse_N_RTanh_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RTanh_L_Nfloat_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1e6c
	double _L_2fVerse_2eorg_2fVerse_N_RTan_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RTan_L_Nfloat_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1e64
	double _L_2fVerse_2eorg_2fVerse_N_RSqrt_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RSqrt_L_Nfloat_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1e5c
	OptionProperty _L_2fVerse_2eorg_2fVerse_N_RSlice_L_N_K_Lt_Ntype_R_M_Nint_20where_20t_Ntype_R(struct Ftuple_L_Kany_Mint_R __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RSlice_L_N_K_Lt_Ntype_R_M_Nint_20where_20t_Ntype_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xda05cc
	OptionProperty _L_2fVerse_2eorg_2fVerse_N_RSlice_L_N_K_Lt_Ntype_R_M_Nint_M_Nint_20where_20t_Ntype_R(struct Ftuple_L_Kany_Mint_Mint_R __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RSlice_L_N_K_Lt_Ntype_R_M_Nint_M_Nint_20where_20t_Ntype_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xda05cc
	double _L_2fVerse_2eorg_2fVerse_N_RSinh_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RSinh_L_Nfloat_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1e54
	double _L_2fVerse_2eorg_2fVerse_N_RSin_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RSin_L_Nfloat_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1e4c
	int64_t _L_2fVerse_2eorg_2fVerse_N_RSgn_L_Nint_R(int64_t __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RSgn_L_Nint_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xda05cc
	double _L_2fVerse_2eorg_2fVerse_N_RSgn_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RSgn_L_Nfloat_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xda05cc
	OptionProperty _L_2fVerse_2eorg_2fVerse_N_RRound_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RRound_L_Nfloat_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1e44
	OptionProperty _L_2fVerse_2eorg_2fVerse_N_RReplaceFirstElement_L_N_K_Lt_Nsubtype_Lcomparable_R_R_M_N_Lt_Nsubtype_Lcomparable_R_R_M_N_Lt_Nsubtype_Lcomparable_R_R_20where_20t_Nsubtype_Lcomparable_R_R(struct Ftuple_L_Kany_Many_Many_R __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RReplaceFirstElement_L_N_K_Lt_Nsubtype_Lcomparable_R_R_M_N_Lt_Nsubtype_Lcomparable_R_R_M_N_Lt_Nsubtype_Lcomparable_R_R_20where_20t_Nsubtype_Lcomparable_R_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xda05cc
	OptionProperty _L_2fVerse_2eorg_2fVerse_N_RReplaceElement_L_N_K_Lt_Ntype_R_M_Nint_M_N_Lt_Ntype_R_20where_20t_Ntype_R(struct Ftuple_L_Kany_Mint_Many_R __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RReplaceElement_L_N_K_Lt_Ntype_R_M_Nint_M_N_Lt_Ntype_R_20where_20t_Ntype_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xda05cc
	struct TArray<VerseDynamicProperty> _L_2fVerse_2eorg_2fVerse_N_RReplaceAllElements_L_N_K_Lt_Nsubtype_Lcomparable_R_R_M_N_Lt_Nsubtype_Lcomparable_R_R_M_N_Lt_Nsubtype_Lcomparable_R_R_20where_20t_Nsubtype_Lcomparable_R_R(struct Ftuple_L_Kany_Many_Many_R __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RReplaceAllElements_L_N_K_Lt_Nsubtype_Lcomparable_R_R_M_N_Lt_Nsubtype_Lcomparable_R_R_M_N_Lt_Nsubtype_Lcomparable_R_R_20where_20t_Nsubtype_Lcomparable_R_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xda05cc
	OptionProperty _L_2fVerse_2eorg_2fVerse_N_RRemoveFirstElement_L_N_K_Lt_Nsubtype_Lcomparable_R_R_M_N_Lt_Nsubtype_Lcomparable_R_R_20where_20t_Nsubtype_Lcomparable_R_R(struct Ftuple_L_Kany_Many_R __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RRemoveFirstElement_L_N_K_Lt_Nsubtype_Lcomparable_R_R_M_N_Lt_Nsubtype_Lcomparable_R_R_20where_20t_Nsubtype_Lcomparable_R_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xda05cc
	OptionProperty _L_2fVerse_2eorg_2fVerse_N_RRemoveElement_L_N_K_Lt_Ntype_R_M_Nint_20where_20t_Ntype_R(struct Ftuple_L_Kany_Mint_R __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RRemoveElement_L_N_K_Lt_Ntype_R_M_Nint_20where_20t_Ntype_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xda05cc
	struct TArray<VerseDynamicProperty> _L_2fVerse_2eorg_2fVerse_N_RRemoveAllElements_L_N_K_Lt_Nsubtype_Lcomparable_R_R_M_N_Lt_Nsubtype_Lcomparable_R_R_20where_20t_Nsubtype_Lcomparable_R_R(struct Ftuple_L_Kany_Many_R __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RRemoveAllElements_L_N_K_Lt_Nsubtype_Lcomparable_R_R_M_N_Lt_Nsubtype_Lcomparable_R_R_20where_20t_Nsubtype_Lcomparable_R_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xda05cc
	OptionProperty _L_2fVerse_2eorg_2fVerse_N_RQuotient_L_Nint_M_Nint_R(struct Ftuple_Lint_Mint_R __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RQuotient_L_Nint_M_Nint_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1e3c
	double _L_2fVerse_2eorg_2fVerse_N_RPow_L_Nfloat_M_Nfloat_R(struct Ftuple_Lfloat_Mfloat_R __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RPow_L_Nfloat_M_Nfloat_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1e34
	OptionProperty _L_2fVerse_2eorg_2fVerse_N_RMod_L_Nint_M_Nint_R(struct Ftuple_Lint_Mint_R __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RMod_L_Nint_M_Nint_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1e2c
	double _L_2fVerse_2eorg_2fVerse_N_RMin_L_Nfloat_M_Nfloat_R(struct Ftuple_Lfloat_Mfloat_R __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RMin_L_Nfloat_M_Nfloat_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xda05cc
	double _L_2fVerse_2eorg_2fVerse_N_RMax_L_Nfloat_M_Nfloat_R(struct Ftuple_Lfloat_Mfloat_R __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RMax_L_Nfloat_M_Nfloat_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xda05cc
	struct Umessage* _L_2fVerse_2eorg_2fVerse_N_RMakeMessageInternal_L_N_Kchar_M_N_Kchar_M_N_5b_Kchar_5dlocalizable__value_R(struct Ftuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RMakeMessageInternal_L_N_Kchar_M_N_Kchar_M_N_5b_Kchar_5dlocalizable__value_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4c484e0
	struct Ulocalizable_int* _L_2fVerse_2eorg_2fVerse_N_RMakeLocalizableValue_L_Nint_R(int64_t __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RMakeLocalizableValue_L_Nint_R // (Final|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xda05cc
	struct Ulocalizable_float* _L_2fVerse_2eorg_2fVerse_N_RMakeLocalizableValue_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RMakeLocalizableValue_L_Nfloat_R // (Final|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xda05cc
	struct Ulocalizable_string* _L_2fVerse_2eorg_2fVerse_N_RMakeLocalizableValue_L_N_Kchar_R(VerseStringProperty __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RMakeLocalizableValue_L_N_Kchar_R // (Final|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xda05cc
	double _L_2fVerse_2eorg_2fVerse_N_RLog_L_Nfloat_M_Nfloat_R(struct Ftuple_Lfloat_Mfloat_R __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RLog_L_Nfloat_M_Nfloat_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xda05cc
	VerseStringProperty _L_2fVerse_2eorg_2fVerse_N_RLocalizeInternal_L_N_Kchar_M_N_Kchar_M_N_Ktuple_L_Kchar_M_Kchar_R_M_Nlocale_R(struct Ftuple_L_Kchar_M_Kchar_M_Ktuple_L_Kchar_M_Kchar_R_Mlocale_R __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RLocalizeInternal_L_N_Kchar_M_N_Kchar_M_N_Ktuple_L_Kchar_M_Kchar_R_M_Nlocale_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4c484d0
	VerseStringProperty _L_2fVerse_2eorg_2fVerse_N_RLocalize_L_Nfloat_M_N_L_QWhere_Nlocale_R_R(struct Ftuple_Lfloat_M_QWhere_Nlocale_R __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RLocalize_L_Nfloat_M_N_L_QWhere_Nlocale_R_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xda05cc
	VerseStringProperty _L_2fVerse_2eorg_2fVerse_N_RLocalize_L_Nint_M_N_L_QWhere_Nlocale_R_R(struct Ftuple_Lint_M_QWhere_Nlocale_R __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RLocalize_L_Nint_M_N_L_QWhere_Nlocale_R_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xda05cc
	VerseStringProperty _L_2fVerse_2eorg_2fVerse_N_RLocalize_L_Nmessage_R(struct Umessage* __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RLocalize_L_Nmessage_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xda05cc
	VerseStringProperty _L_2fVerse_2eorg_2fVerse_N_RLocalize_L_N_Kchar_M_N_L_QWhere_Nlocale_R_R(struct Ftuple_L_Kchar_M_QWhere_Nlocale_R __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RLocalize_L_N_Kchar_M_N_L_QWhere_Nlocale_R_R // (Final|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xda05cc
	double _L_2fVerse_2eorg_2fVerse_N_RLn_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RLn_L_Nfloat_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1e24
	double _L_2fVerse_2eorg_2fVerse_N_RLerp_L_Nfloat_M_Nfloat_M_Nfloat_R(struct Ftuple_Lfloat_Mfloat_Mfloat_R __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RLerp_L_Nfloat_M_Nfloat_M_Nfloat_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1e1c
	OptionProperty _L_2fVerse_2eorg_2fVerse_N_RIsFinite_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RIsFinite_L_Nfloat_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xda05cc
	OptionProperty _L_2fVerse_2eorg_2fVerse_N_RInt_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RInt_L_Nfloat_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1e14
	OptionProperty _L_2fVerse_2eorg_2fVerse_N_RInsert_L_N_K_Lt_Ntype_R_M_Nint_M_N_K_Lt_Ntype_R_20where_20t_Ntype_R(struct Ftuple_L_Kany_Mint_M_Kany_R __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RInsert_L_N_K_Lt_Ntype_R_M_Nint_M_N_K_Lt_Ntype_R_20where_20t_Ntype_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xda05cc
	OptionProperty _L_2fVerse_2eorg_2fVerse_N_RFloor_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RFloor_L_Nfloat_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1e0c
	double _L_2fVerse_2eorg_2fVerse_N_RExp_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RExp_L_Nfloat_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1e04
	enum class EVerseFalse _L_2fVerse_2eorg_2fVerse_N_RErr_L_N_Kchar_R(VerseStringProperty __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RErr_L_N_Kchar_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1dfc
	double _L_2fVerse_2eorg_2fVerse_N_RCosh_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RCosh_L_Nfloat_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1df4
	double _L_2fVerse_2eorg_2fVerse_N_RCos_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RCos_L_Nfloat_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1dec
	struct TArray<VerseDynamicProperty> _L_2fVerse_2eorg_2fVerse_N_RConcatenate_L_N_K_K_Lt_Ntype_R_20where_20t_Ntype_R(struct TArray<struct TArray<VerseDynamicProperty>> __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RConcatenate_L_N_K_K_Lt_Ntype_R_20where_20t_Ntype_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xda05cc
	double _L_2fVerse_2eorg_2fVerse_N_RClamp_L_Nfloat_M_Nfloat_M_Nfloat_R(struct Ftuple_Lfloat_Mfloat_Mfloat_R __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RClamp_L_Nfloat_M_Nfloat_M_Nfloat_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xda05cc
	int64_t _L_2fVerse_2eorg_2fVerse_N_RClamp_L_Nint_M_Nint_M_Nint_R(struct Ftuple_Lint_Mint_Mint_R __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RClamp_L_Nint_M_Nint_M_Nint_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1de4
	OptionProperty _L_2fVerse_2eorg_2fVerse_N_RCeil_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RCeil_L_Nfloat_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1ddc
	double _L_2fVerse_2eorg_2fVerse_N_RArcTan_L_Nfloat_M_Nfloat_R(struct Ftuple_Lfloat_Mfloat_R __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RArcTan_L_Nfloat_M_Nfloat_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1dcc
	double _L_2fVerse_2eorg_2fVerse_N_RArcTan_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RArcTan_L_Nfloat_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1dd4
	double _L_2fVerse_2eorg_2fVerse_N_RArcSin_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RArcSin_L_Nfloat_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1dc4
	double _L_2fVerse_2eorg_2fVerse_N_RArcCos_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RArcCos_L_Nfloat_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1dbc
	double _L_2fVerse_2eorg_2fVerse_N_RArTanh_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RArTanh_L_Nfloat_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1db4
	double _L_2fVerse_2eorg_2fVerse_N_RArSinh_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RArSinh_L_Nfloat_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1dac
	double _L_2fVerse_2eorg_2fVerse_N_RArCosh_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function Verse.Verse._L_2fVerse_2eorg_2fVerse_N_RArCosh_L_Nfloat_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe1da4
	struct Flocale locale$Factory(); // Function Verse.Verse.locale$Factory // (Static|HasOutParms) // @ game+0xda05cc
	void $InitCDO(); // Function Verse.Verse.$InitCDO // (None) // @ game+0xda05cc
};

