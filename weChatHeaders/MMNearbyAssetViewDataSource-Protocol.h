//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMNearbyAssetInfo, MMNearbyAssetView;

@protocol MMNearbyAssetViewDataSource <NSObject>
- (long long)indexInSelectedAssetInfosForAssetInfo:(MMNearbyAssetInfo *)arg1;
- (unsigned long long)numberOfSelectedAssetInfosInNearbyAssetView:(MMNearbyAssetView *)arg1;
@end

