/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:05:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Social.framework/XPCServices/com.apple.weibo.xpc/com.apple.weibo
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol CLLocationManagerDelegate <NSObject>
@optional
-(void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
-(void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
-(BOOL)locationManagerShouldDisplayHeadingCalibration:(id)arg1;
-(void)locationManager:(id)arg1 didDetermineState:(int)arg2 forRegion:(id)arg3;
-(void)locationManager:(id)arg1 didRangeBeacons:(id)arg2 inRegion:(id)arg3;
-(void)locationManager:(id)arg1 rangingBeaconsDidFailForRegion:(id)arg2 withError:(id)arg3;
-(void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
-(void)locationManager:(id)arg1 didExitRegion:(id)arg2;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2;
-(void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
-(void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1;
-(void)locationManager:(id)arg1 didFinishDeferredUpdatesWithError:(id)arg2;
@end

