/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSDictionary, NSDate;

@interface GKAchievementInternal : GKInternalRepresentation {

	NSString* _identifier;
	NSString* _groupIdentifier;
	NSString* _title;
	NSString* _achievedDescription;
	NSString* _unachievedDescription;
	NSDictionary* _icons;
	NSString* _playerID;
	SCD_Union_GK12 _attributes;
	NSDate* _lastReportedDate;
	double _percentComplete;

}

@property (nonatomic,retain) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * groupIdentifier;                                //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,retain) NSString * title;                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * achievedDescription;                            //@synthesize achievedDescription=_achievedDescription - In the implementation block
@property (nonatomic,retain) NSString * unachievedDescription;                          //@synthesize unachievedDescription=_unachievedDescription - In the implementation block
@property (nonatomic,retain) NSDictionary * icons;                                      //@synthesize icons=_icons - In the implementation block
@property (assign,nonatomic,@dynamic) unsigned short maximumPoints; 
@property (assign,getter=isHidden,nonatomic,@dynamic) BOOL hidden; 
@property (assign,getter=isReplayable,nonatomic,@dynamic) BOOL replayable; 
@property (nonatomic,retain) NSDate * lastReportedDate;                                 //@synthesize lastReportedDate=_lastReportedDate - In the implementation block
@property (assign,nonatomic) double percentComplete;                                    //@synthesize percentComplete=_percentComplete - In the implementation block
@property (nonatomic,retain) NSString * playerID;                                       //@synthesize playerID=_playerID - In the implementation block
@property (assign,nonatomic,@dynamic) unsigned attributes; 
+(id)secureCodedPropertyKeys;
-(id)groupIdentifier;
-(void)setGroupIdentifier:(id)arg1 ;
-(id)serverRepresentation;
-(void)setLastReportedDate:(id)arg1 ;
-(void)setMaximumPoints:(unsigned short)arg1 ;
-(void)setReplayable:(BOOL)arg1 ;
-(void)setAchievedDescription:(id)arg1 ;
-(void)setUnachievedDescription:(id)arg1 ;
-(void)setPlayerID:(id)arg1 ;
-(id)playerID;
-(unsigned short)maximumPoints;
-(id)achievedDescription;
-(id)unachievedDescription;
-(void)mergePropertiesFromDescription:(id)arg1 ;
-(BOOL)isReplayable;
-(id)lastReportedDate;
-(void)setPercentComplete:(double)arg1 ;
-(void)dealloc;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(void)setTitle:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(double)percentComplete;
-(id)title;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(void)setIcons:(id)arg1 ;
-(id)icons;
-(unsigned)attributes;
-(void)setAttributes:(unsigned)arg1 ;
@end

