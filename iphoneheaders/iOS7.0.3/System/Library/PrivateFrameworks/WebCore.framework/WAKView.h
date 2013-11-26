/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/WAKResponder.h>

@class NSMutableSet;

@interface WAKView : WAKResponder {

	WKViewContext* viewContext;
	WKView* viewRef;
	NSMutableSet* subviewReferences;
	BOOL _isHidden;
	BOOL _drawsOwnDescendants;

}
+(id)_wrapperForViewRef:(WKView*)arg1 ;
+(id)focusView;
+(void)_setInterpolationQuality:(int)arg1 ;
-(oneway void)release;
-(oneway void)_webcore_releaseWithWebThreadLock;
-(id)_frame;
-(id)_webView;
-(id)_web_parentWebFrameView;
-(id)_web_superviewOfClass:(Class)arg1 ;
-(BOOL)_web_firstResponderIsSelfOrDescendantView;
-(CGRect)_web_convertRect:(CGRect)arg1 toView:(id)arg2 ;
-(void)_web_addDescendantWebHTMLViewsToArray:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAutoresizingMask:(unsigned)arg1 ;
-(void)dealloc;
-(CGRect)bounds;
-(void)drawRect:(CGRect)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromView:(id)arg2 ;
-(id)window;
-(void)setHidden:(BOOL)arg1 ;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)addSubview:(id)arg1 ;
-(void)removeFromSuperview;
-(CGRect)frame;
-(id)description;
-(id)subviews;
-(id)nextResponder;
-(float)scale;
-(id)superview;
-(void)handleEvent:(id)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 toView:(id)arg2 ;
-(BOOL)isHiddenOrHasHiddenAncestor;
-(void)layoutIfNeeded;
-(CGRect)convertRect:(CGRect)arg1 fromView:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toView:(id)arg2 ;
-(unsigned)autoresizingMask;
-(void)setFrameOrigin:(CGPoint)arg1 ;
-(CGSize)convertSize:(CGSize)arg1 toView:(id)arg2 ;
-(void)willRemoveSubview:(id)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(BOOL)needsDisplay;
-(void)displayIfNeeded;
-(void)setScale:(float)arg1 ;
-(CGRect)visibleRect;
-(void)layout;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)viewDidMoveToWindow;
-(void)invalidateGState;
-(void)setNeedsLayout:(BOOL)arg1 ;
-(void)setNeedsDisplay:(BOOL)arg1 ;
-(void)viewWillDraw;
-(void)displayRect:(CGRect)arg1 ;
-(WKView*)_viewRef;
-(id)hitTest:(CGPoint)arg1 ;
-(id)lastScrollableAncestor;
-(void)displayRectIgnoringOpacity:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(id).cxx_construct;
-(void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2 ;
-(void)display;
-(BOOL)accessibilityIsIgnored;
-(BOOL)needsPanelToBecomeKey;
-(void)setBoundsSize:(CGSize)arg1 ;
-(void)scrollPoint:(CGPoint)arg1 ;
-(id)_initWithViewRef:(WKView*)arg1 ;
-(void)setBoundsOrigin:(CGPoint)arg1 ;
-(BOOL)_selfHandleEvent:(id)arg1 ;
-(id)_subviewReferences;
-(void)_lockFocusViewInContext:(CGContextRef)arg1 ;
-(void)_drawRect:(CGRect)arg1 context:(CGContextRef)arg2 lockFocus:(bool)arg3 ;
-(void)_unlockFocusViewInContext:(CGContextRef)arg1 ;
-(BOOL)isDescendantOf:(id)arg1 ;
-(BOOL)_handleResponderCall:(int)arg1 ;
-(void)frameSizeChanged;
-(void)displayRectIgnoringOpacity:(CGRect)arg1 ;
-(void)lockFocus;
-(void)unlockFocus;
-(BOOL)mouse:(CGPoint)arg1 inRect:(CGRect)arg2 ;
-(void)setNextKeyView:(id)arg1 ;
-(id)previousValidKeyView;
-(id)nextKeyView;
-(id)nextValidKeyView;
-(id)previousKeyView;
-(void)releaseGState;
-(BOOL)inLiveResize;
-(BOOL)scrollRectToVisible:(CGRect)arg1 ;
-(void)_setDrawsOwnDescendants:(BOOL)arg1 ;
@end
