/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol EKDayViewContentDelegate <NSObject>
@optional
-(void)dayViewContent:(id)arg1 didSelectEvent:(id)arg2;
-(void)dayViewContent:(id)arg1 didCreateOccurrenceViews:(id)arg2;
-(void)occurrencePressed:(id)arg1 onDay:(double)arg2;

@required
-(void)dayViewContent:(id)arg1 didTapPinnedOccurrence:(id)arg2;
-(void)dayViewContent:(id)arg1 didTapInEmptySpaceOnDay:(double)arg2;
@end

