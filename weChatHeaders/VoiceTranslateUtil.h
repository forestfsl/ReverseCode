//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VoiceTranslateUtil : NSObject
{
}

+ (id)getVoiceIDFromMsg:(id)arg1;
- (id)getTranslateString:(id)arg1;
- (_Bool)isLocalTransResultExist:(id)arg1;
- (id)pathForOriginVoice:(id)arg1;
- (id)pathForTranslateResult:(id)arg1;
- (id)getUserTranslateRootDir;
- (id)pathForSessionTransInfos:(id)arg1;
- (id)getTransInfoIDFromMsg:(id)arg1 PreView:(_Bool)arg2;
- (id)getTransSessionInfoWithChatName:(id)arg1;
- (void)asyncWriteSessionInfoToPBFile:(id)arg1;

@end

