//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class FavoritesItemDataField, MMHeadImageView, MMUILabel, UILabel, UIView;
@protocol FavRecordNodeViewDelegate, RecordNodeDataSource;

@interface FavRecordBaseNodeView : MMUIView
{
    UILabel *m_srcTitleLabel;
    UIView *m_contentView;
    _Bool m_bIsLongPressHandled;
    double m_fContentHeight;
    id <FavRecordNodeViewDelegate> m_delegate;
    id <RecordNodeDataSource> dataSource;
    FavoritesItemDataField *favData;
    MMUILabel *m_srcTimeLabel;
    MMUILabel *m_srcTitlePostLabel;
    MMHeadImageView *m_headImg;
    UIView *m_sepLine;
}

+ (double)heightForData:(id)arg1;
@property(readonly, retain, nonatomic) FavoritesItemDataField *favData; // @synthesize favData;
@property(nonatomic) __weak id <FavRecordNodeViewDelegate> m_delegate; // @synthesize m_delegate;
@property(readonly, retain, nonatomic) id <RecordNodeDataSource> dataSource; // @synthesize dataSource;
- (void).cxx_destruct;
- (void)onLongTouch;
- (void)onTouchUpInside;
- (void)onTouchDownRepeat;
- (void)onTouchDown;
- (void)onTouchCancel;
- (void)pressedEvents;
- (void)LongPressEvents;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)isTouchInContentView:(id)arg1;
- (void)updateContentSubview;
- (void)addContentSubView;
- (void)initContentView;
- (void)updateNodeWithTimePrefix:(id)arg1 headHidden:(_Bool)arg2 bottomLineHidden:(_Bool)arg3;
- (void)initSrcTitle;
- (void)setNodeSize;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithDataSource:(id)arg1;

@end

