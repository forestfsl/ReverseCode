//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MMWebImageView, UIScrollView;

@interface WCLabSettingDetailImagesCell : UITableViewCell
{
    UIScrollView *_scrollView;
    MMWebImageView *_webImageView;
    MMWebImageView *_webImageView2;
    MMWebImageView *_webImageView3;
    id <WCLabSettingDetailImagesCellDelegate> _delegate;
}

+ (double)height;
@property(nonatomic) __weak id <WCLabSettingDetailImagesCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)initImages;
- (void)onClickImage:(id)arg1;
- (void)configureWithLabItem:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

