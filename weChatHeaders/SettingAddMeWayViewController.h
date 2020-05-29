//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

@class DelaySwitchSettingLogic, MMTableViewInfo;

@interface SettingAddMeWayViewController : MMUIViewController
{
    _Bool m_allowFindMeByPhoneSwitchOpen;
    _Bool m_allowFindMeByContactConfigSwitchOpen;
    _Bool m_bAllowFindByQQOpen;
    _Bool m_allowFindMeByGoogleSwitchOpen;
    _Bool m_addMeByGroupSwitchOpen;
    _Bool m_addMeByQRCodeSwitchOpen;
    _Bool m_addMeByCardSwitchOpen;
    MMTableViewInfo *m_tableViewInfo;
    unsigned int m_phoneSection;
    _Bool m_bIsShowPhoneSectionIndexAtFirst;
    DelaySwitchSettingLogic *m_delaySwitchLogic;
}

@property(nonatomic) _Bool m_bIsShowPhoneSectionIndexAtFirst; // @synthesize m_bIsShowPhoneSectionIndexAtFirst;
- (void).cxx_destruct;
- (void)removeCoverView;
- (void)hideCoverView;
- (void)startCoverAnimOnPhone;
- (void)allowAddMeByCardSwitchChanged:(id)arg1;
- (void)allowAddMeByQRCodeSwitchChanged:(id)arg1;
- (void)allowAddMeByGroupSwitchChanged:(id)arg1;
- (void)allowQQFriendFindMeSwitchChanged:(id)arg1;
- (void)allowFindMeByContactConfigSwitchChanged:(id)arg1;
- (void)allowFindMeByPhoneSwitchChanged:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)reloadTableData;
- (id)init;

@end

