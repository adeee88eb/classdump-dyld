/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:35 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAnswerStructuredAnswer.h>

@class NSString, NSArray, NSURL;

@interface SAAnswerDictionaryStructuredAnswer : AceObject <SAAnswerStructuredAnswer>

@property (nonatomic,@dynamic,copy) NSString * category; 
@property (nonatomic,copy) NSArray * definitionGroups; 
@property (nonatomic,copy) NSString * phoneticPronunciation; 
@property (nonatomic,copy) NSURL * sound; 
@property (nonatomic,copy) NSArray * syllables; 
@property (nonatomic,copy) NSString * word; 
+(id)dictionaryStructuredAnswer;
+(id)dictionaryStructuredAnswerWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setCategory:(id)arg1 ;
-(id)category;
-(id)sound;
-(void)setSound:(id)arg1 ;
-(id)encodedClassName;
-(id)definitionGroups;
-(void)setDefinitionGroups:(id)arg1 ;
-(id)phoneticPronunciation;
-(void)setPhoneticPronunciation:(id)arg1 ;
-(id)syllables;
-(void)setSyllables:(id)arg1 ;
-(id)word;
-(void)setWord:(id)arg1 ;
@end
