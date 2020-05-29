//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VideoStreamDownloadTask, VideoStreamInfo, VideoStreamKVReportLogic;

@interface VideoStreamDownloadLogic : NSObject
{
    _Bool _m_bHaveMoovDownload;
    _Bool _m_bVideoDownloadFinished;
    id <NSObject><VideoStreamDownloadLogicDelegate> _delegate;
    VideoStreamDownloadTask *_m_oCurrentDownloadTask;
    VideoStreamKVReportLogic *_m_oKVReportLogic;
    VideoStreamInfo *_m_oVideoInfo;
}

@property(nonatomic) _Bool m_bVideoDownloadFinished; // @synthesize m_bVideoDownloadFinished=_m_bVideoDownloadFinished;
@property(nonatomic) _Bool m_bHaveMoovDownload; // @synthesize m_bHaveMoovDownload=_m_bHaveMoovDownload;
@property(retain, nonatomic) VideoStreamInfo *m_oVideoInfo; // @synthesize m_oVideoInfo=_m_oVideoInfo;
@property(retain, nonatomic) VideoStreamKVReportLogic *m_oKVReportLogic; // @synthesize m_oKVReportLogic=_m_oKVReportLogic;
@property(retain, nonatomic) VideoStreamDownloadTask *m_oCurrentDownloadTask; // @synthesize m_oCurrentDownloadTask=_m_oCurrentDownloadTask;
@property(nonatomic) __weak id <NSObject><VideoStreamDownloadLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopVideoStreamDownload;
- (void)downloadAllData;
- (_Bool)isVideoDownloading;
- (_Bool)isMP4Video:(id)arg1;
- (_Bool)isQTVideo:(id)arg1;
- (id)convertDataToHexStr:(id)arg1;
- (unsigned long long)startVideoStreamDownload;
- (_Bool)requestNetVideoDataByOffset:(unsigned int)arg1 Length:(unsigned int)arg2 DurationSec:(unsigned int)arg3;
- (_Bool)isVideoCacheDataExistByOffset:(unsigned int)arg1 Length:(unsigned int)arg2;
- (void)getPreVideoData;
- (id)getLocalVideoDataByFilePath:(id)arg1 Offset:(unsigned int)arg2 Length:(unsigned int)arg3;
- (_Bool)getVideoDataByOffset:(unsigned int)arg1 length:(int)arg2 durationSec:(unsigned int)arg3 loadingRequest:(id)arg4;
- (_Bool)getVideoDataByOffset:(unsigned int)arg1 length:(int)arg2 durationSec:(unsigned int)arg3;
- (void)checkDownloadTaskStateByOffset:(unsigned int)arg1 length:(unsigned int)arg2;
- (void)stopCurrentDownloadTask;
- (void)setNeedCheckPlayState:(_Bool)arg1;
- (id)getCurrentDownloadTask;
- (_Bool)getCurrentDownloadFinishState;
- (void)setCurrentDownloadFinish:(_Bool)arg1;
- (id)init;

@end
