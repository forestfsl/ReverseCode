//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "MMWebImageViewDelegate.h"

@class CContact, MMUILabel, MMWebImageView, NSObject<WAWebErrorViewDelegate>, NSString, UIButton;

@interface WAWebErrorView : MMUIView <MMWebImageViewDelegate>
{
    CContact *m_contact;
    NSString *m_title;
    NSString *m_desc;
    NSString *m_buttonTitle;
    MMUILabel *m_descLabel;
    _Bool m_isNeedGray;
    MMWebImageView *m_logoView;
    MMUILabel *m_titleLabel;
    UIButton *m_operationButton;
    NSObject<WAWebErrorViewDelegate> *_delegate;
}

@property(nonatomic) __weak NSObject<WAWebErrorViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onOperationButtonTapped:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)initOperationButton;
- (void)initDescLabel;
- (void)initTitleLabel;
- (void)initLogoView;
- (void)layoutSubviews;
- (id)initWithUserName:(id)arg1 title:(id)arg2 desc:(id)arg3 buttonTitle:(id)arg4 needGrayed:(_Bool)arg5;
- (id)initWithUserName:(id)arg1 title:(id)arg2 desc:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
