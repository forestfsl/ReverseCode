//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UUIDInfo;

@interface WCUpdateInfo : NSObject
{
    unsigned int NewClientVersion;
    unsigned int _LogLevel;
    UUIDInfo *uuidInfo;
    NSString *minIOSVersion;
    NSString *maxIOSVersion;
}

@property(nonatomic) unsigned int LogLevel; // @synthesize LogLevel=_LogLevel;
@property(retain, nonatomic) NSString *maxIOSVersion; // @synthesize maxIOSVersion;
@property(retain, nonatomic) NSString *minIOSVersion; // @synthesize minIOSVersion;
@property(nonatomic) unsigned int NewClientVersion; // @synthesize NewClientVersion;
@property(retain, nonatomic) UUIDInfo *uuidInfo; // @synthesize uuidInfo;
- (void).cxx_destruct;

@end

