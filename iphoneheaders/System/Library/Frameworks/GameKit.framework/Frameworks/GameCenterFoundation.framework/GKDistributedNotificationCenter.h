/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCoreServices/NSXPCListenerDelegate.h>

@class CPDistributedNotificationCenter;

@interface GKDistributedNotificationCenter : NSObject <NSXPCListenerDelegate> {

	id _internal;

}

@property (retain) CPDistributedNotificationCenter * notificationCenter;              //@synthesize internal=_internal - In the implementation block
+(id)defaultCenter;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 ;
-(void)setNotificationCenter:(id)arg1 ;
-(void)postNotificationName:(id)arg1 userInfo:(id)arg2 toBundleIdentifier:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(id)notificationCenter;
-(void)postNotificationName:(id)arg1 ;
-(void)postNotificationName:(id)arg1 userInfo:(id)arg2 ;
@end

