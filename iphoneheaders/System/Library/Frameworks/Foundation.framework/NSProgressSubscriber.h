/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSProgressSubscriber.h>

@protocol NSProgressSubscriber <NSObject>
@required
-(oneway void)observePublisherForID:(id)arg1 value:(id)arg2 forKey:(id)arg3 inUserInfo:(BOOL)arg4;
-(oneway void)removePublisherForID:(id)arg1;
-(oneway void)addPublisher:(id)arg1 forID:(id)arg2 withValues:(id)arg3 isOld:(BOOL)arg4;
@end


@class NSString, NSMutableDictionary, NSXPCConnection, NSLock;

@interface NSProgressSubscriber : NSObject <NSProgressSubscriber> {

	/*^block*/ id _publishingHandler;
	NSString* _subscriberID;
	NSMutableDictionary* _proxiesByPublisherID;
	NSXPCConnection* _connection;
	NSLock* _lock;

}
-(oneway void)observePublisherForID:(id)arg1 value:(id)arg2 forKey:(id)arg3 inUserInfo:(BOOL)arg4 ;
-(oneway void)removePublisherForID:(id)arg1 ;
-(id)initWithPublishingHandler:(/*^block*/ id)arg1 ;
-(void)startForFileURL:(id)arg1 ;
-(void)startForCategory:(id)arg1 ;
-(oneway void)addPublisher:(id)arg1 forID:(id)arg2 withValues:(id)arg3 isOld:(BOOL)arg4 ;
-(void)dealloc;
-(void)stop;
@end

