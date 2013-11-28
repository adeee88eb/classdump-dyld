/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSCoding.h>

@class NSMutableArray, NSString;

@interface SCROBrailleKey : NSObject <NSCoding> {

	NSMutableArray* _maskArray;
	NSString* _identifier;
	long _routerIndex;
	int _routerToken;
	long _routerLocation;
	BOOL _hasRouterInfo;
	id _appToken;
	long _displayToken;

}
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)identifier;
-(id)keyMasks;
-(void)setDisplayToken:(long)arg1 ;
-(void)addKeyMask:(unsigned long)arg1 ;
-(void)setRouterIndex:(long)arg1 token:(int)arg2 location:(long)arg3 appToken:(id)arg4 ;
-(long)displayToken;
-(BOOL)getRouterIndex:(int*)arg1 token:(int*)arg2 location:(int*)arg3 appToken:(id*)arg4 ;
@end

