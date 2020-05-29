//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, WCADCanvasInfo, WCDataItem;

@protocol WCTimelineDelegate <NSObject>
- (void)onRemoveCachesOfContentWithDataItemId:(NSString *)arg1;
- (void)onRemoveCachesOfLikeUserWithDataItemId:(NSString *)arg1;
- (void)onTimelineDataChanged:(NSArray *)arg1 andAdItems:(NSArray *)arg2;
- (void)onNoMoreTimelineData;
- (void)onTimelineDataChangedWithAdded:(NSArray *)arg1 andChanged:(NSArray *)arg2 andDeleted:(NSArray *)arg3;

@optional
- (void)onUpdateAdObjectDetail:(WCDataItem *)arg1;
- (_Bool)isCanvasTypesAllValid:(WCADCanvasInfo *)arg1;
@end

