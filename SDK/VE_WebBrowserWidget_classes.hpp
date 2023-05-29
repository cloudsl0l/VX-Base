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

// Class WebBrowserWidget.WebBrowser
// 0x0048 (0x0150 - 0x0108)
class UWebBrowser : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0108(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty WebBrowserWidget.WebBrowser.OnUrlChanged
	unsigned char                                      UnknownData01[0x10];                                      // 0x0118(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty WebBrowserWidget.WebBrowser.OnBeforePopup
	struct FString                                     InitialURL;                                               // 0x0128(0x0010) (Edit, ZeroConstructor)
	bool                                               bSupportsTransparency;                                    // 0x0138(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x17];                                      // 0x0139(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class WebBrowserWidget.WebBrowser");
		
		return ptr;
	}


	void OnUrlChanged__DelegateSignature(const struct FText& Text);
	void OnBeforePopup__DelegateSignature(const struct FString& URL, const struct FString& Frame);
	void LoadURL(const struct FString& NewURL);
	void LoadString(const struct FString& Contents, const struct FString& DummyURL);
	struct FString GetUrl();
	struct FText GetTitleText();
	void ExecuteJavascript(const struct FString& ScriptText);
};


// Class WebBrowserWidget.WebBrowserAssetManager
// 0x0050 (0x0078 - 0x0028)
class UWebBrowserAssetManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty WebBrowserWidget.WebBrowserAssetManager.DefaultMaterial
	unsigned char                                      UnknownData01[0x28];                                      // 0x0050(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class WebBrowserWidget.WebBrowserAssetManager");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
