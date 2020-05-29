//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IBaseMsgContentViewControllerScrollExt-Protocol.h"
#import "IMainFrameScrollExt-Protocol.h"
#import "ITimeLineViewScrollExt-Protocol.h"
#import "MMUIViewControllerExt-Protocol.h"

@class NSString;

@interface MMFPSMonitor : NSObject <MMUIViewControllerExt, ITimeLineViewScrollExt, IMainFrameScrollExt, IBaseMsgContentViewControllerScrollExt>
{
    unsigned long long m_mainSemaphore;
}

- (void)onMainFrameEndScroll;
- (void)onMainFrameBeginScroll;
- (void)onMsgContentViewControllerEndScroll;
- (void)onMsgContentViewControllerBeginScroll:(id)arg1;
- (void)onTimeLineEndScroll;
- (void)onTimeLineBeginScroll;
- (void)MMUIViewControllerDidDisappear:(id)arg1;
- (void)MMUIViewControllerWillDisppear:(id)arg1;
- (void)MMUIViewControllerDidAppear:(id)arg1;
- (void)MMUIViewControllerWillAppear:(id)arg1;
- (void)appFirstActive;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

