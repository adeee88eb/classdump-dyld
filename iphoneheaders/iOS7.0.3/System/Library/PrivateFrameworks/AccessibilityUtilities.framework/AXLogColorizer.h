/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:37 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@interface AXLogColorizer : NSObject {

	BOOL _active;
	BOOL _managedBySettings;
	BOOL _preferDarkColors;
	AXLogColorTheme _colorTheme;

}

@property (assign,nonatomic) AXLogColorTheme colorTheme;                                     //@synthesize colorTheme=_colorTheme - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                    //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) BOOL preferDarkColors;                                          //@synthesize preferDarkColors=_preferDarkColors - In the implementation block
@property (assign,getter=isManagedBySettings,nonatomic) BOOL managedBySettings;              //@synthesize managedBySettings=_managedBySettings - In the implementation block
+(id)defaultColorizer;
+(char*)ansiColorSeqForAXLogColor:(int)arg1 ;
+(id)coloredString:(id)arg1 withColor:(int)arg2 ;
+(AXLogColorTheme)defaultLightColorsTheme;
+(AXLogColorTheme)defaultDarkColorsTheme;
+(id)colorizeStringIfEnabled:(id)arg1 withColor:(int)arg2 ;
-(id)init;
-(id)description;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(id)errorString:(id)arg1 ;
-(id)warningString:(id)arg1 ;
-(id)debugString:(id)arg1 ;
-(id)infoString:(id)arg1 ;
-(id)_initAndManageWithSettings:(BOOL)arg1 ;
-(void)setManagedBySettings:(BOOL)arg1 ;
-(void)_updateSettingsFromUserPrefs;
-(void)setColorTheme:(AXLogColorTheme)arg1 ;
-(void)setPreferDarkColors:(BOOL)arg1 ;
-(BOOL)isManagedBySettings;
-(BOOL)preferDarkColors;
-(AXLogColorTheme)colorTheme;
-(id)whiteOrBlackString:(id)arg1 ;
-(id)greyString:(id)arg1 ;
-(id)redString:(id)arg1 ;
-(id)greenString:(id)arg1 ;
-(id)yellowString:(id)arg1 ;
-(id)blueString:(id)arg1 ;
-(id)magentaString:(id)arg1 ;
-(id)cyanString:(id)arg1 ;
@end
