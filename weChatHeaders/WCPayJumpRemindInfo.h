//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WCPayRedirectUrlInfo;

@interface WCPayJumpRemindInfo : NSObject
{
    _Bool _is_pop_up_windows;
    long long _jump_type;
    NSString *_wording;
    NSString *_title;
    NSString *_left_button_wording;
    NSString *_right_button_wording;
    WCPayRedirectUrlInfo *_url;
}

+ (id)genFromJumpRemindInfo:(id)arg1;
+ (id)GenFromDictionary:(id)arg1;
@property(retain, nonatomic) WCPayRedirectUrlInfo *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *right_button_wording; // @synthesize right_button_wording=_right_button_wording;
@property(retain, nonatomic) NSString *left_button_wording; // @synthesize left_button_wording=_left_button_wording;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(nonatomic) _Bool is_pop_up_windows; // @synthesize is_pop_up_windows=_is_pop_up_windows;
@property(nonatomic) long long jump_type; // @synthesize jump_type=_jump_type;
- (void).cxx_destruct;
- (void)genFromDic:(id)arg1;

@end

