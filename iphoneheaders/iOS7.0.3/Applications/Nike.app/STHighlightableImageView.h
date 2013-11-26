/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Nike.app/Nike
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIImageView.h>

@class NSString;

@interface STHighlightableImageView : UIImageView {

	NSString* _normalImageName;
	NSString* _highlightedImageName;

}
-(id)imageForHighlightState:(BOOL)arg1 ;
-(id)initWithNormalImageName:(id)arg1 highlightedImageName:(id)arg2 ;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
@end
