//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FaceRecogProcessor.h"

@class NSObject<OS_dispatch_queue>;

@interface FaceRecogReflectProcessor : FaceRecogProcessor
{
    NSObject<OS_dispatch_queue> *_detectQueue;
}

- (void).cxx_destruct;
- (void)processFrameUsingLiveDetector:(id)arg1;
- (id)initWithScene:(unsigned int)arg1;

@end

