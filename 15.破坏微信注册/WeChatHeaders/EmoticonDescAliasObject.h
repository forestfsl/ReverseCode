//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;

@interface EmoticonDescAliasObject : NSObject
{
    int _resultCacheVersion;
    NSSet *_descList;
    NSMutableSet *_resultCache;
}

@property(nonatomic) int resultCacheVersion; // @synthesize resultCacheVersion=_resultCacheVersion;
@property(retain, nonatomic) NSMutableSet *resultCache; // @synthesize resultCache=_resultCache;
@property(retain, nonatomic) NSSet *descList; // @synthesize descList=_descList;
- (void).cxx_destruct;

@end

