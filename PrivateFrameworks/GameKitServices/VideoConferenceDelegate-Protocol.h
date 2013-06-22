/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol VideoConferenceDelegate
- (void)videoConference:(id)arg1 didStartSession:(BOOL)arg2 withCallID:(unsigned long)arg3 error:(id)arg4;

@optional
- (void)videoConference:(id)arg1 didChangeLocalVariablesForCallID:(unsigned long)arg2;
- (void)videoConference:(id)arg1 didReceiveARPLData:(id)arg2 fromCallID:(unsigned long)arg3;
- (void)videoConference:(id)arg1 sendIPChangeRequest:(id)arg2 withCallID:(unsigned long)arg3;
- (void)videoConference:(id)arg1 withCallID:(unsigned long)arg2 networkHint:(BOOL)arg3;
- (void)videoConference:(id)arg1 videoQualityNotificationForCallID:(unsigned long)arg2 isDegraded:(BOOL)arg3 isRemote:(BOOL)arg4;
- (void)videoConference:(id)arg1 cancelRelayRequest:(unsigned long)arg2 requestDict:(id)arg3;
- (void)videoConference:(id)arg1 sendRelayUpdate:(unsigned long)arg2 updateDict:(id)arg3;
- (void)videoConference:(id)arg1 inititiateRelayRequest:(unsigned long)arg2 requestDict:(id)arg3;
- (void)videoConference:(id)arg1 updateOutputMeterLevel:(float)arg2;
- (void)videoConference:(id)arg1 updateInputMeterLevel:(float)arg2;
- (void)videoConference:(id)arg1 didRemoteScreenAttributesChange:(id)arg2 forCallID:(unsigned long)arg3;
- (void)videoConference:(id)arg1 remoteVideoPaused:(BOOL)arg2 callID:(unsigned long)arg3;
- (void)videoConference:(id)arg1 remoteAudioPaused:(BOOL)arg2 callID:(unsigned long)arg3;
- (void)videoConference:(id)arg1 didRemoteVideoAttributesChange:(id)arg2 forCallID:(unsigned long)arg3;
- (void)videoConference:(id)arg1 didReceiveFirstRemoteFrameForCallID:(unsigned long)arg2;
- (void)videoConference:(id)arg1 remoteMediaStalled:(BOOL)arg2 callID:(unsigned long)arg3;
- (void)videoConference:(id)arg1 receivedNoRemotePacketsForTime:(double)arg2 callID:(unsigned long)arg3;
- (void)videoConference:(id)arg1 didStartSession:(BOOL)arg2 withCallID:(unsigned long)arg3 withUserInfo:(id)arg4 error:(id)arg5;
- (void)videoConference:(id)arg1 didStopWithCallID:(unsigned long)arg2 error:(id)arg3 callMetadata:(id)arg4;
- (void)videoConference:(id)arg1 didStopWithCallID:(unsigned long)arg2 error:(id)arg3;
@end
