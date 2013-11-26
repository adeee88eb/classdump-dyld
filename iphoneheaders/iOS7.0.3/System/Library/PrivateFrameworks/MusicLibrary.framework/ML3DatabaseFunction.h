/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:15 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface ML3DatabaseFunction : NSObject {

	NSString* _name;
	int _argumentCount;

}

@property (nonatomic,copy) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) int argumentCount;              //@synthesize argumentCount=_argumentCount - In the implementation block
-(void)setName:(id)arg1 ;
-(id)name;
-(id)initWithName:(id)arg1 argumentCount:(int)arg2 ;
-(BOOL)registerWithConnection:(id)arg1 ;
-(int)argumentCount;
-(void)setArgumentCount:(int)arg1 ;
-(void).cxx_destruct;
@end
