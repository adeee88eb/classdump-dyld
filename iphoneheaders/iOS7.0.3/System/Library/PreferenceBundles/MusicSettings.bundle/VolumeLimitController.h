/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/MusicSettings.bundle/MusicSettings
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/PSListController.h>

@class NSNumber, UIView;

@interface VolumeLimitController : PSListController {

	NSNumber* _limit;
	UIView* _disabledView;

}
+(BOOL)volumeLimitLockedByPIN;
+(BOOL)volumeLimitLockedByRestrictions;
+(BOOL)volumeLimitLockedByEU;
+(BOOL)volumeLimitLocked;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setVolumeLimitLock:(id)arg1 ;
-(void)disableVolumeLimitLock;
-(void)applyVolumeLimit;
-(void)updateLockedState;
-(id)volumeLimit:(id)arg1 ;
-(void)setVolumeLimit:(id)arg1 specifier:(id)arg2 ;
-(id)volumeLimitEU:(id)arg1 ;
-(void)setVolumeLimitEU:(id)arg1 specifier:(id)arg2 ;
-(void)toggleLock:(id)arg1 ;
-(id)specifiers;
-(void).cxx_destruct;
@end
