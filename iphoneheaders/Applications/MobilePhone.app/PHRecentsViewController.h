/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobilePhone/MobilePhone-Structs.h>
#import <FaceTime/PhoneViewController.h>
#import <DataDetectorsUI/ABUnknownPersonViewControllerDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, PHRecentsToggleButton, PHRecentCall, NSArray, PHRecentsManager;

@interface PHRecentsViewController : PhoneViewController <ABUnknownPersonViewControllerDelegate, UITableViewDelegate, UITableViewDataSource> {

	UITableView* _table;
	PHRecentsToggleButton* _toggleButton;
	int _tableFilterMode;
	PHRecentCall* _call;
	unsigned _isRegisteredForActiveNotifications : 1;
	NSArray* indexPathsForMissedCalls;
	NSArray* indexPathsForNormalCalls;
	PHRecentsManager* _recentsManager;

}

@property (retain) PHRecentsManager * recentsManager;                 //@synthesize recentsManager=_recentsManager - In the implementation block
@property (assign) int _tableFilterMode;                              //@synthesize tableFilterMode=_tableFilterMode - In the implementation block
@property (readonly) NSArray * indexPathsForMissedCalls; 
@property (readonly) NSArray * indexPathsForNormalCalls; 
+(int)tabBarSystemItem;
+(id)tabBarIconName;
+(int)tabViewType;
+(BOOL)requiresNavigationControllerContainer;
+(SCD_Struct_Ph0)badge;
-(void)_handleContentSizeCategoryDidChange:(id)arg1 ;
-(void)savePreferences;
-(BOOL)shouldSnapshot;
-(void)accessoryButtonTapped:(id)arg1 withEvent:(id)arg2 ;
-(void)_recentsManagerSignificantChangeNotification:(id)arg1 ;
-(void)_recentsManagerCallDeletedNotification:(id)arg1 ;
-(id)indexPathsForNormalCalls;
-(void)_filterWasToggled:(id)arg1 ;
-(void)resetCachedIndexes;
-(void)_reloadTableViewAndNavigationBar;
-(void)_significantTimeChangeNotification:(id)arg1 ;
-(void)_applicationResumedNotification:(id)arg1 ;
-(void)_applicationSuspendedNotification:(id)arg1 ;
-(void)_phoneApplicationDidChangeTabBarSelectionNotification:(id)arg1 ;
-(int)rowCountForCurrentTableMode;
-(void)_clearButtonTapped:(id)arg1 ;
-(id)recentsManager;
-(id)indexPathsForMissedCalls;
-(id)callAtTableViewIndex:(int)arg1 ;
-(void)showCallDetail:(id)arg1 animate:(BOOL)arg2 ;
-(int)_tableFilterMode;
-(void)_markAllCallsRead;
-(void)set_tableFilterMode:(int)arg1 ;
-(void)setRecentsManager:(id)arg1 ;
-(void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)didReceiveMemoryWarning;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)unloadView;
-(id)table;
-(void)_updateNavBarButtons;
@end

