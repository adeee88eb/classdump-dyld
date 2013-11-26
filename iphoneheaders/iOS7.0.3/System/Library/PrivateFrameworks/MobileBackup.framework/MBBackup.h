/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@class NSString, NSArray;

@interface MBBackup : NSObject <NSCopying, NSCoding> {

	NSString* _backupUDID;
	NSString* _deviceClass;
	NSString* _productType;
	NSString* _hardwareModel;
	NSString* _marketingName;
	NSArray* _snapshots;
	BOOL _restoreSystemFiles;

}

@property (nonatomic,readonly) NSString * backupUDID;                                             //@synthesize backupUDID=_backupUDID - In the implementation block
@property (nonatomic,readonly) NSString * deviceClass;                                            //@synthesize deviceClass=_deviceClass - In the implementation block
@property (nonatomic,readonly) NSString * productType;                                            //@synthesize productType=_productType - In the implementation block
@property (nonatomic,readonly) NSString * hardwareModel;                                          //@synthesize hardwareModel=_hardwareModel - In the implementation block
@property (nonatomic,readonly) NSString * marketingName;                                          //@synthesize marketingName=_marketingName - In the implementation block
@property (nonatomic,readonly) NSArray * snapshots;                                               //@synthesize snapshots=_snapshots - In the implementation block
@property (getter=canRestoreSystemFiles,nonatomic,readonly) BOOL restoreSystemFiles;              //@synthesize restoreSystemFiles=_restoreSystemFiles - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)hardwareModel;
-(id)initWithBackupUDID:(id)arg1 deviceClass:(id)arg2 productType:(id)arg3 hardwareModel:(id)arg4 marketingName:(id)arg5 snapshots:(id)arg6 restoreSystemFiles:(BOOL)arg7 ;
-(id)backupUDID;
-(id)deviceClass;
-(id)marketingName;
-(BOOL)canRestoreSystemFiles;
-(id)snapshots;
-(id)productType;
@end
