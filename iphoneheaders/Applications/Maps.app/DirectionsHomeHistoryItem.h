/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/HistoryItem.h>

@class SearchResult, AddressBookAddress;

@interface DirectionsHomeHistoryItem : NSObject <HistoryItem> {

	SearchResult* _currentLocation;
	AddressBookAddress* _homeAddress;

}

@property (nonatomic,retain) SearchResult * currentLocation;                //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,retain) AddressBookAddress * homeAddress;              //@synthesize homeAddress=_homeAddress - In the implementation block
-(void)setHomeAddress:(id)arg1 ;
-(id)homeAddress;
-(id)currentLocation;
-(void)setCurrentLocation:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(int)type;
@end

