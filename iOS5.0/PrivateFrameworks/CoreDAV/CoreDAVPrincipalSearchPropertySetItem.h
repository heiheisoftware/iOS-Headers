/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVPrincipalSearchPropertySetItem : CoreDAVItem
{
    NSMutableSet *_principalSearchProperties;
}

@property(retain) NSMutableSet *principalSearchProperties; // @synthesize principalSearchProperties=_principalSearchProperties;
- (void)addPrincipalSearchProperty:(id)arg1;
- (id)copyParseRules;
- (id)description;
- (void)dealloc;
- (id)init;

@end

