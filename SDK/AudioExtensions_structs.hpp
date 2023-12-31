#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum AudioExtensions.EAudioParameterType
enum class EAudioParameterType : uint8_t
{
	None                           = 0,
	Boolean                        = 1,
	Integer                        = 2,
	Float                          = 3,
	String                         = 4,
	Object                         = 5,
	NoneArray                      = 6,
	BooleanArray                   = 7,
	IntegerArray                   = 8,
	FloatArray                     = 9,
	StringArray                    = 10,
	ObjectArray                    = 11,
	COUNT                          = 12,
	EAudioParameterType_MAX        = 13
};


// Enum AudioExtensions.EPcmBitDepthConversion
enum class EPcmBitDepthConversion : uint8_t
{
	SameAsSource                   = 0,
	Int16                          = 1,
	Float32                        = 2,
	EPcmBitDepthConversion_MAX     = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AudioExtensions.AudioParameter
// 0x00A0
struct FAudioParameter
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloatParam;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BoolParam;                                                // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                IntParam;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UObject*                                     ObjectParam;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     StringParam;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      ArrayFloatParam;                                          // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<bool>                                       ArrayBoolParam;                                           // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        ArrayIntParam;                                            // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UObject*>                             ArrayObjectParam;                                         // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             ArrayStringParam;                                         // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0080(0x0004) MISSED OFFSET
	struct FName                                       TypeName;                                                 // 0x0084(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x14];                                      // 0x008C(0x0014) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
