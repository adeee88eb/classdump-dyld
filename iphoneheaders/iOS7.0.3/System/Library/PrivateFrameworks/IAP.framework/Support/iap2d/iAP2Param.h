/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:07:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface iAP2Param : NSObject {

	unsigned short paramID;
	unsigned short paramLen;
	unsigned short paramLenRemain;
	int paramType;
	iAP2ParamDataUint_ paramUint;
	unsigned char paramRawLen;
	int paramParseState;
	id pNSParamData;

}
+(id)createParamWithID:(unsigned short)arg1 ;
+(id)createParamWithIDAndDataRaw:(unsigned short)arg1 :(char*)arg2 :(unsigned short)arg3 ;
+(id)createParamWithIDAndDataBool:(unsigned short)arg1 :(bool)arg2 ;
+(id)createParamWithIDAndDataU8:(unsigned short)arg1 :(unsigned char)arg2 ;
+(id)createParamWithIDAndDataU16:(unsigned short)arg1 :(unsigned short)arg2 ;
+(id)createParamWithIDAndDataU32:(unsigned short)arg1 :(unsigned)arg2 ;
+(id)createParamWithIDAndDataU64:(unsigned short)arg1 :(unsigned long long)arg2 ;
+(id)createParamWithIDAndNSData:(unsigned short)arg1 :(id)arg2 ;
+(id)createParamWithIDAndNSString:(unsigned short)arg1 :(id)arg2 ;
-(unsigned short)getRawParamLength;
-(void)getParamDataAsNone:(int*)arg1 ;
-(const char*)getParamDataAsRaw:(unsigned short*)arg1 :(int*)arg2 ;
-(bool)getParamDataAsBool:(int*)arg1 ;
-(unsigned char)getParamDataAsU8:(int*)arg1 ;
-(unsigned short)getParamDataAsU16:(int*)arg1 ;
-(unsigned)getParamDataAsU32:(int*)arg1 ;
-(unsigned long long)getParamDataAsU64:(int*)arg1 ;
-(id)getParamDataAsNSData:(int*)arg1 ;
-(id)getParamDataAsNSString:(int*)arg1 ;
-(int)parseParamBuffer:(const char*)arg1 :(unsigned short)arg2 :(unsigned short)arg3 :(unsigned short*)arg4 ;
-(unsigned short)getGrpParamID;
-(void)setGrpParamID:(unsigned short)arg1 ;
-(unsigned short)getGrpParamLen;
-(id)getParamDataPtr;
-(void)setParamDataPtr:(id)arg1 ;
-(unsigned short)generateRawParamBuffer:(char*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
@end
