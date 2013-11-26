/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface NSStoreMappingGenerator : NSObject
+(id)defaultMappingGenerator;
+(void)invalidate;
-(id)externalNameForEntityName:(id)arg1 ;
-(id)mappingsDictForConfigurationWithName:(id)arg1 inModel:(id)arg2 ;
-(id)externalNameForPropertyName:(id)arg1 ;
-(id)mappingForAttribute:(id)arg1 forConfigurationWithName:(id)arg2 ;
-(id)mappingForRelationship:(id)arg1 forConfigurationWithName:(id)arg2 ;
-(id)primaryKeyForEntity:(id)arg1 ;
-(id)joinsForRelationship:(id)arg1 ;
-(id)mappingForEntity:(id)arg1 forConfigurationWithName:(id)arg2 ;
-(id)mappingsForConfigurationWithName:(id)arg1 inModel:(id)arg2 ;
-(id)internalNameForEntityName:(id)arg1 version:(int)arg2 ;
-(id)internalNameForPropertyName:(id)arg1 version:(int)arg2 ;
@end
