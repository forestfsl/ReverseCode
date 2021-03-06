//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class AttributeLabel, FTSFeatureItem, MMBrandHeadImageView, NSString, SearchMatchTip;

@interface FTSFeatureCell : MMTableViewCell
{
    FTSFeatureItem *_featureItem;
    SearchMatchTip *_matchTip;
    NSString *_searchText;
    MMBrandHeadImageView *_thumbImageView;
    AttributeLabel *_titleLabel;
    AttributeLabel *_detailLabel;
}

@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (void).cxx_destruct;
- (void)updateFeatureItem:(id)arg1 matchTip:(id)arg2 searchText:(id)arg3;
- (void)updateStatus:(_Bool)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

