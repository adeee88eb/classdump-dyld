/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:47 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <BackBoardServices/BKSXPCCoding.h>

@class NSString, NSNumber, BKSMachSendRight;

@interface BKSApplicationProcessInfo : NSObject <NSCopying, BKSXPCCoding> {

	BOOL _suspended;
	BOOL _classic;
	NSString* _bundleIdentifier;
	NSNumber* _pidNumber;
	NSNumber* _beingDebugged;
	BKSMachSendRight* _eventPort;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * pidNumber;                      //@synthesize pidNumber=_pidNumber - In the implementation block
@property (nonatomic,retain) NSNumber * beingDebugged;                  //@synthesize beingDebugged=_beingDebugged - In the implementation block
@property (nonatomic,retain) BKSMachSendRight * eventPort;              //@synthesize eventPort=_eventPort - In the implementation block
@property (assign,nonatomic) BOOL suspended;                            //@synthesize suspended=_suspended - In the implementation block
@property (assign,nonatomic) BOOL classic;                              //@synthesize classic=_classic - In the implementation block
-(BOOL)suspended;
-(void)dealloc;
-(id)description;
-(id)bundleIdentifier;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(id)pidNumber;
-(id)beingDebugged;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(BOOL)classic;
-(void)setClassic:(BOOL)arg1 ;
-(id)eventPort;
-(id)initWithInfo:(id)arg1 zone:(NSZoneRef)arg2 ;
-(void)setPidNumber:(id)arg1 ;
-(void)setBeingDebugged:(id)arg1 ;
-(void)setEventPort:(id)arg1 ;
-(void)setBundleIdentifier:(id)arg1 ;
@end
