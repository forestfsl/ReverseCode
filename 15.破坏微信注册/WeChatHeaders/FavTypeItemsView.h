//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMScrollView, NSMutableArray;
@protocol FavTypeItemsViewDelegate;

@interface FavTypeItemsView : UIView
{
    MMScrollView *m_typeScrollView;
    NSMutableArray *m_buttons;
    int m_currentType;
    id <FavTypeItemsViewDelegate> delegate;
}

@property(nonatomic) __weak id <FavTypeItemsViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)deSelectButton:(id)arg1;
- (void)buttonClicked:(id)arg1;
- (id)getCurrentTypeName;
- (void)initView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

