//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMessageWrap;

@protocol VoiceTranslateMsgMgrExt <NSObject>
- (void)OnVoiceTranslateFail:(CMessageWrap *)arg1;
- (void)OnVoiceTranslateSuccess:(CMessageWrap *)arg1;
- (void)OnVoiceTranslateResultChange:(CMessageWrap *)arg1;
- (void)OnVoiceTranslateBegin:(CMessageWrap *)arg1;
@end
