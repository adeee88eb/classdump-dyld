/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class UIImage, UIView, NSTimer, DOMNode, UIWebSelectionHandle, NSString, NSMutableArray, UIWebPDFView;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct __CFString* CFStringRef;

typedef struct __GSEvent* GSEventRef;

typedef struct CGImage* CGImageRef;

typedef struct __GSKeyboard* GSKeyboardRef;

typedef struct __IOHIDEvent* IOHIDEventRef;

typedef struct __CFMessagePort* CFMessagePortRef;

typedef struct _NSZone* NSZoneRef;

typedef struct CGPath* CGPathRef;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct UIEdgeInsets {
	float top;
	float left;
	float bottom;
	float right;
} UIEdgeInsets;

typedef struct {
	CGRect left;
	CGRect middle;
	CGRect right;
} SCD_Struct_UI12;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
	float field5;
	float field6;
	float field7;
	float field8;
	float field9;
} SCD_Struct_UI14;

typedef struct CGColor* CGColorRef;

typedef struct {
	SCD_Struct_UI12 top;
	SCD_Struct_UI12 middle;
	SCD_Struct_UI12 bottom;
} SCD_Struct_UI16;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct CGContext* CGContextRef;

typedef struct CADoublePoint {
	double x;
	double y;
} CADoublePoint;

typedef struct NSRange {
	unsigned location;
	unsigned length;
} NSRange;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
	float field5;
} SCD_Struct_UI21;

typedef struct CGShading* CGShadingRef;

typedef struct {
	int field1;
	int field2;
	int field3;
	int field4;
	BOOL field5;
	BOOL field6;
} SCD_Struct_UI23;

typedef struct CGAffineTransform {
	float a;
	float b;
	float c;
	float d;
	float tx;
	float ty;
} CGAffineTransform;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 1;
	unsigned field6 : 1;
	unsigned field7 : 1;
	unsigned field8 : 1;
	unsigned field9 : 1;
	unsigned field10 : 1;
	unsigned field11 : 1;
	unsigned field12 : 1;
	unsigned field13 : 1;
	unsigned field14 : 1;
	unsigned field15 : 1;
	unsigned field16 : 1;
	unsigned field17 : 1;
	unsigned field18 : 1;
	unsigned field19 : 1;
	unsigned field20 : 1;
	unsigned field21 : 1;
	unsigned field22 : 1;
	unsigned field23 : 1;
	unsigned field24 : 1;
	unsigned field25 : 1;
	unsigned field26 : 1;
	unsigned field27 : 1;
} SCD_Struct_UI25;

typedef struct {
	BOOL field1;
	BOOL field2;
	BOOL field3;
	BOOL field4;
	float field5;
	int field6;
} SCD_Struct_UI26;

typedef struct {
	unsigned val[8];
} SCD_Struct_UI27;

typedef struct {
	id field1;
	id field2;
	id field3;
	id field4;
	id field5;
	CGSize field6;
} SCD_Struct_UI28;

typedef struct {
	id field1;
	float field2;
	float field3;
	SCD_Struct_UI28 field4;
	SCD_Struct_UI28 field5;
	SCD_Struct_UI28 field6;
	SCD_Struct_UI28 field7;
	BOOL field8;
} SCD_Struct_UI29;

typedef struct {
	unsigned idiom : 6;
	unsigned landscape : 1;
	unsigned split : 1;
	unsigned appearance : 8;
	unsigned rendering : 16;
} SCD_Struct_UI30;

typedef struct __CFRunLoopObserver* CFRunLoopObserverRef;

typedef union {
	UIImage* image;
	UIView* view;
} SCD_Union_UI32;

typedef struct {
	float field1;
	float field2;
	float field3;
} SCD_Struct_UI33;

typedef struct {
	CGPoint origin;
	CGPoint offset;
	int position;
	CGPoint desiredPoint;
	CGRect desiredBounds;
} SCD_Struct_UI34;

typedef struct __CFCharacterSet* CFCharacterSetRef;

typedef struct {
	unsigned long field1;
	id field2;
	unsigned long field3;
	unsigned long field4[5];
} SCD_Struct_UI36;

typedef struct {
	NSTimer* timer;
	CGPoint location;
	BOOL isBlocked;
	BOOL isCancelled;
	BOOL isOnWebThread;
	BOOL isDisplayingHighlight;
	BOOL attemptedClick;
	CGPoint lastPanTranslation;
	DOMNode* element;
	id delegate;
	id interactionSheet;
	 UIWebRotatingSheet;
	id elementActions;
	 NSArray;
	BOOL allowsImageSheet;
	BOOL allowsDataDetectorsSheet;
	BOOL allowsLinkSheet;
	BOOL acceptsFirstResponder;
	float documentScale;
} SCD_Struct_UI37;

typedef struct UIWebViewportConfiguration {
	CGSize size;
	float initialScale;
	float minimumScale;
	float maximumScale;
	bool allowsUserScaling;
} UIWebViewportConfiguration;

typedef struct UIOffset {
	float horizontal;
	float vertical;
} UIOffset;

typedef struct __CFArray* CFArrayRef;

typedef struct {
	float x;
	float y;
	float z;
} SCD_Struct_UI41;

typedef union GLKVector3 {
	SCD_Struct_UI41 field1;
	SCD_Struct_UI41 field2;
	SCD_Struct_UI41 field3;
	float v[3];
} GLKVector3;

typedef struct {
	GLKVector3 v;
	float s;
} SCD_Struct_UI43;

typedef union GLKQuaternion {
	SCD_Struct_UI43 field1;
	UIEdgeInsets field2;
	float q[4];
} GLKQuaternion;

typedef struct {
	double w;
	double x;
	double y;
	double z;
} SCD_Struct_UI45;

typedef struct {
	SCD_Struct_UI45 quaternion;
	SCD_Struct_UI41 userAcceleration;
	SCD_Struct_UI41 rotationRate;
	SCD_Struct_UI41 magneticField;
	int magneticFieldCalibrationLevel;
	bool doingYawCorrection;
	bool doingBiasEstimation;
	bool isInitialized;
} SCD_Struct_UI46;

typedef struct {
	SCD_Struct_UI41 field1;
	SCD_Struct_UI41 field2;
	SCD_Struct_UI41 field3;
	SCD_Struct_UI45 field4;
	int field5;
	bool field6;
	bool field7;
	bool field8;
} SCD_Struct_UI47;

typedef struct {
	id field1;
	id field2;
} SCD_Struct_UI48;

typedef struct __CFBundle* CFBundleRef;

typedef struct {
	id field1;
	unsigned field2;
} SCD_Struct_UI50;

typedef struct __CFStringTokenizer* CFStringTokenizerRef;

typedef struct {
	CGPoint point;
	double time;
} SCD_Struct_UI52;

typedef struct {
	UIWebSelectionHandle* scrollingHandle;
	double startTime;
	int direction;
	NSTimer* timer;
} SCD_Struct_UI53;

typedef struct {
	UIWebSelectionHandle* activeHandle;
	CGPoint handleCenterStart;
	float handleOffset;
} SCD_Struct_UI54;

typedef struct {
	BOOL flipPossible;
	BOOL rectsChanged;
	CGRect originalSelectionRect;
} SCD_Struct_UI55;

typedef struct {
	UIWebSelectionHandle* start;
	UIWebSelectionHandle* end;
	CGSize startingOffset;
	BOOL anchorAtStart;
	SCD_Struct_UI55 flipData;
} SCD_Struct_UI56;

typedef union {
	float floatValue;
	double doubleValue;
	unsigned long long integerValue;
	void bytesValue;
} SCD_Union_UI57;

typedef struct UINibArchiveTableInfo {
	unsigned count;
	unsigned offset;
} UINibArchiveTableInfo;

typedef struct UINibDecoderHeader {
	unsigned char type[10];
	unsigned formatVersion;
	unsigned coderVersion;
	UINibArchiveTableInfo objects;
	UINibArchiveTableInfo keys;
	UINibArchiveTableInfo values;
	UINibArchiveTableInfo classes;
} UINibDecoderHeader;

typedef struct UINibDecoderRecursiveState {
	int objectID;
	int nextGenericKey;
	unsigned nextValueSearchIndex;
	BOOL replaced;
} UINibDecoderRecursiveState;

typedef struct UIKeyToKeyIDCache {
	NSString* previousKey[64];
	void* previousKeyID[64];
	BOOL previousKeyExists[64];
	int hashHits;
	int hashHotMisses;
	int hashColdMisses;
} UIKeyToKeyIDCache;

typedef struct UIKeyAndScopeToValueCache {
	unsigned previousScope;
	unsigned previousKey;
	UINibDecoderValue previousValue;
} UIKeyAndScopeToValueCache;

typedef struct __CFBoolean* CFBooleanRef;

typedef struct {
	float amount;
	int unit;
} SCD_Struct_UI64;

typedef struct {
	SCD_Struct_UI64 field1[4];
} SCD_Struct_UI65;

typedef struct __DCSDictionary* DCSDictionaryRef;

typedef struct {
	BOOL itemIsEnabled[25];
	BOOL timeString[64];
	int gsmSignalStrengthRaw;
	int gsmSignalStrengthBars;
	BOOL serviceString[100];
	BOOL serviceCrossfadeString[100];
	BOOL serviceImages[2][100];
	BOOL operatorDirectory[1024];
	unsigned serviceContentType;
	int wifiSignalStrengthRaw;
	int wifiSignalStrengthBars;
	unsigned dataNetworkType;
	int batteryCapacity;
	unsigned batteryState;
	BOOL batteryDetailString[150];
	int bluetoothBatteryCapacity;
	int thermalColor;
	unsigned thermalSunlightMode : 1;
	unsigned slowActivity : 1;
	unsigned syncActivity : 1;
	BOOL activityDisplayId[256];
	unsigned bluetoothConnected : 1;
	unsigned displayRawGSMSignal : 1;
	unsigned displayRawWifiSignal : 1;
	unsigned locationIconType : 1;
	unsigned quietModeInactive : 1;
	unsigned tetheringConnectionCount;
} SCD_Struct_UI67;

typedef struct {
	BOOL overrideItemIsEnabled[25];
	unsigned overrideTimeString : 1;
	unsigned overrideGsmSignalStrengthRaw : 1;
	unsigned overrideGsmSignalStrengthBars : 1;
	unsigned overrideServiceString : 1;
	unsigned overrideServiceImages : 2;
	unsigned overrideOperatorDirectory : 1;
	unsigned overrideServiceContentType : 1;
	unsigned overrideWifiSignalStrengthRaw : 1;
	unsigned overrideWifiSignalStrengthBars : 1;
	unsigned overrideDataNetworkType : 1;
	unsigned disallowsCellularDataNetworkTypes : 1;
	unsigned overrideBatteryCapacity : 1;
	unsigned overrideBatteryState : 1;
	unsigned overrideBatteryDetailString : 1;
	unsigned overrideBluetoothBatteryCapacity : 1;
	unsigned overrideThermalColor : 1;
	unsigned overrideSlowActivity : 1;
	unsigned overrideActivityDisplayId : 1;
	unsigned overrideBluetoothConnected : 1;
	unsigned overrideDisplayRawGSMSignal : 1;
	unsigned overrideDisplayRawWifiSignal : 1;
	SCD_Struct_UI67 values;
} SCD_Struct_UI68;

typedef struct __CFMachPort* CFMachPortRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct {
	BOOL animateContentRotation;
	BOOL preserveHeight;
	BOOL avoidFadingBottomOfContent;
	BOOL skipSnapshotOfEndState;
	float contentStretchRightEdgeInset;
	int edgeClip;
} SCD_Struct_UI71;

typedef struct __CFSet* CFSetRef;

typedef struct UIPeripheralAnimationGeometry {
	CGPoint outPosition;
	CGPoint inPosition;
	CGRect bounds;
	CGAffineTransform transform;
	float targetFrameHeightDelta;
} UIPeripheralAnimationGeometry;

typedef struct {
	NSMutableArray* all;
	NSMutableArray* html;
	NSMutableArray* javascript;
	NSMutableArray* css;
	NSMutableArray* error;
	NSMutableArray* warning;
	NSMutableArray* tip;
	NSMutableArray* log;
} SCD_Struct_UI74;

typedef struct {
	UIWebPDFView* view;
	NSTimer* timer;
} SCD_Struct_UI75;

typedef struct UIKBTheme* UIKBThemeRef;

typedef struct CGGradient* CGGradientRef;

typedef struct CGPDFDocument* CGPDFDocumentRef;

typedef struct PDFHistoryItem {
	BOOL restorePending;
	BOOL isInitialScale;
	float zoomScale;
	CGPoint contentOffset;
} PDFHistoryItem;

typedef union {
	SCD_Struct_UI30 styling;
	int intValue;
} SCD_Union_UI80;

typedef struct __CTFont* CTFontRef;

typedef struct CGPDFFont* CGPDFFontRef;

typedef struct {
	id field1;
	id field2;
	id field3;
} SCD_Struct_UI83;

typedef struct CATransform3D {
	float m11;
	float m12;
	float m13;
	float m14;
	float m21;
	float m22;
	float m23;
	float m24;
	float m31;
	float m32;
	float m33;
	float m34;
	float m41;
	float m42;
	float m43;
	float m44;
} CATransform3D;

typedef struct opaque_pthread_mutex_t {
	long __sig;
	BOOL __opaque[40];
} opaque_pthread_mutex_t;

typedef struct {
	id field1;
	int field2;
	int field3;
} SCD_Struct_UI86;

typedef struct {
	UIEdgeInsets m_axisX;
	UIEdgeInsets m_axisY;
	UIEdgeInsets m_axisZ;
	UIEdgeInsets m_trans;
} SCD_Struct_UI87;

typedef struct __CFUserNotification* CFUserNotificationRef;

typedef struct CGVector {
	float dx;
	float dy;
} CGVector;

