//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITextFieldDelegate.h"

@class NSCharacterSet, NSMutableString, NSString;

@interface TenpayDelegate : NSObject <UITextFieldDelegate>
{
    NSMutableString *_inputText;
    NSString *_salt;
    NSString *_appendText;
    int _keyIndex;
    int _maxLen;
    id _returnTarget;
    SEL _returnCallback;
    id _changeTarget;
    SEL _changeCallback;
    _Bool bFormatBankCard;
    NSCharacterSet *_filterCharsSet;
}

@property(retain, nonatomic) NSCharacterSet *filterCharsSet; // @synthesize filterCharsSet=_filterCharsSet;
@property(nonatomic) _Bool bFormatBankCard; // @synthesize bFormatBankCard;
- (void)setDefaultValue:(id)arg1;
- (id)GetUnEncryptCode;
- (id)GetEncryptCode;
- (id)GetAsteriskString:(id)arg1;
- (_Bool)isAreaIDCardNum:(long long)arg1;
- (_Bool)isUserIDNum;
- (_Bool)isBankCardNum;
- (_Bool)isPhoneNum;
- (id)Get3DesEncryptData;
- (id)Get2048EncryptDataWithHash:(_Bool)arg1;
- (id)GetEncryptDataWithHash:(_Bool)arg1;
- (void)ClearInput;
- (void)SelectRsaKey:(int)arg1;
- (void)SetSalt:(id)arg1;
- (long long)GetInputInfo;
- (id)GetVersion;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidChanged:(id)arg1;
- (void)ResetInputText:(id)arg1;
- (long long)spaceCountAtFormatCursor:(long long)arg1;
- (long long)spaceCountAtSrcCursor:(long long)arg1;
- (id)EncodeCard:(id)arg1;
- (id)DecodeCardWithAppend:(id)arg1;
- (id)DecodeCard:(id)arg1;
- (void)AppendString:(id)arg1;
- (void)SetMaxInputLen:(int)arg1;
- (void)SetChange:(id)arg1 callback:(SEL)arg2;
- (void)SetReturn:(id)arg1 callback:(SEL)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

