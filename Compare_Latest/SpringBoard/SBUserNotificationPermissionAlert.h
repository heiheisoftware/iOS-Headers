//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertItem.h"

@class SBUserNotificationPermissionController, UIUserNotificationSettings;

@interface SBUserNotificationPermissionAlert : SBAlertItem
{
    SBUserNotificationPermissionController *_controller;
    UIUserNotificationSettings *_settings;
    _Bool _shouldCallback;
}

- (void)didDeactivateForReason:(int)arg1;
- (_Bool)shouldShowInLockScreen;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (id)initWithPermissionsController:(id)arg1 userNotificationSettings:(id)arg2 makeAppDelegateCallback:(_Bool)arg3;

@end

