/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:53 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewControllerAnimatorTransitioning.h>

@class UIImageView;

@interface SKUISlideshowAnimator : NSObject <UIViewControllerAnimatorTransitioning> {

	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(id)imageView;
-(void)setImageView:(id)arg1 ;
-(void).cxx_destruct;
@end
