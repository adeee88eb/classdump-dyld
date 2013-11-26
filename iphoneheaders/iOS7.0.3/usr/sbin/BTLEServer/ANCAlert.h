/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/sbin/BTLEServer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <BTLEServer/BTLEServer-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface ANCAlert : NSObject <NSCopying> {

	unsigned char _categoryID;

}

@property (nonatomic,readonly) unsigned char categoryID;              //@synthesize categoryID=_categoryID - In the implementation block
-(id)appIdentifier;
-(unsigned char)categoryID;
-(BOOL)isEqualToAlert:(id)arg1 ;
-(id)initWithCategoryID:(unsigned char)arg1 ;
-(BOOL)isImportant;
-(BOOL)isEqual:(id)arg1 ;
-(id)date;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)title;
-(id)message;
-(id)subtitle;
@end
