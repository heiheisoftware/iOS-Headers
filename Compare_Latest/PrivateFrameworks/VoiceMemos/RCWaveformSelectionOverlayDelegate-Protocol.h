//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class RCWaveformSelectionOverlay;

@protocol RCWaveformSelectionOverlayDelegate <NSObject>
- (double)waveformSelectionOverlay:(RCWaveformSelectionOverlay *)arg1 timeForOffset:(float)arg2;
- (float)waveformSelectionOverlay:(RCWaveformSelectionOverlay *)arg1 offsetForTime:(double)arg2;
- (double)waveformSelectionOverlay:(RCWaveformSelectionOverlay *)arg1 willChangeAssetCurrentTime:(double)arg2 isTracking:(BOOL)arg3;
- (CDStruct_73a5d3ca)waveformSelectionOverlay:(RCWaveformSelectionOverlay *)arg1 willChangeSelectedTimeRange:(CDStruct_73a5d3ca)arg2 isTracking:(BOOL)arg3;
- (void)waveformSelectionOverlay:(RCWaveformSelectionOverlay *)arg1 didFinishTrackingSelectionBeginTime:(BOOL)arg2 endTime:(BOOL)arg3 assetCurrentTime:(BOOL)arg4;
- (void)waveformSelectionOverlay:(RCWaveformSelectionOverlay *)arg1 willBeginTrackingSelectionBeginTime:(BOOL)arg2 endTime:(BOOL)arg3 assetCurrentTime:(BOOL)arg4;
@end

