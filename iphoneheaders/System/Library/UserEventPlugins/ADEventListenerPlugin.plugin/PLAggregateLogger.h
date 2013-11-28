/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:11:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/UserEventPlugins/ADEventListenerPlugin.plugin/ADEventListenerPlugin
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogLoggerSupport/PLLogger.h>

@class NSDate, NSMutableDictionary, NSMutableArray;

@interface PLAggregateLogger : PLLogger {

	NSDate* lastCommit;
	NSMutableDictionary* wakeCounts;
	NSDate* lastPrint;
	BOOL DEBUG_AGGLOGGER;
	unsigned currentState;
	NSMutableArray* baseStates;
	NSMutableDictionary* compositeStates;
	double lastTime;
	double lastVoltage;
	double lastCurrentCapacity;

}

@property (nonatomic,copy) NSDate * lastCommit; 
@property (nonatomic,copy) NSDate * lastPrint; 
@property (assign,nonatomic) unsigned currentState; 
@property (nonatomic,retain) NSMutableArray * baseStates; 
@property (nonatomic,retain) NSMutableDictionary * compositeStates; 
@property (assign,nonatomic) double lastTime; 
@property (assign,nonatomic) double lastVoltage; 
@property (assign,nonatomic) double lastCurrentCapacity; 
-(BOOL)isPlugged;
-(void)handleScreenOn:(id)arg1 ;
-(id)lastPrint;
-(id)baseStates;
-(id)lastCommit;
-(void)setLastTime:(double)arg1 ;
-(double)lastTime;
-(id)compositeStates;
-(void)setLastVoltage:(double)arg1 ;
-(double)lastVoltage;
-(void)setLastPrint:(id)arg1 ;
-(void)handleScreenOff:(id)arg1 ;
-(void)handleBatteryStatus:(id)arg1 ;
-(void)logStateStatistics:(BOOL)arg1 ;
-(void)commitIfNeccesary;
-(void)handleEvent:(unsigned)arg1 withStatus:(BOOL)arg2 ;
-(BOOL)getCurrentDisplayState;
-(void)setLastCommit:(id)arg1 ;
-(void)setBaseStates:(id)arg1 ;
-(void)setCompositeStates:(id)arg1 ;
-(double)lastCurrentCapacity;
-(void)setLastCurrentCapacity:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned)currentState;
-(void)log;
-(void)setCurrentState:(unsigned)arg1 ;
-(void)handleWake:(id)arg1 ;
-(void)handleSleep:(id)arg1 ;
-(BOOL)isCharging;
@end

