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

// AnimBlueprintGeneratedClass Pwngineer_Standard_AnimBP.Pwngineer_Standard_AnimBP_C
// 0x0000 (0x13C0 - 0x13C0)
class UPwngineer_Standard_AnimBP_C : public UBase_Weapon_AnimBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Pwngineer_Standard_AnimBP.Pwngineer_Standard_AnimBP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
