//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface TBOrderedSafeDictionary : NSObject
{
    NSMutableArray *_pairs;
}

@property(retain, nonatomic) NSMutableArray *pairs; // @synthesize pairs=_pairs;
- (void).cxx_destruct;
- (id)init;
- (_Bool)containsKey:(id)arg1;
- (void)removeAllObjects;
- (id)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
@property(readonly, copy) NSArray *allKeys;
@property(readonly, copy) NSArray *allValues;
- (id)pairForKey:(id)arg1;
- (id)constructPairWithKey:(id)arg1 value:(id)arg2;

@end
