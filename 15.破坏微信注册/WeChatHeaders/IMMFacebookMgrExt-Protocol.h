//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IMMFacebookMgrExt <NSObject>

@optional
- (void)facebookCheckAccessTokenValidFinished:(_Bool)arg1;
- (void)onExtendTokenFinish:(_Bool)arg1;
- (void)onUnBindFacebookFinish:(unsigned int)arg1;
- (void)onBindFacebookFinish:(unsigned int)arg1;
- (void)onLoginFacebookBegan:(NSString *)arg1;
- (void)onFBDidNotLogin:(_Bool)arg1;
- (void)onFBDidLogin;
@end

