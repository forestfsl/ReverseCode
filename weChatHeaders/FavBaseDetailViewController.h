//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FavMMUIViewController.h"

#import "FavTagViewDelegate.h"
#import "IFavoritesExt.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "tableViewDelegate.h"

@class FavoritesBrowseDetailReportData, FavoritesItem, MMTableView, NSString;

@interface FavBaseDetailViewController : FavMMUIViewController <UITableViewDataSource, UITableViewDelegate, tableViewDelegate, IFavoritesExt, FavTagViewDelegate>
{
    MMTableView *m_tableView;
    FavoritesItem *m_favItem;
    FavoritesBrowseDetailReportData *_reportData;
}

@property(retain, nonatomic) FavoritesBrowseDetailReportData *reportData; // @synthesize reportData=_reportData;
- (void).cxx_destruct;
- (id)sessionId;
- (void)onFavTagEditOK;
- (void)onFavTagEditBegin:(int)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)convertToNoteViewController;
- (_Bool)canShowConvertToNoteActionSheet;
- (void)genFooterContent:(id)arg1 indexPath:(id)arg2;
- (void)genHeadCell:(id)arg1 indexPath:(id)arg2;
- (void)genContent:(id)arg1 indexPath:(id)arg2;
- (double)getHeightForRowAtIndexPath:(id)arg1;
- (long long)getRowsInContentSection;
- (void)onAction:(id)arg1;
- (id)baseBackgroundColor;
- (void)viewDidTransitionToNewSize;
- (void)initTableView;
- (void)initNavigationBar;
- (id)navigationBarBackgroundColor;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)isNeedDownloadWithDataList:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithFavItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

