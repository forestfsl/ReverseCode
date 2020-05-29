//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class MMTableViewInfo, NSArray, NSString, UIView;

@interface WSActionSheet : MMObject
{
    UIView *_backgroundMask;
    UIView *_headerView;
    MMTableViewInfo *_tableViewInfo;
    NSString *_title;
    NSString *_desc;
    NSArray *_items;
    id <WSActionSheetDelegate> _delegate;
}

@property(nonatomic) __weak id <WSActionSheetDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)clear;
- (void)onCancel:(id)arg1;
- (void)onClickItem:(struct WCTableViewNormalCellManager *)arg1 indexPath:(id)arg2;
- (void)cancel;
- (void)makeSelectCell:(id)arg1 cellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (void)showInView:(id)arg1;

@end

