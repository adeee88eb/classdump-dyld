/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <FaceTime/CommunicationDisplayViewController.h>
#import <FaceTime/PhoneBaseViewController.h>

@class CNFCallViewController, AudioDeviceController;

@interface VideoConferenceController : CommunicationDisplayViewController <PhoneBaseViewController> {

	CNFCallViewController* _faceTimeCallViewController;
	AudioDeviceController* _audioDeviceController;

}

@property (nonatomic,readonly) CNFCallViewController * faceTimeCallViewController;              //@synthesize faceTimeCallViewController=_faceTimeCallViewController - In the implementation block
+(int)statusBarStyle;
+(id)defaultPNGName;
+(int)viewType;
-(BOOL)shouldSnapshot;
-(void)prepareForSnapshot;
-(void)fadeOutAnimated:(BOOL)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)cleanUpVideoConference;
-(void)cleanUpForIncomingCall;
-(void)prepareToHandleURL:(id)arg1 ;
-(void)animateToCallWaitingAlert;
-(void)transitionToLockScreenAnimated:(BOOL)arg1 ;
-(void)fadeInAnimated:(BOOL)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)animateOutOfCallWaitingAlert;
-(BOOL)isCallWaitingViewVisible;
-(void)transitionFromLockScreenAnimated:(BOOL)arg1 ;
-(void)_applicationReactivated:(id)arg1 ;
-(void)prepareForTransitionInFromViewType:(int)arg1 animated:(BOOL)arg2 ;
-(void)transitionInFromViewType:(int)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)_handleInvitation:(id)arg1 ;
-(void)_ensureFaceTimeCallViewControllerExists;
-(void)slideBarsInAnimated:(BOOL)arg1 ;
-(id)faceTimeCallViewController;
-(id)_lockScreenImageView;
-(void)_updateInterfaceSizeAndOrientation;
-(void)_restoreInCallUIAndAudioRoute;
-(void)restoreInCallUIAndAudioRoute;
-(void)_didFinishLocking;
-(void)dealloc;
-(id)init;
-(void)didReceiveMemoryWarning;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)unloadViewForced:(BOOL)arg1 ;
-(void)viewDidUnload;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)handleURL:(id)arg1 ;
-(BOOL)isShowingLock;
-(BOOL)shouldDisableEdgeClip;
-(BOOL)shouldHideStatusBar;
-(void)updateViewControllerForOrientation:(int)arg1 ;
-(void)resetToFullScreenPreview;
-(BOOL)isShowingFaceTimeUI;
-(void)faceTimeEnded;
-(void)faceTimeEndedWhileSuspending;
-(void)startPreview;
-(void)stopPreview;
-(void)setIsSendingVideo:(BOOL)arg1 ;
@end

