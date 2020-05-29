//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@class UIButton, UIImageView, UILabel, UIView;

@interface WCPayLQTDepositEntryViewController : WCPayBaseViewController
{
    id <WCPayLQTDepositEntryViewControllerDelegate> m_delegate;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIView *_contentView;
    UIButton *_confirmButton;
}

@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (id)navigationBarBackgroundColor;
- (void)onNewDepositPlanBtnClick:(id)arg1;
- (void)updateContentView;
- (void)bannerBtnClick;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setDelegate:(id)arg1;
- (void)initNavigationBar;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)onBack;

@end

