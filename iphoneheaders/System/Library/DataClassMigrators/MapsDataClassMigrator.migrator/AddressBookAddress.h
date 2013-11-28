/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:04:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/PersistentAddressBookAddress.h>
#import <Maps/SyncingHistoryItem.h>
#import <Maps/HistoryItem.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSData, SyncedBookmarkRepr, NSDictionary;

@interface AddressBookAddress : PersistentAddressBookAddress <SyncingHistoryItem, HistoryItem, NSCopying> {

	void* _uncommittedRecord;
	void* _addressBook;
	NSString* _lastValidatedAddress;

}

@property (nonatomic,copy) NSString * syncIdentifier; 
@property (nonatomic,readonly) NSData * syncData; 
@property (assign,nonatomic) double position; 
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) SyncedBookmarkRepr * bookmarkRepresentation; 
@property (nonatomic,readonly) NSString * singleLineAddress; 
@property (nonatomic,readonly) NSString * singleLineAddressWithHomeCountry; 
@property (nonatomic,readonly) NSString * compositeName; 
@property (nonatomic,readonly) NSString * phoneticName; 
@property (nonatomic,readonly) NSDictionary * addressDictionary; 
@property (nonatomic,copy) NSString * lastValidatedAddress;                              //@synthesize lastValidatedAddress=_lastValidatedAddress - In the implementation block
@property (nonatomic,readonly) BOOL hasStreetAddress; 
+(id)meCardHomeAddress;
+(void*)safeAddressBookRef;
+(void)refreshAddressBookIfNeeded:(void*)arg1 ;
+(void)setSafeAddressBookCanBeRefreshed:(BOOL)arg1 ;
+(BOOL)safeAddressBookCanBeRefreshed;
+(void)_resetSharedAddressBookNeedsRefresh;
-(id)initWithRecordID:(int)arg1 addressID:(int)arg2 ;
-(id)initWithBookmarkRepresentation:(id)arg1 ;
-(BOOL)updateFromBookmarkRepresentation:(id)arg1 ;
-(id)bookmarkRepresentation;
-(BOOL)updateFromSyncData:(id)arg1 ;
-(id)initWithRecordID:(int)arg1 addressID:(int)arg2 addressBook:(void*)arg3 ;
-(void)setLastValidatedAddress:(id)arg1 ;
-(void*)_record;
-(id)singleLineAddressWithHomeCountry;
-(id)lastValidatedAddress;
-(void)_checkValid;
-(id)_initWithUncommittedRecord:(void*)arg1 addressID:(int)arg2 addressBook:(void*)arg3 ;
-(BOOL)hasStreetAddress;
-(id)compositeNameMatchesForSearchString:(id)arg1 ;
-(id)singleLineAddress;
-(void)dealloc;
-(id)init;
-(unsigned)hash;
-(BOOL)isValid;
-(int)type;
-(id)initWithData:(id)arg1 ;
-(id)compositeName;
-(id)addressDictionary;
-(id)phoneticName;
-(id)syncData;
@end

