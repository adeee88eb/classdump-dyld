/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/locationd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface CLServiceVendor : NSObject
+(BOOL)ensureServiceIsRunning:(id)arg1 ;
+(id)getSiloForService:(id)arg1 ;
+(id)proxyForService:(id)arg1 ;
+(void)rereadConfiguration;
+(BOOL)getKeyClass:(Class*)arg1 andSilo:(id*)arg2 forServiceWithName:(id)arg3 ;
+(id)getServiceWithName:(id)arg1 ;
+(void)retireServiceWithName:(id)arg1 ;
+(BOOL)isServiceEnabled:(id)arg1 ;
+(BOOL)isServiceRunning:(id)arg1 ;
+(void)initialize;
@end

