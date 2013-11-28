/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol MBPlugin
@optional
-(id)startingBackupWithEngine:(id)arg1;
-(id)preparingBackupWithEngine:(id)arg1;
-(id)preparedBackupWithEngine:(id)arg1;
-(id)backingUpSQLiteFileCopyAtPath:(id)arg1 temporaryPath:(id)arg2;
-(id)endingBackupWithEngine:(id)arg1;
-(id)endedBackupWithEngine:(id)arg1 error:(id)arg2;
-(id)startingRestoreWithEngine:(id)arg1;
-(id)preparingRestoreWithEngine:(id)arg1;
-(BOOL)shouldRestoreContentWithEngine:(id)arg1 atPath:(id)arg2;
-(BOOL)shouldRestoreContentWithEngine:(id)arg1 fileInfo:(id)arg2;
-(BOOL)shouldBackgroundRestoreContentWithEngine:(id)arg1 fileInfo:(id)arg2;
-(id)endingRestoreWithEngine:(id)arg1;
-(id)endedRestoreWithEngine:(id)arg1 error:(id)arg2;
@end

