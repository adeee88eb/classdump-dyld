/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UIProgressIndicator;

@interface PHSpinnerAndCheckmarkCell : PSTableCell {

	UIProgressIndicator* _spinner;
	unsigned _loading : 1;
	unsigned _rightAlignSpinner : 1;
	int _row;

}
-(void)setLoading:(BOOL)arg1 ;
-(void)dealloc;
-(void)setChecked:(BOOL)arg1 ;
-(void)setReallyChecked:(BOOL)arg1 ;
-(void)_removeSpinner;
-(void)_addSpinner;
-(void)setRow:(int)arg1 ;
@end

