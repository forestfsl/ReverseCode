//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface WCCanvasComponentTextAreaInfo : MMObject <NSCoding>
{
    unsigned int _showType;
    unsigned int _textAlignmentType;
    unsigned int _fontSize;
    unsigned int _maxLines;
    int _fontType;
    NSString *_content;
    NSString *_fontColorStr;
    double _lineSpace;
}

@property(nonatomic) double lineSpace; // @synthesize lineSpace=_lineSpace;
@property(nonatomic) int fontType; // @synthesize fontType=_fontType;
@property(retain, nonatomic) NSString *fontColorStr; // @synthesize fontColorStr=_fontColorStr;
@property(nonatomic) unsigned int maxLines; // @synthesize maxLines=_maxLines;
@property(nonatomic) unsigned int fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) unsigned int textAlignmentType; // @synthesize textAlignmentType=_textAlignmentType;
@property(nonatomic) unsigned int showType; // @synthesize showType=_showType;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

