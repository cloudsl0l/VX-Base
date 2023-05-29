#pragma once

// Veiled Experts (i dont know the version bro) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function VaTexAtlasPlugin.VtaPluginFunctionLibrary.DrawSlateTexture9Slice
struct UVtaPluginFunctionLibrary_DrawSlateTexture9Slice_Params
{
	class AHUD*                                        Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UVtaSlateTexture*                            Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenW;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenH;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TextureU;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TextureV;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TextureUWidth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TextureVHeight;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MarginLeft;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MarginTop;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MarginRight;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MarginBottom;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OriginalWidth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OriginalHeight;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Tint;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBlendMode>                            BlendMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VaTexAtlasPlugin.VtaPluginFunctionLibrary.DrawSlateTexture
struct UVtaPluginFunctionLibrary_DrawSlateTexture_Params
{
	class AHUD*                                        Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UVtaSlateTexture*                            Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenW;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenH;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TextureU;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TextureV;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TextureUWidth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TextureVHeight;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Tint;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBlendMode>                            BlendMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bScalePosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RotPivot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFlipX;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFlipY;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VaTexAtlasPlugin.VtaPluginFunctionLibrary.CopyBrushWithSlateTexture
struct UVtaPluginFunctionLibrary_CopyBrushWithSlateTexture_Params
{
	class UVtaSlateTexture*                            Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 SourceBrush;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VaTexAtlasPlugin.VtaSlateTexture.GetDimensions
struct UVtaSlateTexture_GetDimensions_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VaTexAtlasPlugin.VtaSlateTexture.CreateRegion
struct UVtaSlateTexture_CreateRegion_Params
{
	struct FMargin                                     Margin;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UVtaSlateTexture*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
