/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:02:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Accounts/Access/FacebookAccessPlugin.bundle/FacebookAccessPlugin
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol ACDAccountAccessPlugin <NSObject>
@required
+(BOOL)supportsAccountTypeWithIdentifier:(id)arg1;
-(void)handleAccessRequestToAccountsOfType:(id)arg1 forClient:(id)arg2 withOptions:(id)arg3 store:(id)arg4 allowUserInteraction:(BOOL)arg5 completion:(/*^block*/ id)arg6;
-(void)revokeAccessToAccountsOfType:(id)arg1 forClient:(id)arg2 store:(id)arg3 completion:(/*^block*/ id)arg4;
-(void)authorizeAccessToAccountsOfType:(id)arg1 forClient:(id)arg2 store:(id)arg3 completion:(/*^block*/ id)arg4;
-(void)revokeAllAccessToAccountsOfType:(id)arg1 store:(id)arg2 withCompletion:(/*^block*/ id)arg3;
@end

