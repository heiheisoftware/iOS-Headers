/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class NSAttributedString, NSString, UIImage, UIImageView, UILabel;

@interface _MusicPodcastTrackTableViewCell : UITableViewCell
{
    UIImageView *_artworkImageView;
    UILabel *_detailLabel;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
    UIImageView *_unplayedIndicatorImageView;
    long long _unplayedIndicatorStyle;
}

@property(nonatomic) long long unplayedIndicatorStyle; // @synthesize unplayedIndicatorStyle=_unplayedIndicatorStyle;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSAttributedString *detailAttributedString;
@property(retain, nonatomic) UIImage *artworkImage;
- (void)layoutSubviews;

@end

