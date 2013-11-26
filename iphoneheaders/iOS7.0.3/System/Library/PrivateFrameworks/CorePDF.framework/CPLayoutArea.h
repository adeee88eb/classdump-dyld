/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:07 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPRegion.h>

@interface CPLayoutArea : CPRegion {

	BOOL isFirstLayout;

}
-(id)init;
-(id)description;
-(id)properties;
-(void)accept:(id)arg1 ;
-(float)selectionBottom;
-(BOOL)isBoxRegion;
-(BOOL)isGraphicalRegion;
-(BOOL)isRowRegion;
-(void)setIsImageRegion:(BOOL)arg1 ;
-(BOOL)isImageRegion;
-(BOOL)isShapeRegion;
-(CGRect)layoutAreaBounds;
-(BOOL)isSimilarTo:(id)arg1 ;
-(BOOL)isFirstLayout;
-(void)setIsFirstLayout:(BOOL)arg1 ;
-(void)addColumnBreaks;
@end
