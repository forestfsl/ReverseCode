//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MMMediaServiceMgr : NSObject
{
    struct MediaSdkMgr *mediaSdk;
    NSMutableDictionary *mNotifys;
    struct recursive_mutex mMutex;
}

+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)editForNativeView:(id)arg1 controller:(id)arg2 dic:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)editForMediaSdk:(id)arg1 dic:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)openVideoEditor:(id)arg1 controller:(id)arg2 dic:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)removeMediaTrack:(id)arg1 dic:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)updateMediaTrack:(id)arg1 dic:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)createMediaTrack:(id)arg1 dic:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)getMediaTrack:(id)arg1 dic:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)removeMediaContainer:(id)arg1 dic:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)exportMediaContainer:(id)arg1 dic:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)createMediaContainer:(id)arg1 dic:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)removeRecorderContainer:(unsigned int)arg1 callback:(CDUnknownBlockType)arg2;
- (void)abort:(id)arg1 containerId:(unsigned int)arg2 callback:(CDUnknownBlockType)arg3;
- (void)stop:(id)arg1 containerId:(unsigned int)arg2 callback:(CDUnknownBlockType)arg3;
- (void)switchGround:(id)arg1 containerId:(unsigned int)arg2 background:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;
- (void)resume:(id)arg1 containerId:(unsigned int)arg2 callback:(CDUnknownBlockType)arg3;
- (void)pause:(id)arg1 containerId:(unsigned int)arg2 callback:(CDUnknownBlockType)arg3;
- (void)writeAudio:(unsigned int)arg1 data:(char *)arg2 size:(unsigned int)arg3 format:(int)arg4 channel:(int)arg5 samplerate:(int)arg6 cts:(unsigned long long)arg7;
- (void)writeVideo:(unsigned int)arg1 data:(char *)arg2 size:(unsigned int)arg3 format:(int)arg4 width:(unsigned int)arg5 height:(unsigned int)arg6 bitsPerComponent:(unsigned int)arg7 bytesPerRow:(unsigned int)arg8 bitmapInfo:(unsigned int)arg9 cts:(unsigned long long)arg10;
- (void)start:(id)arg1 containerId:(unsigned int)arg2 dic:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)createRecorderContainer:(CDUnknownBlockType)arg1;
- (void)delNotifyCallback:(unsigned int)arg1;
- (void)addNotifyCallback:(unsigned int)arg1 callback:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end
