/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKFamiliarPlayerInternal.h>

@class NSString;

@interface GKFriendRecommendationInternal : GKFamiliarPlayerInternal {

	NSString* _reason;
	NSString* _reason2;
	unsigned _rid;
	int _source;

}

@property (nonatomic,retain) NSString * reason;               //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSString * reason2;              //@synthesize reason2=_reason2 - In the implementation block
@property (assign,nonatomic) unsigned rid;                    //@synthesize rid=_rid - In the implementation block
@property (assign,nonatomic) int source;                      //@synthesize source=_source - In the implementation block
+(id)secureCodedPropertyKeys;
-(void)setReason:(id)arg1 ;
-(id)reason2;
-(void)setReason2:(id)arg1 ;
-(unsigned)rid;
-(void)setRid:(unsigned)arg1 ;
-(void)dealloc;
-(int)source;
-(void)setSource:(int)arg1 ;
-(id)reason;
@end

