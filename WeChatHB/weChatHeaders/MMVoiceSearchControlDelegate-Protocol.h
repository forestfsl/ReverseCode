//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol MMVoiceSearchControlDelegate <NSObject>
- (_Bool)hasVoiceSearchResultForQuery:(NSString *)arg1;
- (void)onMMVoiceSearchFinishResult:(NSString *)arg1 forVoiceId:(unsigned long long)arg2;
- (void)onMMVoiceSearchCancel;
- (void)onMMVoiceSearchUpdateResult:(NSString *)arg1;
- (void)onMMVoiceSearchBegin;
@end
