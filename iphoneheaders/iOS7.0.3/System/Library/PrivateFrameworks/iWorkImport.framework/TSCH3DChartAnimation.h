/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DSceneObjectDelegator.h>
#import <iWorkImport/TSCH3DSceneDelegate.h>
#import <iWorkImport/TSCHUnretainedParent.h>

@class TSCH3DChartRep, TSCH3DChartElementAnimationTimeSlice, TSCH3DScene, TSCH3DAnimationTimings, NSMutableDictionary, NSMutableArray, TSCH3DOrderedDictionary, TSCH3DAnimationValueTiming, TSCH3DAnimationTimeSlice, TSCH3DAnimationTiming;

@interface TSCH3DChartAnimation : NSObject <TSCH3DSceneObjectDelegator, TSCH3DSceneDelegate, TSCHUnretainedParent> {

	TSCH3DChartRep* mRep;
	TSCH3DChartElementAnimationTimeSlice* mTimeSlice;
	TSCH3DScene* mScene;
	ChartAnimationTimeRanges mTimeRanges;
	TSCH3DAnimationTimings* mGlobalTimings;
	TSCH3DAnimationTimings* mBackgroundPlaneTimings;
	TSCH3DAnimationTimings* mElementPlaneTimings;
	TSCH3DAnimationTimings* mElementTimings;
	NSMutableDictionary* mTimingContext;
	NSMutableArray* mSceneAnimationClips;
	TSCH3DScene* mLayoutScene;
	TSCH3DOrderedDictionary* mSeparateLayers;
	TSCH3DAnimationValueTiming* mShaderEffectElementsTiming;
	NSMutableArray* mSceneObjectDelegates;

}

@property (nonatomic,readonly) TSCH3DScene * scene; 
@property (nonatomic,readonly) TSCH3DScene * layoutScene; 
@property (nonatomic,readonly) TSCH3DAnimationTimeSlice * timeSlice; 
@property (nonatomic,readonly) TSCH3DAnimationTiming * elementTimings; 
@property (nonatomic,retain) TSCH3DOrderedDictionary * separateLayers; 
+(void)updateScene:(id)arg1 ;
+(void)updateRenderScene:(id)arg1 ;
+(void)updateLayoutScene:(id)arg1 ;
+(BOOL)dynamicShadowsEnabled;
+(id)animationWithRep:(id)arg1 ;
+(id)animationFilter;
+(int)chartAnimationType;
+(double)animationFPS;
+(id)animationInfoForBuildType:(int)arg1 ;
-(void)clearParent;
-(id)timeSlice;
-(id)initWithRep:(id)arg1 ;
-(void)addAnimationToClips:(id)arg1 forScene:(id)arg2 ;
-(void)addAnimationToClips:(id)arg1 forSceneObject:(id)arg2 scene:(id)arg3 ;
-(id)makeDelegateWithScene:(id)arg1 ;
-(id)makeDelegateWithSceneObject:(id)arg1 scene:(id)arg2 ;
-(void)willRunForScene:(id)arg1 pipeline:(id)arg2 ;
-(void)didRunForScene:(id)arg1 pipeline:(id)arg2 ;
-(id)layoutScene;
-(void)updateTimings;
-(BOOL)needDynamicShadows;
-(void)p_didUpdateAnimationTime;
-(id)globalTimingInterpolation;
-(void)updateTimeRanges;
-(void)p_addPlaneTimings:(id)arg1 ;
-(void)addToBackgroundPlaneTimings:(id)arg1 ;
-(void)addToElementPlaneTimings:(id)arg1 ;
-(void)addToElementTimings:(id)arg1 ;
-(void)addToValueLabelsTimings:(id)arg1 ;
-(void)addToBackgroundBlendTimings:(id)arg1 ;
-(id)shadowsSelectionBlock;
-(id)gridlineLabelsSelectionBlock;
-(BOOL)individualValueLabels;
-(CGRect)adjustBodyCanvasBounds:(CGRect)arg1 againstBodyCanvasDrawableFrame:(CGRect)arg2 ;
-(id)separateLayerSceneObjectsSelectionBlocks;
-(id)separateLayers;
-(void)setSeparateLayers:(id)arg1 ;
-(id)elementTimings;
-(void)updateGrowTimeRanges;
-(void)addToShadowBlendTimings:(id)arg1 ;
-(void)addToGrowElementTimings:(id)arg1 ;
-(void)addToBackgroundBlendAnimClips:(id)arg1 scene:(id)arg2 ;
-(void)addStaticBackgroundBlendClipsToClips:(id)arg1 scene:(id)arg2 ;
-(void)addToShadowBlendAnimClips:(id)arg1 ;
-(void)addAllLabelsAnimationToClips:(id)arg1 sceneObject:(id)arg2 ;
-(void)addToChartElementBlendAnimClips:(id)arg1 sceneObject:(id)arg2 shouldUpdateDelayOpaqueFlag:(BOOL)arg3 shouldUpdateBlendOpaqueFlag:(BOOL)arg4 shouldUpdateAlwaysRenderFlag:(BOOL)arg5 needPerElementBlending:(BOOL)arg6 ;
-(void)addToGrowAnimClips:(id)arg1 sceneObject:(id)arg2 ;
-(void)addToBackgroundBlendAnimClips:(id)arg1 sceneObject:(id)arg2 ;
-(void)addToShadowBlendAnimClips:(id)arg1 sceneObject:(id)arg2 ;
-(id)growGlobalTimingInterpolation;
-(void)updateRadialTimeRanges;
-(void)addToRadialElementBlendTimings:(id)arg1 ;
-(void)addToZAxisElementBlendTimings:(id)arg1 ;
-(void)addToCraneElementBlendTimings:(id)arg1 ;
-(void)addToRotateAnimClips:(id)arg1 scene:(id)arg2 secondaryAngle:(float)arg3 ;
-(void)updateRotatingGrowTimeRanges;
-(void)addToRotatingGrowElementTimings:(id)arg1 ;
-(box<glm::detail::tvec1<float> >)pieDelayedLabelsRange;
-(void)addToRotateTimings:(id)arg1 ;
-(void)addTitleAnimationToClips:(id)arg1 sceneObject:(id)arg2 ;
-(void)addToChartElementBlendTimings:(id)arg1 range:(const box<glm::detail::tvec1<float> >*)arg2 interpolation:(id)arg3 ;
-(void)addToGrowElementBlendTimings:(id)arg1 ;
-(void)addToRotationBasedElementBlendTimings:(id)arg1 ;
-(void)addToChartRotationAnimationElementBlendAnimClips:(id)arg1 sceneObject:(id)arg2 shouldUpdateAlwaysRenderFlag:(BOOL)arg3 ;
-(BOOL)p_isStackedBar;
-(BOOL)p_sequenceInOrder;
-(void)p_updateGrowTimeRangesWithAxesRange:(const box<glm::detail::tvec1<float> >*)arg1 waitTimeAfterAxes:(float)arg2 ;
-(void)p_updateRotatingGrowLabelsRange;
-(BOOL)p_chunkingStyleHasAxes;
-(void)p_updateAxesOnlyRotatingGrowTimeRanges;
-(void)p_updateAllRotatingGrowTimeRanges;
-(BOOL)p_usesRotatingGrowEaseOut;
-(void)p_updateNoAxesRotatingGrowTimeRanges;
-(BOOL)p_growAnimationLinearInterpolation;
-(BOOL)p_isBar;
-(BOOL)p_anySeriesHasLabelsEnabled;
-(box<glm::detail::tvec1<float> >)p_timeRangeForGrowElements;
-(void)addToGrowElementTimings:(id)arg1 range:(const box<glm::detail::tvec1<float> >*)arg2 ;
-(void)addToGrowElementTimings:(id)arg1 reserveForLabels:(BOOL)arg2 ;
-(BOOL)p_growClipRequiresShaderBasedInterpolation;
-(void)addToValueLabelsAnimClips:(id)arg1 sceneObject:(id)arg2 ;
-(void)addToValueLabelsTimings:(id)arg1 range:(const box<glm::detail::tvec1<float> >*)arg2 ;
-(id)scene;
-(void)dealloc;
-(id)description;
-(void)update:(float)arg1 ;
-(id).cxx_construct;
-(BOOL)isPie;
-(void).cxx_destruct;
@end
