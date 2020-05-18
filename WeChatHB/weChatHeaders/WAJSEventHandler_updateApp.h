//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "MMTipsViewControllerDelegate.h"

@class NSString, WAContactGetter;

@interface WAJSEventHandler_updateApp : WAJSEventHandler_BaseEvent <MMTipsViewControllerDelegate>
{
    WAContactGetter *_contactGetter;
    unsigned int _latestVersion;
}

@property(nonatomic) unsigned int latestVersion; // @synthesize latestVersion=_latestVersion;
- (void).cxx_destruct;
- (void)endWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)markUpdateAppRunning:(_Bool)arg1;
- (_Bool)isUpdateAppRunning;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
