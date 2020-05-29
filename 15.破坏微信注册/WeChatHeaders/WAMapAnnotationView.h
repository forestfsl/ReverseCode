//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QMapKit/QAnnotationView.h>

@class NSDictionary, UIButton, WAMapCalloutView;
@protocol WAMapAnnotationViewDelegate;

@interface WAMapAnnotationView : QAnnotationView
{
    _Bool _fixedCallout;
    _Bool _isCalloutViewShow;
    id <WAMapAnnotationViewDelegate> _delegate;
    UIButton *_tapButton;
    NSDictionary *_calloutParam;
    id _calloutTarget;
    SEL _calloutAction;
    unsigned long long _calloutControlEvents;
    WAMapCalloutView *_mCustomCalloutView;
}

@property(nonatomic) _Bool isCalloutViewShow; // @synthesize isCalloutViewShow=_isCalloutViewShow;
@property(retain, nonatomic) WAMapCalloutView *mCustomCalloutView; // @synthesize mCustomCalloutView=_mCustomCalloutView;
@property(nonatomic) unsigned long long calloutControlEvents; // @synthesize calloutControlEvents=_calloutControlEvents;
@property(nonatomic) SEL calloutAction; // @synthesize calloutAction=_calloutAction;
@property(nonatomic) __weak id calloutTarget; // @synthesize calloutTarget=_calloutTarget;
@property(retain, nonatomic) NSDictionary *calloutParam; // @synthesize calloutParam=_calloutParam;
@property(readonly, nonatomic) UIButton *tapButton; // @synthesize tapButton=_tapButton;
@property(nonatomic) __weak id <WAMapAnnotationViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool fixedCallout; // @synthesize fixedCallout=_fixedCallout;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onCalloutClicked;
- (void)onClicked;
- (void)addCalloutView;
- (void)addCalloutTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

