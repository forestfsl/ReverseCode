//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CMessageWrap, FavoritesItem, ForwardMessageLogicController, NSObject, UIButton, UIView;

@protocol WCPlayerConfigViewControllerDelegate <NSObject>
- (void)onTapAttachButton:(UIButton *)arg1;
- (void)onCloseFullScreenPlay:(NSObject *)arg1;
- (void)onForwardSuccess:(ForwardMessageLogicController *)arg1;
- (void)onForwardCancle:(ForwardMessageLogicController *)arg1;
- (unsigned long long)getWCDownloadModeWith:(unsigned long long)arg1;
- (FavoritesItem *)generateFavWithMediaWrap:(NSObject *)arg1;
- (CMessageWrap *)generateMsgWithMediaWrap:(NSObject *)arg1;
- (void)onLongPress:(UIView *)arg1;
@end

