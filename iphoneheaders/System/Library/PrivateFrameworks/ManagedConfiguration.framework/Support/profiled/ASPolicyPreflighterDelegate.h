/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol ASPolicyPreflighterDelegate
@required
-(void)preflighter:(id)arg1 error:(id)arg2;
-(void)preflighterRemoteWipeRequested:(id)arg1;
-(void)preflighter:(id)arg1 needsComplianceWithMCFeatures:(id)arg2 perAccountPolicies:(id)arg3;
-(void)preflighter:(id)arg1 successWithMCFeatures:(id)arg2 perAccountPolicies:(id)arg3 policyKey:(id)arg4;
-(void)preflighterRemoteWipeRequestResponseAcknowledged:(id)arg1;
@end

