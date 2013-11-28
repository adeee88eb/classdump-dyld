/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:04:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol MapsSynced <NSObject>
@property (nonatomic,copy) NSString * syncIdentifier; 
@property (nonatomic,readonly) NSData * syncData; 
@property (assign,nonatomic) double position; 
@optional
-(void)setPosition:(double)arg1;
-(double)position;

@required
-(BOOL)updateFromSyncData:(id)arg1;
-(id)syncIdentifier;
-(void)setSyncIdentifier:(id)arg1;
-(id)syncData;
@end

