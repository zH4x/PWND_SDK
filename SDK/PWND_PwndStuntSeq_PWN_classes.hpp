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

// BlueprintGeneratedClass PwndStuntSeq_PWN.PwndStuntSeq_PWN_C
// 0x0010 (0x0090 - 0x0080)
class UPwndStuntSeq_PWN_C : public UBase_StuntSequence_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0080(0x0008) (Transient, DuplicateTransient)
	float                                              PwnTime;                                                  // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PwnTimeInterval;                                          // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PwndStuntSeq_PWN.PwndStuntSeq_PWN_C");
		return ptr;
	}


	void OnPostEventTrigger(TEnumAsByte<EeEventTrigger>* Trigger, float* Count, TArray<class UObject*>* Others);
	void OnTick(float* DeltaSeconds);
	void ExecuteUbergraph_PwndStuntSeq_PWN(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
