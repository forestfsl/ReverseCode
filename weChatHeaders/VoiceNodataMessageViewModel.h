//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CommonMessageViewModel.h"

@class NSString, UIImage;

@interface VoiceNodataMessageViewModel : CommonMessageViewModel
{
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
@property(readonly, nonatomic) UIImage *iconImage;
@property(readonly, nonatomic) NSString *statusTips;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end

