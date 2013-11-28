/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>
#import <MobileSafari/BackgroundDrawing.h>

@class AddressView, ReaderButton, UIImageView, NSMutableDictionary, UIButton;

@interface ProgressView : UIView <BackgroundDrawing> {

	AddressView* _delegate;
	float _progress;
	BOOL _isShowingProgress;
	BOOL _drawActiveBackground;
	BOOL _usesPrivateBrowsingStyle;
	BOOL _readerButtonPressed;
	ReaderButton* _readerButton;
	UIImageView* _backgroundImageView;
	UIImageView* _progressImageView;
	NSMutableDictionary* _imagesWithReaderText;
	int _readerButtonState;

}

@property (nonatomic,readonly) UIButton * readerButton;              //@synthesize readerButton=_readerButton - In the implementation block
@property (assign,nonatomic) int readerButtonState;                  //@synthesize readerButtonState=_readerButtonState - In the implementation block
@property (nonatomic,readonly) float readerButtonWidth; 
-(float)readerButtonWidth;
-(id)readerButton;
-(void)setReaderButtonState:(int)arg1 ;
-(void)setUsesPrivateBrowsingStyle:(BOOL)arg1 ;
-(void)drawBackgroundInContext:(CGContextRef)arg1 ;
-(void)_setReaderButtonPressed:(BOOL)arg1 ;
-(void)_updateShowsProgress;
-(id)_imageNameForReaderButtonState:(int)arg1 withPressedHighlight:(BOOL)arg2 progressFill:(BOOL)arg3 ;
-(id)_textAttributesForReaderButtonState:(int)arg1 ;
-(id)_imageForReaderButtonState:(int)arg1 withPressedHighlight:(BOOL)arg2 progressFill:(BOOL)arg3 ;
-(id)_progressImage;
-(void)_updateImageViewGeometry:(id)arg1 forProgress:(float)arg2 flip:(BOOL)arg3 ;
-(int)readerButtonState;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setProgress:(float)arg1 ;
-(id)_backgroundImage;
-(float)progress;
@end

