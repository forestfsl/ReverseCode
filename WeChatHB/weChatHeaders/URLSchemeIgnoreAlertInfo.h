//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface URLSchemeIgnoreAlertInfo : MMObject <WCTTableCoding>
{
    unsigned int _updateTime;
    NSString *_appID;
    NSString *_urlScheme;
}

+ (void)__wcdb_URLSchemeIgnoreAlertInfo_primary_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)urlScheme;
+ (void)__wcdb_URLSchemeIgnoreAlertInfo_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)updateTime;
+ (void)__wcdb_URLSchemeIgnoreAlertInfo_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)appID;
+ (void)__wcdb_URLSchemeIgnoreAlertInfo_synthesize_0:(struct WCTBinding *)arg1;
+ (CDUnknownBlockType)columnNamed;
+ (const struct All *)allResults;
+ (const struct WCTPropertyList *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(retain, nonatomic) NSString *urlScheme; // @synthesize urlScheme=_urlScheme;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end
