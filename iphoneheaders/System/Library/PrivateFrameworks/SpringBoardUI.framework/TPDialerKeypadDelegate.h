/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol TPDialerKeypadDelegate <NSObject>
@optional
-(void)phonePad:(id)arg1 appendString:(id)arg2;
-(void)phonePad:(id)arg1 keyDown:(BOOL)arg2;
-(void)phonePad:(id)arg1 keyUp:(BOOL)arg2;
-(void)phonePadWillBeginSounds:(id)arg1;
-(void)phonePadDidEndSounds:(id)arg1;
-(void)phonePad:(id)arg1 replaceLastDigitWithString:(id)arg2;
-(void)phonePadDeleteLastDigit:(id)arg1;
-(void)phonePad:(id)arg1 dialerCharacterButtonWasHeld:(unsigned)arg2;
@end

