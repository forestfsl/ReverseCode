//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, NSMutableArray, NSString;

@interface StoryCommentTimelineResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int commentCount; // @dynamic commentCount;
@property(retain, nonatomic) NSMutableArray *commentList; // @dynamic commentList;
@property(retain, nonatomic) NSString *commentsMd5; // @dynamic commentsMd5;

@end

