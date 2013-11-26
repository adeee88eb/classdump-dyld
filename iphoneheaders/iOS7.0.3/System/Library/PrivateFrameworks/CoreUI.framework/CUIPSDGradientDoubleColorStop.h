/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:12 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIPSDGradientColorStop.h>
#import <CoreFoundation/NSCoding.h>

@interface CUIPSDGradientDoubleColorStop : CUIPSDGradientColorStop <NSCoding> {

	psdGradientColor leadOutColor;

}
+(void)initialize;
+(id)doubleColorStopWithLocation:(float)arg1 leadInColor:(psdGradientColor)arg2 leadOutColor:(psdGradientColor)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(psdGradientColor)leadOutColor;
-(BOOL)isDoubleStop;
-(id)initWithLocation:(float)arg1 leadInColor:(psdGradientColor)arg2 leadOutColor:(psdGradientColor)arg3 ;
-(psdGradientColor)leadInColor;
@end
