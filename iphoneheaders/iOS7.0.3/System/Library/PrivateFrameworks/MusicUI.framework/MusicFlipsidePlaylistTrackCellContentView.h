/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:21 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MusicUI/MusicUI-Structs.h>
#import <MusicUI/_MusicSongListTableViewCellContentView.h>

@class UILabel, NSString;

@interface MusicFlipsidePlaylistTrackCellContentView : _MusicSongListTableViewCellContentView {

	UILabel* _durationLabel;
	UILabel* _trackNumberLabel;
	float _maximumDurationWidth;

}

@property (nonatomic,copy) NSString * durationText; 
@property (assign,nonatomic) float maximumDurationWidth;              //@synthesize maximumDurationWidth=_maximumDurationWidth - In the implementation block
@property (nonatomic,copy) NSString * trackNumberText; 
-(void)setArtist:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(float)maximumDurationWidth;
-(void)setDurationText:(id)arg1 ;
-(void)setMaximumDurationWidth:(float)arg1 ;
-(void)setTrackNumberText:(id)arg1 ;
-(void)setDisplayAsDisabled:(BOOL)arg1 ;
-(id)durationText;
-(id)trackNumberText;
-(void)setAlbum:(id)arg1 ;
-(void).cxx_destruct;
@end
