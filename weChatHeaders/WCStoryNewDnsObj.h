//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface WCStoryNewDnsObj : NSObject
{
    _Bool _bUseDCIP;
    unsigned int _lastNewDNSTime;
    NSString *_host;
    NSArray *_iplist;
}

@property(nonatomic) unsigned int lastNewDNSTime; // @synthesize lastNewDNSTime=_lastNewDNSTime;
@property(nonatomic) _Bool bUseDCIP; // @synthesize bUseDCIP=_bUseDCIP;
@property(retain, nonatomic) NSArray *iplist; // @synthesize iplist=_iplist;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (void)doNewDns;
- (_Bool)isNeedUpdateIpList;

@end

