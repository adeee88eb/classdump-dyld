/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:01 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface VMUMachTaskContainer : NSObject {

	int _pid;
	unsigned _task;

}
+(id)machTaskContainer;
+(id)machTaskContainerWithTask:(unsigned)arg1 ;
+(id)machTaskContainerWithPid:(int)arg1 ;
+(id)machTaskContainerWithPid:(int)arg1 task:(unsigned)arg2 ;
-(void)dealloc;
-(id)description;
-(unsigned)task;
-(int)pid;
-(id)initWithPid:(int)arg1 task:(unsigned)arg2 ;
-(void)finalize;
@end
