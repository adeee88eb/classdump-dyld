/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:11:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface MNLockScreenDimmingBehavior : NSObject {

	int _dimmingState;
	BOOL _userLockedScreenForCurrentManeuver;
	unsigned _lastSeenState;
	NSArray* _lastSeenInstructions;
	int _lastSeenManeuver;
	unsigned _lastSeenAlert;
	BOOL _wasWithinManeuver;
	BOOL _guidanceAffectsDimming;

}

@property (nonatomic,readonly) int dimmingState;                        //@synthesize dimmingState=_dimmingState - In the implementation block
@property (assign,nonatomic) BOOL guidanceAffectsDimming;               //@synthesize guidanceAffectsDimming=_guidanceAffectsDimming - In the implementation block
@property (assign,nonatomic) unsigned lastSeenState;                    //@synthesize lastSeenState=_lastSeenState - In the implementation block
@property (nonatomic,copy) NSArray * lastSeenInstructions;              //@synthesize lastSeenInstructions=_lastSeenInstructions - In the implementation block
@property (assign,nonatomic) int lastSeenManeuver;                      //@synthesize lastSeenManeuver=_lastSeenManeuver - In the implementation block
@property (assign,nonatomic) unsigned lastSeenAlert;                    //@synthesize lastSeenAlert=_lastSeenAlert - In the implementation block
@property (assign,nonatomic) BOOL wasWithinManeuver;                    //@synthesize wasWithinManeuver=_wasWithinManeuver - In the implementation block
-(void)setGuidanceAffectsDimming:(BOOL)arg1 ;
-(int)dimmingState;
-(void)didReceiveGuidanceUpdateWithNewState:(unsigned)arg1 maneuver:(int)arg2 instructions:(id)arg3 alert:(unsigned)arg4 ;
-(unsigned)lastSeenState;
-(int)lastSeenManeuver;
-(id)lastSeenInstructions;
-(BOOL)wasWithinManeuver;
-(unsigned)lastSeenAlert;
-(void)setWasWithinManeuver:(BOOL)arg1 ;
-(void)setLastSeenState:(unsigned)arg1 ;
-(void)setLastSeenManeuver:(int)arg1 ;
-(void)setLastSeenInstructions:(id)arg1 ;
-(void)setLastSeenAlert:(unsigned)arg1 ;
-(void)userDidLockScreen;
-(BOOL)guidanceAffectsDimming;
-(void)dealloc;
-(id)init;
@end

