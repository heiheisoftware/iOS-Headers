//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol TSTResolverContainerNameProvider <NSObject>
- (NSArray *)resolversMatchingPrefix:(NSString *)arg1;
- (id <TSCEReferenceResolving>)resolverMatchingName:(NSString *)arg1 contextContainerName:(NSString *)arg2;
- (id <TSCEReferenceResolving>)resolverMatchingName:(NSString *)arg1 contextResolver:(id <TSCEReferenceResolving>)arg2;
- (NSArray *)resolverContainerNamesMatchingPrefix:(NSString *)arg1;
- (id <TSCEResolverContainer>)resolverContainerForName:(NSString *)arg1 caseSensitive:(BOOL)arg2;
- (NSString *)nameForResolverContainer:(id <TSCEResolverContainer>)arg1;
- (NSString *)resolverContainerNameForResolver:(id <TSCEReferenceResolving>)arg1;
@end

