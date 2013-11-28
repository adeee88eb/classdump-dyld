/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libAWDProtobufFacetimeiMessage.dylib
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDProtobufFacetimeiMessage.dylib/libAWDProtobufFacetimeiMessage.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface AWDIMessageSentMessage : PBCodable {

	unsigned long long _timestamp;
	int _fzError;
	NSString* _guid;
	unsigned _hasAttachments;
	unsigned _isGroupMessage;
	unsigned _isToEmail;
	unsigned _isToPhoneNumber;
	unsigned _isTypingIndicator;
	unsigned _messageError;
	unsigned _sendDuration;
	SCD_Struct_AW6 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasFzError; 
@property (assign,nonatomic) int fzError;                               //@synthesize fzError=_fzError - In the implementation block
@property (assign,nonatomic) BOOL hasMessageError; 
@property (assign,nonatomic) unsigned messageError;                     //@synthesize messageError=_messageError - In the implementation block
@property (assign,nonatomic) BOOL hasIsTypingIndicator; 
@property (assign,nonatomic) unsigned isTypingIndicator;                //@synthesize isTypingIndicator=_isTypingIndicator - In the implementation block
@property (assign,nonatomic) BOOL hasIsGroupMessage; 
@property (assign,nonatomic) unsigned isGroupMessage;                   //@synthesize isGroupMessage=_isGroupMessage - In the implementation block
@property (assign,nonatomic) BOOL hasIsToPhoneNumber; 
@property (assign,nonatomic) unsigned isToPhoneNumber;                  //@synthesize isToPhoneNumber=_isToPhoneNumber - In the implementation block
@property (assign,nonatomic) BOOL hasIsToEmail; 
@property (assign,nonatomic) unsigned isToEmail;                        //@synthesize isToEmail=_isToEmail - In the implementation block
@property (assign,nonatomic) BOOL hasHasAttachments; 
@property (assign,nonatomic) unsigned hasAttachments;                   //@synthesize hasAttachments=_hasAttachments - In the implementation block
@property (assign,nonatomic) BOOL hasSendDuration; 
@property (assign,nonatomic) unsigned sendDuration;                     //@synthesize sendDuration=_sendDuration - In the implementation block
-(unsigned)hasAttachments;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(id)guid;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setGuid:(id)arg1 ;
-(BOOL)hasGuid;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasSendDuration;
-(unsigned)sendDuration;
-(void)setSendDuration:(unsigned)arg1 ;
-(void)setHasSendDuration:(BOOL)arg1 ;
-(BOOL)hasIsToPhoneNumber;
-(unsigned)isToPhoneNumber;
-(void)setIsToPhoneNumber:(unsigned)arg1 ;
-(BOOL)hasIsToEmail;
-(unsigned)isToEmail;
-(void)setIsToEmail:(unsigned)arg1 ;
-(void)setHasIsToPhoneNumber:(BOOL)arg1 ;
-(void)setHasIsToEmail:(BOOL)arg1 ;
-(BOOL)hasFzError;
-(int)fzError;
-(void)setFzError:(int)arg1 ;
-(BOOL)hasMessageError;
-(unsigned)messageError;
-(void)setMessageError:(unsigned)arg1 ;
-(void)setHasFzError:(BOOL)arg1 ;
-(void)setHasMessageError:(BOOL)arg1 ;
-(BOOL)hasIsTypingIndicator;
-(unsigned)isTypingIndicator;
-(void)setIsTypingIndicator:(unsigned)arg1 ;
-(BOOL)hasIsGroupMessage;
-(unsigned)isGroupMessage;
-(void)setIsGroupMessage:(unsigned)arg1 ;
-(BOOL)hasHasAttachments;
-(void)setHasAttachments:(unsigned)arg1 ;
-(void)setHasIsTypingIndicator:(BOOL)arg1 ;
-(void)setHasIsGroupMessage:(BOOL)arg1 ;
-(void)setHasHasAttachments:(BOOL)arg1 ;
@end

