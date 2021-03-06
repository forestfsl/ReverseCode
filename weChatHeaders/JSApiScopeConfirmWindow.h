//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIWindow.h"

@class NSArray, NSString;

@interface JSApiScopeConfirmWindow : MMUIWindow
{
    NSString *_appName;
    NSString *_appIconURL;
    NSArray *_arrScopeInfo;
    NSString *_confirmTitle;
    unsigned long long _orientationMask;
    id <JSApiScopeConfirmWindowDelegate> _confirmWindowDelegate;
}

@property(nonatomic) __weak id <JSApiScopeConfirmWindowDelegate> confirmWindowDelegate; // @synthesize confirmWindowDelegate=_confirmWindowDelegate;
@property(nonatomic) unsigned long long orientationMask; // @synthesize orientationMask=_orientationMask;
@property(retain, nonatomic) NSString *confirmTitle; // @synthesize confirmTitle=_confirmTitle;
@property(retain, nonatomic) NSArray *arrScopeInfo; // @synthesize arrScopeInfo=_arrScopeInfo;
@property(retain, nonatomic) NSString *appIconURL; // @synthesize appIconURL=_appIconURL;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (void).cxx_destruct;
- (void)setupView;
- (void)dealloc;

@end

