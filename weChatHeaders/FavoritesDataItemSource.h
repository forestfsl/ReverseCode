//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FavoritesDataItemSource : NSObject
{
    int _sourceType;
    NSString *_sourceId;
    NSString *_fromUsr;
    NSString *_toUsr;
    NSString *_realChatName;
    unsigned int _srcCreateTime;
    long long _msg64Id;
    NSString *_eventId;
    NSString *_appId;
    NSString *_brandId;
    NSString *_link;
    NSString *_fromUsrDesc;
}

@property(retain, nonatomic) NSString *fromUsrDesc; // @synthesize fromUsrDesc=_fromUsrDesc;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *brandId; // @synthesize brandId=_brandId;
@property(nonatomic) unsigned int srcCreateTime; // @synthesize srcCreateTime=_srcCreateTime;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(nonatomic) long long msg64Id; // @synthesize msg64Id=_msg64Id;
@property(retain, nonatomic) NSString *realChatName; // @synthesize realChatName=_realChatName;
@property(retain, nonatomic) NSString *toUsr; // @synthesize toUsr=_toUsr;
@property(retain, nonatomic) NSString *fromUsr; // @synthesize fromUsr=_fromUsr;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(nonatomic) int sourceType; // @synthesize sourceType=_sourceType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

