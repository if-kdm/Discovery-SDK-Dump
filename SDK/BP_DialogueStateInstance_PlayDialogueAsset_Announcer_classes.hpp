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

// BlueprintGeneratedClass BP_DialogueStateInstance_PlayDialogueAsset_Announcer.BP_DialogueStateInstance_PlayDialogueAsset_Announcer_C
// 0x0000 (0x0148 - 0x0148)
class UBP_DialogueStateInstance_PlayDialogueAsset_Announcer_C : public UDialogueStateInstance_PlayDialogueAsset_StaticSpeaker
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("BlueprintGeneratedClass BP_DialogueStateInstance_PlayDialogueAsset_Announcer.BP_DialogueStateInstance_PlayDialogueAsset_Announcer_C"));
		return ptr;
	}


	void ConstructionScript();//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
