/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol GKStateMachineDelegate;
@class NSString, NSDictionary;

@interface GKStateMachine : NSObject {

	int _lock;
	BOOL _shouldLogStateTransitions;
	NSString* _currentState;
	NSDictionary* _validTransitions;
	<GKStateMachineDelegate>* _delegate;

}

@property (retain) NSString * currentState;                               //@synthesize currentState=_currentState - In the implementation block
@property (retain) NSDictionary * validTransitions;                       //@synthesize validTransitions=_validTransitions - In the implementation block
@property (assign) <GKStateMachineDelegate> * delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldLogStateTransitions;              //@synthesize shouldLogStateTransitions=_shouldLogStateTransitions - In the implementation block
-(BOOL)shouldLogStateTransitions;
-(BOOL)_validateTransitionFromState:(id)arg1 toState:(id)arg2 ;
-(void)_performTransitionFromState:(id)arg1 toState:(id)arg2 ;
-(id)validTransitions;
-(void)setShouldLogStateTransitions:(BOOL)arg1 ;
-(void)setValidTransitions:(id)arg1 ;
-(void)illegalTransitionFromState:(id)arg1 toState:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)currentState;
-(void)setCurrentState:(id)arg1 ;
@end

