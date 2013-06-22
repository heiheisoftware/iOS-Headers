/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ToneLibrary/TLVibratorController.h>

@class NSDictionary;

@interface TLVibratorAsynchronousController : TLVibratorController
{
    struct dispatch_queue_s *_avControllerAccessQueue;
    NSDictionary *_vibrationPattern;
    int _nextIterationScheduledStatus;
}

@property(retain, setter=_setVibrationPattern:) NSDictionary *_vibrationPattern; // @synthesize _vibrationPattern;
- (void)_processNextIteration;
- (void)_scheduleNextIterationIfNeeded;
- (void)turnOff;
- (void)turnOnWithVibrationPattern:(id)arg1;
- (void)uninterruptAVControllerIfAppropriate;
- (void)setAVController:(id)arg1;
- (id)avController;
- (void)dealloc;
- (id)initWithAVController:(id)arg1;

@end
