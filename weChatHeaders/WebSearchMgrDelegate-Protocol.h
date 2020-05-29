//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CContact, NSDictionary, NSString;

@protocol WebSearchMgrDelegate <NSObject>

@optional
- (void)onWebRecommendInfoUpdate:(NSDictionary *)arg1;
- (void)onWebRecommendOpenIdGetUserNameCgiResult:(NSDictionary *)arg1;
- (void)onWebRecommendNavBarShadowManuallyHidden:(NSDictionary *)arg1;
- (void)onWebRecommendTabSelected:(NSDictionary *)arg1;
- (void)onWebRecommendLeaveFromFindPage:(NSDictionary *)arg1;
- (void)onWebRecommendEnterFromFindPage:(NSDictionary *)arg1;
- (void)onWebRecommendCommCgiResult:(NSDictionary *)arg1;
- (void)onWebRecommendNotifyReddotExtMsg:(NSDictionary *)arg1;
- (void)onWebRecommendNotifyReddot:(NSDictionary *)arg1;
- (void)onWebRecommendNotifyNumReddotChange:(NSDictionary *)arg1;
- (void)onWebRecommendPostCommentResult:(NSDictionary *)arg1;
- (void)onWebRecommendSetCommentResult:(NSDictionary *)arg1;
- (void)onWebSearchWithQuery:(NSDictionary *)arg1;
- (void)onUpdateLocalImage:(NSDictionary *)arg1;
- (void)onFailReceiveSuggestionJSON;
- (void)onReceiveSuggestionJSON:(NSString *)arg1 query:(NSString *)arg2;
- (void)onReceiveSuggestionJSON:(NSString *)arg1;
- (void)onOpenContactError:(NSString *)arg1 withMessage:(NSString *)arg2;
- (void)onOpenContact:(CContact *)arg1;
- (void)onWidgetDataUpdated:(NSDictionary *)arg1;
- (void)onSearchRecmdDataFail:(NSString *)arg1;
- (void)onSearchRecmdDataReturn:(NSDictionary *)arg1;
- (void)onWebSearchDataFail:(NSDictionary *)arg1;
- (void)onWebSearchDataChanged:(NSDictionary *)arg1;
@end

