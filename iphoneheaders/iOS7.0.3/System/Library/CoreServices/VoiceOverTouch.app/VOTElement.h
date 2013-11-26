/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <vot/vot-Structs.h>
#import <CoreFoundation/NSCopying.h>

@protocol UIElementProtocol;
@class , VOTElementUniqueIdentification, NSString;

@interface VOTElement : NSObject <NSCopying> {

	<UIElementProtocol>* _uiElement;
	BOOL shouldSkipValidateElement;
	VOTElementUniqueIdentification* _uniqueIdentification;

}

@property (assign,nonatomic) BOOL shouldSkipValidateElement; 
@property (nonatomic,@dynamic,copy) NSString * userDefinedLabel; 
@property (nonatomic,@dynamic,copy) NSString * definedLabel; 
@property (assign,nonatomic,@dynamic) BOOL isFirstItemInList; 
@property (assign,nonatomic,@dynamic) BOOL isFirstItemInTable; 
@property (assign,nonatomic,@dynamic) BOOL isFirstItemInLandmark; 
@property (nonatomic,readonly) NSString * toggleStatusLabel; 
@property (nonatomic,readonly) VOTElementUniqueIdentification * uniqueIdentification;              //@synthesize uniqueIdentification=_uniqueIdentification - In the implementation block
+(void)resetSpringBoardElement;
+(id)_elementWithAXUIElementRef:(AXUIElementRef)arg1 cache:(CFDictionaryRef)arg2 identification:(id)arg3 ;
+(id)_elementWithAXUIElementRef:(AXUIElementRef)arg1 ;
+(id)elementWithUIElement:(id)arg1 ;
+(id)systemWideElement;
+(id)springBoardApplication;
-(id)originalLabel;
-(BOOL)isMobilePhone;
-(void)addTextualInformationToRequest:(id)arg1 options:(int)arg2 ;
-(id)_initWithUIElement:(id)arg1 identification:(id)arg2 ;
-(id)uniqueIdentification;
-(BOOL)doesHaveTraits:(unsigned long long)arg1 ;
-(void)setUserDefinedLabel:(id)arg1 ;
-(id)userDefinedLabel;
-(id)definedLabel;
-(id)urlLabel;
-(id)elementsForAttribute:(int)arg1 withParameter:(id)arg2 ;
-(AXUIElementRef)touchContainerAXElement;
-(id)elementsForAttribute:(int)arg1 ;
-(id)elementForParameterizedAttribute:(int)arg1 parameter:(id)arg2 ;
-(BOOL)overridesVoiceOverInstructions;
-(BOOL)canExpandMathEquation;
-(id)opaqueElementInDirection:(int)arg1 startElement:(id)arg2 searchTraits:(unsigned long long)arg3 ;
-(id)elementsInDirection:(int)arg1 withCount:(unsigned)arg2 ;
-(id)elementForHandwriting;
-(id)initWithPosition:(CGPoint)arg1 ;
-(BOOL)isAssistiveTouch;
-(CGPoint)elementFrameLocation:(int)arg1 ;
-(void)performSimpleTapAtPoint:(CGPoint)arg1 withContextId:(unsigned)arg2 withDelay:(float)arg3 ;
-(void)expandMathEquation;
-(BOOL)supportsActivate;
-(void)updateTraits;
-(void)updateCenterPoint;
-(BOOL)verifyElementExists:(CGPoint*)arg1 ;
-(BOOL)doesHaveAllTraits:(unsigned long long)arg1 ;
-(float)activationDelay;
-(void)setFirstResponder:(id)arg1 ;
-(id)cachedCustomRotorActions;
-(void)insertText:(id)arg1 atPosition:(int)arg2 ;
-(id)objectForRange:(NSRange)arg1 withParameterizedAttribute:(int)arg2 ;
-(id)_selectionStringForSegment:(int)arg1 ;
-(id)toggleStatusLabel;
-(id)initApplicationWithPosition:(CGPoint)arg1 ;
-(id)initWithPosition:(CGPoint)arg1 startWithElement:(id)arg2 ;
-(id)copyWithCache;
-(id)axInspectorInfo;
-(id)supportedLanguageIfNecessary;
-(id)invalidStatus;
-(BOOL)isComboBox;
-(BOOL)isInTableCell;
-(BOOL)keyboardKeyAllowsTouchTyping;
-(BOOL)updatesOnActivationAfterDelay;
-(id)opaqueParent;
-(BOOL)isAwayAlertItem;
-(BOOL)isAwayAlertItemNew;
-(CGRect)gesturePracticeRegion;
-(id)equivalenceTag;
-(void)setDefinedLabel:(id)arg1 ;
-(id)elementStoredUserLabel;
-(BOOL)isFirstItemInList;
-(void)setIsFirstItemInList:(BOOL)arg1 ;
-(BOOL)isFirstItemInTable;
-(void)setIsFirstItemInTable:(BOOL)arg1 ;
-(BOOL)isFirstItemInLandmark;
-(void)setIsFirstItemInLandmark:(BOOL)arg1 ;
-(id)focusedApplication;
-(id)linkedElement;
-(void)updateFlowToElements;
-(id)flowToElements;
-(id)nextContainer;
-(id)previousContainer;
-(id)ancestryForTraits:(unsigned long long)arg1 ;
-(id)dataDetectorURL:(CGPoint)arg1 ;
-(void)updateCache;
-(void)updatePaths;
-(void)updateVisiblePoint;
-(void)updateLanguage;
-(void)updateEquivalenceTag;
-(id)nextElement;
-(id)previousElement;
-(BOOL)isEditableTextArea;
-(BOOL)onlyHasTraits:(unsigned long long)arg1 ;
-(BOOL)doesHaveTraitsForHandwriting;
-(void)scrollToElementWithCompletion:(/*^block*/ id)arg1 ;
-(void)incrementAction;
-(void)setGesturePracticeInfo:(id)arg1 ;
-(void)decrementAction;
-(void)zoomInAtLocation:(CGPoint)arg1 ;
-(id)photoDescription;
-(id)mapDetailedInformationAtPoint:(CGPoint)arg1 ;
-(BOOL)lastHitTestNearBorder;
-(float)distanceToEndOfRoad:(CGPoint)arg1 withDirection:(float)arg2 ;
-(id)upcomingRoadAtPoint:(CGPoint)arg1 withDirection:(float)arg2 ;
-(BOOL)roadContainsTrackingPoint:(CGPoint)arg1 ;
-(void)zoomOutAtLocation:(CGPoint)arg1 ;
-(void)performTextOperation:(id)arg1 ;
-(BOOL)performEscape;
-(void)findSearchResult:(BOOL)arg1 withSearchText:(id)arg2 ;
-(void)performTapAtPoint:(CGPoint)arg1 ;
-(BOOL)allowsAutoAlternativeCharacterActivation;
-(void)performSimpleTap;
-(float)absoluteValue;
-(void)scrollUpPage;
-(void)scrollDownPage;
-(void)scrollRightPage;
-(void)scrollLeftPage;
-(BOOL)scrollNextPage;
-(BOOL)scrollPreviousPage;
-(id)scrollStatus;
-(BOOL)showsDualPages;
-(BOOL)readingContentCausesPageTurn;
-(id)firstVisibleElementInList;
-(id)firstResponderElement;
-(BOOL)elementOnSameLine:(id)arg1 ;
-(id)tableViewCellWithRowIndexPath:(NSRange)arg1 ;
-(id)customRotorTitles;
-(BOOL)allowCustomActionHintSpeakOverride;
-(BOOL)retainsCustomRotorActionSetting;
-(id)customRotorActions;
-(BOOL)performCustomAction:(int)arg1 ;
-(id)customRotorItemsForIndex:(int)arg1 ;
-(void)insertTextAtCurrentPosition:(id)arg1 ;
-(id)handwritingAttributes;
-(void)handwritingActivateKeyboardReturnKey;
-(void)setVoiceOverFocused:(BOOL)arg1 ;
-(int)lineStartPosition;
-(int)lineEndPosition;
-(NSRange)lineRangeForPosition:(unsigned)arg1 ;
-(BOOL)shouldSpeakScrollStatusOnEntry;
-(BOOL)includeDuringContentReading;
-(BOOL)isReadingContent;
-(void)updatePageContent;
-(id)stringForLineNumber:(int)arg1 ;
-(CGRect)frameForLineNumber:(int)arg1 ;
-(int)lineNumberForPoint:(CGPoint)arg1 ;
-(void)setCurrentWordContextForBook:(id)arg1 ;
-(id)lineNumberAndColumnForPoint:(CGPoint)arg1 ;
-(NSRange)rangeForLineNumberAndColumn:(id)arg1 ;
-(id)valueForRange:(NSRange)arg1 ;
-(id)attributedValueForRange:(NSRange)arg1 ;
-(void)increaseWebSelection:(int)arg1 ;
-(void)decreaseWebSelection:(int)arg1 ;
-(void)deleteCharacterAtCursor;
-(void)replaceCharacterAtCursorWithCharacter:(id)arg1 ;
-(CGRect)boundsForRange:(NSRange)arg1 ;
-(NSRange)textMarkerSelectionRange;
-(id)textMarkersForPoints:(id)arg1 ;
-(id)textNextMarker:(id)arg1 ;
-(id)textPreviousMarker:(id)arg1 ;
-(id)pageTextMarkerRange;
-(id)textLineEndMarker:(id)arg1 ;
-(NSRange)rangeForTextMarker:(id)arg1 ;
-(BOOL)shouldAnnounceFontInfo;
-(BOOL)isCameraIrisOpen;
-(BOOL)isTourGuideRunning;
-(id)textMarkersForRange:(NSRange)arg1 ;
-(void)setSelectionToTextMarker:(id)arg1 ;
-(id)textLineStartMarker:(id)arg1 ;
-(CGRect)textMarkerFrame:(id)arg1 ;
-(id)elementForTextMarker:(id)arg1 ;
-(id)textMarkerArrayOfText:(id)arg1 ;
-(id)summaryElement;
-(id)headerElements;
-(void)addTitleElementToCache:(id)arg1 ;
-(BOOL)elementActsAsTitleElement:(id)arg1 ;
-(void)updateTitleElements;
-(id)titleElements;
-(BOOL)isInAppSwitcher;
-(BOOL)isSetupBuddy;
-(BOOL)isSafari;
-(BOOL)isMaps;
-(BOOL)isIBooks;
-(id)typingCandidateElements;
-(id)elementAtRow:(int)arg1 andColumn:(int)arg2 ;
-(void)jumpToTableIndex:(id)arg1 ;
-(NSRange)rowRange;
-(NSRange)columnRange;
-(BOOL)startStopToggle;
-(BOOL)isSoftwareKeyboardActive;
-(BOOL)usingHardwareKeyboard;
-(int)applicationOrientation;
-(BOOL)isSystemBatteryLow;
-(id)launchableApps;
-(id)appSwitcherApps;
-(void)launchAppWithDisplayID:(id)arg1 ;
-(BOOL)isQuietModeEnabled;
-(BOOL)isDictationListening;
-(id)currentHardwareKeyboardLayout;
-(id)currentSoftwareLanguage;
-(id)currentSoftwareKeyboardLayout;
-(BOOL)isAssistantListening;
-(BOOL)isSystemWideGestureInProgress;
-(int)currentCallState;
-(void)showBulletinBoard:(BOOL)arg1 ;
-(void)restoreUserPreferencesChangedByHandwriting;
-(id)firstElementInStatusBar;
-(BOOL)avoidAnnouncingDirectTouchArea;
-(id)lastElementInStatusBar;
-(BOOL)isElementFirstElement:(BOOL)arg1 orLastElement:(BOOL)arg2 withTraits:(unsigned long long)arg3 ;
-(BOOL)shouldStartReadAllOnFocus;
-(BOOL)webSearchResultsActive;
-(SCD_Struct_VO10)nonPersistentUniqueId;
-(id)staticTextString;
-(BOOL)shouldSpeakMathEquationTrait;
-(void)setRotationCapabilityEnabled:(BOOL)arg1 ;
-(void)setEventCaptureMode:(int)arg1 ;
-(BOOL)dispatchKeyboardEvent:(id)arg1 ;
-(void)repostEvent:(id)arg1 ;
-(void)sendBrightnessEvent:(id)arg1 ;
-(void)sendTouchCancelledEvent;
-(void)notifyAnnouncementFinished:(id)arg1 ;
-(void)performSimpleTapAtPoint:(CGPoint)arg1 ;
-(void)postFingerTouchAtPoint:(CGPoint)arg1 withContextId:(unsigned)arg2 ;
-(void)postFingerDragAtPoint:(CGPoint)arg1 withContextId:(unsigned)arg2 ;
-(void)postFingerLiftAtPoint:(CGPoint)arg1 withContextId:(unsigned)arg2 ;
-(BOOL)labelElementWithTitle:(id)arg1 ;
-(BOOL)shouldSkipValidateElement;
-(void)setShouldSkipValidateElement:(BOOL)arg1 ;
-(id)arrayOfTraitsAsStrings;
-(id)regionDescription;
-(void)applyHeaderElementsToRequest:(id)arg1 ;
-(id)mathSegmentsWithGranularityLevel:(unsigned)arg1 ;
-(id)mathSummary;
-(void)addTextualInformationToRequest:(id)arg1 options:(int)arg2 lastSeenLineAndColumn:(id)arg3 ;
-(BOOL)canNavigateMathSegments;
-(id)arrayOfTraitsAsStringsWithTraitOrder:(id)arg1 ;
-(id)_processTextForPunctation:(id)arg1 replaceCommas:(BOOL)arg2 ;
-(void)_applyAttributesFromText:(id)arg1 toRequest:(id)arg2 withLanguage:(id)arg3 ;
-(id)mathBrailleDescription;
-(NSRange)_brailleLineRangeForDescription:(id)arg1 position:(unsigned)arg2 ;
-(id)_copyMathTextualInformationWithBrailleLineRange:(NSRange*)arg1 brailleDescriptionRange:(NSRange*)arg2 position:(unsigned)arg3 rotorSelection:(id)arg4 shouldPreferRotorSelection:(BOOL)arg5 ;
-(void)_applyLabelToRequest:(id)arg1 ;
-(id)mathEquationDescription;
-(void)_applyValueToRequest:(id)arg1 options:(int)arg2 lastSeenLineAndColumn:(id)arg3 ;
-(void)_applyTraitsToRequest:(id)arg1 options:(int)arg2 ;
-(void)_applyInvalidStatus:(id)arg1 ;
-(void)addTextualInformationToBrailleLine:(id)arg1 forPosition:(unsigned)arg2 rotorSelection:(id)arg3 shouldPreferRotorSelection:(BOOL)arg4 lineRange:(NSRange*)arg5 descriptionRange:(NSRange*)arg6 ;
-(id)_mathExpression;
-(id)_mathAXStringFromAttributedString:(id)arg1 ;
-(unsigned)_minimumSegmentDepthForExpression:(id)arg1 withMaximumDepth:(unsigned)arg2 ;
-(unsigned)_minimumSegmentDepth;
-(void)sendUserEventOccurred;
-(int)mapFeatureType;
-(id)instructions;
-(void)updateLabel;
-(void)scrollToPoint:(CGPoint)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toContextId:(unsigned)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromContextId:(unsigned)arg2 ;
-(void)dealloc;
-(CGRect)frame;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)bundleIdentifier;
-(BOOL)isValid;
-(CGPathRef)path;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)value;
-(float)minValue;
-(NSRange)selectedTextRange;
-(void)setSelectedTextRange:(NSRange)arg1 ;
-(id)identifier;
-(void)setDeviceOrientation:(int)arg1 ;
-(id)label;
-(unsigned long long)traits;
-(id)url;
-(void)updateFrame;
-(id)language;
-(void)updateValue;
-(id)initWithAXElement:(AXUIElementRef)arg1 ;
-(BOOL)isValidForApplication:(id)arg1 ;
-(id)initWithUIElement:(id)arg1 ;
-(id)uiElement;
-(id)elementForAttribute:(int)arg1 ;
-(unsigned)windowContextId;
-(CGRect)convertRect:(CGRect)arg1 fromContextId:(unsigned)arg2 ;
-(id)touchContainer;
-(CGPoint)visiblePoint;
-(CGPoint)centerPoint;
-(id)firstElementInApplication;
-(id)firstElementInApplicationForFocus;
-(BOOL)isSpringBoard;
-(BOOL)isAccessibleElement;
-(id)hint;
-(CGRect)textCursorFrame;
-(BOOL)isTouchContainer;
-(id)textOperations;
-(BOOL)isVoiceControlRunning;
-(BOOL)isSystemSleeping;
-(void)showControlCenter:(BOOL)arg1 ;
-(int)pid;
-(BOOL)isApplication;
-(BOOL)isSystemLocked;
-(float)maxValue;
-(BOOL)isAccessibilityOpaqueElementProvider;
-(BOOL)isInternalInstall;
-(id)pageContent;
-(id)textMarkerRange;
-(id)textMarkerRangeForSelection;
-(id)stringForTextMarkers:(id)arg1 ;
-(id)textMarkerForPoint:(CGPoint)arg1 ;
-(BOOL)isRequired;
-(id)application;
@end
