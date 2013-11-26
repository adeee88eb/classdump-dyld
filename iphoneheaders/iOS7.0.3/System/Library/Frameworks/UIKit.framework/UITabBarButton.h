/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:02 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>

@class UIView, UITabBarButtonLabel, _UIBadgeView, UITabBarSelectionIndicatorView, UIImage, NSValue, UIColor;

@interface UITabBarButton : UIControl {

	CGRect _hitRect;
	UIView* _info;
	UITabBarButtonLabel* _label;
	_UIBadgeView* _badge;
	UITabBarSelectionIndicatorView* _selectedIndicator;
	BOOL _selected;
	BOOL _barHeight;
	BOOL _badgeAnimated;
	UIEdgeInsets _infoInsets;
	UIOffset _selectedInfoOffset;
	UIOffset _infoOffset;
	UIImage* _customSelectedIndicatorImage;
	NSValue* _labelOffsetValue;
	BOOL _selectedImageColoringIsStale;
	BOOL _centerAllContents;
	float _templateImageWidth;
	Class _appearanceGuideClass;
	UIColor* _unselectedTintColor;

}

@property (assign,setter=_setAppearanceGuideClass:,nonatomic) Class _appearanceGuideClass;                                           //@synthesize appearanceGuideClass=_appearanceGuideClass - In the implementation block
@property (nonatomic,retain) NSValue * labelOffsetValue;                                                                             //@synthesize labelOffsetValue=_labelOffsetValue - In the implementation block
@property (nonatomic,readonly) UITabBarButtonLabel * tabBarButtonLabel;                                                              //@synthesize label=_label - In the implementation block
@property (assign,setter=_setCenterAllContents:,nonatomic) BOOL _centerAllContents;                                                  //@synthesize centerAllContents=_centerAllContents - In the implementation block
@property (assign,setter=_setSelectedImageColoringIsStale:,nonatomic) BOOL _selectedImageColoringIsStale;                            //@synthesize selectedImageColoringIsStale=_selectedImageColoringIsStale - In the implementation block
@property (setter=_setUnselectedTintColor:,getter=_unselectedTintColor,nonatomic,retain) UIColor * unselectedTintColor;              //@synthesize unselectedTintColor=_unselectedTintColor - In the implementation block
@property (assign,setter=_setSelected:,getter=_isSelected,nonatomic) BOOL _selected; 
@property (assign,setter=_setTemplateImageWidth:,nonatomic) float _templateImageWidth;                                               //@synthesize templateImageWidth=_templateImageWidth - In the implementation block
+(id)_defaultLabelFont;
+(id)_defaultLabelColor;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(Class)_appearanceGuideClass;
-(void)tintColorDidChange;
-(BOOL)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)_scriptingInfo;
-(void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned)arg2 ;
-(void)_setTitleTextAttributes:(id)arg1 forState:(unsigned)arg2 ;
-(void)_setAppearanceGuideClass:(Class)arg1 ;
-(BOOL)_isSelected;
-(void)_positionBadge;
-(void)_badgeAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)_setBadgeValue:(id)arg1 ;
-(void)_setBadgeAnimated:(BOOL)arg1 ;
-(void)_setBarHeight:(float)arg1 ;
-(BOOL)_useBarHeight;
-(void)_setUnselectedTintColor:(id)arg1 ;
-(void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)arg1 ;
-(void)_setTitlePositionAdjustment:(UIOffset)arg1 ;
-(void)_applyTabBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2 ;
-(id)_unselectedTintColor;
-(void)_setSelected:(BOOL)arg1 ;
-(void)_updateToMatchCurrentState;
-(void)_setUnselectedTintColor:(id)arg1 forceLabelToConform:(BOOL)arg2 ;
-(CGRect)_frameForSelectedIndicator;
-(void)_updateInfoFrame;
-(void)_showSelectedIndicator:(BOOL)arg1 changeSelection:(BOOL)arg2 ;
-(id)tabBarButtonLabel;
-(id)_selectedIndicatorView;
-(id)initWithImage:(id)arg1 selectedImage:(id)arg2 label:(id)arg3 withInsets:(UIEdgeInsets)arg4 ;
-(void)_setTabBarHitRect:(CGRect)arg1 ;
-(CGRect)_tabBarHitRect;
-(id)_swappableImageView;
-(void)_setSelectedInfoOffset:(UIOffset)arg1 ;
-(void)_setInfoOffset:(UIOffset)arg1 ;
-(void)_setCustomSelectedIndicatorImage:(id)arg1 ;
-(void)_setLabelHidden:(BOOL)arg1 ;
-(UIOffset)_titlePositionAdjustment;
-(id)labelOffsetValue;
-(void)setLabelOffsetValue:(id)arg1 ;
-(float)_templateImageWidth;
-(void)_setTemplateImageWidth:(float)arg1 ;
-(BOOL)_selectedImageColoringIsStale;
-(void)_setSelectedImageColoringIsStale:(BOOL)arg1 ;
-(BOOL)_centerAllContents;
-(void)_setCenterAllContents:(BOOL)arg1 ;
@end
