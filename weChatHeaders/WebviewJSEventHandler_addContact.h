//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "WebAddContactDelegate.h"

@class MMWebAddContactView;

@interface WebviewJSEventHandler_addContact : WebviewJSEventHandlerBase <WebAddContactDelegate>
{
    MMWebAddContactView *m_jsAddContactView;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)currentViewController;
- (void)OnWebAddContactReturn;
- (void)OnWebAddContact:(int)arg1 Msg:(id)arg2 CallBack:(id)arg3;
- (void)OnWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

@end

