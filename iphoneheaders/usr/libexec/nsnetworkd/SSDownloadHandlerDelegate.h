/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/nsnetworkd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol SSDownloadHandlerDelegate <NSObject>
@optional
-(void)downloadHandlerDidDisconnect:(id)arg1;
-(void)downloadHandler:(id)arg1 handleSession:(id)arg2;
-(void)downloadHandler:(id)arg1 cancelSession:(id)arg2;
-(BOOL)downloadHandler:(id)arg1 pauseSession:(id)arg2;
-(void)downloadHandler:(id)arg1 handleAuthenticationSession:(id)arg2;
@end

