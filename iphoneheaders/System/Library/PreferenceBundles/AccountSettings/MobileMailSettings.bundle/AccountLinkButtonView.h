/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Preferences/PSHeaderFooterView.h>

@class AccountLinkButton, NSURL;

@interface AccountLinkButtonView : UIView <PSHeaderFooterView> {

	AccountLinkButton* _linkButton;
	NSURL* _helpURL;
	float _height;

}
-(id)initWithSpecifier:(id)arg1 ;
-(float)preferredHeightForWidth:(float)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)_goToAccountURL;
@end

