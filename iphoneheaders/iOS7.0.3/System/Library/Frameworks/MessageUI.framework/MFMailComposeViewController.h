/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:32 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UINavigationController.h>

@interface MFMailComposeViewController : UINavigationController {

	id _internal;
	/*^block*/ id _setupAnimationBlock;
	BOOL _didChangeStatusBarStyle;
	int _savedStatusBarStyle;

}

@property (assign,nonatomic) <MFMailComposeViewControllerDelegate> * mailComposeDelegate; 
+(BOOL)hasAutosavedMessageWithIdentifier:(id)arg1 ;
+(BOOL)canSendMail;
+(BOOL)canSendMailSourceAccountManagement:(int)arg1 ;
+(void)removeAutosavedMessageWithIdentifier:(id)arg1 ;
+(unsigned)maximumAttachmentSize;
-(void)setCcRecipients:(id)arg1 ;
-(void)setBccRecipients:(id)arg1 ;
-(id)_internalViewController;
-(id)mailComposeDelegate;
-(id)_validEmailAddressesFromArray:(id)arg1 ;
-(void)dealloc;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)__viewControllerWillBePresented:(BOOL)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)setSubject:(id)arg1 ;
-(void)autosaveWithHandler:(/*^block*/ id)arg1 ;
-(void)setKeyboardVisible:(BOOL)arg1 ;
-(void)setMailComposeDelegate:(id)arg1 ;
-(void)recoverAutosavedMessageWithIdentifier:(id)arg1 ;
-(void)setSourceAccountManagement:(int)arg1 ;
-(void)setMessageBody:(id)arg1 isHTML:(BOOL)arg2 ;
-(void)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 ;
-(void)requestFramesForAttachmentsWithIdentifiers:(id)arg1 resultHandler:(/*^block*/ id)arg2 ;
-(void)setContentVisible:(BOOL)arg1 ;
-(void)setAutorotationDelegate:(id)arg1 ;
-(void)addSetupAnimationBlock:(/*^block*/ id)arg1 ;
-(id)_addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 ;
-(void)finalizeCompositionValues;
-(void)setToRecipients:(id)arg1 ;
@end
