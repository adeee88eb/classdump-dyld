/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobilePhone/MobilePhone-Structs.h>
#import <UIKit/UIViewController.h>
#import <FaceTime/PhoneTabViewController.h>

@interface PhoneViewController : UIViewController <PhoneTabViewController>
+(void)initializeIconAndTitle:(id)arg1 ;
+(id)tabBarIconName;
+(int)tabViewType;
+(void)cacheFinishedTabBarIconImage:(id)arg1 finishedSelectedTabBarIconImage:(id)arg2 withTabBarItemName:(id)arg3 ;
+(BOOL)tabBarIconImageFinished:(id*)arg1 selectedImage:(id*)arg2 forTabBarItemName:(id)arg3 ;
+(id)defaultPNGName;
+(SCD_Struct_Ph0)badge;
-(void)savePreferences;
-(BOOL)shouldSnapshot;
-(void)prepareForSnapshot;
-(void)_saveOffsetDefaultForKey:(id)arg1 withScrollView:(id)arg2 ;
-(void)_loadOffsetDefaultForKey:(id)arg1 withScrollView:(id)arg2 ;
-(void)_prepareForLoadView;
-(id)init;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillUnload;
-(void)handleURL:(id)arg1 ;
@end

