//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVAudioSession, CXAction, CXAnswerCallAction, CXEndCallAction, CXPlayDTMFCallAction, CXProvider, CXSetGroupCallAction, CXSetHeldCallAction, CXSetMutedCallAction, CXStartCallAction, CXTransaction;

@protocol CXProviderDelegate <NSObject>
- (void)providerDidReset:(CXProvider *)arg1;

@optional
- (void)provider:(CXProvider *)arg1 didDeactivateAudioSession:(AVAudioSession *)arg2;
- (void)provider:(CXProvider *)arg1 didActivateAudioSession:(AVAudioSession *)arg2;
- (void)provider:(CXProvider *)arg1 timedOutPerformingAction:(CXAction *)arg2;
- (void)provider:(CXProvider *)arg1 performPlayDTMFCallAction:(CXPlayDTMFCallAction *)arg2;
- (void)provider:(CXProvider *)arg1 performSetGroupCallAction:(CXSetGroupCallAction *)arg2;
- (void)provider:(CXProvider *)arg1 performSetMutedCallAction:(CXSetMutedCallAction *)arg2;
- (void)provider:(CXProvider *)arg1 performSetHeldCallAction:(CXSetHeldCallAction *)arg2;
- (void)provider:(CXProvider *)arg1 performEndCallAction:(CXEndCallAction *)arg2;
- (void)provider:(CXProvider *)arg1 performAnswerCallAction:(CXAnswerCallAction *)arg2;
- (void)provider:(CXProvider *)arg1 performStartCallAction:(CXStartCallAction *)arg2;
- (_Bool)provider:(CXProvider *)arg1 executeTransaction:(CXTransaction *)arg2;
- (void)providerDidBegin:(CXProvider *)arg1;
@end

