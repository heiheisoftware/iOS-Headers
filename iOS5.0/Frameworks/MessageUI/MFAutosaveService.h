/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MessageUI/MFDefaultService.h>

@interface MFAutosaveService : MFDefaultService
{
}

+ (id)backChannelCommandName;
+ (BOOL)hasAutosavedMessageWithIdentifier:(id)arg1;
+ (id)autosavedMessageWithIdentifier:(id)arg1 error:(id *)arg2;
+ (id)autosaveMessage:(id)arg1 withIdentifier:(id)arg2;
+ (void)removeAutosavedMessageWithIdentifier:(id)arg1;
- (void)_notifyClientDidFinishWithError:(id)arg1;

@end
