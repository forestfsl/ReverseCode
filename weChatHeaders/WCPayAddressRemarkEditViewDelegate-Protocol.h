//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNotification;

@protocol WCPayAddressRemarkEditViewDelegate <NSObject>
- (void)onWCPayAddressRemarkEditViewKeyboardDidHide;
- (void)onWCPayAddressRemarkEditViewKeyboardWillShow:(NSNotification *)arg1;
- (void)onWCPayAddressRemarkEditViewEdit;
- (void)onWCPayAddressRemarkEditViewRemove;
- (void)onWCPayAddressRemarkEditViewAddAddress;
- (void)onWCPayAddressRemarkEditViewDidChange;
- (void)onWCPayAddressRemarkEditViewEndEdit;
@end

