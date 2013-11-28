/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:04:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/DataClassMigrators/RestorePostProcess.migrator/RestorePostProcess
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MBMobileInstallation : NSObject {

	NSString* _safeHarborDir;
	NSString* _errorString;

}

@property (nonatomic,retain) NSString * safeHarborDir;              //@synthesize safeHarborDir=_safeHarborDir - In the implementation block
-(BOOL)installPlaceholderAppAtPath:(id)arg1 bundleID:(id)arg2 error:(id*)arg3 ;
-(id)initWithSafeHarborDir:(id)arg1 ;
-(BOOL)registerSafeHarborWithIdentifier:(id)arg1 path:(id)arg2 error:(id*)arg3 ;
-(void)_mobileInstallationCallback:(id)arg1 ;
-(id)userAppWithBundleID:(id)arg1 error:(id*)arg2 ;
-(BOOL)uninstallAppWithBundleID:(id)arg1 error:(id*)arg2 ;
-(void)setSafeHarborDir:(id)arg1 ;
-(void)dealloc;
-(id)userAppsWithError:(id*)arg1 ;
-(id)safeHarborsWithError:(id*)arg1 ;
-(BOOL)removeSafeHarbordWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)safeHarborDir;
-(BOOL)processRestoredContainerAtPath:(id)arg1 error:(id*)arg2 ;
@end

