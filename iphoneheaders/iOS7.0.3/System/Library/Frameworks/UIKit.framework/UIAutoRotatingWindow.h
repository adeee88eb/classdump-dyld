/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:03 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIWindow.h>

@interface UIAutoRotatingWindow : UIWindow {

	int _interfaceOrientation;
	BOOL _unknownOrientation;

}
+(id)sharedPopoverHostingWindow;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_didRemoveSubview:(id)arg1 ;
-(void)updateForOrientation:(int)arg1 ;
@end
