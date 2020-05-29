//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, UIColor;

@interface TemplateHeaderWrap : NSObject
{
    _Bool _hideTitleAndTime;
    _Bool _showIconAndDisplayName;
    _Bool _hideIconAndDisplayNameLine;
    _Bool _showComplaintButton;
    _Bool _objIsShowShortcutIcon;
    _Bool _hideTitle;
    _Bool _hideTime;
    _Bool _isIgnoreHideTitleAndTimeFlag;
    unsigned int _weappVersion;
    unsigned int _weappState;
    unsigned int _paymsgStyle;
    NSString *_title;
    UIColor *_titleColor;
    NSDate *_pubTime;
    NSString *_first;
    UIColor *_firstColor;
    NSString *_iconUrl;
    NSString *_displayName;
    NSString *_templateMsgId;
    NSString *_objShortcutIconURL;
    NSString *_objH5Url;
    NSString *_objWeAppUserName;
    NSString *_objWeAppPath;
}

@property(nonatomic) unsigned int paymsgStyle; // @synthesize paymsgStyle=_paymsgStyle;
@property(nonatomic) _Bool isIgnoreHideTitleAndTimeFlag; // @synthesize isIgnoreHideTitleAndTimeFlag=_isIgnoreHideTitleAndTimeFlag;
@property(nonatomic) _Bool hideTime; // @synthesize hideTime=_hideTime;
@property(nonatomic) _Bool hideTitle; // @synthesize hideTitle=_hideTitle;
@property(nonatomic) unsigned int weappState; // @synthesize weappState=_weappState;
@property(nonatomic) unsigned int weappVersion; // @synthesize weappVersion=_weappVersion;
@property(retain, nonatomic) NSString *objWeAppPath; // @synthesize objWeAppPath=_objWeAppPath;
@property(retain, nonatomic) NSString *objWeAppUserName; // @synthesize objWeAppUserName=_objWeAppUserName;
@property(retain, nonatomic) NSString *objH5Url; // @synthesize objH5Url=_objH5Url;
@property(retain, nonatomic) NSString *objShortcutIconURL; // @synthesize objShortcutIconURL=_objShortcutIconURL;
@property(nonatomic) _Bool objIsShowShortcutIcon; // @synthesize objIsShowShortcutIcon=_objIsShowShortcutIcon;
@property(retain, nonatomic) NSString *templateMsgId; // @synthesize templateMsgId=_templateMsgId;
@property(nonatomic) _Bool showComplaintButton; // @synthesize showComplaintButton=_showComplaintButton;
@property(nonatomic) _Bool hideIconAndDisplayNameLine; // @synthesize hideIconAndDisplayNameLine=_hideIconAndDisplayNameLine;
@property(nonatomic) _Bool showIconAndDisplayName; // @synthesize showIconAndDisplayName=_showIconAndDisplayName;
@property(nonatomic) _Bool hideTitleAndTime; // @synthesize hideTitleAndTime=_hideTitleAndTime;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) UIColor *firstColor; // @synthesize firstColor=_firstColor;
@property(retain, nonatomic) NSString *first; // @synthesize first=_first;
@property(retain, nonatomic) NSDate *pubTime; // @synthesize pubTime=_pubTime;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

