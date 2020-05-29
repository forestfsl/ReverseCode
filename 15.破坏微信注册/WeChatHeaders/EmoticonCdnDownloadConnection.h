//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EmoticonDownloadProxy.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class EmojiInfoObj, NSString;

@interface EmoticonCdnDownloadConnection : EmoticonDownloadProxy <PBMessageObserverDelegate>
{
    _Bool m_isActive;
    _Bool m_hasStartRequest;
    int _downloadType;
    int _m_decryptResult;
    EmojiInfoObj *_emojiInfoObj;
    NSString *_m_nsRequestUrl;
}

+ (void)keyReportDownloadExternUrl;
+ (void)keyReportDownloadTpUrl;
+ (void)keyReportDecryptFailedWithType:(int)arg1;
+ (void)keyReportDecryptOkWithType:(int)arg1;
+ (void)keyReportDownloadEncryptUrl;
+ (void)keyReportVerifyFailedWithType:(int)arg1;
+ (void)keyReportVerifyOkWithType:(int)arg1;
+ (void)keyReportDownloadFailed;
+ (void)keyReportDownloadOK;
+ (void)keyReportDownloadFromCDN;
+ (id)AESDecryptWithKeyString:(id)arg1 andData:(id)arg2;
@property(retain, nonatomic) NSString *m_nsRequestUrl; // @synthesize m_nsRequestUrl=_m_nsRequestUrl;
@property(nonatomic) int m_decryptResult; // @synthesize m_decryptResult=_m_decryptResult;
@property(nonatomic) int downloadType; // @synthesize downloadType=_downloadType;
@property(retain, nonatomic) EmojiInfoObj *emojiInfoObj; // @synthesize emojiInfoObj=_emojiInfoObj;
@property(nonatomic) _Bool m_hasStartRequest; // @synthesize m_hasStartRequest;
@property(nonatomic) _Bool m_isActive; // @synthesize m_isActive;
- (void).cxx_destruct;
- (void)kvReportDownloadFailed;
- (void)kvReportDownloadOKAndVerifyFailed;
- (void)kvReportDownloadAndVerifyOK;
- (void)reveicePartFromURL:(id)arg1;
- (void)onReveicePartFromURL:(id)arg1;
- (void)callOkDelegateWithFilePath:(id)arg1;
- (void)callFailedDelegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startRequest;
- (_Bool)isActive;
- (id)initWithEmojiInfoObj:(id)arg1;
- (void)dealloc;

@end

