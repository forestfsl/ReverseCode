//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BTReaderItemCellViewModel.h"

@class MMMusicInfo, NSString;

@interface BTMusicItemCellViewModel : BTReaderItemCellViewModel
{
    MMMusicInfo *m_musicInfo;
}

+ (_Bool)canCreateViewModelWithReaderWrap:(id)arg1 msgWrap:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) MMMusicInfo *musicInfo;
- (struct CGSize)titleSize;
@property(readonly, nonatomic) NSString *artistStr;
- (id)titleLabelStyles;
- (double)viewHeight;
- (id)itemViewClassName;

@end

