/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <itunesstored/DaemonProtocolDataProvider.h>

@class NSURL;

@interface GratisClaimProtocolDataProvider : DaemonProtocolDataProvider {

	NSURL* _redirectedClaimURL;

}

@property (copy) NSURL * redirectedClaimURL;              //@synthesize redirectedClaimURL=_redirectedClaimURL - In the implementation block
-(id)redirectedClaimURL;
-(void)setRedirectedClaimURL:(id)arg1 ;
-(void)dealloc;
-(BOOL)_runServerAuthenticationOperation:(id)arg1 error:(id*)arg2 ;
@end
