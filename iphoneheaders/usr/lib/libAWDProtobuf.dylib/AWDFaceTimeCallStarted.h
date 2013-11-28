/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libAWDProtobuf.dylib
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDProtobuf.dylib/libAWDProtobuf.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface AWDFaceTimeCallStarted : PBCodable {

	unsigned long long _timestamp;
	NSString* _guid;
	unsigned _isCallUpgrade;
	unsigned _isToEmail;
	unsigned _isToPhoneNumber;
	unsigned _isVideo;
	SCD_Struct_AW1 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasIsToPhoneNumber; 
@property (assign,nonatomic) unsigned isToPhoneNumber;                  //@synthesize isToPhoneNumber=_isToPhoneNumber - In the implementation block
@property (assign,nonatomic) BOOL hasIsToEmail; 
@property (assign,nonatomic) unsigned isToEmail;                        //@synthesize isToEmail=_isToEmail - In the implementation block
@property (assign,nonatomic) BOOL hasIsCallUpgrade; 
@property (assign,nonatomic) unsigned isCallUpgrade;                    //@synthesize isCallUpgrade=_isCallUpgrade - In the implementation block
@property (assign,nonatomic) BOOL hasIsVideo; 
@property (assign,nonatomic) unsigned isVideo;                          //@synthesize isVideo=_isVideo - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)isVideo;
-(id)guid;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIsVideo:(unsigned)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setGuid:(id)arg1 ;
-(BOOL)hasGuid;
-(BOOL)hasTimestamp;
-(BOOL)hasIsVideo;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasIsVideo:(BOOL)arg1 ;
-(BOOL)hasIsCallUpgrade;
-(unsigned)isCallUpgrade;
-(void)setIsCallUpgrade:(unsigned)arg1 ;
-(void)setHasIsCallUpgrade:(BOOL)arg1 ;
-(BOOL)hasIsToPhoneNumber;
-(unsigned)isToPhoneNumber;
-(void)setIsToPhoneNumber:(unsigned)arg1 ;
-(BOOL)hasIsToEmail;
-(unsigned)isToEmail;
-(void)setIsToEmail:(unsigned)arg1 ;
-(void)setHasIsToPhoneNumber:(BOOL)arg1 ;
-(void)setHasIsToEmail:(BOOL)arg1 ;
@end

