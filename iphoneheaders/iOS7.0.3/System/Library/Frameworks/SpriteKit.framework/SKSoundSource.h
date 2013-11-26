/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:46 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <SpriteKit/SpriteKit-Structs.h>
@class NSMutableArray;

@interface SKSoundSource : NSObject {

	unsigned _sourceId;
	NSMutableArray* _buffers;

}

@property (assign,nonatomic) BOOL shouldLoop; 
@property (assign,nonatomic) double gain; 
@property (assign,nonatomic) CGPoint position; 
@property (nonatomic,readonly) BOOL isPlaying; 
@property (nonatomic,readonly) int completedBufferCount; 
@property (nonatomic,readonly) int queuedBufferCount; 
+(id)sourceWithBuffer:(id)arg1 ;
+(id)source;
-(void)play;
-(BOOL)isPlaying;
-(double)gain;
-(void)setGain:(double)arg1 ;
-(void)queueBuffer:(id)arg1 ;
-(int)completedBufferCount;
-(int)queuedBufferCount;
-(void)purgeCompletedBuffers;
-(BOOL)shouldLoop;
-(void)setShouldLoop:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(void)stop;
-(void)pause;
-(void).cxx_destruct;
@end
