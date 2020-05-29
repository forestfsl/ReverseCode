//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CLHeading, CLLocation, NSDictionary;

@protocol ILocationMgrExt

@optional
- (void)onDidFindAddress:(NSDictionary *)arg1 forTag:(unsigned long long)arg2;
- (void)onHeadingError:(int)arg1 withTag:(unsigned long long)arg2;
- (void)onHeadingChanged:(CLHeading *)arg1 withTag:(unsigned long long)arg2;
- (_Bool)isUpdatingGPSLocation:(unsigned long long)arg1;
- (void)onGPSLocationError:(int)arg1 withTag:(unsigned long long)arg2;
- (void)onGPSLocationChanged:(CLLocation *)arg1 withTag:(unsigned long long)arg2;
- (void)onGPSAccurateLocationChanged:(CLLocation *)arg1 withTag:(unsigned long long)arg2;
@end

