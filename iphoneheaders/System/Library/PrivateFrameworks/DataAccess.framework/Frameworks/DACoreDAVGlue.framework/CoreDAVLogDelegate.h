/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACoreDAVGlue.framework/DACoreDAVGlue
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol CoreDAVLogDelegate
@required
-(int)coreDAVLogLevel;
-(int)coreDAVOutputLevel;
-(void)coreDAVLogDiagnosticMessage:(id)arg1 atLevel:(int)arg2;
-(BOOL)shouldLogTransmittedData;
-(void)coreDAVLogTransmittedDataPartial:(id)arg1;
-(void)coreDAVTransmittedDataFinished;
@end

