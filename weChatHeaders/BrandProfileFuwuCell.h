//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSArray, NSMutableArray;

@interface BrandProfileFuwuCell : UITableViewCell
{
    NSMutableArray *_buttonList;
    id <BrandProfileFuwuCellDelegate> _delegate;
    NSArray *_fuwuList;
}

+ (double)cellHeight;
@property(retain, nonatomic) NSArray *fuwuList; // @synthesize fuwuList=_fuwuList;
@property(nonatomic) __weak id <BrandProfileFuwuCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onFuwuButtonClicked:(id)arg1;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

