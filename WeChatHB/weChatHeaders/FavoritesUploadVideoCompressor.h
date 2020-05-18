//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FavoritesUploadBaseProccessor.h"

#import "FavVideoCompressExt.h"

@class NSMutableSet, NSString;

@interface FavoritesUploadVideoCompressor : FavoritesUploadBaseProccessor <FavVideoCompressExt>
{
    NSMutableSet *m_currentItemCompressingVideoSet;
}

- (void).cxx_destruct;
- (void)onFavVideoCompressFinish:(id)arg1 isSuccess:(_Bool)arg2;
- (void)configCompressedVideosInDataList:(id)arg1;
- (void)findNeedCompressVideosInDataList:(id)arg1;
- (void)configFavData:(id)arg1 withCompressPath:(id)arg2;
- (void)onCompressItem:(id)arg1 isSuccess:(_Bool)arg2;
- (void)tryProccess;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1 isPrior:(_Bool)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
