/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIShapeEffectStack.h>

@interface CUITextEffectStack : CUIShapeEffectStack {

	bool renderHighQuality;

}
-(id)initWithEffectPreset:(id)arg1 ;
-(BOOL)useCoreImageRendering;
-(CGContextRef)newGlyphMaskContextForBounds:(CGRect)arg1 fromContext:(CGContextRef)arg2 withScale:(float)arg3 ;
-(void)drawProcessedMask:(CGContextRef)arg1 atBounds:(CGRect)arg2 inContext:(CGContextRef)arg3 withScale:(float)arg4 ;
-(CGColorRef)newBackgroundPatternColorWithSize:(CGSize)arg1 contentScale:(float)arg2 forContext:(CGContextRef)arg3 ;
-(void)_drawShadow:(SCD_Struct_CU25)arg1 forGlyphs:(const unsigned short*)arg2 inContext:(CGContextRef)arg3 usingFont:(CTFontRef)arg4 withAdvances:(const CGSize*)arg5 count:(unsigned long)arg6 ;
-(void)_drawShadow:(SCD_Struct_CU25)arg1 forGlyphs:(const unsigned short*)arg2 inContext:(CGContextRef)arg3 usingFont:(CTFontRef)arg4 atPositions:(const CGPoint*)arg5 count:(unsigned long)arg6 ;
-(void)_drawShadow:(SCD_Struct_CU25)arg1 usingQuartz:(/*^block*/ id)arg2 inContext:(CGContextRef)arg3 ;
-(float)effectiveInteriorFillOpacity;
-(void)drawGlyphs:(const unsigned short*)arg1 inContext:(CGContextRef)arg2 usingFont:(CTFontRef)arg3 withAdvances:(const CGSize*)arg4 count:(unsigned long)arg5 lineHeight:(float)arg6 inBounds:(CGRect)arg7 atScale:(float)arg8 ;
-(void)drawGlyphs:(const unsigned short*)arg1 inContext:(CGContextRef)arg2 usingFont:(CTFontRef)arg3 atPositions:(const CGPoint*)arg4 count:(unsigned long)arg5 lineHeight:(float)arg6 inBounds:(CGRect)arg7 atScale:(float)arg8 ;
-(void)drawUsingQuartz:(/*^block*/ id)arg1 inContext:(CGContextRef)arg2 inBounds:(CGRect)arg3 atScale:(float)arg4 ;
@end
