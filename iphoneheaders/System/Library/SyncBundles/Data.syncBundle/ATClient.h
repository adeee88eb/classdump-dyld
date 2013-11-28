/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:11:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SyncBundles/Data.syncBundle/Data
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol ATClient <NSObject>
@optional
-(void)registerMessageHandlersWithLink:(id)arg1;
-(id)currentSyncAnchor;
-(BOOL)prepareForSyncWithHostAnchor:(id)arg1 progressCallback:(/*^block*/ id)arg2 error:(id*)arg3;
-(BOOL)prepareForSyncWithHostAnchor:(id)arg1 progressCallback:(/*^block*/ id)arg2 grappaID:(unsigned long)arg3 hostVersion:(id)arg4 error:(id*)arg5;
-(BOOL)reconcileSync:(unsigned)arg1 withNewAnchor:(id)arg2 progressCallback:(/*^block*/ id)arg3 error:(id*)arg4;
-(void)syncEndedWithSuccess:(BOOL)arg1;
-(void)cancelSyncOperations;
-(BOOL)reconcileRestoreWithError:(id*)arg1;
-(void)restoreEndedWithError:(id)arg1;
-(id)outstandingAssetTransfers;
-(id)outstandingAssetTransfersWithDownloadManager:(id)arg1;
-(void)assetTransfer:(id)arg1 succeeded:(BOOL)arg2 withError:(id)arg3;
-(void)assetTransfer:(id)arg1 updatedProgress:(double)arg2;
-(void)metadataUpdate:(id)arg1 forAsset:(id)arg2 withNewAnchor:(id)arg3;
-(void)assetInstallFailed:(id)arg1 withError:(id)arg2;
-(void)assetInstallSucceeded:(id)arg1;
-(void)assetTransferEndedWithSuccess:(BOOL)arg1;
-(void)prioritizeAsset:(id)arg1;
-(void)prepareForBackup;
-(void)backupEnded;
-(void)pathsToBackup:(id*)arg1 pathsNotToBackup:(id*)arg2;
-(id)appleIDsForAssets;
-(BOOL)shouldRestoreFile:(id)arg1 backupManager:(id)arg2;
-(BOOL)shouldBackgroundRestorePath:(id)arg1 backupManager:(id)arg2;
-(BOOL)shouldBackgroundRestoreFile:(id)arg1 backupManager:(id)arg2;
-(void)clearSyncData;
-(id)disabledAssetTypes;
-(id)installedAssetMetrics;
-(id)installedAssets;

@required
-(id)supportedDataclasses;
@end

