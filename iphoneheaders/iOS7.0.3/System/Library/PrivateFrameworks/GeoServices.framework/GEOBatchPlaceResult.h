/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:38 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class GEOPlaceResult;

@interface GEOBatchPlaceResult : PBCodable <NSCopying> {

	GEOPlaceResult* _placeResult;
	int _statusCode;
	SCD_Struct_GE52 _has;

}

@property (assign,nonatomic) BOOL hasStatusCode; 
@property (assign,nonatomic) int statusCode;                            //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceResult; 
@property (nonatomic,retain) GEOPlaceResult * placeResult;              //@synthesize placeResult=_placeResult - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)dictionaryRepresentation;
-(int)statusCode;
-(BOOL)hasStatusCode;
-(void)setStatusCode:(int)arg1 ;
-(void)setHasStatusCode:(BOOL)arg1 ;
-(void)setPlaceResult:(id)arg1 ;
-(BOOL)hasPlaceResult;
-(BOOL)readFrom:(id)arg1 ;
-(id)placeResult;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
