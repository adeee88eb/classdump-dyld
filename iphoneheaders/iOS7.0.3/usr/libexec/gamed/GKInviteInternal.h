/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSData, GKPlayerInternal, NSDictionary;

@interface GKInviteInternal : GKInternalRepresentation {

	NSString* _inviteID;
	NSData* _sessionToken;
	GKPlayerInternal* _player;
	NSString* _message;
	NSDictionary* _localizableMessage;
	NSString* _deviceID;
	NSString* _bundleID;
	NSString* _peerID;
	NSData* _peerPushToken;
	NSData* _peerNATIP;
	NSData* _peerBlob;
	NSString* _rid;
	int _playerGroup;
	unsigned _playerAttributes;
	int _peerNATType;
	unsigned _matchType;
	unsigned char _version;
	NSString* _participantID;

}

@property (nonatomic,retain) NSString * inviteID;                            //@synthesize inviteID=_inviteID - In the implementation block
@property (nonatomic,retain) NSData * sessionToken;                          //@synthesize sessionToken=_sessionToken - In the implementation block
@property (nonatomic,retain) GKPlayerInternal * player;                      //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) NSString * message;                             //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSDictionary * localizableMessage;              //@synthesize localizableMessage=_localizableMessage - In the implementation block
@property (assign,nonatomic) unsigned matchType;                             //@synthesize matchType=_matchType - In the implementation block
@property (assign,nonatomic) int playerGroup;                                //@synthesize playerGroup=_playerGroup - In the implementation block
@property (assign,nonatomic) unsigned playerAttributes;                      //@synthesize playerAttributes=_playerAttributes - In the implementation block
@property (nonatomic,retain) NSString * peerID;                              //@synthesize peerID=_peerID - In the implementation block
@property (nonatomic,retain) NSData * peerPushToken;                         //@synthesize peerPushToken=_peerPushToken - In the implementation block
@property (assign,nonatomic) int peerNATType;                                //@synthesize peerNATType=_peerNATType - In the implementation block
@property (nonatomic,retain) NSData * peerNATIP;                             //@synthesize peerNATIP=_peerNATIP - In the implementation block
@property (nonatomic,retain) NSData * peerBlob;                              //@synthesize peerBlob=_peerBlob - In the implementation block
@property (nonatomic,retain) NSString * rid;                                 //@synthesize rid=_rid - In the implementation block
@property (assign,nonatomic) unsigned char version;                          //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSString * participantID;                       //@synthesize participantID=_participantID - In the implementation block
@property (nonatomic,retain) NSString * deviceID;                            //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                            //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,@dynamic,readonly) BOOL isNearby; 
+(id)secureCodedPropertyKeys;
+(id)inviteFromNearbyPlayer:(id)arg1 participantID:(id)arg2 deviceID:(id)arg3 bundleID:(id)arg4 connectionData:(id)arg5 ;
+(id)nearbyInviteIDForPlayerID:(id)arg1 deviceID:(id)arg2 bundleID:(id)arg3 ;
+(id)inviteWithDictionary:(id)arg1 ;
-(id)peerID;
-(void)setPeerID:(id)arg1 ;
-(int)playerGroup;
-(unsigned)playerAttributes;
-(id)peerBlob;
-(id)sessionToken;
-(id)peerPushToken;
-(int)peerNATType;
-(id)peerNATIP;
-(BOOL)isNearby;
-(void)setMatchType:(unsigned)arg1 ;
-(id)localizableMessage;
-(void)setLocalizableMessage:(id)arg1 ;
-(void)setPlayerGroup:(int)arg1 ;
-(void)setPlayerAttributes:(unsigned)arg1 ;
-(void)setSessionToken:(id)arg1 ;
-(void)setInviteID:(id)arg1 ;
-(void)setPeerPushToken:(id)arg1 ;
-(void)setPeerNATType:(int)arg1 ;
-(void)setPeerNATIP:(id)arg1 ;
-(void)setPeerBlob:(id)arg1 ;
-(id)rid;
-(void)setRid:(id)arg1 ;
-(id)inviteID;
-(id)bundleID;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)message;
-(void)setMessage:(id)arg1 ;
-(void)setVersion:(unsigned char)arg1 ;
-(unsigned char)version;
-(id)participantID;
-(void)setParticipantID:(id)arg1 ;
-(id)deviceID;
-(void)setDeviceID:(id)arg1 ;
-(void)setBundleID:(id)arg1 ;
-(id)player;
-(void)setPlayer:(id)arg1 ;
-(unsigned)matchType;
@end
