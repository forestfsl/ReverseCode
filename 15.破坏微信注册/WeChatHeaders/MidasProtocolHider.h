//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface MidasProtocolHider : NSObject
{
    NSMutableSet *_protocols;
    NSMutableDictionary *_selPairs;
}

+ (_Bool)isInstanceSelector:(SEL)arg1 belongsToProtocol:(id)arg2;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (void)replaceProtocol:(id)arg1 instanceSelector:(SEL)arg2 withInstanceSelector:(SEL)arg3;
- (void)registerProtocol:(id)arg1;

@end

