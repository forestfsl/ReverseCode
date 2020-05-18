//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CommonPlayer.h"

#import "AVAudioPlayerDelegate.h"

@class AVAudioPlayer, NSString;

@interface SimpleCommonPlayer : CommonPlayer <AVAudioPlayerDelegate>
{
    AVAudioPlayer *_m_audioPlayer;
}

@property(retain, nonatomic) AVAudioPlayer *m_audioPlayer; // @synthesize m_audioPlayer=_m_audioPlayer;
- (void).cxx_destruct;
- (void)audioPlayerBeginInterruption:(id)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (double)duration;
- (void)setVolume:(float)arg1;
- (_Bool)isPlaying;
- (void)start;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)updateData:(id)arg1;
- (void)updatePath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
