//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PrivateCommonApiHandler.h"
#import "SelectContactsViewControllerDelegate.h"

@class NSString;

@interface MMSelectContactHandler : NSObject <PrivateCommonApiHandler, SelectContactsViewControllerDelegate>
{
    id <PrivateCommonApiHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onSelectContactCancel;
- (void)onSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (void)handleCommonApiWithParams:(id)arg1 withResultDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

