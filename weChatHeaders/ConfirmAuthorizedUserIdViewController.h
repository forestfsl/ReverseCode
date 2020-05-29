//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ILinkEventExt.h"

@class MMCheckBox, MMWebImageView, NSMutableArray, NSString, RichTextView, UIButton, UILabel, UIScrollView, UIView, UserIdAuthorizePageInfo;

@interface ConfirmAuthorizedUserIdViewController : MMUIViewController <ILinkEventExt>
{
    NSString *_protocolJumpString;
    id <ConfirmAuthorizedUserIdDelegate> _delegate;
    UserIdAuthorizePageInfo *_pageInfo;
    UIScrollView *_scrollView;
    MMWebImageView *_headerView;
    UILabel *_descLabel;
    UIView *_separateLine;
    NSMutableArray *_userIdTitleLabels;
    NSMutableArray *_userIdContentLabels;
    UILabel *_usageLabel;
    MMCheckBox *_protocolJumpCheckBox;
    RichTextView *_protocolJumpRichText;
    UIButton *_confirmButton;
    NSMutableArray *_jumpButtons;
    UIView *_buttonContainerView;
}

@property(retain, nonatomic) UIView *buttonContainerView; // @synthesize buttonContainerView=_buttonContainerView;
@property(retain, nonatomic) NSMutableArray *jumpButtons; // @synthesize jumpButtons=_jumpButtons;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) RichTextView *protocolJumpRichText; // @synthesize protocolJumpRichText=_protocolJumpRichText;
@property(retain, nonatomic) MMCheckBox *protocolJumpCheckBox; // @synthesize protocolJumpCheckBox=_protocolJumpCheckBox;
@property(retain, nonatomic) UILabel *usageLabel; // @synthesize usageLabel=_usageLabel;
@property(retain, nonatomic) NSMutableArray *userIdContentLabels; // @synthesize userIdContentLabels=_userIdContentLabels;
@property(retain, nonatomic) NSMutableArray *userIdTitleLabels; // @synthesize userIdTitleLabels=_userIdTitleLabels;
@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMWebImageView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UserIdAuthorizePageInfo *pageInfo; // @synthesize pageInfo=_pageInfo;
@property(nonatomic) __weak id <ConfirmAuthorizedUserIdDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)checkBoxStateDidChanged:(_Bool)arg1;
- (void)onProtocolJumpCheckBox:(id)arg1;
- (void)onProtocolJumpButton:(id)arg1;
- (void)onJumpButton:(id)arg1;
- (void)onConfirmButton:(id)arg1;
- (void)fillPageInfo;
- (void)initSubViews;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)onReturn;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithPageInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

