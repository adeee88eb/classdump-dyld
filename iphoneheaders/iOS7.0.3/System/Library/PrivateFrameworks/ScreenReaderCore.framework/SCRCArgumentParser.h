/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:36 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ScreenReaderCore/SCRCArgumentSubcommand.h>

@class NSMutableArray, NSString, SCRCArgumentSubcommand;

@interface SCRCArgumentParser : SCRCArgumentSubcommand {

	int _argc;
	char** _argv;
	NSMutableArray* _subcommandArray;
	NSMutableArray* _argumentArray;
	NSString* _appName;
	SCRCArgumentSubcommand* _subcommand;
	BOOL _isLaunchedAtLogin;

}
+(id)processIdentifier;
+(id)versionString;
+(id)commandPath;
-(BOOL)parse;
-(id)appName;
-(void)dealloc;
-(int)run;
-(void)stop;
-(void)setAppName:(id)arg1 ;
-(id)initWithArgc:(int)arg1 argv:(const char**)arg2 ;
-(id)_displayHelp:(id)arg1 ;
-(char**)argv;
-(id)_displayVersion:(id)arg1 ;
-(int)argc;
-(BOOL)isLaunchedAtLogin;
-(void)addSubcommand:(id)arg1 ;
-(id)setRunningAtStartup:(id)arg1 ;
@end
