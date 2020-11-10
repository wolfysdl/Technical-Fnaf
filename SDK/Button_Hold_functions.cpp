
#include "../SDK.h"

// Name: Freddys, Version: 4.2.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Button_Hold.Button_Hold_C.AttemptGrab
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           canGrab                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EGrabSnapType                  SnapType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           snapLocation                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           snapRotation                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AttachmentOffsetLocation       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                AttachmentOffsetRotation       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AButton_Hold_C::AttemptGrab(class ASWGVRCharacter* Grabber, EVRHandType Hand, bool* canGrab, EGrabSnapType* SnapType, bool* snapLocation, bool* snapRotation, struct FVector* AttachmentOffsetLocation, struct FRotator* AttachmentOffsetRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Hold.Button_Hold_C.AttemptGrab");

	AButton_Hold_C_AttemptGrab_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canGrab != nullptr)
		*canGrab = params.canGrab;
	if (SnapType != nullptr)
		*SnapType = params.SnapType;
	if (snapLocation != nullptr)
		*snapLocation = params.snapLocation;
	if (snapRotation != nullptr)
		*snapRotation = params.snapRotation;
	if (AttachmentOffsetLocation != nullptr)
		*AttachmentOffsetLocation = params.AttachmentOffsetLocation;
	if (AttachmentOffsetRotation != nullptr)
		*AttachmentOffsetRotation = params.AttachmentOffsetRotation;
}


// Function Button_Hold.Button_Hold_C.AttemptRelease
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AButton_Hold_C::AttemptRelease(class ASWGVRCharacter* Grabber, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Hold.Button_Hold_C.AttemptRelease");

	AButton_Hold_C_AttemptRelease_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Button_Hold.Button_Hold_C.GetRequiredDoorRotation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaAngle                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          AngleDirection                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AButton_Hold_C::GetRequiredDoorRotation(float* DeltaAngle, float* AngleDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Hold.Button_Hold_C.GetRequiredDoorRotation");

	AButton_Hold_C_GetRequiredDoorRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeltaAngle != nullptr)
		*DeltaAngle = params.DeltaAngle;
	if (AngleDirection != nullptr)
		*AngleDirection = params.AngleDirection;
}


// Function Button_Hold.Button_Hold_C.GetDoorRotationToPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 WorldPosition                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaAngle                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          AngleDirection                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AButton_Hold_C::GetDoorRotationToPoint(const struct FVector& WorldPosition, float* DeltaAngle, float* AngleDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Hold.Button_Hold_C.GetDoorRotationToPoint");

	AButton_Hold_C_GetDoorRotationToPoint_Params params;
	params.WorldPosition = WorldPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeltaAngle != nullptr)
		*DeltaAngle = params.DeltaAngle;
	if (AngleDirection != nullptr)
		*AngleDirection = params.AngleDirection;
}


// Function Button_Hold.Button_Hold_C.Button_Held
// (Public, BlueprintCallable, BlueprintEvent)

void AButton_Hold_C::Button_Held()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Hold.Button_Hold_C.Button_Held");

	AButton_Hold_C_Button_Held_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Hold.Button_Hold_C.Clear timer
// (Public, BlueprintCallable, BlueprintEvent)

void AButton_Hold_C::Clear_timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Hold.Button_Hold_C.Clear timer");

	AButton_Hold_C_Clear_timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Hold.Button_Hold_C.Move BTN
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AButton_Hold_C::Move_BTN(float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Hold.Button_Hold_C.Move BTN");

	AButton_Hold_C_Move_BTN_Params params;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Hold.Button_Hold_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AButton_Hold_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Hold.Button_Hold_C.UserConstructionScript");

	AButton_Hold_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Hold.Button_Hold_C.BTN Mid Move__FinishedFunc
// (BlueprintEvent)

void AButton_Hold_C::BTN_Mid_Move__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Hold.Button_Hold_C.BTN Mid Move__FinishedFunc");

	AButton_Hold_C_BTN_Mid_Move__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Hold.Button_Hold_C.BTN Mid Move__UpdateFunc
// (BlueprintEvent)

void AButton_Hold_C::BTN_Mid_Move__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Hold.Button_Hold_C.BTN Mid Move__UpdateFunc");

	AButton_Hold_C_BTN_Mid_Move__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Hold.Button_Hold_C.Press BTN Down__FinishedFunc
// (BlueprintEvent)

void AButton_Hold_C::Press_BTN_Down__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Hold.Button_Hold_C.Press BTN Down__FinishedFunc");

	AButton_Hold_C_Press_BTN_Down__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Hold.Button_Hold_C.Press BTN Down__UpdateFunc
// (BlueprintEvent)

void AButton_Hold_C::Press_BTN_Down__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Hold.Button_Hold_C.Press BTN Down__UpdateFunc");

	AButton_Hold_C_Press_BTN_Down__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Hold.Button_Hold_C.BndEvt__BTN_Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AButton_Hold_C::BndEvt__BTN_Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Hold.Button_Hold_C.BndEvt__BTN_Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	AButton_Hold_C_BndEvt__BTN_Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Hold.Button_Hold_C.BndEvt__BTN_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AButton_Hold_C::BndEvt__BTN_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Hold.Button_Hold_C.BndEvt__BTN_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AButton_Hold_C_BndEvt__BTN_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Hold.Button_Hold_C.OnVRGrabbed
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AButton_Hold_C::OnVRGrabbed(class ASWGVRCharacter* Grabber, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Hold.Button_Hold_C.OnVRGrabbed");

	AButton_Hold_C_OnVRGrabbed_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Hold.Button_Hold_C.OnVRReleased
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReleaseVelocity                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AButton_Hold_C::OnVRReleased(class ASWGVRCharacter* Grabber, EVRHandType Hand, const struct FVector& ReleaseVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Hold.Button_Hold_C.OnVRReleased");

	AButton_Hold_C_OnVRReleased_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;
	params.ReleaseVelocity = ReleaseVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Hold.Button_Hold_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AButton_Hold_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Hold.Button_Hold_C.ReceiveTick");

	AButton_Hold_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Hold.Button_Hold_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AButton_Hold_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Hold.Button_Hold_C.ReceiveBeginPlay");

	AButton_Hold_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Hold.Button_Hold_C.ExecuteUbergraph_Button_Hold
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AButton_Hold_C::ExecuteUbergraph_Button_Hold(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Hold.Button_Hold_C.ExecuteUbergraph_Button_Hold");

	AButton_Hold_C_ExecuteUbergraph_Button_Hold_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
