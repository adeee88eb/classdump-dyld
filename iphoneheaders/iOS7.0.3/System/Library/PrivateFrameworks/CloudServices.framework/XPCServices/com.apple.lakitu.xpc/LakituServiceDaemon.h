/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:07:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/XPCServices/com.apple.lakitu.xpc/com.apple.lakitu
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <com.apple.lakitu/com.apple.lakitu-Structs.h>
#import <MobileCoreServices/NSXPCListenerDelegate.h>
#import <CloudServices/LakituProtocol.h>

@interface LakituServiceDaemon : NSObject <NSXPCListenerDelegate, LakituProtocol>
-(id)_certVersion:(SecCertificateRef)arg1 ;
-(id)_rootTrustedVersions;
-(void)_saveBypassToken:(id)arg1 ;
-(void)_removeBypassToken;
-(id)_getBypassToken;
-(id)_rootBaseVersions;
-(id)_rootCurrentVersion;
-(id)escrowURL;
-(id)authToken;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)getAccountInfoWithInfo:(id)arg1 reply:(/*^block*/ id)arg2 ;
-(void)changeSMSTargetWithInfo:(id)arg1 reply:(/*^block*/ id)arg2 ;
-(void)startSMSChallengeWithInfo:(id)arg1 reply:(/*^block*/ id)arg2 ;
-(void)storeRecordWithInfo:(id)arg1 reply:(/*^block*/ id)arg2 ;
-(void)recoverRecordWithInfo:(id)arg1 reply:(/*^block*/ id)arg2 ;
-(void)updateRecordWithInfo:(id)arg1 reply:(/*^block*/ id)arg2 ;
-(void)deleteRecordWithInfo:(id)arg1 reply:(/*^block*/ id)arg2 ;
-(void)listSMSTargetsWithInfo:(id)arg1 reply:(/*^block*/ id)arg2 ;
-(void)verifyCertificateWithInfo:(id)arg1 reply:(/*^block*/ id)arg2 ;
-(id)dsid;
@end
