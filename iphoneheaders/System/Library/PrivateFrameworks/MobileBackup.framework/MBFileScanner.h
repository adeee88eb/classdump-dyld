/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class MBEngine, MBDebugContext, NSMutableSet, NSMutableDictionary, NSSet;

@interface MBFileScanner : NSObject {

	id _delegate;
	MBEngine* _engine;
	MBDebugContext* _debugContext;
	NSMutableSet* _modifiedDomains;
	NSMutableDictionary* _lastModifiedDateBySQLiteFileID;
	long _startTime;
	BOOL _cancelled;

}

@property (nonatomic,readonly) NSSet * modifiedDomains; 
@property (nonatomic,readonly) long startTime;                       //@synthesize startTime=_startTime - In the implementation block
+(id)fileScannerWithDelegate:(id)arg1 engine:(id)arg2 debugContext:(id)arg3 ;
-(id)initWithDelegate:(id)arg1 engine:(id)arg2 debugContext:(id)arg3 ;
-(id)scanDomains:(id)arg1 ;
-(id)modifiedDomains;
-(void)_recordStartTime;
-(id)_scanDomain:(id)arg1 ;
-(id)_scanFilesForDomain:(id)arg1 relativePath:(id)arg2 depth:(int)arg3 ;
-(id)_treeForDomain:(id)arg1 ;
-(id)_scanTree:(id)arg1 forDomain:(id)arg2 relativePath:(id)arg3 ;
-(BOOL)_shouldNotBackupFile:(id)arg1 ;
-(id)_foundFile:(id)arg1 ;
-(void)_detectModifiedDomain:(id)arg1 relativePath:(id)arg2 lastModified:(long)arg3 ;
-(void)dealloc;
-(void)cancel;
-(void)reset;
-(long)startTime;
@end

