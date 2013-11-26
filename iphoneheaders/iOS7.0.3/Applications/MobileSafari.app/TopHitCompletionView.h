/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>

@class NSAttributedString, UIColor;

@interface TopHitCompletionView : UIView {

	NSAttributedString* _attributedText;
	unsigned _highlightStartIndex;
	UIColor* _highlightColor;

}

@property (nonatomic,copy) UIColor * highlightColor;              //@synthesize highlightColor=_highlightColor - In the implementation block
-(void)setAttributedText:(id)arg1 highlightStartIndex:(unsigned)arg2 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setHighlightColor:(id)arg1 ;
-(id)highlightColor;
@end
