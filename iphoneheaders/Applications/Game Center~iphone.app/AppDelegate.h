/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center~iphone/Game Center~iphone-Structs.h>
#import <UIKit/UIResponder.h>
#import <UIKit/UIApplicationDelegate.h>
#import <GameCenterUI/AAUICredentialRecoveryPresentationDelegate.h>

@protocol AACredentialRecoveryDialogStatusDelegate;
@class UIWindow, AAUICredentialRecoveryController, AARemoteSheetRootViewController, NSXPCConnection;

@interface AppDelegate : UIResponder <UIApplicationDelegate, AAUICredentialRecoveryPresentationDelegate> {

	AAUICredentialRecoveryController* _credentialRecoveryController;
	int _orientation;
	AARemoteSheetRootViewController* _rootViewController;
	NSXPCConnection* _listenerConnection;
	<AACredentialRecoveryDialogStatusDelegate>* _authPluginProxy;
	UIWindow* _window;

}

@property (nonatomic,retain) UIWindow * window;              //@synthesize window=_window - In the implementation block
-(void)hackCanShowAlertImplementationForApplication:(id)arg1 ;
-(void)_connectToListener;
-(void)_disconnectFromListener;
-(void)_remoteSheetDidEnd;
-(void)_endRemoteSheetWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)credentialRecoveryController:(id)arg1 needsPresentationOfViewController:(id)arg2 ;
-(void)credentialRecoveryController:(id)arg1 finishedWithSuccess:(BOOL)arg2 ;
-(void)credentialRecoveryController:(id)arg1 didFailWithError:(id)arg2 ;
-(id)window;
-(void)application:(id)arg1 didFinishLaunchingSuspendedWithOptions:(id)arg2 ;
-(void)setWindow:(id)arg1 ;
-(void).cxx_destruct;
@end

