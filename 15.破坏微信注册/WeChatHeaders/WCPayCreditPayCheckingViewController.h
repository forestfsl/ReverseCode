//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@protocol WCPayCreditPayCheckingViewControllerDelegate;

@interface WCPayCreditPayCheckingViewController : WCPayBaseViewController
{
    id <WCPayCreditPayCheckingViewControllerDelegate> m_delegate;
    _Bool m_bAttention;
}

- (void).cxx_destruct;
- (void)onFinish;
- (void)viewDidLoad;
- (void)onAttentionBrander:(id)arg1;
- (void)initHeaderView;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)initNavigationBar;

@end

