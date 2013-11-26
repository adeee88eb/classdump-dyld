/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:08 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ToneKit/ToneKit-Structs.h>
#import <ToneKit/TKVibrationRecorderStyleProvider.h>

@class UIColor, UIScreen, UIFont, UIImage, NSBundle, NSMutableDictionary;

@interface TKStyleProvider : NSObject <TKVibrationRecorderStyleProvider> {

	UIScreen* _screen;
	NSBundle* _bundle;
	NSMutableDictionary* _cachedStyleProperties;

}

@property (nonatomic,readonly) double defaultAnimationDuration; 
@property (setter=_setBundle:,nonatomic,retain) NSBundle * _bundle;                                                       //@synthesize bundle=_bundle - In the implementation block
@property (setter=_setCachedStyleProperties:,nonatomic,retain) NSMutableDictionary * _cachedStyleProperties;              //@synthesize cachedStyleProperties=_cachedStyleProperties - In the implementation block
@property (nonatomic,readonly) UIColor * vibrationRecorderBarsBackgroundColor; 
@property (nonatomic,retain) UIScreen * screen;                                                                           //@synthesize screen=_screen - In the implementation block
@property (nonatomic,readonly) UIFont * vibrationRecorderInstructionsLabelFont; 
@property (nonatomic,readonly) UIColor * vibrationRecorderInstructionsLabelTextColor; 
@property (nonatomic,readonly) UIColor * vibrationRecorderInstructionsLabelBackgroundColor; 
@property (nonatomic,readonly) UIOffset vibrationRecorderInstructionsLabelPositionOffset; 
@property (nonatomic,readonly) UIEdgeInsets vibrationRecorderInstructionsLabelEdgeInsets; 
@property (nonatomic,readonly) double vibrationRecorderInstructionsLabelFadeAnimationDuration; 
@property (nonatomic,readonly) float vibrationRecorderControlsToolbarVerticalOffset; 
@property (nonatomic,readonly) float vibrationRecorderControlsToolbarAdditionalHeight; 
@property (nonatomic,readonly) float vibrationRecorderControlsToolbarItemsHorizontalOffsetFromEdge; 
@property (nonatomic,readonly) float vibrationRecorderProgressToolbarVerticalOffset; 
@property (nonatomic,readonly) float vibrationRecorderProgressToolbarAdditionalHeight; 
@property (nonatomic,readonly) float vibrationRecorderProgressViewHorizontalOffsetFromEdge; 
@property (nonatomic,readonly) float vibrationRecorderProgressViewHeight; 
@property (nonatomic,readonly) UIColor * vibrationRecorderProgressViewTrackColor; 
@property (nonatomic,readonly) float vibrationRecorderProgressViewDotHorizontalInset; 
@property (nonatomic,readonly) UIImage * vibrationRecorderProgressViewResizableDotImage; 
@property (nonatomic,readonly) float vibrationRecorderProgressViewAccessibilityAdditionalHeight; 
@property (nonatomic,readonly) UIColor * vibrationRecorderRippleViewBackgroundColor; 
@property (nonatomic,readonly) float vibrationRecorderRippleRingLineWidth; 
@property (nonatomic,readonly) float vibrationRecorderRippleInitialRadius; 
@property (nonatomic,readonly) float vibrationRecorderRippleFinalRadius; 
@property (nonatomic,readonly) float vibrationRecorderRippleFingerStillSpeed; 
@property (nonatomic,readonly) float vibrationRecorderRippleFingerMovingSpeed; 
-(double)defaultAnimationDuration;
-(void)dealloc;
-(id)init;
-(id)screen;
-(void)setScreen:(id)arg1 ;
-(void)_didReceiveMemoryWarning:(id)arg1 ;
-(void)_setBundle:(id)arg1 ;
-(void)_setCachedStyleProperties:(id)arg1 ;
-(id)_cachedStyleProperties;
-(id)_cachedStyleObjectForPropertyWithSelector:(SEL)arg1 ;
-(id)_bundle;
-(void)_setCachedStyleObject:(id)arg1 forPropertyWithSelector:(SEL)arg2 ;
-(id)_cachedResizableImageForPropertyWithSelector:(SEL)arg1 capInsets:(UIEdgeInsets)arg2 size:(CGSize)arg3 opaque:(BOOL)arg4 withDrawingBlock:(/*^block*/ id)arg5 ;
-(id)vibrationRecorderProgressViewResizableDotImage;
-(id)vibrationRecorderBarsBackgroundColor;
-(id)vibrationRecorderInstructionsLabelFont;
-(id)vibrationRecorderInstructionsLabelTextColor;
-(id)vibrationRecorderInstructionsLabelBackgroundColor;
-(UIOffset)vibrationRecorderInstructionsLabelPositionOffset;
-(UIEdgeInsets)vibrationRecorderInstructionsLabelEdgeInsets;
-(double)vibrationRecorderInstructionsLabelFadeAnimationDuration;
-(float)vibrationRecorderControlsToolbarVerticalOffset;
-(float)vibrationRecorderControlsToolbarAdditionalHeight;
-(float)vibrationRecorderControlsToolbarItemsHorizontalOffsetFromEdge;
-(float)vibrationRecorderProgressToolbarVerticalOffset;
-(float)vibrationRecorderProgressToolbarAdditionalHeight;
-(float)vibrationRecorderProgressViewHorizontalOffsetFromEdge;
-(float)vibrationRecorderProgressViewHeight;
-(id)vibrationRecorderProgressViewTrackColor;
-(float)vibrationRecorderProgressViewDotHorizontalInset;
-(float)vibrationRecorderProgressViewAccessibilityAdditionalHeight;
-(id)vibrationRecorderRippleViewBackgroundColor;
-(float)vibrationRecorderRippleRingLineWidth;
-(float)vibrationRecorderRippleInitialRadius;
-(float)vibrationRecorderRippleFinalRadius;
-(float)vibrationRecorderRippleFingerStillSpeed;
-(float)vibrationRecorderRippleFingerMovingSpeed;
-(id)_cachedImageWithName:(id)arg1 forPropertyWithSelector:(SEL)arg2 ;
-(id)_cachedImageForPropertyWithSelector:(SEL)arg1 size:(CGSize)arg2 opaque:(BOOL)arg3 withDrawingBlock:(/*^block*/ id)arg4 ;
@end
