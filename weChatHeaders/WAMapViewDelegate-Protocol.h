//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QIndoorBuilding, QIndoorLevel, QPoiInfo, WAMapView;

@protocol WAMapViewDelegate <NSObject>

@optional
- (void)onMapIndoorChange:(WAMapView *)arg1 building:(QIndoorBuilding *)arg2 level:(QIndoorLevel *)arg3;
- (void)onMapPoiClick:(WAMapView *)arg1 poi:(QPoiInfo *)arg2;
- (void)onMapCalloutClick:(WAMapView *)arg1 data:(NSString *)arg2;
- (void)onMapTap:(WAMapView *)arg1;
- (void)onRegionDidChange:(WAMapView *)arg1 reason:(unsigned long long)arg2;
- (void)onRegionWillChange:(WAMapView *)arg1;
- (void)onControlClick:(WAMapView *)arg1 data:(NSString *)arg2;
- (void)onMarkerClick:(WAMapView *)arg1 data:(NSString *)arg2;
@end

