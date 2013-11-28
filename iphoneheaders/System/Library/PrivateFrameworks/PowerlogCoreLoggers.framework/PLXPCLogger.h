/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogLoggerSupport/PLLogger.h>

@protocol OS_xpc_object;
@class NSObject;

@interface PLXPCLogger : PLLogger {

	NSObject<OS_xpc_object>* _connection;

}
+(id)sharedInstance;
+(id)logger;
-(void)dealloc;
-(id)init;
-(BOOL)_shouldLogForXPCRequest:(id)arg1 ;
-(void)_handleIncomingMessageDictionary:(id)arg1 ;
-(BOOL)_shouldLogForProcess:(id)arg1 withClientID:(short)arg2 withEvent:(id)arg3 ;
-(void)logTopic:(id)arg1 withContent:(id)arg2 withContentOrder:(id)arg3 fromProcessName:(id)arg4 forClientID:(short)arg5 ;
-(short)_shouldLogFor:(id)arg1 ;
@end

