//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WAMsgNodePathUtil : NSObject
{
}

+ (id)upperFolderPathOfWidgetPkgWithAppId:(id)arg1 debugMode:(unsigned int)arg2 scene:(unsigned int)arg3;
+ (id)getLocalCacheFilePathWithAppid:(id)arg1 version:(unsigned long long)arg2 debugMode:(unsigned int)arg3 scene:(unsigned int)arg4;
+ (id)pathOfJSLogEntrance;
+ (id)pathOfReqDataByAppid:(id)arg1 scene:(unsigned int)arg2;
+ (id)pathOfPackImageByAppId:(id)arg1 fileName:(id)arg2 scene:(unsigned int)arg3;
+ (id)pathOfOnlineImageByAppId:(id)arg1 fileName:(id)arg2 scene:(unsigned int)arg3;
+ (id)pathOfPackImageDir:(id)arg1 scene:(unsigned int)arg2;
+ (id)pathOfOnlineImageDir:(id)arg1 scene:(unsigned int)arg2;
+ (id)pathOfScriptByAppId:(id)arg1 scene:(unsigned int)arg2;
+ (id)pathOfPkgInfoDataWithScene:(unsigned int)arg1 isTemp:(_Bool)arg2;
+ (id)rootOfWAMsgNodeInfo;
+ (id)pathOfPermissionInfoData;
+ (id)rootOfWAMsgNodePermissionInfo;
+ (id)pathOfResourceByAppId:(id)arg1 scene:(unsigned int)arg2;
+ (id)pathOfResourceRootForScene:(unsigned int)arg1;
+ (id)pathOfResourceRoot;
+ (id)downloadCachesDirectoryPath;
+ (id)md5FromString:(id)arg1;

@end

