//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCRedEnvelopesBaseViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "MMTableViewInfoDelegate-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCPayNoticeBannerDelegate-Protocol.h"

@class MMTextView, NSString, RichTextView, UIButton, UILabel, UIView, WCBaseKeyboardToolBar, WCPayNoticeBanner, WCRedEnvelopesMakeRedEnvelopesViewLayout, WCUITextField;
@protocol WCRedEnvelopesMakeRedEnvelopesViewControllerDelegate;

@interface WCRedEnvelopesMakeRedEnvelopesViewController : WCRedEnvelopesBaseViewController <WCPayNoticeBannerDelegate, UITableViewDelegate, WCActionSheetDelegate, UITextFieldDelegate, UITextViewDelegate, ILinkEventExt, MMTableViewInfoDelegate>
{
    id <WCRedEnvelopesMakeRedEnvelopesViewControllerDelegate> m_delegate;
    int m_enMakeRedEnvelopesScene;
    WCUITextField *m_oSelectCountTextField;
    unsigned int m_uiSelectCount;
    UILabel *moneyLabel;
    UILabel *nsDefaultWishingLabel;
    WCUITextField *m_oMoneyTextField;
    MMTextView *m_textView;
    UIButton *normalRedEnvelopesButton;
    WCBaseKeyboardToolBar *m_keyboardBar;
    _Bool m_bDidBack;
    _Bool m_bCanHandleScrollViewDidChangedEvent;
    _Bool m_bNomalMoney;
    RichTextView *richTextView;
    UIView *m_oErrorView;
    UILabel *m_oErrorLabel;
    _Bool m_bError;
    _Bool m_bWaitFiveMintes;
    UIView *oCountSelectView;
    UIView *oSimpleMoneyView;
    long long m_inputErrorType;
    NSString *m_foreignHongbaoName;
    _Bool _m_leftBarButtonClose;
    WCPayNoticeBanner *_banner;
    WCRedEnvelopesMakeRedEnvelopesViewLayout *_m_layout;
    UILabel *_m_unitLabel;
}

@property(nonatomic) _Bool m_leftBarButtonClose; // @synthesize m_leftBarButtonClose=_m_leftBarButtonClose;
@property(retain, nonatomic) UILabel *m_unitLabel; // @synthesize m_unitLabel=_m_unitLabel;
@property(retain, nonatomic) WCRedEnvelopesMakeRedEnvelopesViewLayout *m_layout; // @synthesize m_layout=_m_layout;
@property(retain, nonatomic) WCPayNoticeBanner *banner; // @synthesize banner=_banner;
@property(nonatomic) int m_enMakeRedEnvelopesScene; // @synthesize m_enMakeRedEnvelopesScene;
- (void).cxx_destruct;
- (long long)totalAmount;
- (long long)perMinValue;
- (long long)perPersonMaxValue;
- (unsigned int)totalNum;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)hidekeyboard;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (void)refreshButtonFiveMintes;
- (void)setButtonWaitFiveMin;
- (void)OnClickTailActivity;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)SetErrorTips;
- (void)SetLeftBarButtonClose;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)resetToCanHandleScrollViewChangedEnvent;
- (void)textFieldDidChanged:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidEndOnExit:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)OnMakeWCRedEnvelopesButtonClick;
- (void)adjustMoneyLabel;
- (void)checkDataError;
- (void)checkNextButtonStatus;
- (void)viewDidLoad;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)hideErrorViewWithAnimation;
- (void)hideErrorView;
- (void)showErrorView:(id)arg1 ErrorType:(long long)arg2;
- (void)initErrorView;
- (void)refreshViewWithData:(id)arg1;
- (void)updateBizAuthTitleWithFlag:(unsigned int)arg1;
- (_Bool)shouldShowForeignHongBaoName;
- (void)reloadContentView;
- (void)initData;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)OnViewHongBaoFaq;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnRightBarButtonClick;
- (void)OnLeftBarButtonDone;
- (id)navigationBarBackgroundColor;
- (void)onViewHBHistory;
- (void)updateNavigationBackgroundWithFlag:(unsigned int)arg1;
- (void)initNavigationBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

