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

// WidgetBlueprintGeneratedClass WBP_Atom_SpeechBubble.WBP_Atom_SpeechBubble_C
// 0x0008 (0x0320 - 0x0318)
class UWBP_Atom_SpeechBubble_C : public UAtomSystemSpeechBubbleWidget
{
public:
	class UOverlay*                                    HeaderBubble;                                             // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("WidgetBlueprintGeneratedClass WBP_Atom_SpeechBubble.WBP_Atom_SpeechBubble_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
