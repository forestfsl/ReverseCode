//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WAPopOverTaskBarViewDelegate.h"

@class MMUIViewController, NSMutableArray, NSString, WAPopOverView;

@interface WAPopOverTaskBarlogic : MMObject <WAPopOverTaskBarViewDelegate>
{
    unsigned int _currentDebugMode;
    NSMutableArray *_arrTaskItem;
    MMUIViewController *_containerVC;
    WAPopOverView *_popOverView;
    NSString *_currentUsername;
}

@property(nonatomic) unsigned int currentDebugMode; // @synthesize currentDebugMode=_currentDebugMode;
@property(copy, nonatomic) NSString *currentUsername; // @synthesize currentUsername=_currentUsername;
@property(nonatomic) __weak WAPopOverView *popOverView; // @synthesize popOverView=_popOverView;
@property(nonatomic) __weak MMUIViewController *containerVC; // @synthesize containerVC=_containerVC;
@property(retain, nonatomic) NSMutableArray *arrTaskItem; // @synthesize arrTaskItem=_arrTaskItem;
- (void).cxx_destruct;
- (void)taskBarViewDidBackToChat:(id)arg1;
- (void)taskBarView:(id)arg1 didSelectTaskItem:(id)arg2;
- (_Bool)isShouldShowTaskBarView;
- (id)taskItemAtRowIndex:(long long)arg1;
- (void)loadTaskItemListWithCount:(unsigned int)arg1;
- (void)reloadTaskItems;
- (void)initData;
- (id)initWithUsername:(id)arg1 debugMode:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

