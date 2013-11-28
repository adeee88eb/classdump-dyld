/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSDictionary, NSDate, GKGameInternal, NSArray, NSNumber;

@interface GKPlayerInternal : GKInternalRepresentation {

	NSString* _playerID;
	NSString* _alias;
	NSDictionary* _photos;
	unsigned short _numberOfFriends;
	unsigned short _numberOfGames;
	unsigned short _numberOfFriendsInCommon;
	unsigned short _numberOfGamesInCommon;
	unsigned _numberOfAchievements;
	unsigned _numberOfAchievementPoints;
	SCD_Union_GK8 _flags;
	BOOL _isAnonymousPlayer;
	BOOL _isUnknownPlayer;

}

@property (nonatomic,retain) NSString * playerID;                                                       //@synthesize playerID=_playerID - In the implementation block
@property (nonatomic,retain) NSString * alias;                                                          //@synthesize alias=_alias - In the implementation block
@property (nonatomic,retain) NSDictionary * photos;                                                     //@synthesize photos=_photos - In the implementation block
@property (nonatomic,readonly) BOOL isFriend; 
@property (nonatomic,readonly) BOOL isLocalPlayer; 
@property (nonatomic,readonly) BOOL isAnonymousPlayer;                                                  //@synthesize isAnonymousPlayer=_isAnonymousPlayer - In the implementation block
@property (nonatomic,readonly) BOOL isUnknownPlayer;                                                    //@synthesize isUnknownPlayer=_isUnknownPlayer - In the implementation block
@property (nonatomic,readonly) BOOL isAutomatchPlayer; 
@property (nonatomic,readonly) BOOL isLoaded; 
@property (assign,nonatomic) unsigned short numberOfFriendsInCommon;                                    //@synthesize numberOfFriendsInCommon=_numberOfFriendsInCommon - In the implementation block
@property (assign,nonatomic) unsigned short numberOfGamesInCommon;                                      //@synthesize numberOfGamesInCommon=_numberOfGamesInCommon - In the implementation block
@property (nonatomic,@dynamic,retain) NSString * firstName; 
@property (nonatomic,@dynamic,retain) NSString * lastName; 
@property (nonatomic,@dynamic,retain) NSString * compositeName; 
@property (nonatomic,@dynamic,retain) NSString * status; 
@property (nonatomic,@dynamic,retain) NSDate * lastPlayedDate; 
@property (nonatomic,@dynamic,retain) GKGameInternal * lastPlayedGame; 
@property (assign,nonatomic) unsigned short numberOfFriends;                                            //@synthesize numberOfFriends=_numberOfFriends - In the implementation block
@property (assign,nonatomic) unsigned short numberOfGames;                                              //@synthesize numberOfGames=_numberOfGames - In the implementation block
@property (assign,nonatomic) unsigned numberOfAchievements;                                             //@synthesize numberOfAchievements=_numberOfAchievements - In the implementation block
@property (assign,nonatomic) unsigned numberOfAchievementPoints;                                        //@synthesize numberOfAchievementPoints=_numberOfAchievementPoints - In the implementation block
@property (nonatomic,@dynamic,retain) NSString * accountName; 
@property (nonatomic,@dynamic,retain) NSArray * emailAddresses; 
@property (nonatomic,@dynamic,retain) NSArray * friends; 
@property (assign,getter=isPurpleBuddyAccount,nonatomic,@dynamic) BOOL purpleBuddyAccount; 
@property (assign,getter=isUnderage,nonatomic,@dynamic) BOOL underage; 
@property (assign,getter=isFindable,nonatomic,@dynamic) BOOL findable; 
@property (assign,getter=isPhotoPending,nonatomic,@dynamic) BOOL photoPending; 
@property (assign,nonatomic,@dynamic) unsigned short numberOfRequests; 
@property (assign,nonatomic,@dynamic) unsigned short numberOfTurns; 
@property (assign,nonatomic,@dynamic) unsigned short numberOfChallenges; 
@property (nonatomic,@dynamic,retain) NSString * facebookUserID; 
@property (nonatomic,@dynamic,retain) NSNumber * iCloudUserID; 
@property (assign,nonatomic,@dynamic) unsigned flags; 
+(id)secureCodedPropertyKeys;
+(id)displayNameWithOptions:(unsigned char)arg1 alias:(id)arg2 composite:(id)arg3 ;
+(id)compositeNameForFirstName:(id)arg1 lastName:(id)arg2 ;
-(id)serverRepresentation;
-(unsigned)numberOfAchievements;
-(unsigned short)numberOfChallenges;
-(void)setNumberOfChallenges:(unsigned short)arg1 ;
-(void)setPurpleBuddyAccount:(BOOL)arg1 ;
-(void)setFriends:(id)arg1 ;
-(unsigned short)numberOfFriends;
-(void)setNumberOfFriends:(unsigned short)arg1 ;
-(unsigned short)numberOfFriendsInCommon;
-(unsigned short)numberOfGames;
-(unsigned short)numberOfGamesInCommon;
-(unsigned)numberOfAchievementPoints;
-(unsigned short)numberOfRequests;
-(unsigned short)numberOfTurns;
-(void)setNumberOfAchievements:(unsigned)arg1 ;
-(void)setCompositeName:(id)arg1 ;
-(void)setLastPlayedGame:(id)arg1 ;
-(id)facebookUserID;
-(void)setFacebookUserID:(id)arg1 ;
-(id)iCloudUserID;
-(void)setICloudUserID:(id)arg1 ;
-(void)setUnderage:(BOOL)arg1 ;
-(BOOL)isFindable;
-(void)setFindable:(BOOL)arg1 ;
-(BOOL)isPhotoPending;
-(void)setPhotoPending:(BOOL)arg1 ;
-(BOOL)allowNearbyMultiplayer;
-(void)setAllowNearbyMultiplayer:(BOOL)arg1 ;
-(void)setNumberOfRequests:(unsigned short)arg1 ;
-(void)setNumberOfTurns:(unsigned short)arg1 ;
-(void)setNumberOfFriendsInCommon:(unsigned short)arg1 ;
-(void)setNumberOfGames:(unsigned short)arg1 ;
-(void)setNumberOfGamesInCommon:(unsigned short)arg1 ;
-(void)setNumberOfAchievementPoints:(unsigned)arg1 ;
-(BOOL)isAnonymousPlayer;
-(BOOL)isUnknownPlayer;
-(void)setPlayerID:(id)arg1 ;
-(id)playerID;
-(id)displayNameWithOptions:(unsigned char)arg1 ;
-(id)lastPlayedGame;
-(BOOL)isFriend;
-(BOOL)isLocalPlayer;
-(id)alias;
-(id)photos;
-(BOOL)isUnderage;
-(void)setAlias:(id)arg1 ;
-(BOOL)isPurpleBuddyAccount;
-(BOOL)isAutomatchPlayer;
-(id)friends;
-(void)setPhotos:(id)arg1 ;
-(id)lastPlayedDate;
-(void)setLastPlayedDate:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(BOOL)isLoaded;
-(id)status;
-(void)setStatus:(id)arg1 ;
-(void)setAccountName:(id)arg1 ;
-(id)accountName;
-(id)compositeName;
-(unsigned)flags;
-(id)emailAddresses;
-(void)setEmailAddresses:(id)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(id)firstName;
-(id)lastName;
-(void)setFirstName:(id)arg1 ;
-(void)setLastName:(id)arg1 ;
@end

