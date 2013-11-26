/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:35 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreData/NSManagedObject.h>

@class NSDictionary, NSURL, PFUbiquityLocation, NSData, NSString, NSSet;

@interface PFUbiquityStoreMetadata : NSManagedObject

@property (nonatomic,retain) NSDictionary * storeOptions; 
@property (nonatomic,readonly) NSURL * ubiquityRootURL; 
@property (readonly) PFUbiquityLocation * ubiquityRootLocation; 
@property (nonatomic,@dynamic,retain) NSData * storeOptionsBinaryPlistData; 
@property (nonatomic,@dynamic,retain) NSString * modelVersionHashString; 
@property (nonatomic,@dynamic,retain) NSString * storeURLString; 
@property (nonatomic,@dynamic,retain) NSString * ubiquityName; 
@property (nonatomic,@dynamic,retain) NSString * storeType; 
@property (nonatomic,@dynamic,retain) NSString * ubiquityRootURLString; 
@property (nonatomic,@dynamic,retain) NSString * storeIdentifier; 
@property (nonatomic,@dynamic,retain) NSString * ubiquityRelativePath; 
@property (nonatomic,@dynamic,retain) NSSet * transactionEntries; 
@property (nonatomic,@dynamic,retain) NSSet * peerStates; 
@property (nonatomic,@dynamic,retain) NSSet * primaryKeyRanges; 
+(id)metadataForStoreWithName:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)storeMetadatasWithName:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)baselineRootDirectoryForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2 ;
+(id)allStoreMetadataInManagedObjectContext:(id)arg1 ;
+(id)baselineStoreURLForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2 ;
+(id)baselineModelURLForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2 ;
+(id)baselineGCModelURLForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2 ;
+(id)baselineMetaFileURLForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2 ;
+(BOOL)isBaselineRootURL:(id)arg1 ;
-(id)ubiquityRootURL;
-(id)ubiquityRootLocation;
-(void)setStoreOptions:(id)arg1 ;
-(id)peerStateForPeerID:(id)arg1 ;
-(id)initWithUbiquityName:(id)arg1 andUbiquityRootLocation:(id)arg2 insertIntoManagedObjectContext:(id)arg3 ;
-(void)updateWithStore:(id)arg1 andRootLocation:(id)arg2 ;
-(void)loadFromBaselineMetadata:(id)arg1 withLocalPeerID:(id)arg2 ;
-(void)updatePeerStatesToMatchKnowledgeVector:(id)arg1 ;
-(id)storeOptions;
@end
