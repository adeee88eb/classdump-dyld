/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBRootIconListView.h>

@interface SBDockIconListView : SBRootIconListView
+(unsigned)iconColumnsForInterfaceOrientation:(int)arg1 ;
+(unsigned)iconRowsForInterfaceOrientation:(int)arg1 ;
+(float)defaultHeight;
-(id)initWithModel:(id)arg1 orientation:(int)arg2 viewMap:(id)arg3 ;
-(float)sideIconInset;
-(id)iconAtPoint:(CGPoint)arg1 index:(unsigned*)arg2 proposedOrder:(int*)arg3 grabbedIcon:(id)arg4 ;
-(unsigned)iconsInRowForSpacingCalculation;
-(CGPoint)originForIconAtCoordinate:(SBIconCoordinate)arg1 ;
-(float)_additionalSideInsetToCenterIcons;
-(unsigned)columnAtPoint:(CGPoint)arg1 ;
-(float)topIconInset;
-(unsigned)rowAtPoint:(CGPoint)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(int)iconLocation;
@end
