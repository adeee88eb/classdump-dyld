/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:04:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CommCenter/CommCenter-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreTelephony/CTMessageAddress.h>

@class NSString;

@interface CTPhoneNumber : NSObject <NSCopying, CTMessageAddress> {

	NSString* _digits;
	NSString* _countryCode;
	BOOL _isShortCode;

}

@property (readonly) NSString * digits;                   //@synthesize digits=_digits - In the implementation block
@property (readonly) NSString * countryCode;              //@synthesize countryCode=_countryCode - In the implementation block
@property (assign) BOOL isShortCode;                      //@synthesize isShortCode=_isShortCode - In the implementation block
+(bool)isValidPhoneNumberChar:(unsigned short)arg1 ;
+(id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2 ;
+(bool)isValidPhoneNumber:(id)arg1 ;
-(id)canonicalFormat;
-(id)encodedString;
-(id)initWithDigits:(id)arg1 countryCode:(id)arg2 ;
-(int)numberOfDigitsForShortCodeNumber;
-(void)setIsShortCode:(BOOL)arg1 ;
-(id)formatForCallingCountry:(id)arg1 ;
-(id)digits;
-(BOOL)isShortCode;
-(void)dealloc;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)countryCode;
@end

