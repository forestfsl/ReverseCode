//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface WAPackageConfig : NSObject
{
    _Bool _isABTestOpenModule;
    _Bool _isServerAllowUseModule;
    unsigned int _debugModeType;
    unsigned int _appVersion;
    unsigned int _debugFrom;
    unsigned int _debugDevKey;
    NSString *_appId;
    NSString *_userName;
    NSString *_packageMd5;
    NSString *_debugPackageUrl;
    NSString *_deviceOrientation;
    NSArray *_arrModuleList;
    NSString *_entranceModule;
    NSDictionary *_dicClientJsExtInfo;
}

+ (_Bool)isModuleInfoValid:(id)arg1;
@property(retain, nonatomic) NSDictionary *dicClientJsExtInfo; // @synthesize dicClientJsExtInfo=_dicClientJsExtInfo;
@property(retain, nonatomic) NSString *entranceModule; // @synthesize entranceModule=_entranceModule;
@property(retain, nonatomic) NSArray *arrModuleList; // @synthesize arrModuleList=_arrModuleList;
@property(nonatomic) _Bool isServerAllowUseModule; // @synthesize isServerAllowUseModule=_isServerAllowUseModule;
@property(nonatomic) _Bool isABTestOpenModule; // @synthesize isABTestOpenModule=_isABTestOpenModule;
@property(retain, nonatomic) NSString *deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
@property(nonatomic) unsigned int debugDevKey; // @synthesize debugDevKey=_debugDevKey;
@property(retain, nonatomic) NSString *debugPackageUrl; // @synthesize debugPackageUrl=_debugPackageUrl;
@property(nonatomic) unsigned int debugFrom; // @synthesize debugFrom=_debugFrom;
@property(retain, nonatomic) NSString *packageMd5; // @synthesize packageMd5=_packageMd5;
@property(nonatomic) unsigned int appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) unsigned int debugModeType; // @synthesize debugModeType=_debugModeType;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (id)entranceModuleName;
- (id)pathComponentsWithoutFileSeperator:(id)arg1;
- (_Bool)isPagePath:(id)arg1 matchModuleName:(id)arg2;
- (_Bool)isUnspecificedFileNameWithPagePath:(id)arg1;
- (id)validModuleNameFromPagePath:(id)arg1;
- (id)getModuleInfoWithName:(id)arg1;
- (_Bool)isWeAppUseModule;
- (id)description;
- (id)initWithDebugNotifyInfo:(id)arg1;
- (id)initWithContact:(id)arg1;

@end

