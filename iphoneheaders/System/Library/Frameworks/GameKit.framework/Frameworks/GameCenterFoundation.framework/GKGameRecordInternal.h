/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKGameInternal.h>

@class GKScoreInternal, NSDate, NSString;

@interface GKGameRecordInternal : GKGameInternal {

	GKScoreInternal* _score;
	NSDate* _lastPlayedDate;
	NSDate* _purchaseDate;
	unsigned short _achievements;
	short _achievementPoints;
	unsigned short _friendRank;
	unsigned short _maxFriendRank;
	unsigned _rank;
	unsigned _maxRank;

}

@property (nonatomic,retain) GKScoreInternal * score;                              //@synthesize score=_score - In the implementation block
@property (nonatomic,retain) NSDate * lastPlayedDate;                              //@synthesize lastPlayedDate=_lastPlayedDate - In the implementation block
@property (nonatomic,retain) NSDate * purchaseDate;                                //@synthesize purchaseDate=_purchaseDate - In the implementation block
@property (nonatomic,retain) NSString * defaultLeaderboardIdentifier; 
@property (assign,nonatomic) unsigned short achievements;                          //@synthesize achievements=_achievements - In the implementation block
@property (assign,nonatomic) short achievementPoints;                              //@synthesize achievementPoints=_achievementPoints - In the implementation block
@property (assign,nonatomic) unsigned short friendRank;                            //@synthesize friendRank=_friendRank - In the implementation block
@property (assign,nonatomic) unsigned short maxFriendRank;                         //@synthesize maxFriendRank=_maxFriendRank - In the implementation block
@property (assign,nonatomic) unsigned rank;                                        //@synthesize rank=_rank - In the implementation block
@property (assign,nonatomic) unsigned maxRank;                                     //@synthesize maxRank=_maxRank - In the implementation block
@property (assign,nonatomic) unsigned flags; 
+(id)gameRecordForGame:(id)arg1 ;
+(id)secureCodedPropertyKeys;
-(id)score;
-(void)updateWithGame:(id)arg1 ;
-(unsigned short)achievements;
-(void)setAchievements:(unsigned short)arg1 ;
-(void)setAchievementPoints:(short)arg1 ;
-(void)setFriendRank:(unsigned short)arg1 ;
-(void)setMaxFriendRank:(unsigned short)arg1 ;
-(unsigned)maxRank;
-(void)setMaxRank:(unsigned)arg1 ;
-(unsigned short)friendRank;
-(short)achievementPoints;
-(unsigned short)maxFriendRank;
-(id)lastPlayedDate;
-(void)setLastPlayedDate:(id)arg1 ;
-(void)dealloc;
-(unsigned)rank;
-(void)setRank:(unsigned)arg1 ;
-(id)purchaseDate;
-(void)setPurchaseDate:(id)arg1 ;
-(void)setScore:(id)arg1 ;
@end

