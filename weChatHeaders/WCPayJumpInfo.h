//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCPayJumpInfo : NSObject
{
    unsigned int _type;
    NSString *_url;
    NSString *_username;
    NSString *_pagepath;
}

@property(retain) NSString *pagepath; // @synthesize pagepath=_pagepath;
@property(retain) NSString *username; // @synthesize username=_username;
@property(retain) NSString *url; // @synthesize url=_url;
@property unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

