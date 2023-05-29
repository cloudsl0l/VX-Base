#pragma once

// Veiled Experts (i dont know the version bro) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class VaTexAtlasPlugin.VtaPluginFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UVtaPluginFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class VaTexAtlasPlugin.VtaPluginFunctionLibrary");
		
		return ptr;
	}


	void STATIC_DrawSlateTexture9Slice(class AHUD* Target, class UVtaSlateTexture* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, float MarginLeft, float MarginTop, float MarginRight, float MarginBottom, float OriginalWidth, float OriginalHeight, const struct FLinearColor& Tint, TEnumAsByte<EBlendMode> BlendMode);
	void STATIC_DrawSlateTexture(class AHUD* Target, class UVtaSlateTexture* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, const struct FLinearColor& Tint, TEnumAsByte<EBlendMode> BlendMode, float Scale, bool bScalePosition, float Rotation, const struct FVector2D& RotPivot, bool bFlipX, bool bFlipY);
	struct FSlateBrush STATIC_CopyBrushWithSlateTexture(class UVtaSlateTexture* Texture, const struct FSlateBrush& SourceBrush);
};


// Class VaTexAtlasPlugin.VtaSlateTexture
// 0x0020 (0x0048 - 0x0028)
class UVtaSlateTexture : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UTexture*                                    AtlasTexture;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector2D                                   StartUV;                                                  // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector2D                                   SizeUV;                                                   // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class VaTexAtlasPlugin.VtaSlateTexture");
		
		return ptr;
	}


	struct FVector2D GetDimensions();
	class UVtaSlateTexture* CreateRegion(const struct FMargin& Margin);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
