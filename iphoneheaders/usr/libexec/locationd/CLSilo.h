/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/locationd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface CLSilo : NSObject <NSCopying> {

	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)main;
-(void)heartAttack;
-(void)sync:(/*^block*/ id)arg1 ;
-(void)assertInside;
-(void)assertOutside;
-(id)newTimer;
-(void)async:(/*^block*/ id)arg1 ;
-(void)afterInterval:(double)arg1 async:(/*^block*/ id)arg2 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(void).cxx_destruct;
@end

