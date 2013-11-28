/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKLeaderboardScoreRequest.h>

@class NSArray;

@interface GKLeaderboardScorePlayersRequest : GKLeaderboardScoreRequest {

	NSArray* _playerIDs;

}

@property (nonatomic,copy) NSArray * playerIDs;              //@synthesize playerIDs=_playerIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPlayerIDs:(id)arg1 ;
-(id)playerIDs;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

