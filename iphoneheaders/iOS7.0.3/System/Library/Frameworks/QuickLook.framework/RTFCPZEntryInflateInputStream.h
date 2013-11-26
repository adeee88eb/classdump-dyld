/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:40 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/RTFCPZEntryInputStream.h>

@protocol RTFCPZArchiveInputStream;
@class ;

@interface RTFCPZEntryInflateInputStream : NSObject <RTFCPZEntryInputStream> {

	z_stream_s* mStream;
	long long mOffset;
	long long mEnd;
	unsigned long mCalculatedCrc;
	unsigned long mCheckCrc;
	<RTFCPZArchiveInputStream>* mInput;
	char* mOutBuffer;
	unsigned long mOutBufferSize;

}
-(id)initWithOffset:(long long)arg1 end:(long long)arg2 uncompressedSize:(unsigned long long)arg3 crc:(unsigned long)arg4 input:(id)arg5 ;
-(void)dealloc;
-(id).cxx_construct;
-(void)readToOwnBuffer:(const char**)arg1 size:(unsigned*)arg2 ;
-(unsigned long)readToBuffer:(char*)arg1 size:(unsigned long)arg2 ;
@end
