/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBSimplePreferenceFileLogger.h"

@interface SBIconLogger : SBSimplePreferenceFileLogger
{
}

+ (_Bool)isIconLoggingEnabled;
- (void)reloadFromDefaults;
- (id)consoleFormat:(id)arg1 withArguments:(struct __va_list_tag [1])arg2;
- (id)logPreferenceName;
- (int)maxLogCount;
- (id)name;

@end

