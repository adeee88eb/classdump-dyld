/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSEnumerator.h>

@interface NSSearchPathEnumerator : NSEnumerator {

	long state;
	unsigned directory;
	unsigned domainMask;

}
-(id)initWithDirectory:(unsigned)arg1 domains:(unsigned)arg2 ;
-(id)nextObject;
@end
