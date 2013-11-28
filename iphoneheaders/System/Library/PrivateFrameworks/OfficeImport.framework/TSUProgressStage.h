/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class TSUProgressContext;

@interface TSUProgressStage : NSObject {

	double m_currentPosition;
	double m_totalSteps;
	double m_stepsInParent;
	double m_startInParent;
	double m_nextSubStageParentSize;
	TSUProgressStage* m_parentStage;
	TSUProgressContext* m_context;

}
-(void)dealloc;
-(id)description;
-(void)setProgress:(double)arg1 ;
-(void)end;
-(id)parentStage;
-(void)advanceProgress:(double)arg1 ;
-(double)currentPosition;
-(id)initRootStageInContext:(id)arg1 ;
-(id)initWithSteps:(double)arg1 takingSteps:(double)arg2 inContext:(id)arg3 ;
-(double)nextSubStageParentSize;
-(void)setNextSubStageParentSize:(double)arg1 ;
-(void)setProgressPercentage:(double)arg1 ;
-(double)overallProgress;
@end

