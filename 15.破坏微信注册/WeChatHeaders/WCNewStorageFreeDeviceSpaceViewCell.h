//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCNewStorageFreeSpaceViewCell.h"

@class UIButton, UILabel, UIView;

@interface WCNewStorageFreeDeviceSpaceViewCell : WCNewStorageFreeSpaceViewCell
{
    UILabel *titleLabel;
    UILabel *usedSpaceLabel;
    UILabel *wordingLabel;
    UIButton *actionButton;
    UIView *seperateLine;
}

- (void)setSeperateLine:(id)arg1;
- (id)seperateLine;
- (void)setActionButton:(id)arg1;
- (id)actionButton;
- (void)setWordingLabel:(id)arg1;
- (id)wordingLabel;
- (void)setUsedSpaceLabel:(id)arg1;
- (id)usedSpaceLabel;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;
- (void).cxx_destruct;
- (void)onClickWeChatUsage:(id)arg1;
- (void)initActionButton;
- (void)initWordingLabel;
- (void)initUsedSpaceLabel;
- (void)initTitleLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

