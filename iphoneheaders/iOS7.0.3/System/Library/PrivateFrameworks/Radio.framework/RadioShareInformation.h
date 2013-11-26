/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:22 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Radio/Radio-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSURL;

@interface RadioShareInformation : NSObject <NSCopying> {

	NSString* _messageMIMEType;
	NSString* _message;
	NSString* _subject;
	NSURL* _URL;

}

@property (nonatomic,readonly) NSString * messageMIMEType;              //@synthesize messageMIMEType=_messageMIMEType - In the implementation block
@property (nonatomic,readonly) NSString * message;                      //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSString * subject;                      //@synthesize subject=_subject - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                             //@synthesize URL=_URL - In the implementation block
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)message;
-(id)URL;
-(id)subject;
-(id)_initWithShareInfoResponse:(id)arg1 ;
-(id)messageMIMEType;
-(void).cxx_destruct;
@end
