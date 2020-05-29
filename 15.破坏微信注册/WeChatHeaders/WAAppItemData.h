//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WAAppItemData : MMObject <WCTTableCoding>
{
    _Bool beStared;
    unsigned int appType;
    unsigned int updateTime;
    NSString *userName;
    double sortFactor;
}

+ (void)__wcdb_WAAppItemData_multi_primary_6:(struct WCTBinding *)arg1;
+ (void)__wcdb_WAAppItemData_multi_primary_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)sortFactor;
+ (void)__wcdb_WAAppItemData_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)beStared;
+ (void)__wcdb_WAAppItemData_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)updateTime;
+ (void)__wcdb_WAAppItemData_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)appType;
+ (void)__wcdb_WAAppItemData_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)userName;
+ (void)__wcdb_WAAppItemData_synthesize_0:(struct WCTBinding *)arg1;
+ (CDUnknownBlockType)columnNamed;
+ (const struct All *)allResults;
+ (const struct WCTPropertyList *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(nonatomic) double sortFactor; // @synthesize sortFactor;
@property(nonatomic) _Bool beStared; // @synthesize beStared;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime;
@property(nonatomic) unsigned int appType; // @synthesize appType;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
- (void).cxx_destruct;
- (id)appItemKey;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

