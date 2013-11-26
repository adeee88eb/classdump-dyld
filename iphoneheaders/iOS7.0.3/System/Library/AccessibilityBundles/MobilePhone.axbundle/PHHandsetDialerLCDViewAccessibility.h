/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:02:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/MobilePhone.axbundle/MobilePhone
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobilePhone/MobilePhone-Structs.h>
#import <FaceTime/PHHandsetDialerLCDViewAccessibility_super.h>

@interface PHHandsetDialerLCDViewAccessibility : PHHandsetDialerLCDViewAccessibility_super
+(void)_initializeSafeCategory;
+(id)_accessibilityTargetClassName;
+(id)_installSafeCategoryValidationMethod;
+(id)_initializeSafeCategoryFromValidationManager;
-(id)initWithFrame:(CGRect)arg1 forDialerType:(int)arg2 ;
-(id)newDeleteButton;
-(void)setText:(id)arg1 needsFormat:(BOOL)arg2 ;
-(void)deleteCharacter;
-(void)setNumberAccoutrementsVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_axApplyDeleteButtonInfo:(id)arg1 ;
-(BOOL)hasText;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(BOOL)shouldGroupAccessibilityChildren;
-(float)_accessibilityAllowedGeometryOverlap;
-(void)_accessibilityLoadAccessibilityInformation;
@end
