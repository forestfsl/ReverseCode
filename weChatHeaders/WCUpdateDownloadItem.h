//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, ResourceMeta;

@interface WCUpdateDownloadItem : NSObject
{
    NSString *baseID;
    NSString *patchID;
    ResourceMeta *patchInfo;
    NSMutableArray *customInfos;
    NSString *_filePath;
}

@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSMutableArray *customInfos; // @synthesize customInfos;
@property(retain, nonatomic) ResourceMeta *patchInfo; // @synthesize patchInfo;
@property(retain, nonatomic) NSString *patchID; // @synthesize patchID;
@property(retain, nonatomic) NSString *baseID; // @synthesize baseID;
- (void).cxx_destruct;

@end

