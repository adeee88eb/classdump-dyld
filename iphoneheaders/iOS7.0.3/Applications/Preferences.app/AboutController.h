/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Preferences.app/Preferences
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSListController.h>

@protocol NSObject;
@class NSMutableDictionary, PSSpecifier, NSString, NSTimer, , NSLock;

@interface AboutController : PSListController {

	NSMutableDictionary* _mediaDict;
	NSMutableDictionary* _accessorySpecifiers;
	PSSpecifier* _headsetSpecifier;
	PSSpecifier* _accessoryDividerSpecifier;
	NSString* _loading;
	NSTimer* _reloadTimer;
	BOOL _isGeneratingNotifications;
	BOOL _threadRunning;
	BOOL _cancel;
	BOOL _loaded;
	BOOL _accessory;
	BOOL _firstViewDidAppear;
	int _carrierCellState;
	<NSObject>* _photoVideoNotificationToken;
	NSLock* _lock;
	NSString* _serviceProviderNameForSPN;

}
-(void)_accessoryDidUpdate:(id)arg1 ;
-(void)setDeviceName:(id)arg1 specifier:(id)arg2 ;
-(id)deviceName:(id)arg1 ;
-(id)_getCTMobileEquipmentInfo:(CFStringRef)arg1 ;
-(id)_PRLString:(id)arg1 ;
-(id)_ERIString:(id)arg1 ;
-(id)_NAIString:(id)arg1 ;
-(id)_MINString:(id)arg1 ;
-(id)_carrierVersion:(id)arg1 ;
-(void)updateCarrierSpecifier:(id)arg1 ;
-(void)_loadMediaFinished:(id)arg1 ;
-(void)_addKey:(id)arg1 value:(id)arg2 array:(id)arg3 isCopyable:(BOOL)arg4 ;
-(id)_songs:(id)arg1 ;
-(id)_videos:(id)arg1 ;
-(id)_photos:(id)arg1 ;
-(id)_myNumber;
-(id)_macAddress;
-(id)_bluetoothMACAddress;
-(void)cleanupTimer;
-(void)forceReloadMediaStats:(id)arg1 ;
-(void)_availableWirelessAccessoryDidUpdate:(id)arg1 ;
-(void)mediaLibraryDidChange:(id)arg1 ;
-(void)simStatusChangedToReady;
-(void)enableMLUpdates:(BOOL)arg1 ;
-(id)countForKey:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)valueForSpecifier:(id)arg1 ;
-(void)newCarrierNotification;
-(id)specifiers;
-(void)willUnlock;
-(void)willResignActive;
-(void)willBecomeActive;
@end
