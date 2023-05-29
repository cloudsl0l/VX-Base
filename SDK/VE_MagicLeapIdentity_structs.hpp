#pragma once

// Veiled Experts (i dont know the version bro) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MagicLeapIdentity.EMagicLeapIdentityKey
enum class EMagicLeapIdentityKey : uint8_t
{
	GivenName                      = 0,
	FamilyName                     = 1,
	Email                          = 2,
	Bio                            = 3,
	PhoneNumber                    = 4,
	Avatar2D                       = 5,
	Avatar3D                       = 6,
	Unknown                        = 7,
	EMagicLeapIdentityKey_MAX      = 8
};


// Enum MagicLeapIdentity.EMagicLeapIdentityError
enum class EMagicLeapIdentityError : uint8_t
{
	Ok                             = 0,
	InvalidParam                   = 1,
	AllocFailed                    = 2,
	PrivilegeDenied                = 3,
	FailedToConnectToLocalService  = 4,
	FailedToConnectToCloudService  = 5,
	CloudAuthentication            = 6,
	InvalidInformationFromCloud    = 7,
	NotLoggedIn                    = 8,
	ExpiredCredentials             = 9,
	FailedToGetUserProfile         = 10,
	Unauthorized                   = 11,
	CertificateError               = 12,
	RejectedByCloud                = 13,
	AlreadyLoggedIn                = 14,
	ModifyIsNotSupported           = 15,
	NetworkError                   = 16,
	UnspecifiedFailure             = 17,
	EMagicLeapIdentityError_MAX    = 18
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MagicLeapIdentity.MagicLeapIdentityAttribute
// 0x0018
struct FMagicLeapIdentityAttribute
{
	EMagicLeapIdentityKey                              Attribute;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     Value;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
