/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Contacts.app/Contacts
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UISplitViewController.h>
#import <UIKit/UISplitViewControllerDelegate.h>
#import <UIKit/ABPeoplePickerNavigationControllerDelegate.h>
#import <Contacts/ContactCardNavigationControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class ABPeoplePickerNavigationController, CNContact, ContactCardNavigationController, UIPopoverController, NSIndexPath, UITableView;

@interface ContactsSplitViewController : UISplitViewController <UISplitViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, ContactCardNavigationControllerDelegate, UINavigationControllerDelegate> {

	ABPeoplePickerNavigationController* _peoplePicker;
	CNContact* _displayedContact;
	ContactCardNavigationController* _contactContainer;
	UIPopoverController* _presentedPopover;
	NSIndexPath* _selectedIndexPath;

}

@property (nonatomic,retain) ABPeoplePickerNavigationController * peoplePicker;               //@synthesize peoplePicker=_peoplePicker - In the implementation block
@property (nonatomic,retain) CNContact * displayedContact;                                    //@synthesize displayedContact=_displayedContact - In the implementation block
@property (nonatomic,retain) ContactCardNavigationController * contactContainer;              //@synthesize contactContainer=_contactContainer - In the implementation block
@property (nonatomic,retain) UIPopoverController * presentedPopover;                          //@synthesize presentedPopover=_presentedPopover - In the implementation block
@property (nonatomic,readonly) UITableView * contactsList; 
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                                 //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
-(id)displayedContact;
-(void)showRecord:(void*)arg1 ;
-(void)showContact:(id)arg1 ;
-(void)contactCard:(id)arg1 didDeleteContact:(id)arg2 ;
-(void)contactCard:(id)arg1 didCreateContact:(id)arg2 ;
-(void)setPresentedPopover:(id)arg1 ;
-(id)presentedPopover;
-(id)contactsList;
-(id)contactContainer;
-(void)_updateSplitSizeForOrientation:(int)arg1 ;
-(void)setDisplayedContact:(id)arg1 ;
-(void)setContactContainer:(id)arg1 ;
-(void)addContact:(id)arg1 ;
-(void)setSelectedIndexPath:(id)arg1 ;
-(id)selectedIndexPath;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(BOOL)splitViewController:(id)arg1 shouldHideViewController:(id)arg2 inOrientation:(int)arg3 ;
-(id)peoplePicker;
-(void)setPeoplePicker:(id)arg1 ;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void).cxx_destruct;
@end
