//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, UIImageView, UILabel;

@interface BrandProfileArticleCountCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_articleCountLabel;
    UIImageView *_arrowView;
    NSString *_articleCount;
}

+ (void)adjustTitleLabel:(id)arg1 titleString:(id)arg2 maxWidth:(double)arg3;
+ (double)calLeftHeightForArticleCount:(double)arg1;
+ (double)cellHeight:(double)arg1;
+ (double)calRightHeight;
@property(retain, nonatomic) NSString *articleCount; // @synthesize articleCount=_articleCount;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

