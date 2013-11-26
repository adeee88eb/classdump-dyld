/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:51 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/SKUITableViewSection.h>

@interface SKUIProductPageTableSection : SKUITableViewSection {

	BOOL _expanded;

}

@property (assign,getter=isExpanded,nonatomic) BOOL expanded;              //@synthesize expanded=_expanded - In the implementation block
-(BOOL)isExpanded;
-(void)setExpanded:(BOOL)arg1 ;
-(id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2 ;
-(float)heightForTextLayout:(id)arg1 isExpanded:(BOOL)arg2 ;
-(id)textBoxTableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
@end
