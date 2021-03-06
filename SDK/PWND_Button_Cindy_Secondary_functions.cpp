// PWND (4.17.2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Button_Cindy_Secondary.Button_Cindy_Secondary_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UButton_Cindy_Secondary_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Cindy_Secondary.Button_Cindy_Secondary_C.Construct");

	UButton_Cindy_Secondary_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Cindy_Secondary.Button_Cindy_Secondary_C.OnReceiveAttention
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bWasMouse                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_Cindy_Secondary_C::OnReceiveAttention(bool* bWasMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Cindy_Secondary.Button_Cindy_Secondary_C.OnReceiveAttention");

	UButton_Cindy_Secondary_C_OnReceiveAttention_Params params;
	params.bWasMouse = bWasMouse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Cindy_Secondary.Button_Cindy_Secondary_C.OnRemoveAttention
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bWasMouse                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_Cindy_Secondary_C::OnRemoveAttention(bool* bWasMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Cindy_Secondary.Button_Cindy_Secondary_C.OnRemoveAttention");

	UButton_Cindy_Secondary_C_OnRemoveAttention_Params params;
	params.bWasMouse = bWasMouse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Cindy_Secondary.Button_Cindy_Secondary_C.BndEvt__Button_MainButton_K2Node_ComponentBoundEvent_89_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UButton_Cindy_Secondary_C::BndEvt__Button_MainButton_K2Node_ComponentBoundEvent_89_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Cindy_Secondary.Button_Cindy_Secondary_C.BndEvt__Button_MainButton_K2Node_ComponentBoundEvent_89_OnButtonClickedEvent__DelegateSignature");

	UButton_Cindy_Secondary_C_BndEvt__Button_MainButton_K2Node_ComponentBoundEvent_89_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Cindy_Secondary.Button_Cindy_Secondary_C.ExecuteUbergraph_Button_Cindy_Secondary
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_Cindy_Secondary_C::ExecuteUbergraph_Button_Cindy_Secondary(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Cindy_Secondary.Button_Cindy_Secondary_C.ExecuteUbergraph_Button_Cindy_Secondary");

	UButton_Cindy_Secondary_C_ExecuteUbergraph_Button_Cindy_Secondary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
