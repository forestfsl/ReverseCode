//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "WebAddContactDelegate.h"

@class MMWebAddContactView;

@interface WAJSEventHandler_private_addContact : WAJSEventHandler_BaseEvent <WebAddContactDelegate>
{
    MMWebAddContactView *_addContactView;
}

- (void).cxx_destruct;
- (id)currentViewController;
- (void)OnWebAddContactReturn;
- (void)OnWebAddContact:(int)arg1 Msg:(id)arg2 CallBack:(id)arg3;
- (void)removeAllAddContactView;
- (void)OnWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)handleJSEvent:(id)arg1;

@end

