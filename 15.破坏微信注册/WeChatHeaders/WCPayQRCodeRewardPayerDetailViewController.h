//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@class MMTableView;
@protocol WCPayQRCodeRewardPayerDetailViewControllerDelegate;

@interface WCPayQRCodeRewardPayerDetailViewController : WCPayBaseViewController
{
    id <WCPayQRCodeRewardPayerDetailViewControllerDelegate> _delegate;
    MMTableView *_tableView;
}

@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WCPayQRCodeRewardPayerDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)editMoneyBtnClick;
- (void)amountBtnClick:(id)arg1;
- (void)leftBarButtonClick;
- (void)setupTableFooterView;
- (void)setupTableHeaderView;
- (void)setupContentView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)dealloc;

@end

