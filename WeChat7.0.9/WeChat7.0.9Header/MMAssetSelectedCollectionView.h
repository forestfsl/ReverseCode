//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class MMAssetInfo, NSIndexPath, NSMutableArray, NSMutableSet, NSString, UICollectionView, UICollectionViewFlowLayout;
@protocol MMAssetSelectedCollectionViewDelegate, MMImagePickerControlCenter;

@interface MMAssetSelectedCollectionView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    UICollectionViewFlowLayout *m_collectionLayout;
    UICollectionView *m_collectionView;
    UIView *m_snapedView;
    NSIndexPath *m_oldIndexPath;
    MMAssetInfo *m_selectedInfo;
    NSMutableSet *m_disableInfo;
    NSMutableArray *_previewInfos;
    id <MMImagePickerControlCenter> _controlCenter;
    id <MMAssetSelectedCollectionViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MMAssetSelectedCollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MMImagePickerControlCenter> controlCenter; // @synthesize controlCenter=_controlCenter;
@property(retain, nonatomic) NSMutableArray *previewInfos; // @synthesize previewInfos=_previewInfos;
- (void).cxx_destruct;
- (void)handlelongGesture:(id)arg1;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)configCollectionView;
- (_Bool)isDisableForAssetInfo:(id)arg1;
@property(readonly, nonatomic) MMAssetInfo *selectedInfo;
- (id)indexPathForAssetInfo:(id)arg1;
- (void)reloadView;
- (unsigned long long)indexForAssetInfoIgnoreDisables:(id)arg1;
- (void)toggleSelectAssetInfo:(id)arg1;
- (void)deleteItemAtIndex:(unsigned long long)arg1;
- (void)insertItemAtLast;
- (void)changeToAssetInfo:(id)arg1 animated:(_Bool)arg2 scrollPosition:(unsigned long long)arg3;
- (void)changeToAssetInfo:(id)arg1;
- (void)updateWidth:(double)arg1 showCount:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
