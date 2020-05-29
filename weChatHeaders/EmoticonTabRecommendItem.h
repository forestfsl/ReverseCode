//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface EmoticonTabRecommendItem : NSObject <PBCoding>
{
    unsigned int m_buttonType;
    NSString *m_name;
    NSString *m_productId;
    NSString *m_iconUrl;
    NSString *m_bigIconUrl;
    NSString *m_recType;
    NSString *m_recWord;
}

+ (void)initialize;
@property(nonatomic) unsigned int m_buttonType; // @synthesize m_buttonType;
@property(retain, nonatomic) NSString *m_recWord; // @synthesize m_recWord;
@property(retain, nonatomic) NSString *m_recType; // @synthesize m_recType;
@property(retain, nonatomic) NSString *m_bigIconUrl; // @synthesize m_bigIconUrl;
@property(retain, nonatomic) NSString *m_iconUrl; // @synthesize m_iconUrl;
@property(retain, nonatomic) NSString *m_productId; // @synthesize m_productId;
@property(retain, nonatomic) NSString *m_name; // @synthesize m_name;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)updateFromItem:(id)arg1;
- (id)init;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

