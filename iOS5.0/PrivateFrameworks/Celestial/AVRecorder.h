/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface AVRecorder : NSObject
{
    struct AVRecorderPrivate *_priv;
}

- (id)init;
- (void)dealloc;
- (void)setFilePath:(id)arg1;
- (id)filePath;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (id)attributeForKey:(id)arg1;
- (void)implNotification:(id)arg1;
- (BOOL)activate:(id *)arg1;
- (BOOL)start;
- (void)stop;
- (BOOL)isRecording;
- (BOOL)isActive;
- (BOOL)takePhoto;
- (BOOL)autoFocusAtPoint:(struct CGPoint)arg1;
- (void)deactivate;
- (float)micVolume;
- (void)setMicVolume:(float)arg1;
- (long long)recordedFileSizeInBytes;
- (double)recordedDuration;
- (unsigned int)audioNumDeviceChannels;
- (BOOL)audioCurrentAverageVolumeLevels:(float *)arg1 andPeakVolumeLevels:(float *)arg2;
- (BOOL)audioCurrentAverageDecibelLevels:(float *)arg1 andPeakDecibelLevels:(float *)arg2;
- (void)makeError:(id *)arg1 withDescription:(id)arg2 code:(long)arg3;

@end
