/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:05:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PowerlogPlugins/PLNetworkLogger.bundle/PLNetworkLogger
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <PLNetworkLogger/PLNetworkLogger-Structs.h>
@interface PLPacketDecoder : NSObject
-(id)decodePacket:(CFDataRef)arg1 ;
-(id)tcpParse:(CFDataRef)arg1 offset:(unsigned char)arg2 ;
-(id)udpParse:(CFDataRef)arg1 offset:(unsigned char)arg2 ;
@end

