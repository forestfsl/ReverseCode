//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlayer, AVPlayerItem, CdnDownloadTaskInfo;

@protocol VideoStreamPlayerViewModeDelegate <NSObject>
- (_Bool)isStreamingPlayMode;
- (void)OnSnsVideoChanged;
- (void)onDownloadSuccess;
- (void)onDownloadProgress:(unsigned int)arg1;
- (void)onDownloadVideoReturn:(CdnDownloadTaskInfo *)arg1;
- (void)OnVideoDownloadErrorExpired:(_Bool)arg1;
- (void)checkPlayerState;
- (double)getVideoCurrentSeconde;
- (double)getVideoBufferedTime;
- (void)tryToBeginPlayVideo;
- (void)tryToPauseAndStartLoading;
- (AVPlayerItem *)getAVPlayerItem;
- (AVPlayer *)getAVPlayer;
@end

