//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "NSCoding-Protocol.h"

@class NSString, WCCanvasComponentButtonInfo, WCCanvasComponentTextAreaInfo;

@interface WCCanvasComponentStreamVideoInfo : MMObject <NSCoding>
{
    _Bool _allowVoice;
    int _displayType;
    NSString *_streamVideoUrl;
    NSString *_previewImageUrl;
    WCCanvasComponentTextAreaInfo *_textOnVideo;
    WCCanvasComponentButtonInfo *_buttonOnVideo;
    double _streamDisplayWidth;
    double _streamDisplayHeight;
}

@property(nonatomic) _Bool allowVoice; // @synthesize allowVoice=_allowVoice;
@property(nonatomic) double streamDisplayHeight; // @synthesize streamDisplayHeight=_streamDisplayHeight;
@property(nonatomic) double streamDisplayWidth; // @synthesize streamDisplayWidth=_streamDisplayWidth;
@property(nonatomic) int displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) WCCanvasComponentButtonInfo *buttonOnVideo; // @synthesize buttonOnVideo=_buttonOnVideo;
@property(retain, nonatomic) WCCanvasComponentTextAreaInfo *textOnVideo; // @synthesize textOnVideo=_textOnVideo;
@property(retain, nonatomic) NSString *previewImageUrl; // @synthesize previewImageUrl=_previewImageUrl;
@property(retain, nonatomic) NSString *streamVideoUrl; // @synthesize streamVideoUrl=_streamVideoUrl;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

