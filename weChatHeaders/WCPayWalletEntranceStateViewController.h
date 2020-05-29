//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "WCPayQueryWalletEntranceBalanceSwitchStateCgiDelegate.h"
#import "WCPaySetWalletEntranceBalanceSwitchStateCgiDelegate.h"

@class NSString, QueryWalletEntranceBalanceSwitchResp, UILabel, UISwitch, UIView, WCPayLineSeparatorView, WCPayQueryWalletEntranceBalanceSwitchStateCgi, WCPaySetWalletEntranceBalanceSwitchStateCgi, WCPayWebImageView;

@interface WCPayWalletEntranceStateViewController : WCPayBaseViewController <WCPaySetWalletEntranceBalanceSwitchStateCgiDelegate, WCPayQueryWalletEntranceBalanceSwitchStateCgiDelegate>
{
    id <WCPayWalletEntranceStateViewControllerDelegate> _m_delegate;
    WCPayQueryWalletEntranceBalanceSwitchStateCgi *_m_getStateCgi;
    WCPaySetWalletEntranceBalanceSwitchStateCgi *_m_setStateCgi;
    QueryWalletEntranceBalanceSwitchResp *_m_getStateResponse;
    UIView *_m_headerView;
    WCPayWebImageView *_m_icon;
    UILabel *_m_titleLabel;
    WCPayLineSeparatorView *_m_panelView;
    UISwitch *_m_itemSwtich;
}

@property(retain) UISwitch *m_itemSwtich; // @synthesize m_itemSwtich=_m_itemSwtich;
@property(retain) WCPayLineSeparatorView *m_panelView; // @synthesize m_panelView=_m_panelView;
@property(retain) UILabel *m_titleLabel; // @synthesize m_titleLabel=_m_titleLabel;
@property(retain) WCPayWebImageView *m_icon; // @synthesize m_icon=_m_icon;
@property(retain) UIView *m_headerView; // @synthesize m_headerView=_m_headerView;
@property(retain) QueryWalletEntranceBalanceSwitchResp *m_getStateResponse; // @synthesize m_getStateResponse=_m_getStateResponse;
@property(retain) WCPaySetWalletEntranceBalanceSwitchStateCgi *m_setStateCgi; // @synthesize m_setStateCgi=_m_setStateCgi;
@property(retain) WCPayQueryWalletEntranceBalanceSwitchStateCgi *m_getStateCgi; // @synthesize m_getStateCgi=_m_getStateCgi;
@property __weak id <WCPayWalletEntranceStateViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)onWCPayQueryWalletEntranceBalanceSwitchStateCgiResp:(id)arg1 fromServer:(_Bool)arg2;
- (void)onWCPayQueryWalletEntranceBalanceSwitchStateCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPaySetWalletEntranceBalanceSwitchStateCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPaySetWalletEntranceBalanceSwitchStateCgiResp:(id)arg1;
- (void)onClickSwitch;
- (void)updatePanelView;
- (void)updateTitleLabel;
- (void)updateIcon;
- (void)updateView;
- (void)updateData;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

