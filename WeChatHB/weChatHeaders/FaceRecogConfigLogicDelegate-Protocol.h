//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FaceRecogConfigLogic, NSString;

@protocol FaceRecogConfigLogicDelegate <NSObject>

@optional
- (void)onGetBioConfig:(FaceRecogConfigLogic *)arg1 succeedForScene:(unsigned int)arg2;
- (void)onGetBioConfig:(FaceRecogConfigLogic *)arg1 failedCauseOf:(int)arg2 forScene:(unsigned int)arg3 errMsg:(NSString *)arg4;
@end
