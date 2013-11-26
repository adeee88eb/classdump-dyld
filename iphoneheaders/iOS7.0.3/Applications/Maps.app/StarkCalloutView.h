/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@protocol StarkCalloutViewDelegate;
@class UIView, StarkCalloutViewPinInformationLayout, UIButton, UILabel, StarkButton, , NSString;

@interface StarkCalloutView : UIView {

	UIView* _backdropView;
	UIView* _pinInformationView;
	StarkCalloutViewPinInformationLayout* _pinInformationLayout;
	UIButton* _rightResultChangeButton;
	UIButton* _leftResultChangeButton;
	UILabel* _selectedResultIndexLabel;
	StarkButton* _startNavigationButton;
	<StarkCalloutViewDelegate>* _delegate;
	unsigned _countOfResults;
	unsigned _selectedResultIndex;
	int _displayedLightLevel;
	int _interactionModel;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * location; 
@property (assign,nonatomic) unsigned countOfResults;                            //@synthesize countOfResults=_countOfResults - In the implementation block
@property (assign,nonatomic) unsigned selectedResultIndex;                       //@synthesize selectedResultIndex=_selectedResultIndex - In the implementation block
@property (assign,nonatomic) int displayedLightLevel;                            //@synthesize displayedLightLevel=_displayedLightLevel - In the implementation block
@property (assign,nonatomic) int interactionModel;                               //@synthesize interactionModel=_interactionModel - In the implementation block
@property (assign,nonatomic) BOOL pressed; 
@property (assign,nonatomic) <StarkCalloutViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_stringForResultAtIndex:(unsigned)arg1 ofCount:(unsigned)arg2 ;
-(int)displayedLightLevel;
-(void)setDisplayedLightLevel:(int)arg1 ;
-(void)setInteractionModel:(int)arg1 ;
-(int)interactionModel;
-(void)setCountOfResults:(unsigned)arg1 ;
-(void)setSelectedResultIndex:(unsigned)arg1 ;
-(void)_performSelectedIndexChangeForSender:(id)arg1 ;
-(void)_startNavigation;
-(void)_updateStyledAttributes;
-(unsigned)selectedResultIndex;
-(unsigned)countOfResults;
-(BOOL)_canDisplayResultSelector;
-(void)_updateRightLeftButtonsEnabled;
-(id)_buttonForDirection:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)delegate;
-(void)setPressed:(BOOL)arg1 ;
-(id)title;
-(BOOL)pressed;
-(id)location;
-(void)setLocation:(id)arg1 ;
@end
