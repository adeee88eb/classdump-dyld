/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSAssertionHandler.h>

@interface TSUAssertionHandler : NSAssertionHandler
+(id)currentHandler;
+(id)descriptionForMethod:(SEL)arg1 object:(id)arg2 ;
+(void)installAsNSHandler;
-(void)handleFailureInMethod:(SEL)arg1 object:(id)arg2 file:(id)arg3 lineNumber:(int)arg4 description:(id)arg5 ;
-(void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(int)arg3 description:(id)arg4 ;
-(void)handleFailureWithLocation:(id)arg1 file:(id)arg2 lineNumber:(int)arg3 description:(id)arg4 arguments:(void*)arg5 ;
@end

