//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class JSAPIScopeConfirmContainterView, JSApiScopeConfirmWindow;

@interface JSApiScopeConfirmViewController : MMUIViewController
{
    JSAPIScopeConfirmContainterView *_containerView;
    JSApiScopeConfirmWindow *_weakConfirmWindow;
}

@property(nonatomic) __weak JSApiScopeConfirmWindow *weakConfirmWindow; // @synthesize weakConfirmWindow=_weakConfirmWindow;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)useBlackStatusbar;
- (void)viewDidLoad;
- (id)initWithWindow:(id)arg1;

@end

