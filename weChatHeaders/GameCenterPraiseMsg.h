//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GameCenterOldBaseMsg.h"

@class NSString;

@interface GameCenterPraiseMsg : GameCenterOldBaseMsg
{
    NSString *_praiseContent;
    NSString *_rankDesc;
    NSString *_rankIconUrl;
    NSString *_rankJumpUrl;
}

@property(retain, nonatomic) NSString *rankJumpUrl; // @synthesize rankJumpUrl=_rankJumpUrl;
@property(retain, nonatomic) NSString *rankIconUrl; // @synthesize rankIconUrl=_rankIconUrl;
@property(retain, nonatomic) NSString *rankDesc; // @synthesize rankDesc=_rankDesc;
@property(retain, nonatomic) NSString *praiseContent; // @synthesize praiseContent=_praiseContent;
- (void).cxx_destruct;
- (id)getMsgCenterContent;
- (id)initWithXmlNode:(struct XmlReaderNode_t *)arg1;

@end

