/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:03 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVHrefItem;

@interface CoreDAVItemWithHrefChildItem : CoreDAVItem {

	CoreDAVHrefItem* _href;

}

@property (retain) CoreDAVHrefItem * href;              //@synthesize href=_href - In the implementation block
+(id)copyParseRules;
-(void)dealloc;
-(id)description;
-(id)href;
-(void)setHref:(id)arg1 ;
-(void)write:(id)arg1 ;
@end
