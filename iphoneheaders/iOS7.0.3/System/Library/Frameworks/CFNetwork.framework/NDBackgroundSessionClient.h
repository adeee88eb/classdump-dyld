/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol NDBackgroundSessionClient <NSObject>
@required
-(void)backgroundTaskDidResume:(unsigned)arg1;
-(void)backgroundTaskDidSuspend:(unsigned)arg1;
-(void)backgroundTask:(unsigned)arg1 didReceiveChallenge:(id)arg2 reply:(/*^block*/ id)arg3;
-(void)backgroundTask:(unsigned)arg1 didReceiveResponse:(id)arg2;
-(void)backgroundTask:(unsigned)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
-(void)backgroundTask:(unsigned)arg1 didCompleteWithError:(id)arg2 reply:(/*^block*/ id)arg3;
-(void)backgroundDownloadTask:(unsigned)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
-(void)backgroundDownloadTask:(unsigned)arg1 didFinishDownloadingToURL:(id)arg2 reply:(/*^block*/ id)arg3;
-(void)backgroundSessionDidStartAppWake:(id)arg1 reply:(/*^block*/ id)arg2;
-(void)backgroundSessionDidFinishAppWake:(id)arg1 reply:(/*^block*/ id)arg2;
-(void)credStorage_getInitialCredentialDictionariesWithReply:(/*^block*/ id)arg1;
-(void)credStorage_credentialsForProtectionSpace:(id)arg1 reply:(/*^block*/ id)arg2;
-(void)credStorage_allCredentialsWithReply:(/*^block*/ id)arg1;
-(void)credStorage_setCredential:(id)arg1 forProtectionSpace:(id)arg2;
-(void)credStorage_removeCredential:(id)arg1 forProtectionSpace:(id)arg2;
-(void)credStorage_defaultCredentialForProtectionSpace:(id)arg1 reply:(/*^block*/ id)arg2;
-(void)credStorage_setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2;
@end
