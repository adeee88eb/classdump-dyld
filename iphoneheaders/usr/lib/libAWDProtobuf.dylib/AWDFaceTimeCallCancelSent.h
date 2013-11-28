/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libAWDProtobuf.dylib
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDProtobuf.dylib/libAWDProtobuf.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface AWDFaceTimeCallCancelSent : PBCodable {

	unsigned long long _timestamp;
	unsigned _cancelCode;
	int _errorCode;
	NSString* _guid;
	unsigned _isVideo;
	unsigned _sendDuration;
	SCD_Struct_AW1 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) int errorCode;                             //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasCancelCode; 
@property (assign,nonatomic) unsigned cancelCode;                       //@synthesize cancelCode=_cancelCode - In the implementation block
@property (assign,nonatomic) BOOL hasSendDuration; 
@property (assign,nonatomic) unsigned sendDuration;                     //@synthesize sendDuration=_sendDuration - In the implementation block
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
-(BOOL)hasErrorCode;
-(int)errorCode;
-(void)setErrorCode:(int)arg1 ;
-(BOOL)hasCancelCode;
-(unsigned)cancelCode;
-(void)setCancelCode:(unsigned)arg1 ;
-(BOOL)hasSendDuration;
-(unsigned)sendDuration;
-(void)setSendDuration:(unsigned)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(void)setHasCancelCode:(BOOL)arg1 ;
-(void)setHasSendDuration:(BOOL)arg1 ;
@end

