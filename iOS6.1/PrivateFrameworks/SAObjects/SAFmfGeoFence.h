/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/SADomainObject.h>

@class NSString, SALocation, SAPersonAttribute;

@interface SAFmfGeoFence : SADomainObject
{
}

+ (id)geoFenceWithDictionary:(id)arg1 context:(id)arg2;
+ (id)geoFence;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
@property(retain, nonatomic) SALocation *location;
@property(copy, nonatomic) NSString *geoFenceTrigger;
@property(retain, nonatomic) SAPersonAttribute *friend;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
