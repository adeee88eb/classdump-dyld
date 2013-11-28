/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
@class NSObject, NSString, NSArray, NSDate, NSDictionary;

@interface MCProfile : NSObject {

	int _trustQueueTrustLevel;
	BOOL _trustQueueTrustHasBeenEvaluated;
	NSObject<OS_dispatch_queue>* _trustEvaluationQueue;
	NSString* _signerQueueSignerSummary;
	NSArray* _signerQueueSignerCertificates;
	NSObject<OS_dispatch_queue>* _signerEvaluationQueue;
	BOOL _encrypted;
	BOOL _isLocked;
	BOOL _needsReboot;
	BOOL _isStub;
	BOOL _mustInstallNonInteractively;
	NSString* _profileDescription;
	NSString* _displayName;
	NSString* _identifier;
	NSString* _UUID;
	NSString* _organization;
	int _version;
	NSDate* _installDate;
	NSDate* _expiryDate;
	NSString* _removalPasscode;
	NSString* _productVersion;
	NSString* _productBuildVersion;
	NSDate* _removalDate;
	NSDictionary* _installOptions;
	NSString* _localizedConsentText;

}

@property (nonatomic,readonly) NSString * stubFileName; 
@property (nonatomic,readonly) NSString * profileIDHashFileName; 
@property (nonatomic,readonly) NSString * UUIDHashFileName; 
@property (nonatomic,readonly) NSString * friendlyName; 
@property (nonatomic,retain) NSString * displayName;                                 //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * profileDescription;                        //@synthesize profileDescription=_profileDescription - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * UUID;                                      //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) NSString * organization;                              //@synthesize organization=_organization - In the implementation block
@property (nonatomic,readonly) int version;                                          //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSDate * installDate;                                   //@synthesize installDate=_installDate - In the implementation block
@property (nonatomic,retain) NSDictionary * installOptions;                          //@synthesize installOptions=_installOptions - In the implementation block
@property (assign,nonatomic) BOOL mustInstallNonInteractively;                       //@synthesize mustInstallNonInteractively=_mustInstallNonInteractively - In the implementation block
@property (assign,getter=isEncrypted,nonatomic) BOOL encrypted;                      //@synthesize encrypted=_encrypted - In the implementation block
@property (nonatomic,readonly) BOOL isSigned; 
@property (nonatomic,readonly) int trustLevel; 
@property (nonatomic,readonly) NSString * signerSummary; 
@property (nonatomic,readonly) SecCertificateRef signerCertificate; 
@property (nonatomic,retain) NSArray * signerCertificates; 
@property (nonatomic,readonly) BOOL isStub;                                          //@synthesize isStub=_isStub - In the implementation block
@property (nonatomic,readonly) NSString * productBuildVersion;                       //@synthesize productBuildVersion=_productBuildVersion - In the implementation block
@property (nonatomic,readonly) NSString * productVersion;                            //@synthesize productVersion=_productVersion - In the implementation block
@property (assign,getter=isLocked,nonatomic) BOOL locked;                            //@synthesize isLocked=_isLocked - In the implementation block
@property (nonatomic,retain) NSString * removalPasscode;                             //@synthesize removalPasscode=_removalPasscode - In the implementation block
@property (nonatomic,readonly) BOOL needsReboot;                                     //@synthesize needsReboot=_needsReboot - In the implementation block
@property (nonatomic,readonly) NSArray * payloads; 
@property (nonatomic,readonly) NSArray * localizedPayloadSummaryByType; 
@property (nonatomic,readonly) NSDate * earliestCertificateExpiryDate; 
@property (nonatomic,readonly) NSDate * expiryDate;                                  //@synthesize expiryDate=_expiryDate - In the implementation block
@property (nonatomic,readonly) BOOL isManagedByProfileService; 
@property (nonatomic,readonly) NSArray * installationWarnings; 
@property (nonatomic,readonly) NSString * localizedConsentText;                      //@synthesize localizedConsentText=_localizedConsentText - In the implementation block
@property (nonatomic,readonly) NSDate * removalDate;                                 //@synthesize removalDate=_removalDate - In the implementation block
+(id)removeRequiredObjectInDictionary:(id)arg1 key:(id)arg2 type:(Class)arg3 errorDomain:(id)arg4 missingDataCode:(int)arg5 missingDataErrorString:(id)arg6 invalidDataCode:(int)arg7 invalidDataErrorString:(id)arg8 outError:(id*)arg9 ;
+(id)badFieldTypeErrorWithField:(id)arg1 ;
+(id)removeOptionalObjectInDictionary:(id)arg1 key:(id)arg2 type:(Class)arg3 errorDomain:(id)arg4 invalidDataCode:(int)arg5 invalidDataErrorString:(id)arg6 outError:(id*)arg7 ;
+(id)profileWithData:(id)arg1 outError:(id*)arg2 ;
+(id)removeRequiredNonZeroLengthStringInDictionary:(id)arg1 key:(id)arg2 errorDomain:(id)arg3 missingDataCode:(int)arg4 missingDataErrorString:(id)arg5 invalidDataCode:(int)arg6 invalidDataErrorString:(id)arg7 outError:(id*)arg8 ;
+(id)removeOptionalNonZeroLengthStringInDictionary:(id)arg1 key:(id)arg2 errorDomain:(id)arg3 invalidDataCode:(int)arg4 invalidDataErrorString:(id)arg5 outError:(id*)arg6 ;
+(id)profileWithDictionary:(id)arg1 fileName:(id)arg2 allowEmptyPayload:(BOOL)arg3 outError:(id*)arg4 ;
+(int)evaluateTrustOfCertificateChain:(id)arg1 outIsAllowedToWriteDefaults:(BOOL*)arg2 ;
+(BOOL)checkString:(id)arg1 isOneOfStrings:(id)arg2 key:(id)arg3 errorDomain:(id)arg4 errorCode:(int)arg5 errorString:(id)arg6 outError:(id*)arg7 ;
+(id)missingFieldErrorWithField:(id)arg1 ;
+(int)evaluateTrustOfCertificateChain:(id)arg1 ;
+(id)signerSummaryOfCertificate:(SecCertificateRef)arg1 ;
+(id)profileWithData:(id)arg1 fileName:(id)arg2 allowEmptyPayload:(BOOL)arg3 outError:(id*)arg4 ;
+(id)profileWithData:(id)arg1 fileName:(id)arg2 outError:(id*)arg3 ;
+(id)_malformedProfileError;
+(id)profileDictionaryFromProfileData:(id)arg1 outError:(id*)arg2 ;
+(id)dataFromCMSEncodedData:(id)arg1 outSignerCertificates:(id*)arg2 ;
+(int)evaluateTrust:(SecTrustRef)arg1 ;
-(BOOL)shouldHideUnstrustedLabel;
-(BOOL)shouldUseTrustedNomenclature;
-(id)description;
-(BOOL)isLocked;
-(id)UUID;
-(void)setLocked:(BOOL)arg1 ;
-(id)identifier;
-(id)displayName;
-(int)version;
-(id)productBuildVersion;
-(BOOL)isStub;
-(id)friendlyName;
-(id)stubDictionary;
-(id)removalPasscode;
-(void)setRemovalPasscode:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 allowEmptyPayload:(BOOL)arg2 outError:(id*)arg3 ;
-(id)profileDescription;
-(id)malformedProfileErrorWithError:(id)arg1 ;
-(id)installationWarningsIncludeUnsignedProfileWarning:(BOOL)arg1 ;
-(id)installationWarnings;
-(id)payloads;
-(id)payloadWithUUID:(id)arg1 ;
-(BOOL)isManagedByProfileService;
-(id)localizedPayloadSummaryByType;
-(id)earliestCertificateExpiryDate;
-(id)signerCertificates;
-(BOOL)isSigned;
-(id)organization;
-(void)setSignerCertificates:(id)arg1 ;
-(int)trustLevel;
-(id)localizedConsentText;
-(BOOL)mustInstallNonInteractively;
-(id)expiryDate;
-(id)signerSummary;
-(void)evaluateSignerTrust;
-(SecCertificateRef)signerCertificate;
-(void)evaluateSignerTrustAsynchronouslyWithCompletion:(/*^block*/ id)arg1 ;
-(BOOL)mayInstallWithOptions:(id)arg1 hasInteractionClient:(BOOL)arg2 outError:(id*)arg3 ;
-(void)setEncrypted:(BOOL)arg1 ;
-(id)installDate;
-(void)setInstallDate:(id)arg1 ;
-(BOOL)needsReboot;
-(id)removalDate;
-(id)installOptions;
-(void)setInstallOptions:(id)arg1 ;
-(void)setMustInstallNonInteractively:(BOOL)arg1 ;
-(id)stubFileName;
-(BOOL)writeStubToPath:(id)arg1 ;
-(id)profileIDHashFileName;
-(id)UUIDHashFileName;
-(BOOL)writeStubToDirectory:(id)arg1 ;
-(BOOL)containsPayloadOfClass:(Class)arg1 ;
-(unsigned)countOfPayloadsOfClass:(Class)arg1 ;
-(void)setDisplayName:(id)arg1 ;
-(BOOL)isEncrypted;
-(void).cxx_destruct;
-(id)productVersion;
@end

