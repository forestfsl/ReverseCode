//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSData, NSString;

@interface MyWCStrangerMessage : NSObject <WCTTableCoding>
{
    _Bool isAutoIncrement;
    unsigned int _m_localId;
    unsigned int _m_type;
    unsigned int _m_source;
    unsigned int _m_createTime;
    long long lastInsertedRowID;
    NSString *_m_id;
    NSString *_m_fromUser;
    NSString *_m_fromNickname;
    NSString *_m_toUser;
    NSString *_m_toNickname;
    NSString *_m_content;
    NSData *_m_metaData;
}

+ (void)__wcdb_MyWCStrangerMessage_primary_43:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_metaData;
+ (void)__wcdb_MyWCStrangerMessage_synthesize_42:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_content;
+ (void)__wcdb_MyWCStrangerMessage_synthesize_41:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_toNickname;
+ (void)__wcdb_MyWCStrangerMessage_synthesize_40:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_toUser;
+ (void)__wcdb_MyWCStrangerMessage_synthesize_39:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_fromNickname;
+ (void)__wcdb_MyWCStrangerMessage_synthesize_38:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_fromUser;
+ (void)__wcdb_MyWCStrangerMessage_synthesize_37:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_id;
+ (void)__wcdb_MyWCStrangerMessage_synthesize_36:(struct WCTBinding *)arg1;
+ (void)__wcdb_MyWCStrangerMessage_default_35:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_createTime;
+ (void)__wcdb_MyWCStrangerMessage_synthesize_34:(struct WCTBinding *)arg1;
+ (void)__wcdb_MyWCStrangerMessage_default_33:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_source;
+ (void)__wcdb_MyWCStrangerMessage_synthesize_32:(struct WCTBinding *)arg1;
+ (void)__wcdb_MyWCStrangerMessage_default_31:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_type;
+ (void)__wcdb_MyWCStrangerMessage_synthesize_30:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_localId;
+ (void)__wcdb_MyWCStrangerMessage_synthesize_29:(struct WCTBinding *)arg1;
+ (CDUnknownBlockType)columnNamed;
+ (const struct All *)allResults;
+ (const struct WCTPropertyList *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(retain, nonatomic) NSData *m_metaData; // @synthesize m_metaData=_m_metaData;
@property(retain, nonatomic) NSString *m_content; // @synthesize m_content=_m_content;
@property(retain, nonatomic) NSString *m_toNickname; // @synthesize m_toNickname=_m_toNickname;
@property(retain, nonatomic) NSString *m_toUser; // @synthesize m_toUser=_m_toUser;
@property(retain, nonatomic) NSString *m_fromNickname; // @synthesize m_fromNickname=_m_fromNickname;
@property(retain, nonatomic) NSString *m_fromUser; // @synthesize m_fromUser=_m_fromUser;
@property(retain, nonatomic) NSString *m_id; // @synthesize m_id=_m_id;
@property(nonatomic) unsigned int m_createTime; // @synthesize m_createTime=_m_createTime;
@property(nonatomic) unsigned int m_source; // @synthesize m_source=_m_source;
@property(nonatomic) unsigned int m_type; // @synthesize m_type=_m_type;
@property(nonatomic) unsigned int m_localId; // @synthesize m_localId=_m_localId;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
- (void).cxx_destruct;

@end

