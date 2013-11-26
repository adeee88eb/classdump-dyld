/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:17 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKit/UILabel.h>

@class NSURL;

@interface PrefsUILinkLabel : UILabel {

	NSURL* _url;
	BOOL _touchingURL;
	id _target;
	SEL _action;
	NSURL* _URL;

}

@property (nonatomic,retain) NSURL * URL;              //@synthesize URL=_URL - In the implementation block
@property (assign,nonatomic) id target;                //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;               //@synthesize action=_action - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)openURL:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(SEL)action;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)target;
-(void)setAction:(SEL)arg1 ;
-(id)URL;
-(void)setURL:(id)arg1 ;
-(id)color:(id)arg1 byMultiplyingSubComponentsBy:(float)arg2 ;
-(void)tappedLink:(id)arg1 ;
@end
