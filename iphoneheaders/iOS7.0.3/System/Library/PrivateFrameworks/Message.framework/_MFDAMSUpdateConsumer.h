/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:10 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Message/_MFDAMSBasicConsumer.h>
#import <Message/MFDASyncActionsConsumer.h>

@interface _MFDAMSUpdateConsumer : _MFDAMSBasicConsumer <MFDASyncActionsConsumer>
-(BOOL)handleItems:(id)arg1 ;
-(void)handleResponse:(id)arg1 error:(id)arg2 ;
-(void)drainMailbox;
-(void)receiveSyncActions:(id)arg1 ;
-(void)commitSyncActions;
@end
