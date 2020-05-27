//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMTimer, UIColor, UIImageView;
@protocol SightIconViewDelegate;

@interface SightIconView : UIView
{
    int m_iconType;
    MMTimer *m_timer;
    double m_progress;
    double m_targetProgress;
    double m_progressStep;
    double m_forceStep;
    double m_animIntermediate;
    double m_animIntermediate2;
    id <SightIconViewDelegate> m_delegate;
    _Bool _useBigIconForPlay;
    int m_targetIconType;
    double m_radius;
    UIColor *_barColor;
    UIColor *_bgColor;
    UIColor *_staticIconFnColor;
    UIColor *_dynamicIconFnColor;
    UIColor *_dynamicIconBgColor;
    UIColor *_exclaIconColor;
    UIView *_blurView;
    UIView *_bgView;
    UIColor *_pressColor;
    UIImageView *_iconImageView;
}

@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIColor *pressColor; // @synthesize pressColor=_pressColor;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) _Bool useBigIconForPlay; // @synthesize useBigIconForPlay=_useBigIconForPlay;
@property(retain, nonatomic) UIColor *exclaIconColor; // @synthesize exclaIconColor=_exclaIconColor;
@property(retain, nonatomic) UIColor *dynamicIconBgColor; // @synthesize dynamicIconBgColor=_dynamicIconBgColor;
@property(retain, nonatomic) UIColor *dynamicIconFnColor; // @synthesize dynamicIconFnColor=_dynamicIconFnColor;
@property(retain, nonatomic) UIColor *staticIconFnColor; // @synthesize staticIconFnColor=_staticIconFnColor;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) UIColor *barColor; // @synthesize barColor=_barColor;
@property(nonatomic) __weak id <SightIconViewDelegate> delegate; // @synthesize delegate=m_delegate;
@property(nonatomic) double radius; // @synthesize radius=m_radius;
@property(nonatomic) int iconType; // @synthesize iconType=m_targetIconType;
@property(nonatomic) double progressStep; // @synthesize progressStep=m_progressStep;
@property(nonatomic) double progress; // @synthesize progress=m_targetProgress;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)updateAnimation;
- (void)stopTimer;
- (void)startTimer;
- (void)drawPauseWithRadius:(double)arg1;
- (void)drawDownloadWithRadius:(double)arg1;
- (void)drawTriangleWithRadius:(double)arg1;
- (void)drawExclaWithRadius:(double)arg1;
- (void)drawWheelWithRadius:(double)arg1 Percentage:(double)arg2;
- (void)drawProgressWithContext:(struct CGContext *)arg1 Radius:(double)arg2 Progress:(double)arg3;
- (void)drawRoundBackgroundWithContext:(struct CGContext *)arg1 Radius:(double)arg2;
- (void)drawNonAnimIcon;
- (void)drawRect:(struct CGRect)arg1;
- (void)displayCurView;
- (void)setStaticIconBackgroundWithRadius:(double)arg1;
- (void)setBgViewColor:(id)arg1;
- (void)setIconWithImage:(id)arg1 Radius:(double)arg2 Color:(id)arg3;
- (double)getCurrentProgressValue;
- (void)forceSetProgressInCommonModesFrom:(double)arg1 toProgress:(double)arg2;
- (void)forceSetProgressFrom:(double)arg1 toProgress:(double)arg2;
- (void)fullRunWithTime:(double)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
