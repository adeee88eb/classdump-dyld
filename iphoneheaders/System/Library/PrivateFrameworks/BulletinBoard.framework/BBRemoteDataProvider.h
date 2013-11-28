/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BBDataProvider.h>
#import <SpringBoardServices/XPCProxyTarget.h>
#import <BulletinBoard/BBXPCConnectionDelegate.h>

@protocol OS_dispatch_queue, BBRemoteDataProviderDelegate;
@class NSString, BBXPCOutgoingConnection, NSObject, NSMutableArray;

@interface BBRemoteDataProvider : BBDataProvider <XPCProxyTarget, BBXPCConnectionDelegate> {

	NSString* _sectionID;
	NSString* _appBundleID;
	BBXPCOutgoingConnection* _connection;
	NSObject<OS_dispatch_queue>* _queue;
	NSMutableArray* _pendingRequests;
	<BBRemoteDataProviderDelegate>* _delegate;
	BOOL _operational;

}
+(id)_sharedSystemService;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(void)resume;
-(void)_invalidate;
-(id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2 ;
-(id)sectionIdentifier;
-(void)connection:(id)arg1 connectionStateDidChange:(BOOL)arg2 ;
-(void)getSectionInfoWithCompletion:(/*^block*/ id)arg1 ;
-(void)ping:(/*^block*/ id)arg1 ;
-(void)clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:(id)arg1 lastClearedInfo:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)attachmentAspectRatioForRecordID:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)updateClearedInfoWithClearedInfo:(id)arg1 handler:(/*^block*/ id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)updateSectionInfoWithSectionInfo:(id)arg1 handler:(/*^block*/ id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)deliverResponse:(id)arg1 forBulletinRequest:(id)arg2 ;
-(void)dataProviderDidLoad;
-(BOOL)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2 ;
-(void)noteSectionInfoDidChange:(id)arg1 ;
-(void)startWatchdog;
-(void)reloadIdentityWithCompletion:(/*^block*/ id)arg1 ;
-(BOOL)canPerformMigration;
-(void)invalidateBulletins;
-(void)addBulletin:(id)arg1 forDestinations:(unsigned)arg2 ;
-(void)modifyBulletin:(id)arg1 ;
-(void)withdrawBulletinsWithRecordID:(id)arg1 ;
-(void)withdrawBulletinWithPublisherBulletinID:(id)arg1 ;
-(void)reloadSectionParameters:(id)arg1 ;
-(void)reloadDefaultSectionInfo:(id)arg1 ;
-(void)getClearedInfoWithCompletion:(/*^block*/ id)arg1 ;
-(void)setClearedInfo:(id)arg1 ;
-(void)setSectionInfo:(id)arg1 ;
-(void)_processPendingRequests;
-(void)_prependAndSendRequest:(/*^block*/ id)arg1 ;
-(void)_sendRequest:(/*^block*/ id)arg1 ;
-(void)_logDoesNotRespond:(SEL)arg1 ;
-(id)initWithSectionID:(id)arg1 serviceName:(id)arg2 appBundleID:(id)arg3 delegate:(id)arg4 onQueue:(id)arg5 ;
@end

