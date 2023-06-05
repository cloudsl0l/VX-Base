#pragma once

// Veiled Experts (idk bro) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LuminRuntimeSettings.LuminRuntimeSettings
// 0x0120 (0x0148 - 0x0028)
class ULuminRuntimeSettings : public UObject
{
public:
	struct FString                                     PackageName;                                              // 0x0028(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     ApplicationDisplayName;                                   // 0x0038(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	ELuminFrameTimingHint                              FrameTimingHint;                                          // 0x0048(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bProtectedContent;                                        // 0x0049(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bManualCallToAppReady;                                    // 0x004A(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bUseMobileRendering;                                      // 0x004B(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bUseVulkan;                                               // 0x004C(0x0001) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	struct FFilePath                                   Certificate;                                              // 0x0050(0x0010) (Edit, Config, GlobalConfig)
	struct FDirectoryPath                              IconModelPath;                                            // 0x0060(0x0010) (Edit, Config, GlobalConfig)
	struct FDirectoryPath                              IconPortalPath;                                           // 0x0070(0x0010) (Edit, Config, GlobalConfig)
	struct FLocalizedIconInfos                         LocalizedIconInfos;                                       // 0x0080(0x0010) (Edit, Config, GlobalConfig)
	int                                                VersionCode;                                              // 0x0090(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                MinimumAPILevel;                                          // 0x0094(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	TArray<ELuminPrivilege>                            AppPrivileges;                                            // 0x0098(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	TArray<struct FLuminComponentSubElement>           ExtraComponentSubElements;                                // 0x00A8(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	TArray<struct FLuminComponentElement>              ExtraComponentElements;                                   // 0x00B8(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     SpatializationPlugin;                                     // 0x00C8(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     ReverbPlugin;                                             // 0x00D8(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     OcclusionPlugin;                                          // 0x00E8(0x0010) (Edit, ZeroConstructor, Config)
	int                                                SoundCueCookQualityIndex;                                 // 0x00F8(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bRemoveDebugInfo;                                         // 0x00FC(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET
	struct FDirectoryPath                              VulkanValidationLayerLibs;                                // 0x0100(0x0010) (Edit, Config, GlobalConfig)
	bool                                               bFrameVignette;                                           // 0x0110(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
	TArray<struct FLocalizedAppName>                   LocalizedAppNames;                                        // 0x0118(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	unsigned char                                      UnknownData03[0x20];                                      // 0x0128(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class LuminRuntimeSettings.LuminRuntimeSettings");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
