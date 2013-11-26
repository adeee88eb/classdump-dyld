/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:08:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SportsWorkout/SWRunSensor.h>

@protocol SWFakeRunSensorDelegate;
@class ;

@interface SWFakeRunSensor : SWRunSensor {

	<SWFakeRunSensorDelegate>* _delegate;

}
+(id)_createDelegate;
+(void)initialize;
-(void)_fakeLinkingSuccess;
-(void)_fakeSearchSuccess;
-(void)_fakeNextPacketWithPayload:(id)arg1 timestamp:(unsigned long)arg2 ;
-(void)beginLinking;
-(void)cancelLinking;
-(void)beginSearching;
-(void)cancelSearching;
-(unsigned)remainingBatteryLifetimeInHours;
-(void)_fakeLinkingFailure;
-(void)dealloc;
-(id)init;
-(void)deactivate;
@end
