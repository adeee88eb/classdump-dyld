/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:07:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/recentsd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSMutableDictionary;

@interface CRPluginManager : NSObject {

	NSString* _path;
	NSMutableDictionary* _addressHandlersByKind;

}
+(id)defaultPluginPath;
-(id)addressHandlerForAddressKind:(id)arg1 ;
-(void)_loadPlugins;
-(void)_loadPluginBundle:(id)arg1 ;
-(void)_addAddressHandler:(id)arg1 ;
-(id)addressHandlers;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
@end
