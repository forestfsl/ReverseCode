//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBizBaseViewController.h"

#import "IMyInvoiceLogicMgrExt-Protocol.h"
#import "LongPressMenuViewDelegate-Protocol.h"
#import "LongPressViewDelegate-Protocol.h"
#import "MyInvoiceInfoViewControllerDelegate-Protocol.h"
#import "PasswordLogicDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class MyInvoiceData, NSMutableArray, NSString, PasswordLogic, UIButton, UIView;
@protocol MyInvoiceListViewControllerDelegate;

@interface MyInvoiceListViewController : WCBizBaseViewController <UIAlertViewDelegate, PasswordLogicDelegate, LongPressMenuViewDelegate, LongPressViewDelegate, MyInvoiceInfoViewControllerDelegate, IMyInvoiceLogicMgrExt>
{
    PasswordLogic *m_passwordLogic;
    int m_enWCAddressAddressListScene;
    UIView *m_oLastLongPressView;
    UIButton *m_tipsButton;
    NSMutableArray *m_invoiceDataArr;
    int m_scene;
    MyInvoiceData *m_selectInvoice;
    id <MyInvoiceListViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <MyInvoiceListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)OnGetInvoiceRet:(_Bool)arg1 andResult:(id)arg2 fromScene:(unsigned int)arg3;
- (void)OnSaveInvoiceRet:(_Bool)arg1 andGroupId:(long long)arg2 withInvoiceUrl:(id)arg3;
- (void)OnDelInvoiceRet:(_Bool)arg1 andGroupId:(long long)arg2;
- (void)OnEditInvoiceData:(id)arg1;
- (void)OnAddNewInvoiceData:(id)arg1 ofGroupId:(long long)arg2;
- (void)MenuControllerWillHide:(id)arg1;
- (void)OnLongPress:(id)arg1;
- (void)OnPress:(id)arg1;
- (void)onLongPressMenuViewCopy:(id)arg1;
- (void)gotoInfoOfInvoice:(id)arg1;
- (void)accessoryButtonTappedForRowWithIndexPath:(id)arg1 Cell:(id)arg2;
- (void)commitEditingForRowAtIndexPath:(id)arg1 Cell:(id)arg2;
- (void)gotoInvoiceDetail:(id)arg1;
- (void)selectActionCell:(id)arg1;
- (void)makeCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeNewCell:(id)arg1 cellInfo:(id)arg2;
- (void)InvoiceAdd;
- (void)refreshViewWithInvoiceDataArr:(id)arg1;
- (void)resetDefautSelect;
- (double)getCellHeightForInvoice:(id)arg1;
- (id)getInvoiceCopiedString:(id)arg1;
- (id)getAddressDetailString:(id)arg1;
- (void)verifyPasswordFail:(id)arg1;
- (void)verifyPasswordOK:(id)arg1 logic:(id)arg2;
- (void)setupWithInvoiceDataArr:(id)arg1 fromScene:(int)arg2;
- (void)dealloc;
- (void)viewDidBeInteractivePoped;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)onNext;
- (void)MyInvoiceBack;
- (void)initNavigationBar;
- (void)initPasswordLogic;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

