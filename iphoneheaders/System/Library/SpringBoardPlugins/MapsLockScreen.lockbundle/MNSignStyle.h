/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:11:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <MapsLockScreen/MapsLockScreen-Structs.h>
@class NSString, UIColor, UIImage;

@interface MNSignStyle : NSObject

@property (nonatomic,readonly) NSString * distanceFontName; 
@property (nonatomic,readonly) NSString * instructionsFontName; 
@property (nonatomic,readonly) BOOL capitalizeInstructions; 
@property (nonatomic,readonly) NSString * recalculatingFontName; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) UIColor * foregroundColor; 
@property (nonatomic,readonly) UIColor * bannerTextColor; 
@property (nonatomic,readonly) UIColor * accentColor; 
@property (nonatomic,readonly) UIColor * dividerColor; 
@property (nonatomic,readonly) int desiredFraming; 
@property (nonatomic,readonly) UIImage * squareSignImage; 
@property (nonatomic,readonly) float secondarySignWidthScale; 
@property (nonatomic,readonly) float secondarySignYOverlapAmount; 
@property (nonatomic,readonly) float secondarySignLeftContentInset; 
@property (nonatomic,readonly) float secondarySignRightContentInset; 
@property (nonatomic,readonly) float secondarySignManeuverAreaWidth; 
@property (nonatomic,readonly) float secondarySignManeuverAreaMargin; 
@property (nonatomic,readonly) float secondarySignShieldAreaMargin; 
@property (nonatomic,readonly) float secondarySignTopBorderHeight; 
@property (nonatomic,readonly) float secondarySignBottomBorderHeight; 
+(id)sharedSignStyle;
+(SCD_Struct_MN5)arrowMetricsForStyle:(int)arg1 ;
+(SCD_Struct_MN5)_defaultArrowMetricsForStyle:(int)arg1 ;
+(SCD_Struct_MN5)_arrowMetricsByApplyingScale:(float)arg1 toMetrics:(SCD_Struct_MN5)arg2 forView:(id)arg3 ;
+(SCD_Struct_MN5)arrowMetricsForStyle:(int)arg1 scaledToMatchReferenceSize:(CGSize)arg2 forView:(id)arg3 ;
-(int)desiredFraming;
-(BOOL)wantCentering;
-(float)topMarginForVariant:(int)arg1 isCombinedSign:(BOOL)arg2 ;
-(BOOL)wantBlur;
-(id)accentColor;
-(float)maximumWidthForVariant:(int)arg1 forScreenWidth:(float)arg2 ;
-(id)instructionsFontName;
-(float)instructionsFontSizeForVariant:(int)arg1 ;
-(id)distanceFontName;
-(float)distanceFontSizeForVariant:(int)arg1 ;
-(float)distanceNumericFontSizeForVariant:(int)arg1 ;
-(id)dividerColor;
-(float)reroutingOnlyLabelYOffsetForVariant:(int)arg1 ;
-(float)instructionsLabelYOffsetForVariant:(int)arg1 ;
-(float)labelBottomMarginForVariant:(int)arg1 ;
-(float)reroutingLabelHeightForVariant:(int)arg1 ;
-(id)borderImageForSize:(CGSize)arg1 ;
-(UIEdgeInsets)borderInsetsForSize:(CGSize)arg1 ;
-(float)internalMargin;
-(float)maneuverAreaWidthForVariant:(int)arg1 ;
-(float)distanceLabelHeightForVariant:(int)arg1 ;
-(float)distanceLabelYOffsetForVariant:(int)arg1 ;
-(id)recalculatingFontName;
-(float)recalculatingFontSizeForVariant:(int)arg1 ;
-(float)absentSideAreaWidth;
-(float)shieldAreaWidthForVariant:(int)arg1 ;
-(float)shieldAreaMargin;
-(float)minimumWidthForVariant:(int)arg1 ;
-(BOOL)capitalizeInstructions;
-(float)secondarySignWidthScale;
-(float)secondarySignHeightForVariant:(int)arg1 ;
-(float)secondarySignYOverlapAmount;
-(float)secondarySignManeuverAreaWidth;
-(float)secondarySignTopBorderHeight;
-(float)secondarySignBottomBorderHeight;
-(float)secondarySignManeuverAreaMargin;
-(id)dimmedForegroundColor;
-(id)squareSignImage;
-(id)innerBackgroundImageForSize:(CGSize)arg1 ;
-(float)innerBorderRadiusForSize:(CGSize)arg1 ;
-(id)outerBackgroundImageForSize:(CGSize)arg1 ;
-(float)outerBorderRadiusForSize:(CGSize)arg1 ;
-(id)bannerTextColor;
-(float)sideMarginForVariant:(int)arg1 ;
-(float)secondarySignLeftContentInset;
-(float)secondarySignRightContentInset;
-(float)secondarySignManeuverAreaWidthForVariant:(int)arg1 ;
-(float)secondarySignShieldAreaMargin;
-(id)backgroundColor;
-(id)foregroundColor;
-(BOOL)isDimmed;
@end

