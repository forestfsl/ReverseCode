//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "MMPackageDownloadMgrExt.h"

@interface WCBGRecommendMgr : MMObject <MMPackageDownloadMgrExt>
{
    id <WCBGRecommendMgrDelegate> m_delegate;
}

@property(nonatomic) __weak id <WCBGRecommendMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)onPackageListUpdated:(id)arg1;
- (void)updateBGStorage;
- (id)getBGStorage;
- (id)getPackageDataOfBGStorage;
- (id)bgStorageWithDataList:(id)arg1;
- (long long)packageKey;
- (void)dealloc;
- (id)init;

@end

