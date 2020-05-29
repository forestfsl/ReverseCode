//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSArray, NSString;

@interface TopRecommendBannerData : MMObject <PBCoding>
{
    unsigned int type;
    NSString *title;
    NSString *jumpUrl;
    NSString *backgroundPicUrl;
    NSArray *gameList;
    NSString *allExternInfo;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *allExternInfo; // @synthesize allExternInfo;
@property(nonatomic) unsigned int type; // @synthesize type;
@property(retain, nonatomic) NSArray *gameList; // @synthesize gameList;
@property(retain, nonatomic) NSString *backgroundPicUrl; // @synthesize backgroundPicUrl;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;
- (void)parse:(id)arg1;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

