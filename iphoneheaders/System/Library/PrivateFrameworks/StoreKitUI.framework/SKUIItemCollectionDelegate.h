/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol SKUIItemCollectionDelegate <NSObject>
@optional
-(void)itemCollectionController:(id)arg1 applyScreenshotImage:(id)arg2 toCellLayout:(id)arg3;
-(id)itemCollectionController:(id)arg1 screenshotForItem:(id)arg2;
-(BOOL)shouldCacheAheadWhenIdleForItemCollectionController:(id)arg1;

@required
-(id)itemCollectionController:(id)arg1 cellLayoutForItemIndex:(int)arg2;
-(NSRange*)itemCollectionController:(id)arg1 itemPageRangeForOffset:(CGPoint)arg2;
-(NSRange*)visibleItemRangeForItemCollectionController:(id)arg1;
@end

