//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIButton.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString;
@protocol MMTransparentButtonDelegate;

@interface MMTransparentButton : MMUIButton <UIGestureRecognizerDelegate>
{
    _Bool m_bScale;
    id <MMTransparentButtonDelegate> _delegate;
    struct CGPoint _m_pTouchLocation;
}

@property(nonatomic) struct CGPoint m_pTouchLocation; // @synthesize m_pTouchLocation=_m_pTouchLocation;
@property(nonatomic) __weak id <MMTransparentButtonDelegate> m_delegate; // @synthesize m_delegate=_delegate;
@property(nonatomic) _Bool m_bScale; // @synthesize m_bScale;
- (void).cxx_destruct;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)recordTouchLocationwithEvent:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

