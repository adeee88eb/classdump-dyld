/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Accounts/Authentication/AppleIDAuthentication.bundle/AppleIDAuthentication
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol ACDAccountAuthenticationPlugin <NSObject>
@optional
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(/*^block*/ id)arg4;
-(BOOL)isPushSupportedForAccount:(id)arg1;
-(id)credentialForAccount:(id)arg1 client:(id)arg2;
-(id)credentialForAccount:(id)arg1 client:(id)arg2 error:(id*)arg3;
-(id)credentialForAccount:(id)arg1 client:(id)arg2 store:(id)arg3 error:(id*)arg4;
-(void)verifyCredentialsForAccount:(id)arg1 client:(id)arg2 withHandler:(/*^block*/ id)arg3;
-(id)renewalIDForAccount:(id)arg1;
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 reason:(id)arg3 completion:(/*^block*/ id)arg4;

@required
-(void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 completion:(/*^block*/ id)arg3;
@end

