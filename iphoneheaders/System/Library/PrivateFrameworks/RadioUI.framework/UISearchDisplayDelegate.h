/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol UISearchDisplayDelegate <NSObject>
@optional
-(void)searchDisplayController:(id)arg1 willUnloadSearchResultsTableView:(id)arg2;
-(void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
-(void)searchDisplayController:(id)arg1 didShowSearchResultsTableView:(id)arg2;
-(void)searchDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2;
-(void)searchDisplayController:(id)arg1 didHideSearchResultsTableView:(id)arg2;
-(void)searchDisplayControllerDidBeginSearch:(id)arg1;
-(void)searchDisplayControllerDidEndSearch:(id)arg1;
-(void)searchDisplayControllerWillBeginSearch:(id)arg1;
-(void)searchDisplayControllerWillEndSearch:(id)arg1;
-(BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
-(BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchScope:(int)arg2;
-(void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2;
@end

