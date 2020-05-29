//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIScreenEdgePanGestureRecognizer, UISearchBar, UISearchDisplayController, UIView;

@interface MMSearchPanGestureController : NSObject <UIGestureRecognizerDelegate>
{
    UISearchBar *_searchBar;
    UISearchDisplayController *_controller;
    UIView *_gestureView;
    double _touchBeginPosX;
    double _dragBeginPosX;
    UIView *_backCoverView;
    UIView *_edgeShadowView;
    double _searchBarPlaceLabelOriginLeftX;
    double _searchBarTextFieldOriginWidth;
    double _searchBarTextFieldExtentableMaxWidth;
    UIScreenEdgePanGestureRecognizer *_panGesture;
    _Bool _gestureEnabled;
    _Bool _isGesturing;
    id <MMSearchPanGestureControlDelegate> _delegate;
}

@property(nonatomic) __weak id <MMSearchPanGestureControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isGesturing; // @synthesize isGesturing=_isGesturing;
@property(nonatomic) _Bool gestureEnabled; // @synthesize gestureEnabled=_gestureEnabled;
- (void).cxx_destruct;
- (void)resetView:(_Bool)arg1;
- (void)validateDrag;
- (void)updateDragingFrame:(double)arg1 keepBarUI:(_Bool)arg2;
- (void)updateDragingFrame:(double)arg1;
- (void)handlePanGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)getBottomView;
- (double)getSearchBarBottomY;
- (void)removeCoverView;
- (void)setInteractionEnabled:(_Bool)arg1;
- (void)connectCoverView;
- (id)getSearchBarClearButton;
- (id)getSearchBarPlaceLabel;
- (id)getSearchContainerView;
- (void)bindGesture;
- (void)dealloc;
- (id)initWithSearchBar:(id)arg1 searchController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

