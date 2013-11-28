/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITabBarController.h>
#import <FaceTime/PhoneBaseViewController.h>

@class PhoneNavigationController, PHFavoritesViewController, PHRecentsViewController, PHAddressBookController, DialerController, PHVoicemailNavigationController, UINavigationController;

@interface PhoneTabBarController : UITabBarController <PhoneBaseViewController> {

	PhoneNavigationController* _favoritesNavigationController;
	PhoneNavigationController* _recentsNavigationController;
	PHFavoritesViewController* _favoritesViewController;
	PHRecentsViewController* _recentsViewController;
	PHAddressBookController* _contactsViewController;
	DialerController* _keypadViewController;
	PHVoicemailNavigationController* _voicemailViewController;

}

@property (nonatomic,retain) UINavigationController * favoritesNavigationController;                 //@synthesize favoritesNavigationController=_favoritesNavigationController - In the implementation block
@property (nonatomic,retain) UINavigationController * recentsNavigationController;                   //@synthesize recentsNavigationController=_recentsNavigationController - In the implementation block
@property (nonatomic,retain) PHFavoritesViewController * favoritesViewController;                    //@synthesize favoritesViewController=_favoritesViewController - In the implementation block
@property (nonatomic,retain) PHRecentsViewController * recentsViewController;                        //@synthesize recentsViewController=_recentsViewController - In the implementation block
@property (nonatomic,retain) PHAddressBookController * contactsViewController;                       //@synthesize contactsViewController=_contactsViewController - In the implementation block
@property (nonatomic,retain) DialerController * keypadViewController;                                //@synthesize keypadViewController=_keypadViewController - In the implementation block
@property (nonatomic,retain) PHVoicemailNavigationController * voicemailViewController;              //@synthesize voicemailViewController=_voicemailViewController - In the implementation block
+(int)statusBarStyle;
+(id)defaultPNGName;
+(int)viewType;
-(BOOL)shouldSnapshot;
-(void)prepareForSnapshot;
-(int)currentTabViewType;
-(id)viewControllerForTabViewType:(int)arg1 ;
-(id)favoritesViewController;
-(id)recentsViewController;
-(id)contactsViewController;
-(id)keypadViewController;
-(id)voicemailViewController;
-(int)defaultTabViewType;
-(void)switchToTab:(int)arg1 ;
-(id)favoritesNavigationController;
-(id)recentsNavigationController;
-(void)transitionCompleted;
-(void)prepareToHandleURL:(id)arg1 ;
-(int)tabTypeForViewController:(id)arg1 ;
-(void)showFavoritesTab:(BOOL)arg1 recentsTab:(BOOL)arg2 contactsTab:(BOOL)arg3 keypadTab:(BOOL)arg4 voicemailTab:(BOOL)arg5 ;
-(void)prepareForTransitionInFromViewType:(int)arg1 animated:(BOOL)arg2 ;
-(void)transitionInFromViewType:(int)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)_badgeChanged:(id)arg1 ;
-(void)_updateAllBadges:(BOOL)arg1 ;
-(void)_startListeningForBadgeChangedNotifications:(id)arg1 ;
-(void)_stopListeningForBadgeChangedNotifications:(id)arg1 ;
-(void)_popCurrentNavigationControllerToRootViewControllerIfAppropriate;
-(void)setFavoritesNavigationController:(id)arg1 ;
-(void)setRecentsNavigationController:(id)arg1 ;
-(void)setFavoritesViewController:(id)arg1 ;
-(void)setRecentsViewController:(id)arg1 ;
-(void)setContactsViewController:(id)arg1 ;
-(void)setKeypadViewController:(id)arg1 ;
-(void)setVoicemailViewController:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)applicationDidResume;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)_reallyWantsFullScreenLayout;
-(void)setSelectedViewController:(id)arg1 ;
-(void)handleURL:(id)arg1 ;
-(BOOL)shouldDisableEdgeClip;
@end

