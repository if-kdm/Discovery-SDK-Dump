#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DialogueLogicStateInstance_MakeArray.BP_DialogueLogicStateInstance_MakeArray_C
// 0x0000 (0x0108 - 0x0108)
class UBP_DialogueLogicStateInstance_MakeArray_C : public UDialogueLogicStateInstance_MakeArray
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("BlueprintGeneratedClass BP_DialogueLogicStateInstance_MakeArray.BP_DialogueLogicStateInstance_MakeArray_C"));
		return ptr;
	}


	void ConstructionScript();//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
