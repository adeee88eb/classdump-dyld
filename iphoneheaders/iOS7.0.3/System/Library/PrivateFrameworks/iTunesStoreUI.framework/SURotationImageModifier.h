/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:53 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUImageModifier.h>

@interface SURotationImageModifier : SUImageModifier {

	float _degrees;
	int _orientation;

}

@property (assign,nonatomic) float degrees;                //@synthesize degrees=_degrees - In the implementation block
@property (assign,nonatomic) int orientation;              //@synthesize orientation=_orientation - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(int)orientation;
-(void)setOrientation:(int)arg1 ;
-(void)drawBeforeImageForContext:(CGContextRef)arg1 imageFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
-(CGRect)imageFrameForImage:(id)arg1 currentFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
-(float)degrees;
-(void)setDegrees:(float)arg1 ;
@end
