//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@interface WAAppStateChangedContextInfoMusicInfo : MMObject
{
    _Bool _canKeepAliveByAudioPlay;
    _Bool _isPlayingMusic;
    _Bool _isMusicInteruptedByOtherSource;
}

@property(nonatomic) _Bool isMusicInteruptedByOtherSource; // @synthesize isMusicInteruptedByOtherSource=_isMusicInteruptedByOtherSource;
@property(nonatomic) _Bool isPlayingMusic; // @synthesize isPlayingMusic=_isPlayingMusic;
@property(nonatomic) _Bool canKeepAliveByAudioPlay; // @synthesize canKeepAliveByAudioPlay=_canKeepAliveByAudioPlay;
- (id)description;

@end

