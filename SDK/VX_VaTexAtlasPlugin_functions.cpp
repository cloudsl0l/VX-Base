// Veiled Experts (idk bro) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VaTexAtlasPlugin.VtaPluginFunctionLibrary.DrawSlateTexture9Slice
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AHUD*                    Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UVtaSlateTexture*        Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ScreenX                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ScreenY                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ScreenW                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ScreenH                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          TextureU                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          TextureV                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          TextureUWidth                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          TextureVHeight                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          MarginLeft                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          MarginTop                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          MarginRight                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          MarginBottom                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          OriginalWidth                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          OriginalHeight                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Tint                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBlendMode>        BlendMode                      (Parm, ZeroConstructor, IsPlainOldData)

void UVtaPluginFunctionLibrary::STATIC_DrawSlateTexture9Slice(class AHUD* Target, class UVtaSlateTexture* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, float MarginLeft, float MarginTop, float MarginRight, float MarginBottom, float OriginalWidth, float OriginalHeight, const struct FLinearColor& Tint, TEnumAsByte<EBlendMode> BlendMode)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaTexAtlasPlugin.VtaPluginFunctionLibrary.DrawSlateTexture9Slice");

	UVtaPluginFunctionLibrary_DrawSlateTexture9Slice_Params params;
	params.Target = Target;
	params.Texture = Texture;
	params.ScreenX = ScreenX;
	params.ScreenY = ScreenY;
	params.ScreenW = ScreenW;
	params.ScreenH = ScreenH;
	params.TextureU = TextureU;
	params.TextureV = TextureV;
	params.TextureUWidth = TextureUWidth;
	params.TextureVHeight = TextureVHeight;
	params.MarginLeft = MarginLeft;
	params.MarginTop = MarginTop;
	params.MarginRight = MarginRight;
	params.MarginBottom = MarginBottom;
	params.OriginalWidth = OriginalWidth;
	params.OriginalHeight = OriginalHeight;
	params.Tint = Tint;
	params.BlendMode = BlendMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaTexAtlasPlugin.VtaPluginFunctionLibrary.DrawSlateTexture
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AHUD*                    Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UVtaSlateTexture*        Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ScreenX                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ScreenY                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ScreenW                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ScreenH                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          TextureU                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          TextureV                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          TextureUWidth                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          TextureVHeight                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Tint                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBlendMode>        BlendMode                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bScalePosition                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               RotPivot                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFlipX                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFlipY                         (Parm, ZeroConstructor, IsPlainOldData)

void UVtaPluginFunctionLibrary::STATIC_DrawSlateTexture(class AHUD* Target, class UVtaSlateTexture* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, const struct FLinearColor& Tint, TEnumAsByte<EBlendMode> BlendMode, float Scale, bool bScalePosition, float Rotation, const struct FVector2D& RotPivot, bool bFlipX, bool bFlipY)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaTexAtlasPlugin.VtaPluginFunctionLibrary.DrawSlateTexture");

	UVtaPluginFunctionLibrary_DrawSlateTexture_Params params;
	params.Target = Target;
	params.Texture = Texture;
	params.ScreenX = ScreenX;
	params.ScreenY = ScreenY;
	params.ScreenW = ScreenW;
	params.ScreenH = ScreenH;
	params.TextureU = TextureU;
	params.TextureV = TextureV;
	params.TextureUWidth = TextureUWidth;
	params.TextureVHeight = TextureVHeight;
	params.Tint = Tint;
	params.BlendMode = BlendMode;
	params.Scale = Scale;
	params.bScalePosition = bScalePosition;
	params.Rotation = Rotation;
	params.RotPivot = RotPivot;
	params.bFlipX = bFlipX;
	params.bFlipY = bFlipY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaTexAtlasPlugin.VtaPluginFunctionLibrary.CopyBrushWithSlateTexture
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UVtaSlateTexture*        Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             SourceBrush                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UVtaPluginFunctionLibrary::STATIC_CopyBrushWithSlateTexture(class UVtaSlateTexture* Texture, const struct FSlateBrush& SourceBrush)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaTexAtlasPlugin.VtaPluginFunctionLibrary.CopyBrushWithSlateTexture");

	UVtaPluginFunctionLibrary_CopyBrushWithSlateTexture_Params params;
	params.Texture = Texture;
	params.SourceBrush = SourceBrush;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaTexAtlasPlugin.VtaSlateTexture.GetDimensions
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UVtaSlateTexture::GetDimensions()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaTexAtlasPlugin.VtaSlateTexture.GetDimensions");

	UVtaSlateTexture_GetDimensions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VaTexAtlasPlugin.VtaSlateTexture.CreateRegion
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMargin                 Margin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UVtaSlateTexture*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UVtaSlateTexture* UVtaSlateTexture::CreateRegion(const struct FMargin& Margin)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaTexAtlasPlugin.VtaSlateTexture.CreateRegion");

	UVtaSlateTexture_CreateRegion_Params params;
	params.Margin = Margin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
