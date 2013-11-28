/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iaptransportd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface IAPXPCConnection : NSObject {

	NSObject<OS_xpc_object>* _connection;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	/*^block*/ id _disconnectBlock;
	NSObject<OS_dispatch_queue>* _replyQueue;
	/*^block*/ id _messageBlock;

}

@property (copy) id disconnectBlock; 
@property (copy) id messageBlock; 
-(id)initWithServiceName:(id)arg1 queueName:(id)arg2 ;
-(id)initWithXPCConnection:(id)arg1 queueName:(id)arg2 ;
-(id)_initIAPXPCConnection:(id)arg1 ;
-(void)dealloc;
-(void)sendMessage:(id)arg1 ;
-(void)sendMessage:(id)arg1 withReply:(/*^block*/ id)arg2 ;
-(void)setDisconnectBlock:(/*^block*/ id)arg1 ;
-(void)setMessageBlock:(/*^block*/ id)arg1 ;
-(/*^block*/ id)messageBlock;
-(/*^block*/ id)disconnectBlock;
-(void)sendSynchronousMessage:(id)arg1 withReply:(/*^block*/ id)arg2 ;
-(void)_reloadEventHandler;
-(id)copyReplyQueue;
-(void)setReplyQueue:(id)arg1 ;
@end

