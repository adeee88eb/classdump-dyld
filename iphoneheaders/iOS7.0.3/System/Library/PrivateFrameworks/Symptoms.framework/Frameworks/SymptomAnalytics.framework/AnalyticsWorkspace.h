/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:03 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol ServiceInterface;
@class NSString, NSPersistentStoreCoordinator, NSManagedObjectContext, NSManagedObjectModel, ;

@interface AnalyticsWorkspace : NSObject {

	NSString* backingStore;
	BOOL readOnly;
	BOOL pathKnownToFail;
	BOOL share;
	NSPersistentStoreCoordinator* __persistentStoreCoordinator;
	NSManagedObjectContext* __mainObjectContext;
	NSManagedObjectModel* __objectModel;
	<ServiceInterface>* __service;

}

@property (nonatomic,readonly) NSManagedObjectModel * objectModel;                                     //@synthesize _objectModel=__objectModel - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * mainObjectContext;                             //@synthesize _mainObjectContext=__mainObjectContext - In the implementation block
@property (nonatomic,readonly) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize _persistentStoreCoordinator=__persistentStoreCoordinator - In the implementation block
@property (nonatomic,readonly) <ServiceInterface> * service;                                           //@synthesize _service=__service - In the implementation block
+(id)defaultWorkspace;
+(id)workspaceWithName:(id)arg1 atPath:(id)arg2 useReadOnly:(BOOL)arg3 ;
-(BOOL)save;
-(id)service;
-(id)persistentStoreCoordinator;
-(id)initWorkspaceWithService:(id)arg1 ;
-(id)objectModel;
-(id)_initWithName:(id)arg1 useReadOnly:(BOOL)arg2 ;
-(BOOL)_primePath:(id)arg1 ;
-(id)initWorkspaceWithName:(id)arg1 atPath:(id)arg2 useReadOnly:(BOOL)arg3 ;
-(id)mainObjectContext;
-(void).cxx_destruct;
@end
