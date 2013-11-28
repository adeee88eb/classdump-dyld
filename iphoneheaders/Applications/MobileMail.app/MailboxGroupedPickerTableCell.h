/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIImageView;

@interface MailboxGroupedPickerTableCell : UITableViewCell {

	UILabel* _mailboxText;
	UIImageView* _mailboxIcon;
	unsigned _level;
	unsigned _disabled : 1;
	unsigned _rootMailbox : 1;

}
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(float)fontSize;
-(void)setCurrentMailbox:(BOOL)arg1 ;
-(void)setMailboxType:(int)arg1 ;
-(BOOL)isCellEnabled;
-(int)levelForMailbox:(id)arg1 ;
-(id)_mailboxFontForSize:(float)arg1 ;
-(void)_setupMailboxIconForImage:(id)arg1 ;
-(id)nameForMailbox:(id)arg1 ;
-(float)horizontalContentOffset;
-(void)setMailbox:(id)arg1 ;
-(void)setCellEnabled:(BOOL)arg1 ;
@end

