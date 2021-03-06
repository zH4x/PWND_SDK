#pragma once

// PWND (4.17.2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Phasing_Base_DOT.Phasing_Base_DOT_C
// 0x0018 (0x1570 - 0x1558)
class UPhasing_Base_DOT_C : public UBase_AbilityDOT_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1558(0x0008) (Transient, DuplicateTransient)
	class UMaterialInterface*                          PhasingMaterial;                                          // 0x1560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageTakenMod;                                           // 0x1568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeDilationMod;                                          // 0x156C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Phasing_Base_DOT.Phasing_Base_DOT_C");
		return ptr;
	}


	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void OnTuneCharacter(class APwndCharacter** Char);
	void ExecuteUbergraph_Phasing_Base_DOT(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
