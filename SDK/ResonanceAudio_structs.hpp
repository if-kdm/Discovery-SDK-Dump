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

// Enum ResonanceAudio.EResonanceRenderMode
enum class EResonanceRenderMode : uint8_t
{
	StereoPanning                  = 0,
	BinauralLowQuality             = 1,
	BinauralMediumQuality          = 2,
	BinauralHighQuality            = 3,
	RoomEffectsOnly                = 4,
	EResonanceRenderMode_MAX       = 5
};


// Enum ResonanceAudio.ERaQualityMode
enum class ERaQualityMode : uint8_t
{
	STEREO_PANNING                 = 0,
	BINAURAL_LOW                   = 1,
	BINAURAL_MEDIUM                = 2,
	BINAURAL_HIGH                  = 3,
	ERaQualityMode_MAX             = 4
};


// Enum ResonanceAudio.ERaSpatializationMethod
enum class ERaSpatializationMethod : uint8_t
{
	STEREO_PANNING                 = 0,
	HRTF                           = 1,
	ERaSpatializationMethod_MAX    = 2
};


// Enum ResonanceAudio.ERaDistanceRolloffModel
enum class ERaDistanceRolloffModel : uint8_t
{
	LOGARITHMIC                    = 0,
	LINEAR                         = 1,
	NONE                           = 2,
	ERaDistanceRolloffModel_MAX    = 3
};


// Enum ResonanceAudio.ERaMaterialName
enum class ERaMaterialName : uint8_t
{
	TRANSPARENT                    = 0,
	ACOUSTIC_CEILING_TILES         = 1,
	BRICK_BARE                     = 2,
	BRICK_PAINTED                  = 3,
	CONCRETE_BLOCK_COARSE          = 4,
	CONCRETE_BLOCK_PAINTED         = 5,
	CURTAIN_HEAVY                  = 6,
	FIBER_GLASS_INSULATION         = 7,
	GLASS_THIN                     = 8,
	GLASS_THICK                    = 9,
	GRASS                          = 10,
	LINOLEUM_ON_CONCRETE           = 11,
	MARBLE                         = 12,
	METAL                          = 13,
	PARQUET_ONCONCRETE             = 14,
	PLASTER_ROUGH                  = 15,
	PLASTER_SMOOTH                 = 16,
	PLYWOOD_PANEL                  = 17,
	POLISHED_CONCRETE_OR_TILE      = 18,
	SHEETROCK                      = 19,
	WATER_OR_ICE_SURFACE           = 20,
	WOOD_CEILING                   = 21,
	WOOD_PANEL                     = 22,
	UNIFORM                        = 23,
	ERaMaterialName_MAX            = 24
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ResonanceAudio.ResonanceAudioReverbPluginSettings
// 0x0070
struct FResonanceAudioReverbPluginSettings
{
	bool                                               bEnableRoomEffects;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGetTransformFromAudioVolume;                             // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FVector                                     RoomPosition;                                             // 0x0008(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       RoomRotation;                                             // 0x0020(0x0020) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     RoomDimensions;                                           // 0x0040(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
	float                                              ReflectionScalar;                                         // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReverbGain;                                               // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReverbTimeModifier;                                       // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReverbBrightness;                                         // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
