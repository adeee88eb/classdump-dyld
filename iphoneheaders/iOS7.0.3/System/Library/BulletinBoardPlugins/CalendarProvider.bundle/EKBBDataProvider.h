/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/BulletinBoardPlugins/CalendarProvider.bundle/CalendarProvider
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <BulletinBoard/BBDataProvider.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableDictionary, NSTimer, EKEventStore;

@interface EKBBDataProvider : NSObject <BBDataProvider> {

	NSObject<OS_dispatch_queue>* _alertQueue;
	NSObject<OS_dispatch_queue>* _databaseQueue;
	NSMutableDictionary* _alerts;
	NSTimer* _syncTimer;
	BOOL _pendingChanges;
	NSObject<OS_dispatch_queue>* _eventStoreQueue;
	EKEventStore* _eventStore;
	NSObject<OS_dispatch_source>* _eventStoreIdleTimerSource;

}
-(BOOL)supportsAlerts;
-(void)removeAlerts:(id)arg1 ;
-(void)_alarmsDidFire:(id)arg1 ;
-(void)bulletinClosed:(id)arg1 ;
-(void)alarmsDidFire:(id)arg1 ;
-(id)emptyModalTitle;
-(id)entityScheme;
-(void)clearAlerts;
-(void)acknowledgeAlerts:(id)arg1 ;
-(void)_killEventStoreIdleTimer;
-(id)_findAlarmForCalendarItem:(id)arg1 matchingExternalID:(id)arg2 ;
-(void)databaseChanged:(id)arg1 ;
-(void)_resetEventStoreIdleTimer;
-(void)eventStoreWillClose;
-(id)modalTitleForAlertInfo:(id)arg1 ;
-(id)modalMessageForAlertInfo:(id)arg1 ;
-(void)_withdrawAlertBulletin:(id)arg1 ;
-(id)messageStringForAlert:(id)arg1 ;
-(id)expirationDateForAlertInfo:(id)arg1 ;
-(void)_bulletinRequestAcknowledged:(id)arg1 alertInfo:(id)arg2 performActions:(/*^block*/ id)arg3 ;
-(void)_addAlertModalContent:(id)arg1 bulletin:(id)arg2 ;
-(id)actionButtonTitleForAlertInfo:(id)arg1 ;
-(id)defaultURLForAlertInfo:(id)arg1 ;
-(id)_bulletinRequestWithAlertInfo:(id)arg1 ;
-(void)_databaseChanged;
-(id)eventStore;
-(unsigned)allowedEntityTypes;
-(void)_killSyncTimer;
-(void)_timeZoneChanged:(id)arg1 ;
-(void)_syncTimerFired:(id)arg1 ;
-(void)_syncDidEnd;
-(void)_resetSyncTimer;
-(void)_syncDidStart;
-(void)dealloc;
-(id)init;
-(id)sectionIdentifier;
-(BOOL)syncsBulletinDismissal;
-(void)dataProviderDidLoad;
-(id)bulletinsFilteredBy:(unsigned)arg1 count:(unsigned)arg2 lastCleared:(id)arg3 ;
-(id)sortDescriptors;
-(id)alerts;
-(void).cxx_destruct;
@end
