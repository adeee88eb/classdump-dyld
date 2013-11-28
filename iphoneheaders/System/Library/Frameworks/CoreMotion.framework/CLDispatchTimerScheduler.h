/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMotion/CLTimerScheduler.h>

@protocol OS_dispatch_source;
@class CLTimer, NSObject;

@interface CLDispatchTimerScheduler : NSObject <CLTimerScheduler> {

	CLTimer* timer;
	NSObject<OS_dispatch_source>* _source;

}

@property (nonatomic,retain) NSObject<OS_dispatch_source> * source;              //@synthesize source=_source - In the implementation block
@property (assign,nonatomic,__weak) CLTimer * timer; 
-(void)reflectNextFireTime:(double)arg1 fireInterval:(double)arg2 ;
-(id)initWithDispatchSilo:(id)arg1 ;
-(void)dealloc;
-(id)source;
-(void)setSource:(id)arg1 ;
-(void)setTimer:(id)arg1 ;
-(id)timer;
-(void).cxx_destruct;
@end

