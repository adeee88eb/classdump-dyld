/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:11:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SyncBundles/AirFair.syncBundle/AirFair
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AirFair/AirFair-Structs.h>
#import <AirTraffic/ATClient.h>

@interface FPAirFair : NSObject <ATClient> {

	unsigned long HPD8FhhtYi5OC5SPY;
	unsigned long LnGBbUJQLDA;

}
-(long)MvKgJWHiyPi9jHcCD1zBrVK7F:(id)arg1 bytes:(char**)arg2 size:(unsigned*)arg3 ;
-(long)U0DV0QxFFjyMatlbDyqSZ4s3d:(id)arg1 ;
-(long)cIjYbQiRD8mj9H;
-(long)wkiHcH3uUYkLWEOOs:(char*)arg1 reqSize:(unsigned long)arg2 fileName:(id)arg3 ;
-(long)ENaUvadPgTNQtAOA;
-(long)FVxWQcJol3R;
-(long)DrFjYlmSKahjfJzgmaPvs:(FairPlayHWInfo_*)arg1 ;
-(BOOL)Jaz0t2BPNjwE;
-(void)dealloc;
-(id)init;
-(BOOL)prepareForSyncWithHostAnchor:(id)arg1 progressCallback:(/*^block*/ id)arg2 grappaID:(unsigned long)arg3 hostVersion:(id)arg4 error:(id*)arg5 ;
-(BOOL)reconcileSync:(unsigned)arg1 withNewAnchor:(id)arg2 progressCallback:(/*^block*/ id)arg3 error:(id*)arg4 ;
-(void)syncEndedWithSuccess:(BOOL)arg1 ;
-(id)supportedDataclasses;
@end
