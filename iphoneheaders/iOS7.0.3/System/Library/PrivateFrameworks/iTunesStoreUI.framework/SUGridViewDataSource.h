/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SUGridViewDataSource <NSObject>
@optional
-(void)gridView:(id)arg1 commitEditingStyle:(int)arg2 forCellAtIndexPath:(id)arg3;
-(int)numberOfSectionsInGridView:(id)arg1;
-(id)gridView:(id)arg1 titleForHeaderInSection:(int)arg2;

@required
-(id)gridView:(id)arg1 gridCellForRowAtIndexPath:(id)arg2;
-(int)gridView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(int)gridView:(id)arg1 numberOfColumnsInSection:(int)arg2;
@end
