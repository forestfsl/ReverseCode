//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMTableViewInfoDelegate-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MMTableViewInfo, NSString;
@protocol ResourceBrowserFilterViewControllerDelegate;

@interface ResourceBrowserFilterViewController : MMUIViewController <UITableViewDelegate, MMTableViewInfoDelegate>
{
    MMTableViewInfo *m_tableViewInfo;
    unsigned long long m_selectedOrder;
    unsigned long long m_selectedType;
    id <ResourceBrowserFilterViewControllerDelegate> m_delegate;
}

@property(nonatomic) __weak id <ResourceBrowserFilterViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)onDone;
- (void)onSelectCell:(id)arg1:(id)arg2;
- (void)reloadTableData;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithOrder:(unsigned long long)arg1 initWithType:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

