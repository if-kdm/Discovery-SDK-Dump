#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../pch.h"

namespace sdk
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function EmbarkGlobalActorInterface.EmbarkGlobalActorFactorySubsystemInterface.GetGlobalActor
struct UEmbarkGlobalActorFactorySubsystemInterface_GetGlobalActor_Params
{
	class UClass*                                      GlobalActorClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AEmbarkGlobalActor*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
