/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:05:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PowerlogPlugins/PLBatteryLifeMonitorLogger.bundle/PLBatteryLifeMonitorLogger
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PLBatteryLifeMonitorLogger/PLBatteryLifeMonitorLogger-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface PLDuetEvent : NSObject <NSCopying> {

	BOOL _wasCharging;
	BOOL _predictedByGasGauge;
	short _updateType;
	short _event;
	NSString* _bundleId;
	unsigned _startSequenceID;
	unsigned _endSequenceID;
	unsigned long long _updateSequenceNumber;
	double _energy;
	double _duration;

}

@property (copy) NSString * bundleId;                                    //@synthesize bundleId=_bundleId - In the implementation block
@property (assign) short updateType;                                     //@synthesize updateType=_updateType - In the implementation block
@property (assign) unsigned long long updateSequenceNumber;              //@synthesize updateSequenceNumber=_updateSequenceNumber - In the implementation block
@property (assign) short event;                                          //@synthesize event=_event - In the implementation block
@property (assign) BOOL wasCharging;                                     //@synthesize wasCharging=_wasCharging - In the implementation block
@property (assign) BOOL predictedByGasGauge;                             //@synthesize predictedByGasGauge=_predictedByGasGauge - In the implementation block
@property (assign) double energy;                                        //@synthesize energy=_energy - In the implementation block
@property (assign) unsigned startSequenceID;                             //@synthesize startSequenceID=_startSequenceID - In the implementation block
@property (assign) unsigned endSequenceID;                               //@synthesize endSequenceID=_endSequenceID - In the implementation block
@property (assign) double duration;                                      //@synthesize duration=_duration - In the implementation block
-(id)stats;
-(id)bundleId;
-(void)setUpdateType:(short)arg1 ;
-(short)updateType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setEvent:(short)arg1 ;
-(short)event;
-(id)initWithDuetNotification:(id)arg1 ;
-(id)entry;
-(double)energy;
-(void)setEnergy:(double)arg1 ;
-(void)setPredictedByGasGauge:(BOOL)arg1 ;
-(void)setWasCharging:(BOOL)arg1 ;
-(unsigned long long)updateSequenceNumber;
-(void)setStartSequenceID:(unsigned)arg1 ;
-(void)setEndSequenceID:(unsigned)arg1 ;
-(BOOL)predictedByGasGauge;
-(BOOL)wasCharging;
-(unsigned)endSequenceID;
-(void)setBundleId:(id)arg1 ;
-(void)setUpdateSequenceNumber:(unsigned long long)arg1 ;
-(unsigned)startSequenceID;
@end

