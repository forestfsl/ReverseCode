//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableArray;

@interface WCCrashReportInfoUtil : NSObject
{
    NSMutableArray *_binaryImages;
    NSDictionary *_systemInfo;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *systemInfo; // @synthesize systemInfo=_systemInfo;
@property(retain, nonatomic) NSMutableArray *binaryImages; // @synthesize binaryImages=_binaryImages;
- (void).cxx_destruct;
- (id)getSystemInfo;
- (id)getBinaryImages;
- (void)setupBinaryImages;
- (void)setupSystemInfo;
- (id)init;

@end

