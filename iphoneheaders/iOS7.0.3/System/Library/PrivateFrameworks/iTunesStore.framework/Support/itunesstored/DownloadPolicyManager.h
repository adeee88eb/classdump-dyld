/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class DownloadsDatabase, NSMutableSet, NSObject, NSHashTable, NSMutableDictionary, NSCountedSet;

@interface DownloadPolicyManager : NSObject {

	DownloadsDatabase* _database;
	NSMutableSet* _loadedURLBagTypes;
	NSObject<OS_dispatch_queue>* _observerQueue;
	NSHashTable* _observers;
	BOOL _observingBatteryLevel;
	BOOL _observingCellularDataSwitch;
	NSMutableDictionary* _policies;
	NSCountedSet* _timeLimitablePolicyIDs;
	NSMutableSet* _timeLimitedClientIDs;
	BOOL _timeLimitExpired;
	NSObject<OS_dispatch_source>* _timeLimitTimer;

}

@property (nonatomic,readonly) DownloadsDatabase * downloadsDatabase;              //@synthesize database=_database - In the implementation block
-(id)initWithDownloadsDatabase:(id)arg1 ;
-(void)addPolicyObserver:(id)arg1 ;
-(void)removePolicyObserver:(id)arg1 ;
-(id)downloadsDatabase;
-(long long)addDownloadPolicy:(id)arg1 ;
-(id)downloadPolicyForID:(long long)arg1 ;
-(long long)downloadSizeLimitForPolicyWithID:(long long)arg1 ;
-(long long)downloadSizeLimitForPolicyWithID:(long long)arg1 networkType:(int)arg2 ;
-(void)observeTimeLimitedClientIdentifiers:(id)arg1 ;
-(void)addTimeLimitablePolicyID:(long long)arg1 ;
-(void)removeTimeLimitablePolicyID:(long long)arg1 ;
-(long long)smallestAllowedSizeLimitForPolicyWithID:(long long)arg1 ;
-(void)_initializePolicy;
-(void)_registrationStateChanged:(id)arg1 ;
-(void)_pluggedInChanged:(id)arg1 ;
-(void)_addPolicy:(id)arg1 ;
-(void)_reloadBackgroundTaskAgentJobs;
-(BOOL)_isDownloadPolicyTimeLimited:(id)arg1 ;
-(void)_startTimeLimitTimer;
-(long long)_sizeLimitForPolicy:(id)arg1 networkType:(int)arg2 ;
-(long long)_reloadSizeLimitForPolicy:(id)arg1 networkType:(int)arg2 ;
-(void)_enumerateRulesWithBlock:(/*^block*/ id)arg1 ;
-(void)_applyPolicyChangeset:(id)arg1 ;
-(id)_urlBagTimeLimit;
-(id)_copyChangedPoliciesByReloading;
-(void)_loadURLBagForBagType:(int)arg1 ;
-(void)_batteryLevelChanged:(id)arg1 ;
-(void)_cellularDataSwitchChanged:(id)arg1 ;
-(void)_notifyObserversOfChangedPolicies:(id)arg1 ;
-(void)_reevaluatePoliciesAfterTimeLimitChange;
-(BOOL)_isPolicyRuleSatisfied:(id)arg1 forPolicy:(id)arg2 networkType:(int)arg3 ;
-(BOOL)_isPolicyRuleNetworkTypeAllowed:(id)arg1 networkType:(int)arg2 ;
-(BOOL)_isPolicyRulePowerStateAllowed:(id)arg1 ;
-(BOOL)_isPolicyRuleCellularDataAllowed:(id)arg1 networkType:(int)arg2 ;
-(BOOL)_isPolicyRuleBatteryLevelAllowed:(id)arg1 ;
-(BOOL)_isPolicyRuleRegistrationStateAllowed:(id)arg1 networkType:(int)arg2 ;
-(BOOL)_isPolicyRuleTimeLimitStateAllowed:(id)arg1 forPolicy:(id)arg2 ;
-(BOOL)_isPolicyRuleApplicationStateAllowed:(id)arg1 ;
-(double)_timeLimitTimeInterval;
-(void)_fireTimeLimitTimer;
-(void)dealloc;
-(id)init;
-(void)_applicationStateChanged:(id)arg1 ;
-(void)_networkTypeChanged:(id)arg1 ;
-(void)_bagDidLoadNotification:(id)arg1 ;
@end
