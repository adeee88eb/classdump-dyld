/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:04:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/HistoryUIHold.h>

@protocol HistoryUIHold <NSObject>
@required
-(void)endHoldingUIInterferingTasks;
@end


@interface HistoryUIHold : NSObject <HistoryUIHold> {

	BOOL _ended;

}
+(BOOL)isHolding;
-(void)endHoldingUIInterferingTasks;
-(void)dealloc;
-(id)init;
@end

