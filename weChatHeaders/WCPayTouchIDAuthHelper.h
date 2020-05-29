//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@interface WCPayTouchIDAuthHelper : MMObject
{
}

+ (_Bool)isLockOut:(id)arg1;
+ (void)logAbTestItem:(id)arg1 transactionId:(id)arg2 event:(int)arg3;
+ (_Bool)isDeviceTouchIDAvailableAndNotJailBreak;
+ (_Bool)isUsingFaceID;
+ (_Bool)isDeviceTouchIDAvailable;
+ (_Bool)isDeviceTouchIDHardwareSupportedAndNotJailBreak;
+ (_Bool)isTouchIDEnrolledInDevice;
+ (_Bool)isDeviceTouchIDHardwareSupported;
+ (_Bool)isDeviceJailBreak;
+ (_Bool)isInWhiteList:(id)arg1;
+ (_Bool)canUseTouchIDFromData:(id)arg1;
+ (void)askForUnlockTouchID:(id)arg1 whenSuccess:(CDUnknownBlockType)arg2 whenFail:(CDUnknownBlockType)arg3;
+ (void)internalShowTouchIDAuthView:(id)arg1 disableFallBack:(_Bool)arg2 whenSuccessData:(CDUnknownBlockType)arg3 whenFail:(CDUnknownBlockType)arg4;
+ (void)showTouchIDAuthView:(id)arg1 disableFallBack:(_Bool)arg2 whenSuccessData:(CDUnknownBlockType)arg3 whenFail:(CDUnknownBlockType)arg4 askUnlock:(id)arg5;
+ (void)showTouchIDAuthView:(id)arg1 disableFallBack:(_Bool)arg2 whenSuccessData:(CDUnknownBlockType)arg3 whenFail:(CDUnknownBlockType)arg4;
+ (void)showTouchIDAuthView:(id)arg1 whenSuccessData:(CDUnknownBlockType)arg2 whenFail:(CDUnknownBlockType)arg3;
+ (void)internalShowTouchIDAuthView:(id)arg1 whenSuccess:(CDUnknownBlockType)arg2 whenFail:(CDUnknownBlockType)arg3;
+ (void)showTouchIDAuthView:(id)arg1 whenSuccess:(CDUnknownBlockType)arg2 whenFail:(CDUnknownBlockType)arg3 askUnlock:(id)arg4;
+ (void)showTouchIDAuthView:(id)arg1 whenSuccess:(CDUnknownBlockType)arg2 whenFail:(CDUnknownBlockType)arg3;

@end

