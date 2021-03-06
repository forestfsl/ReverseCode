//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageCellView.h"

#import "ChatBackgroundExt.h"

@class MultiTalkMessageViewModel, UIImageView;

@interface MultiTalkMessageCellView : BaseMessageCellView <ChatBackgroundExt>
{
    UIImageView *m_backgroundImageView;
}

- (void).cxx_destruct;
- (void)onChatBackgroundChanged:(id)arg1;
- (void)onLongTouch;
- (id)getBkgImage;
- (void)layoutContentView;
- (_Bool)needUpdateLightStyle;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) MultiTalkMessageViewModel *viewModel; // @dynamic viewModel;

@end

