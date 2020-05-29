//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QMapView.h"

#import "QMapViewDelegate.h"
#import "QMapViewIndoorDelegate.h"
#import "WAMapAnnotationViewDelegate.h"

@class MMHeadImageAnnotation, NSMutableArray, NSString, UIImageView, WABaseView, WAMapViewGestureListener;

@interface WAMapView : QMapView <QMapViewDelegate, WAMapAnnotationViewDelegate, QMapViewIndoorDelegate>
{
    _Bool _isShowsUserLocation;
    _Bool _isBackground;
    unsigned int _mapId;
    id <WAMapViewDelegate> _mapDelegate;
    MMHeadImageAnnotation *_headAnnotation;
    NSMutableArray *_mapControls;
    WAMapViewGestureListener *_gestureListener;
    WABaseView *_firstBaseView;
    double _zoomLevelBeforeRegionChange;
    UIImageView *_snapshotImageView;
}

@property(retain, nonatomic) UIImageView *snapshotImageView; // @synthesize snapshotImageView=_snapshotImageView;
@property(nonatomic) _Bool isBackground; // @synthesize isBackground=_isBackground;
@property(nonatomic) _Bool isShowsUserLocation; // @synthesize isShowsUserLocation=_isShowsUserLocation;
@property(nonatomic) double zoomLevelBeforeRegionChange; // @synthesize zoomLevelBeforeRegionChange=_zoomLevelBeforeRegionChange;
@property(nonatomic) __weak WABaseView *firstBaseView; // @synthesize firstBaseView=_firstBaseView;
@property(retain, nonatomic) WAMapViewGestureListener *gestureListener; // @synthesize gestureListener=_gestureListener;
@property(retain, nonatomic) NSMutableArray *mapControls; // @synthesize mapControls=_mapControls;
@property(retain, nonatomic) MMHeadImageAnnotation *headAnnotation; // @synthesize headAnnotation=_headAnnotation;
@property(nonatomic) __weak id <WAMapViewDelegate> mapDelegate; // @synthesize mapDelegate=_mapDelegate;
@property(nonatomic) unsigned int mapId; // @synthesize mapId=_mapId;
- (void).cxx_destruct;
- (void)snapshotVideoEnd;
- (void)snapshotVideoBegin;
- (void)enterBackground:(_Bool)arg1;
- (void)setShowsUserLocation:(_Bool)arg1;
- (void)updateShowsUserLocation;
- (void)addSubview:(id)arg1;
- (void)onMapAnnotationViewTap:(id)arg1;
- (void)calloutClickAction:(id)arg1;
- (void)onControlClick:(id)arg1;
- (void)gestureAction:(id)arg1;
- (void)addMapImageControl:(id)arg1;
- (void)addMapButtonControl:(id)arg1;
- (void)clearControls;
- (id)getMapMarker:(long long)arg1;
- (void)mapView:(id)arg1 didChangeActiveLevel:(id)arg2;
- (void)mapView:(id)arg1 didChangeActiveBuilding:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (void)mapView:(id)arg1 didTapAtCoordinate:(struct CLLocationCoordinate2D)arg2;
- (void)mapView:(id)arg1 didTapPoi:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 fromHeading:(_Bool)arg3;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)mapView:(id)arg1 viewForOverlay:(id)arg2;
- (void)dealloc;
- (void)internalInit;
- (id)initWithFrame:(struct CGRect)arg1 config:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

