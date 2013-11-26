/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:00 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSDictionary, NSString, NSNumber;

@interface SSLookupItemOffer : NSObject {

	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) NSDictionary * lookupDictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) NSString * buyParameters; 
@property (nonatomic,readonly) NSString * formattedPrice; 
@property (nonatomic,readonly) NSString * offerType; 
@property (nonatomic,readonly) NSNumber * price; 
-(id)price;
-(id)buyParameters;
-(void)dealloc;
-(id)lookupDictionary;
-(id)actionTextForType:(id)arg1 ;
-(id)formattedPrice;
-(id)offerType;
-(id)initWithLookupDictionary:(id)arg1 ;
@end
