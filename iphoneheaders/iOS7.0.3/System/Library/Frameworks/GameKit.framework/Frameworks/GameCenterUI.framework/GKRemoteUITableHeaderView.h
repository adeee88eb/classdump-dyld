/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKit/UIView.h>
#import <RemoteUI/RUIPageAccessory.h>

@protocol GKRemoteUIAuxiliaryViewDelegate;
@class , GKLabel, GKButton, NSDictionary, NSArray;

@interface GKRemoteUITableHeaderView : UIView <RUIPageAccessory> {

	<GKRemoteUIAuxiliaryViewDelegate>* _delegate;
	float _height;
	GKLabel* _label;
	GKLabel* _subLabel;
	GKButton* _button;
	NSDictionary* _attributes;
	NSArray* _replaceableConstraints;
	int _layoutStyle;

}

@property (assign,nonatomic) <GKRemoteUIAuxiliaryViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float height;                                              //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) GKLabel * label;                                           //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) GKLabel * subLabel;                                        //@synthesize subLabel=_subLabel - In the implementation block
@property (nonatomic,retain) GKButton * button;                                         //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) NSDictionary * attributes;                                 //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSArray * replaceableConstraints;                          //@synthesize replaceableConstraints=_replaceableConstraints - In the implementation block
@property (assign,nonatomic) int layoutStyle;                                           //@synthesize layoutStyle=_layoutStyle - In the implementation block
-(int)layoutStyle;
-(void)objectModelDidChange:(id)arg1 ;
-(void)setLayoutStyle:(int)arg1 ;
-(id)replaceableConstraints;
-(void)setReplaceableConstraints:(id)arg1 ;
-(void)createLabelWithAttributes:(id)arg1 ;
-(void)createSubLabelWithAttributes:(id)arg1 ;
-(void)createButtonWithAttributes:(id)arg1 ;
-(void)applyConstraints;
-(float)labelBaselineOffset;
-(id)subLabel;
-(float)labelBaselineToSubLabelTopOffset;
-(float)labelBaselineToButtonBaselineOffset;
-(float)labelTopOffset;
-(void)setSubLabel:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)delegate;
-(void)buttonTapped:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(float)height;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(id)attributes;
-(void)setHeight:(float)arg1 ;
-(void)setAttributes:(id)arg1 ;
-(float)leftMargin;
-(float)rightMargin;
-(float)bottomMargin;
-(void)setButton:(id)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
-(id)button;
@end
