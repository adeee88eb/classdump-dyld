/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AirPortAssistant/APFormatter.h>

@interface MinMaxIntFormatter : APFormatter {

	int _minimum;
	int _maximum;

}
+(id)formatterForMin:(int)arg1 max:(int)arg2 ;
-(BOOL)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3 ;
-(int)minimum;
-(void)setMinimum:(int)arg1 ;
-(int)maximum;
-(void)setMaximum:(int)arg1 ;
-(id)initWithMin:(int)arg1 max:(int)arg2 ;
@end
