//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMResourceDownloadDelegate.h"

@class MMResourceDownloadTaskContext, NSString;

@interface MMResourceDownloadTask : NSObject <MMResourceDownloadDelegate>
{
    NSString *_resUrl;
    MMResourceDownloadTaskContext *_context;
    NSString *_downloadIdentifier;
    id <MMResourceDownloader> _downloader;
    long long _retryCnt;
    long long _currentCnt;
    id <MMResourceDownloadTaskDelegate> _downloadTaskDelegate;
}

@property(nonatomic) __weak id <MMResourceDownloadTaskDelegate> downloadTaskDelegate; // @synthesize downloadTaskDelegate=_downloadTaskDelegate;
@property(nonatomic) long long currentCnt; // @synthesize currentCnt=_currentCnt;
@property(nonatomic) long long retryCnt; // @synthesize retryCnt=_retryCnt;
@property(readonly, copy, nonatomic) NSString *downloadIdentifier; // @synthesize downloadIdentifier=_downloadIdentifier;
@property(readonly, nonatomic) MMResourceDownloadTaskContext *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSString *resUrl; // @synthesize resUrl=_resUrl;
- (void).cxx_destruct;
- (void)onDownloadFinish:(long long)arg1 downloadData:(id)arg2 resUrl:(id)arg3;
- (void)onDownloadReportWithKey:(unsigned int)arg1;
- (_Bool)isSameResourceWithTask:(id)arg1;
- (Class)getResrouceDownloaderClass;
- (id)generateDownloadIdentifier;
- (void)reportWithKey:(unsigned int)arg1 network:(id)arg2;
- (void)clearDownloadData;
- (void)cancelDownload;
- (void)startDownload;
- (void)dealloc;
- (id)initWithResUrl:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

