/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:29 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SADomainObject.h>

@class SAPersonAttribute, NSString, SALocation;

@interface SAFmfGeoFence : SADomainObject

@property (nonatomic,retain) SAPersonAttribute * friend; 
@property (nonatomic,copy) NSString * geoFenceTrigger; 
@property (nonatomic,retain) SALocation * location; 
+(id)geoFence;
+(id)geoFenceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)location;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(id)friend;
-(void)setFriend:(id)arg1 ;
-(id)geoFenceTrigger;
-(void)setGeoFenceTrigger:(id)arg1 ;
-(void)setLocation:(id)arg1 ;
@end
