//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIButton, WSVideoTagInfo;

@protocol WSVideoFlowBaseDelegate <NSObject>

@optional
- (void)onClickTitle:(id)arg1;
- (void)onClickFeedBackButton:(UIButton *)arg1 sender:(id)arg2;
- (void)onClickLike:(_Bool)arg1 sender:(id)arg2;
- (void)onClickSource:(id)arg1;
- (void)onClickShare:(id)arg1;
- (void)onClickTag:(WSVideoTagInfo *)arg1 sender:(id)arg2;
@end

