//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RTEAttachmentReuseableView.h"

@class CAShapeLayer, UIImageView, UILabel, UIView;

@interface MailRTEBaseAttachmentView : RTEAttachmentReuseableView
{
    _Bool _bNeedLayout;
    _Bool _bLongPressHandled;
    _Bool _bLongPressCancelled;
    id <MailRTEBaseAttachmentViewDelegate> _delegate;
    UIView *_contentView;
    UIView *_backgroundView;
    UIView *_borderView;
    CAShapeLayer *_borderLayer;
    UIImageView *_thumbImageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
}

@property(nonatomic) _Bool bLongPressCancelled; // @synthesize bLongPressCancelled=_bLongPressCancelled;
@property(nonatomic) _Bool bLongPressHandled; // @synthesize bLongPressHandled=_bLongPressHandled;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) CAShapeLayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool bNeedLayout; // @synthesize bNeedLayout=_bNeedLayout;
@property(nonatomic) __weak id <MailRTEBaseAttachmentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onLongPressObject;
- (void)onClickObject;
- (void)onLongPressEvents;
- (void)setUnSelected;
- (void)setSelected;
- (void)onTouchEnd:(id)arg1;
- (void)onTouchBegin:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGRect)getImageViewFrame;
- (id)getImage;
- (id)getDescription;
- (id)getTitle;
- (_Bool)ifLayoutViewByBase;
- (void)adjustAllSubviewsVerticalPadding;
- (void)layoutDescLabel;
- (void)layoutTitleLabel;
- (void)layoutThumbImageView;
- (void)layoutViewBorder;
- (void)layoutView;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)mailRTEAttachment;

@end
