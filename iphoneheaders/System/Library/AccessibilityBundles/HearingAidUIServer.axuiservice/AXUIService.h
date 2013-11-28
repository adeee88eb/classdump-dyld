/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:01:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/HearingAidUIServer.axuiservice/HearingAidUIServer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol AXUIService <NSObject>
@optional
+(id)requiredEntitlementForProcessingMessageWithIdentifier:(unsigned)arg1;
+(id)possibleRequiredEntitlementsForProcessingMessageWithIdentifier:(unsigned)arg1;
-(void)serviceWasFullyInitialized;
-(BOOL)messageWithIdentifierShouldBeProcessedAsynchronously:(unsigned)arg1;
-(void)processMessageAsynchronously:(id)arg1 withIdentifier:(unsigned)arg2 completion:(/*^block*/ id)arg3;
-(id)accessQueueForProcessingMessageWithIdentifier:(unsigned)arg1;
-(BOOL)messageWithIdentifierRequiresWritingBlock:(unsigned)arg1;
-(void)connectionWithClientWillBeInterrupted;

@required
-(id)processMessage:(id)arg1 withIdentifier:(unsigned)arg2 error:(id*)arg3;
@end

