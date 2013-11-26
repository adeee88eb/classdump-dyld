/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:18 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MusicUI/MusicQueryDataSource.h>

@class NSString;

@interface MusicSongsDataSource : MusicQueryDataSource {

	unsigned long long _syncAssetTotal;
	int _syncAssetTotalToken;
	BOOL _syncAssetTotalTokenIsValid;
	int _syncCurrentAssetNumberToken;
	BOOL _syncCurrentAssetNumberTokenIsValid;
	unsigned long long _syncCurrentAssetNumber;
	NSString* _syncProgressString;

}
-(void)dealloc;
-(id)initWithQuery:(id)arg1 entityType:(int)arg2 ;
-(id)entityCountFormat;
-(BOOL)showsEntityCountFooter;
-(BOOL)showsIndexBar;
-(void)_updateSyncProgressString;
-(void).cxx_destruct;
@end
