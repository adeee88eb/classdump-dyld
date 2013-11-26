/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:16 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface PSListItemsController : PSListController {

	int _rowToSelect;
	BOOL _deferItemSelection;
	BOOL _restrictionList;
	PSSpecifier* _lastSelectedSpecifier;

}
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)suspend;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)specifiers;
-(void)prepareSpecifiersMetadata;
-(void)didLock;
-(void)scrollToSelectedCell;
-(void)setValueForSpecifier:(id)arg1 defaultValue:(id)arg2 ;
-(void)setRowToSelect;
-(void)listItemSelected:(id)arg1 ;
-(void)_addStaticText:(id)arg1 ;
-(id)itemsFromParent;
-(id)itemsFromDataSource;
-(BOOL)isRestrictionList;
-(void)setIsRestrictionList:(BOOL)arg1 ;
@end
