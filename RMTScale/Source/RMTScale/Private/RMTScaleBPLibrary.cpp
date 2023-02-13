// Copyright Epic Games, Inc. All Rights Reserved.

#include "RMTScaleBPLibrary.h"
#include "RMTScale.h"

URMTScaleBPLibrary::URMTScaleBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}



void URMTScaleBPLibrary::SetAnimRootMotionTranslationScale(ACharacter* Character, float InAnimRootMotionTranslationScale)
{
	if (Character)
	{
		Character->SetAnimRootMotionTranslationScale(InAnimRootMotionTranslationScale);
	}
}


