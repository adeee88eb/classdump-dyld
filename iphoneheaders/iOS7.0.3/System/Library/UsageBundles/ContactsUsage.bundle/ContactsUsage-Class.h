/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:36:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/UsageBundles/ContactsUsage.bundle/ContactsUsage
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CalendarUsageBundle/PSStorageReporting.h>

@class NSArray;

@interface ContactsUsage : NSObject <PSStorageReporting> {

	NSArray* _cachedBundleApps;
	unsigned long long _totalSize;

}
-(void)populateUsageBundleApps;
-(void)dealloc;
-(id)usageBundleApps;
-(float)sizeForCategory:(id)arg1 ;
-(BOOL)allowDeletionForCategory:(id)arg1 ;
@end
