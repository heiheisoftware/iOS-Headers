/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSURLCache.h"

@class NSArray, NSLock, NSString;

@interface ISURLCacheGroup : NSURLCache
{
    NSArray *_caches;
    NSString *_clientIdentifier;
    NSLock *_lock;
}

+ (id)sharedInstance;
+ (void)setSharedInstance:(id)arg1;
@property(readonly) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (void)_reloadForNewCaches:(id)arg1;
- (id)_ntsCacheForRequest:(id)arg1;
- (id)_ntsCacheForPersistentIdentifier:(id)arg1;
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;
- (void)setMemoryCapacity:(unsigned int)arg1;
- (void)setDiskCapacity:(unsigned int)arg1;
- (void)removeCachedResponseForRequest:(id)arg1;
- (void)removeAllCachedResponses;
- (unsigned int)memoryCapacity;
- (unsigned int)diskCapacity;
- (unsigned int)currentMemoryUsage;
- (unsigned int)currentDiskUsage;
- (id)cachedResponseForRequest:(id)arg1;
- (void)setCachesFromPropertyList:(id)arg1;
- (void)saveMemoryCacheToDisk;
- (void)purgeMemoryCache;
- (void)dealloc;
- (id)initWithMemoryCapacity:(unsigned int)arg1 diskCapacity:(unsigned int)arg2 diskPath:(id)arg3;
- (id)initWithClientIdentifier:(id)arg1;
- (id)init;

@end
