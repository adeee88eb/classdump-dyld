/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:17 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DataAccessExpress/DADisableableObject.h>

@class DADClient, NSString;

@interface DADClientDelegate : DADisableableObject {

	DADClient* _client;
	NSString* _accountID;
	BOOL _finished;
	BOOL _consumerCancelled;
	NSString* _delegateID;

}

@property (readonly) NSString * delegateID;              //@synthesize delegateID=_delegateID - In the implementation block
-(void)finishWithError:(id)arg1 ;
-(void)dealloc;
-(void)disable;
-(id)delegateID;
-(void)userRequestsCancel;
-(id)initWithAccountID:(id)arg1 client:(id)arg2 ;
@end
