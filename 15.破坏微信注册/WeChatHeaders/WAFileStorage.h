//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WAFileStorage : NSObject
{
}

+ (id)tmpOrStorefilePathWithAppID:(id)arg1 localID:(id)arg2;
+ (id)usrFilePathWithAppID:(id)arg1 localID:(id)arg2;
+ (unsigned long long)localIDGeneratorIncreaseID;
+ (id)localIDWithLocalIDPrefix:(id)arg1 md5:(id)arg2 fileType:(id)arg3;
+ (_Bool)generatLocalID:(id *)arg1 path:(id *)arg2 withAppID:(id)arg3 fileType:(id)arg4 fileDir:(id)arg5 localIDPrefix:(id)arg6;
+ (id)mimeTypeFromFileExtension:(id)arg1;
+ (id)fileExtensionFromMIMEType:(id)arg1;
+ (id)generateImagesLocalIds:(id)arg1 fileType:(long long)arg2 appID:(id)arg3;
+ (void)syncSaveImageWithAppID:(id)arg1 images:(id)arg2 fileType:(long long)arg3 completeHandler:(CDUnknownBlockType)arg4;
+ (void)saveImageWithAppID:(id)arg1 images:(id)arg2 fileType:(long long)arg3 completeHandler:(CDUnknownBlockType)arg4;
+ (void)saveImageWithAppID:(id)arg1 images:(id)arg2 completeHandler:(CDUnknownBlockType)arg3;
+ (id)getFileTypeWithData:(id)arg1;
+ (void)saveOriginalImageWithAppID:(id)arg1 asset:(id)arg2 completeHandler:(CDUnknownBlockType)arg3;
+ (_Bool)isWeAppLocalID:(id)arg1;
+ (_Bool)isUsrLocalID:(id)arg1;
+ (_Bool)isStoreLocalID:(id)arg1;
+ (_Bool)isTempLocalID:(id)arg1;
+ (id)usrLocalIDPrefix;
+ (id)storeLocalIDPrefix;
+ (id)tempLocalIDPrefix;
+ (_Bool)isHomePath:(id)arg1;
+ (_Bool)isMD5StringValid:(id)arg1;
+ (_Bool)isFileTypeValid:(id)arg1;
+ (id)usrFilePathWithAppID:(id)arg1 subPath:(id)arg2;
+ (_Bool)ak_isSymlink:(id)arg1;
+ (id)filePathWithAppID:(id)arg1 localID:(id)arg2;
+ (id)storeLocalIDWithMD5:(id)arg1 fileType:(id)arg2;
+ (id)storeFileDirWithAppID:(id)arg1;
+ (id)tempFileDirWithAppID:(id)arg1;
+ (id)tempDirName;
+ (id)cacheSandboxRootDir;
+ (_Bool)generateStoreLocalID:(id *)arg1 path:(id *)arg2 withAppID:(id)arg3 fileType:(id)arg4;
+ (_Bool)generateTempLocalID:(id *)arg1 path:(id *)arg2 withAppID:(id)arg3 fileType:(id)arg4;
+ (id)fileSchema;

@end

